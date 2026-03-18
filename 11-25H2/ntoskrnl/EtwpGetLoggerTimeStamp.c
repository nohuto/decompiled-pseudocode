/*
 * XREFs of EtwpGetLoggerTimeStamp @ 0x14031B820
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x14030C840 (EtwpReserveTraceBuffer.c)
 *     EtwpSwitchBuffer @ 0x1403E45C0 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1403E4930 (EtwpPrepareDirtyBuffer.c)
 *     EtwpLogContextSwapEvent @ 0x14042A060 (EtwpLogContextSwapEvent.c)
 *     EtwSendTraceBuffer @ 0x1406430F0 (EtwSendTraceBuffer.c)
 *     EtwpRelinquishCompressionTarget @ 0x14064564C (EtwpRelinquishCompressionTarget.c)
 *     EtwpRotateCompressionTarget @ 0x14064569C (EtwpRotateCompressionTarget.c)
 *     EtwpInitializeTimeStamp @ 0x140A38C3C (EtwpInitializeTimeStamp.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     EtwpGetHostPerfCounter @ 0x1403F6D7C (EtwpGetHostPerfCounter.c)
 */

LARGE_INTEGER __fastcall EtwpGetLoggerTimeStamp(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 i; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  char v9; // di
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v11; // r15
  LONGLONG v12; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        if ( v3 != 1 )
          __fastfail(0x3Du);
        return (LARGE_INTEGER)__rdtsc();
      }
      else
      {
        return (LARGE_INTEGER)EtwpGetHostPerfCounter(a1);
      }
    }
    else
    {
      return KeQueryPerformanceCounter(0LL);
    }
  }
  else
  {
    while ( 1 )
    {
      for ( i = MEMORY[0xFFFFF78000000340]; (MEMORY[0xFFFFF78000000340] & 1) != 0; i = MEMORY[0xFFFFF78000000340] )
        _mm_pause();
      v6 = MEMORY[0xFFFFF78000000014];
      v7 = MEMORY[0xFFFFF78000000348];
      v8 = MEMORY[0xFFFFF78000000358];
      v9 = MEMORY[0xFFFFF78000000368];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == i )
        break;
      _mm_pause();
    }
    v11 = 0LL;
    if ( PerformanceCounter.QuadPart > v7 )
    {
      v12 = PerformanceCounter.QuadPart - v7 - 1;
      if ( v9 )
        v12 <<= v9;
      v11 = ((unsigned __int64)v12 * (unsigned __int128)v8) >> 64;
    }
    return (LARGE_INTEGER)(v11 + v6);
  }
}
