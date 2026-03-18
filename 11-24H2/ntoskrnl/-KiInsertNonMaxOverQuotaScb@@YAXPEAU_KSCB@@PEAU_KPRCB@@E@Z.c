/*
 * XREFs of ?KiInsertNonMaxOverQuotaScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@E@Z @ 0x14030E7C4
 * Callers:
 *     KiAddThreadToScbQueue @ 0x14030EA24 (KiAddThreadToScbQueue.c)
 * Callees:
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x14030D204 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x14030E824 (-KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 */

void __fastcall KiInsertNonMaxOverQuotaScb(struct _KSCB *a1, struct _KPRCB *a2, unsigned __int8 a3)
{
  unsigned __int16 PrcbLockFlags; // ax

  do
  {
    PrcbLockFlags = a1->PrcbLockFlags;
    if ( (PrcbLockFlags & 2) != 0 )
      break;
    if ( (PrcbLockFlags & 1) != 0 )
      KiResortScbQueue(a2, a1, 0);
    else
      KiInsertSchedulingGroupQueue(a2, a1, a3);
    a1 = a1->Parent;
  }
  while ( a1 );
}
