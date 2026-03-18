/*
 * XREFs of HvlUpdatePerformanceStateCountersForLp @ 0x140445850
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140351B20 (PpmCheckSnapAllDeliveredPerformance.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x1403AE3F8 (HvlpHvToNtStatus.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     HvcallpNoHypervisorPresent @ 0x1404AD690 (HvcallpNoHypervisorPresent.c)
 *     EtwTraceHvHypercall @ 0x1404CDEEC (EtwTraceHvHypercall.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
    ((void (__fastcall *)(_OWORD *, __int64, __int64, _QWORD, __int64))EtwTraceHvHypercall)(v4, 238LL, v2, 0LL, 65774LL);
  }
  if ( v1 )
    return HvlpHvToNtStatus(v1);
  else
    return 0LL;
}
