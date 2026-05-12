/*
 * XREFs of RaUnitTransferIoCounterSetCallback @ 0x140008DE0
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitSendInstanceCounters @ 0x140008E78 (RaUnitSendInstanceCounters.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaUnitTransferIoCounterSetCallback(int a1, int a2)
{
  int v5; // [rsp+30h] [rbp-138h]
  int v6; // [rsp+38h] [rbp-130h]
  _BYTE v7[272]; // [rsp+40h] [rbp-128h] BYREF

  memset_0(v7, 0, 0x108uLL);
  v6 = 1;
  v5 = 1;
  return RaUnitSendInstanceCounters(
           a1,
           a2,
           (unsigned int)v7,
           264,
           (__int64)&StorpTelemetryGetUnitIoCounters,
           (__int64)SpPerfAddUnitWriteCounterSet,
           v5,
           v6);
}
