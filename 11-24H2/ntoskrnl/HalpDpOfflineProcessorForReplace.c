/*
 * XREFs of HalpDpOfflineProcessorForReplace @ 0x140B51820
 * Callers:
 *     HalpDpReplaceTarget @ 0x140B51E80 (HalpDpReplaceTarget.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     KeSweepLocalCaches @ 0x140474990 (KeSweepLocalCaches.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpInterruptOfflineProcessor @ 0x14055FCC0 (HalpInterruptOfflineProcessor.c)
 *     KeSaveStateForHibernate @ 0x1406ABD10 (KeSaveStateForHibernate.c)
 *     HalpDpPostReplaceInitialization @ 0x140B51A3C (HalpDpPostReplaceInitialization.c)
 */

__int64 __fastcall HalpDpOfflineProcessorForReplace(__int64 a1)
{
  bool v2; // bp
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = HalpDisableInterrupts();
  CurrentIrql = KeGetCurrentIrql();
  v4 = 1472LL * KeGetPcr()->Prcb.Number;
  v6 = __rdtsc();
  KeSaveStateForHibernate(HalpHiberProcState + v4);
  if ( *(_DWORD *)(a1 + 56) < *(_DWORD *)a1 )
  {
    KeSweepLocalCaches();
    HalpInterruptOfflineProcessor((volatile signed __int32 *)(a1 + 56));
  }
  HalpDpPostReplaceInitialization(a1, &v6);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v2 )
    _enable();
  return result;
}
