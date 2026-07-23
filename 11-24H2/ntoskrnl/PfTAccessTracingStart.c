/*
 * XREFs of PfTAccessTracingStart @ 0x140B5D620
 * Callers:
 *     PfTStart @ 0x140744DFC (PfTStart.c)
 *     PfGetCompletedTrace @ 0x1408F64A0 (PfGetCompletedTrace.c)
 *     PfpPowerActionStartScenarioTracingCallback @ 0x140B5CF10 (PfpPowerActionStartScenarioTracingCallback.c)
 * Callees:
 *     FsRtlAcquirePushLockExclusive @ 0x1403B475C (FsRtlAcquirePushLockExclusive.c)
 *     MmGetDefaultPagePriority @ 0x140479730 (MmGetDefaultPagePriority.c)
 *     VmpReleasePushLockExclusive @ 0x1404816E0 (VmpReleasePushLockExclusive.c)
 *     PfpPartitionToParent @ 0x1404B7BB0 (PfpPartitionToParent.c)
 *     MmSetAccessLogging @ 0x1406849B8 (MmSetAccessLogging.c)
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
