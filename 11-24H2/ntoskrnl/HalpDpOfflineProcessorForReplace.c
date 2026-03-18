/*
 * XREFs of HalpDpOfflineProcessorForReplace @ 0x140B4F7D0
 * Callers:
 *     HalpDpReplaceTarget @ 0x140B4FE30 (HalpDpReplaceTarget.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     KeSweepLocalCaches @ 0x140478F10 (KeSweepLocalCaches.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpInterruptOfflineProcessor @ 0x140562090 (HalpInterruptOfflineProcessor.c)
 *     KeSaveStateForHibernate @ 0x1406AAD70 (KeSaveStateForHibernate.c)
 *     HalpDpPostReplaceInitialization @ 0x140B4F9EC (HalpDpPostReplaceInitialization.c)
 */

__int64 __fastcall HalpDpOfflineProcessorForReplace(__int64 a1)
{
  bool v2; // bp
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = HalpDisableInterrupts();
  CurrentIrql = KeGetCurrentIrql();
  v4 = 1472LL * KeGetPcr()->Prcb.Number;
  v9 = __rdtsc();
  KeSaveStateForHibernate(HalpHiberProcState + v4);
  if ( *(_DWORD *)(a1 + 56) < *(_DWORD *)a1 )
  {
    KeSweepLocalCaches();
    HalpInterruptOfflineProcessor((volatile signed __int32 *)(a1 + 56), v5, v6, v7);
  }
  HalpDpPostReplaceInitialization(a1, &v9);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v2 )
    _enable();
  return result;
}
