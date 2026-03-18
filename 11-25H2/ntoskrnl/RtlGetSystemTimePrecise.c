/*
 * XREFs of RtlGetSystemTimePrecise @ 0x14031AAC0
 * Callers:
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     KiProcessExpiredTimerList @ 0x1402EE890 (KiProcessExpiredTimerList.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x14031A990 (EtwGetKernelTraceTimestampSilo.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     HvcallFastExtended @ 0x14032C840 (HvcallFastExtended.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     KiIpiProcessRequests @ 0x1403F6650 (KiIpiProcessRequests.c)
 *     HalpSetVirtualRtc @ 0x14042DE60 (HalpSetVirtualRtc.c)
 *     WmiGetClock @ 0x1406435F0 (WmiGetClock.c)
 *     SshpSessionManagerSendControlEventSlimEtl @ 0x140A6DFC0 (SshpSessionManagerSendControlEventSlimEtl.c)
 *     PspInitPhase2 @ 0x140C23EA0 (PspInitPhase2.c)
 *     EtwpFixBootSystemTime @ 0x140C2BD48 (EtwpFixBootSystemTime.c)
 *     EtwpInitializeBootTimeStamps @ 0x140C2C458 (EtwpInitializeBootTimeStamps.c)
 *     EtwpTraceSystemInitialization @ 0x140C2C93C (EtwpTraceSystemInitialization.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 */

__int64 RtlGetSystemTimePrecise()
{
  __int64 i; // rbx
  __int64 v1; // rbp
  LARGE_INTEGER v2; // rsi
  unsigned __int64 v3; // r14
  char v4; // di
  LARGE_INTEGER PerformanceCounter; // rdx
  LONGLONG v6; // rdx

  while ( 1 )
  {
    for ( i = MEMORY[0xFFFFF78000000340]; (MEMORY[0xFFFFF78000000340] & 1) != 0; i = MEMORY[0xFFFFF78000000340] )
      _mm_pause();
    v1 = MEMORY[0xFFFFF78000000014];
    v2.QuadPart = MEMORY[0xFFFFF78000000348];
    v3 = MEMORY[0xFFFFF78000000358];
    v4 = MEMORY[0xFFFFF78000000368];
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( MEMORY[0xFFFFF78000000340] == i )
      break;
    _mm_pause();
  }
  if ( PerformanceCounter.QuadPart <= (unsigned __int64)v2.QuadPart )
    return v1;
  v6 = PerformanceCounter.QuadPart - v2.QuadPart - 1;
  if ( v4 )
    v6 <<= v4;
  return (((unsigned __int64)v6 * (unsigned __int128)v3) >> 64) + v1;
}
