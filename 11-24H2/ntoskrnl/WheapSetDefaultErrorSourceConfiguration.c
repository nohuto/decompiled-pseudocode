/*
 * XREFs of WheapSetDefaultErrorSourceConfiguration @ 0x140C46B84
 * Callers:
 *     WheaInitializeServices @ 0x140C467B0 (WheaInitializeServices.c)
 * Callees:
 *     <none>
 */

__int64 WheapSetDefaultErrorSourceConfiguration()
{
  __int64 result; // rax
  __int64 v1; // rcx

  result = 0LL;
  v1 = 19LL;
  do
  {
    *(_QWORD *)((char *)&WheapSourceConfiguration + result) = 0LL;
    *(_QWORD *)((char *)&WheapSourceConfigOverride + result) = 0LL;
    *(_QWORD *)((char *)&unk_140EEEF90 + result) = PdcCreateWatchdogAroundClientCall;
    *(_QWORD *)((char *)&unk_140EEEF98 + result) = xHalPciEarlyRestore;
    *(_QWORD *)((char *)&unk_140EEEFA0 + result) = WheapDefaultErrSrcCreateRecord;
    *(_QWORD *)((char *)&unk_140EEEFA8 + result) = PdcCreateWatchdogAroundClientCall;
    *(_QWORD *)((char *)&unk_140EEEFB0 + result) = xHalTimerWatchdogStop;
    *(_QWORD *)((char *)&unk_140EEEFB8 + result) = 0LL;
    *(_QWORD *)((char *)&unk_140EEF490 + result) = PdcCreateWatchdogAroundClientCall;
    *(_QWORD *)((char *)&unk_140EEF498 + result) = xHalPciEarlyRestore;
    *(_QWORD *)((char *)&unk_140EEF4A0 + result) = WheapDefaultErrSrcCreateRecord;
    *(_QWORD *)((char *)&unk_140EEF4A8 + result) = PdcCreateWatchdogAroundClientCall;
    *(_QWORD *)((char *)&unk_140EEF4B0 + result) = xHalTimerWatchdogStop;
    *(_QWORD *)((char *)&unk_140EEF4B8 + result) = 0LL;
    result += 64LL;
    --v1;
  }
  while ( v1 );
  WheapConfigTableLock = 0LL;
  return result;
}
