/*
 * XREFs of PfTAccessTracingStart @ 0x140B5B5B0
 * Callers:
 *     PfTStart @ 0x140746B0C (PfTStart.c)
 *     PfGetCompletedTrace @ 0x140933980 (PfGetCompletedTrace.c)
 *     PfpPowerActionStartScenarioTracingCallback @ 0x140B5AEA0 (PfpPowerActionStartScenarioTracingCallback.c)
 * Callees:
 *     FsRtlAcquirePushLockExclusive @ 0x1403C5B9C (FsRtlAcquirePushLockExclusive.c)
 *     MmGetDefaultPagePriority @ 0x14047E830 (MmGetDefaultPagePriority.c)
 *     VmpReleasePushLockExclusive @ 0x1404860F0 (VmpReleasePushLockExclusive.c)
 *     PfpPartitionToParent @ 0x1404BCA40 (PfpPartitionToParent.c)
 *     MmSetAccessLogging @ 0x140683808 (MmSetAccessLogging.c)
 */

void __fastcall PfTAccessTracingStart(__int64 a1, int a2)
{
  int v4; // ebx
  bool v5; // zf
  _QWORD *v6; // rbx
  int DefaultPagePriority; // eax

  FsRtlAcquirePushLockExclusive((unsigned __int64 *)(a1 + 80));
  v4 = ~a2;
  v5 = (v4 & *(_DWORD *)(a1 + 76)) == 0;
  *(_DWORD *)(a1 + 76) &= v4;
  if ( v5 )
  {
    v6 = (_QWORD *)PfpPartitionToParent(a1);
    *(_DWORD *)(a1 + 760) = 256;
    DefaultPagePriority = MmGetDefaultPagePriority();
    MmSetAccessLogging(v6, 1, DefaultPagePriority);
    *(_BYTE *)(*(_QWORD *)(*v6 + 17600LL) + 55LL) = 1;
  }
  VmpReleasePushLockExclusive((volatile signed __int64 *)(a1 + 80));
}
