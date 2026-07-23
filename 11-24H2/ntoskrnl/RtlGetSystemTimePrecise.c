/*
 * XREFs of RtlGetSystemTimePrecise @ 0x14036D060
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 *     KiProcessExpiredTimerList @ 0x140315CC0 (KiProcessExpiredTimerList.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x14036E4E0 (EtwGetKernelTraceTimestampSilo.c)
 *     HvcallFastExtended @ 0x14039DBD0 (HvcallFastExtended.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x14039F2D4 (HvlpFastFlushAddressSpaceTb.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     KiIpiProcessRequests @ 0x1403F91B0 (KiIpiProcessRequests.c)
 *     HalpSetVirtualRtc @ 0x140419DE0 (HalpSetVirtualRtc.c)
 *     WmiGetClock @ 0x14064DC90 (WmiGetClock.c)
 *     SshpSessionManagerSendControlEventSlimEtl @ 0x140A69660 (SshpSessionManagerSendControlEventSlimEtl.c)
 *     PspInitPhase2 @ 0x140C372AC (PspInitPhase2.c)
 *     EtwpFixBootSystemTime @ 0x140C3F178 (EtwpFixBootSystemTime.c)
 *     EtwpInitializeBootTimeStamps @ 0x140C3F888 (EtwpInitializeBootTimeStamps.c)
 *     EtwpTraceSystemInitialization @ 0x140C3FD6C (EtwpTraceSystemInitialization.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER RtlGetSystemTimePrecise(void)
{
  __int64 i; // rbx
  LARGE_INTEGER v1; // rbp
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // r14
  char v4; // di
  LARGE_INTEGER PerformanceCounter; // rdx
  LONGLONG v6; // rdx
  LARGE_INTEGER result; // rax

  while ( 1 )
  {
    for ( i = MEMORY[0xFFFFF78000000340]; (MEMORY[0xFFFFF78000000340] & 1) != 0; i = MEMORY[0xFFFFF78000000340] )
      _mm_pause();
    v1.QuadPart = MEMORY[0xFFFFF78000000014];
    v2 = MEMORY[0xFFFFF78000000348];
    v3 = MEMORY[0xFFFFF78000000358];
    v4 = MEMORY[0xFFFFF78000000368];
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( MEMORY[0xFFFFF78000000340] == i )
      break;
    _mm_pause();
  }
  if ( PerformanceCounter.QuadPart <= v2 )
  {
    return v1;
  }
  else
  {
    v6 = PerformanceCounter.QuadPart - v2 - 1;
    if ( v4 )
      v6 <<= v4;
    result.QuadPart = (((unsigned __int64)v6 * (unsigned __int128)v3) >> 64) + v1.QuadPart;
  }
  return result;
}
