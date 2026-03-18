/*
 * XREFs of KeEnableCoreIsolationMitigationPolicyThread @ 0x1405BE118
 * Callers:
 *     PspApplyCoreIsolationPolicy @ 0x140766E28 (PspApplyCoreIsolationPolicy.c)
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1405BE298 (KiAdjustCoreIsolationReasonThread.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405BE5D0 (KiAdjustUserIsolationDomainThread.c)
 */

__int64 __fastcall KeEnableCoreIsolationMitigationPolicyThread(struct _KTHREAD *a1)
{
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  KiAdjustCoreIsolationReasonThread(a1);
  KiAdjustUserIsolationDomainThread(a1, *(_QWORD *)&a1->Process[4].ProcessLock, 0LL);
  KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v4, CurrentIrql);
  return 0LL;
}
