/*
 * XREFs of KeQueryEffectivePriorityThread @ 0x1404302D0
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404B4E30 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeQueryEffectivePriorityThread(ULONG_PTR a1)
{
  int v2; // esi
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v5; // rcx
  __int64 v6; // rax

  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
    KiUpdateVpBackingThreadPriorityOnPriorityQuery(a1);
  if ( *(char *)(a1 + 195) >= 16 || !*(_QWORD *)(a1 + 104) )
    return (unsigned int)*(char *)(a1 + 195);
  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
  {
    v6 = v5 + CurrentPrcb->ScbOffset;
    do
    {
      v2 = (*(unsigned __int16 *)(v6 + 112) >> 3) & 1;
      if ( v2 )
        break;
      v6 = *(_QWORD *)(v6 + 416);
    }
    while ( v6 );
  }
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( v2 )
    return 1LL;
  else
    return (unsigned int)*(char *)(a1 + 195);
}
