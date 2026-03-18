/*
 * XREFs of PerfInfoLogIpiReceive @ 0x1403FF2B0
 * Callers:
 *     KiIpiProcessRequests @ 0x1403FEB60 (KiIpiProcessRequests.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x1403B1020 (EtwTraceTimedEvent.c)
 */

int __fastcall PerfInfoLogIpiReceive(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+38h] [rbp-10h]

  v5 = a2;
  v4 = a3;
  return EtwTraceTimedEvent(3953, 0x40400000u, (__int64)&v4, 12, 0x500A02u, a1);
}
