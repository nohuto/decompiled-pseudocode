/*
 * XREFs of NvmeControllerDeleteErrorRecoveryContext @ 0x1400ECAA0
 * Callers:
 *     NvmeAdapterDeleteNvmeController @ 0x1400E141C (NvmeAdapterDeleteNvmeController.c)
 *     NvmeAdapterCreateNvmeController @ 0x14019DFDC (NvmeAdapterCreateNvmeController.c)
 * Callees:
 *     NvmeControllerTerminateCommandTimeoutDetectThread @ 0x1400F5B04 (NvmeControllerTerminateCommandTimeoutDetectThread.c)
 */

void __fastcall NvmeControllerDeleteErrorRecoveryContext(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 1288);
  if ( v2 )
  {
    KeCancelTimer((PKTIMER)(*(_QWORD *)(v2 + 40) + 128LL));
    NvmeControllerTerminateCommandTimeoutDetectThread(a1);
    ExFreePoolWithTag(*(PVOID *)(a1 + 1288), 0x52436152u);
    *(_QWORD *)(a1 + 1288) = 0LL;
  }
}
