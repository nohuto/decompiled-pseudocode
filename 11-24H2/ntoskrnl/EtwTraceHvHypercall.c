/*
 * XREFs of EtwTraceHvHypercall @ 0x1404C72BC
 * Callers:
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlSendSyntheticClusterIpi @ 0x1403A4B40 (HvlSendSyntheticClusterIpi.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14043DA00 (HvlUpdatePerformanceStateCountersForLp.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x14039F830 (EtwTraceTimedEvent.c)
 */

int __fastcall EtwTraceHvHypercall(__int64 a1, int a2, char a3, char a4)
{
  int v5; // [rsp+30h] [rbp-18h] BYREF
  char v6; // [rsp+34h] [rbp-14h]
  char v7; // [rsp+35h] [rbp-13h]
  __int16 v8; // [rsp+36h] [rbp-12h]

  v8 = 0;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  return EtwTraceTimedEvent(3954, 0xA0000010, (__int64)&v5, 8, 0x500E02u, a1);
}
