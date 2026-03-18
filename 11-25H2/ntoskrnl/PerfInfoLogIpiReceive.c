/*
 * XREFs of PerfInfoLogIpiReceive @ 0x1403F6DB0
 * Callers:
 *     KiIpiProcessRequests @ 0x1403F6650 (KiIpiProcessRequests.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x140257700 (EtwTraceTimedEvent.c)
 */

int __fastcall PerfInfoLogIpiReceive(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+38h] [rbp-10h]

  v5 = a2;
  v4 = a3;
  return EtwTraceTimedEvent(0xF71u, 0x40400000u, (__int64)&v4, 12, 0x500A02u, a1);
}
