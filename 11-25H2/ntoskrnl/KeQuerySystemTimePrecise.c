/*
 * XREFs of KeQuerySystemTimePrecise @ 0x14031ABA0
 * Callers:
 *     EtwpTraceSystemShutdown @ 0x14079AE30 (EtwpTraceSystemShutdown.c)
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 *     PspNotifyThreadCreation @ 0x14090B188 (PspNotifyThreadCreation.c)
 *     PspExitLastThread @ 0x14091ECC8 (PspExitLastThread.c)
 *     EtwpFinalizeHeader @ 0x140992E74 (EtwpFinalizeHeader.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 *     EtwpInitLoggerContext @ 0x140A388E4 (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x140A38C3C (EtwpInitializeTimeStamp.c)
 *     EtwTraceLpacAccessFailure @ 0x140A75A90 (EtwTraceLpacAccessFailure.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall KeQuerySystemTimePrecise(_QWORD *a1)
{
  __int64 i; // rbx
  __int64 v2; // rbp
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r14
  char v5; // di
  LARGE_INTEGER PerformanceCounter; // rdx
  LONGLONG v7; // rdx
  __int64 result; // rax

  while ( 1 )
  {
    for ( i = MEMORY[0xFFFFF78000000340]; (MEMORY[0xFFFFF78000000340] & 1) != 0; i = MEMORY[0xFFFFF78000000340] )
      _mm_pause();
    v2 = MEMORY[0xFFFFF78000000014];
    v3 = MEMORY[0xFFFFF78000000348];
    v4 = MEMORY[0xFFFFF78000000358];
    v5 = MEMORY[0xFFFFF78000000368];
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( MEMORY[0xFFFFF78000000340] == i )
      break;
    _mm_pause();
  }
  if ( PerformanceCounter.QuadPart <= v3 )
  {
    result = v2;
  }
  else
  {
    v7 = PerformanceCounter.QuadPart - v3 - 1;
    if ( v5 )
      v7 <<= v5;
    result = (((unsigned __int64)v7 * (unsigned __int128)v4) >> 64) + v2;
  }
  *a1 = result;
  return result;
}
