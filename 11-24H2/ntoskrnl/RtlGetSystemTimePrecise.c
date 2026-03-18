/*
 * XREFs of RtlGetSystemTimePrecise @ 0x14034EB80
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402552D0 (KiExecuteAllDpcs.c)
 *     KiProcessExpiredTimerList @ 0x1403358E0 (KiProcessExpiredTimerList.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x140350000 (EtwGetKernelTraceTimestampSilo.c)
 *     HvcallFastExtended @ 0x1403AF3C0 (HvcallFastExtended.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x1403B0AC4 (HvlpFastFlushAddressSpaceTb.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     KiIpiProcessRequests @ 0x1403FEB60 (KiIpiProcessRequests.c)
 *     HalpSetVirtualRtc @ 0x140425F30 (HalpSetVirtualRtc.c)
 *     WmiGetClock @ 0x14064F590 (WmiGetClock.c)
 *     SshpSessionManagerSendControlEventSlimEtl @ 0x140A701D0 (SshpSessionManagerSendControlEventSlimEtl.c)
 *     PspInitPhase2 @ 0x140C3516C (PspInitPhase2.c)
 *     EtwpFixBootSystemTime @ 0x140C3D028 (EtwpFixBootSystemTime.c)
 *     EtwpInitializeBootTimeStamps @ 0x140C3D738 (EtwpInitializeBootTimeStamps.c)
 *     EtwpTraceSystemInitialization @ 0x140C3DC1C (EtwpTraceSystemInitialization.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
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
