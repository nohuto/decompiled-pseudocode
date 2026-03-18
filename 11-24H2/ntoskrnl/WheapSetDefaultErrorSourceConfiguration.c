/*
 * XREFs of WheapSetDefaultErrorSourceConfiguration @ 0x140C44A34
 * Callers:
 *     WheaInitializeServices @ 0x140C44660 (WheaInitializeServices.c)
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
    *(_QWORD *)((char *)&unk_140EEED90 + result) = PdcCreateWatchdogAroundClientCall;
    *(_QWORD *)((char *)&unk_140EEED98 + result) = xHalPciEarlyRestore;
    *(_QWORD *)((char *)&unk_140EEEDA0 + result) = WheapDefaultErrSrcCreateRecord;
    *(_QWORD *)((char *)&unk_140EEEDA8 + result) = PdcCreateWatchdogAroundClientCall;
    *(_QWORD *)((char *)&unk_140EEEDB0 + result) = xHalTimerWatchdogStop;
    *(_QWORD *)((char *)&unk_140EEEDB8 + result) = 0LL;
    *(_QWORD *)((char *)&unk_140EEF280 + result) = PdcCreateWatchdogAroundClientCall;
    *(_QWORD *)((char *)&unk_140EEF288 + result) = xHalPciEarlyRestore;
    *(_QWORD *)((char *)&unk_140EEF290 + result) = WheapDefaultErrSrcCreateRecord;
    *(_QWORD *)((char *)&unk_140EEF298 + result) = PdcCreateWatchdogAroundClientCall;
    *(_QWORD *)((char *)&unk_140EEF2A0 + result) = xHalTimerWatchdogStop;
    *(_QWORD *)((char *)&unk_140EEF2A8 + result) = 0LL;
    result += 64LL;
    --v1;
  }
  while ( v1 );
  WheapConfigTableLock = 0LL;
  return result;
}
