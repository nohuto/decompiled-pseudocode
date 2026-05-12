/*
 * XREFs of RaUnitWriteIoCounterSetCallback @ 0x140008B80
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitSendInstanceCounters @ 0x140008E78 (RaUnitSendInstanceCounters.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaUnitWriteIoCounterSetCallback(int a1, int a2)
{
  int v5; // [rsp+38h] [rbp-130h]
  _BYTE v6[272]; // [rsp+40h] [rbp-128h] BYREF

  memset_0(v6, 0, 0x108uLL);
  v5 = 1;
  return RaUnitSendInstanceCounters(
           a1,
           a2,
           (unsigned int)v6,
           264,
           (__int64)&StorpTelemetryGetUnitIoCounters,
           (__int64)SpPerfAddUnitWriteCounterSet,
           0LL,
           v5);
}
