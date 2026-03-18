/*
 * XREFs of HalpDpOfflineProcessorForReplace @ 0x140B3F7D0
 * Callers:
 *     HalpDpReplaceTarget @ 0x140B3FE30 (HalpDpReplaceTarget.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     KeSweepLocalCaches @ 0x140478810 (KeSweepLocalCaches.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpInterruptOfflineProcessor @ 0x14055F790 (HalpInterruptOfflineProcessor.c)
 *     KeSaveStateForHibernate @ 0x14069FAA0 (KeSaveStateForHibernate.c)
 *     HalpDpPostReplaceInitialization @ 0x140B3F9EC (HalpDpPostReplaceInitialization.c)
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
