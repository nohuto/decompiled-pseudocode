/*
 * XREFs of ?KiInsertNonMaxOverQuotaScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@E@Z @ 0x1402D8810
 * Callers:
 *     KiAddThreadToScbQueue @ 0x1402D847C (KiAddThreadToScbQueue.c)
 * Callees:
 *     ?KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1402D8870 (-KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1402D9DF0 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
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
