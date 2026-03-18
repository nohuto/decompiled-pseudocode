/*
 * XREFs of HvlUpdatePerformanceStateCountersForLp @ 0x140448400
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1403AFD80 (PpmCheckSnapAllDeliveredPerformance.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x14026E418 (HvlpHvToNtStatus.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     HvcallpNoHypervisorPresent @ 0x1404AC0A0 (HvcallpNoHypervisorPresent.c)
 *     EtwTraceHvHypercall @ 0x1404CE10C (EtwTraceHvHypercall.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 HvlUpdatePerformanceStateCountersForLp()
{
  char v0; // di
  unsigned __int16 v1; // bx
  __int64 v2; // r8
  _OWORD v4[2]; // [rsp+28h] [rbp-30h] BYREF

  memset(v4, 0, sizeof(v4));
  if ( (BYTE4(xmmword_140FC5B10) & 0x10) != 0 )
  {
    v0 = 1;
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v4, 0xA0000010);
  }
  else
  {
    v0 = 0;
  }
  v1 = HvcallCodeVa();
  if ( v0 )
  {
    LOBYTE(v2) = 1;
    EtwTraceHvHypercall(v4, 238LL, v2);
  }
  if ( v1 )
    return HvlpHvToNtStatus(v1);
  else
    return 0LL;
}
