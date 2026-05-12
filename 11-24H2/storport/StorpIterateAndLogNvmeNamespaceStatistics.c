/*
 * XREFs of StorpIterateAndLogNvmeNamespaceStatistics @ 0x1400B08C0
 * Callers:
 *     StorpLogStatistics @ 0x14003FE88 (StorpLogStatistics.c)
 * Callees:
 *     StorpTelemetryNvmeSendNamespaceErrorDataSummary @ 0x1400B77DC (StorpTelemetryNvmeSendNamespaceErrorDataSummary.c)
 *     StorpTelemetryNvmeSendNamespacePerfData @ 0x1400B835C (StorpTelemetryNvmeSendNamespacePerfData.c)
 */

void __fastcall StorpIterateAndLogNvmeNamespaceStatistics(__int64 a1, char a2)
{
  _QWORD **v2; // r14
  _QWORD *v4; // rbx
  __int16 v5; // si
  __int16 v6; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (_QWORD **)(a1 + 640);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 632), &LockHandle);
  v4 = *v2;
  if ( *v2 != v2 )
  {
    v5 = a2 & 4;
    v6 = a2 & 0x10;
    do
    {
      if ( v5 )
        StorpTelemetryNvmeSendNamespacePerfData(v4 - 3);
      if ( v6 )
        StorpTelemetryNvmeSendNamespaceErrorDataSummary(v4 - 3);
      v4 = (_QWORD *)*v4;
    }
    while ( v4 != v2 );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
