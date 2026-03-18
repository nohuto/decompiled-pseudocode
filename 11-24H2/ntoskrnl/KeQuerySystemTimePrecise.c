/*
 * XREFs of KeQuerySystemTimePrecise @ 0x14034EC60
 * Callers:
 *     EtwpTraceSystemShutdown @ 0x1407AA200 (EtwpTraceSystemShutdown.c)
 *     EtwpInitializeTimeStamp @ 0x1408307CC (EtwpInitializeTimeStamp.c)
 *     EtwpInitLoggerContext @ 0x1408309D4 (EtwpInitLoggerContext.c)
 *     PspAllocateThread @ 0x1408A49BC (PspAllocateThread.c)
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 *     PspNotifyThreadCreation @ 0x1408FEC38 (PspNotifyThreadCreation.c)
 *     PspExitLastThread @ 0x1409374F0 (PspExitLastThread.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     EtwpFinalizeHeader @ 0x1409DBD1C (EtwpFinalizeHeader.c)
 *     EtwTraceLpacAccessFailure @ 0x1409F7044 (EtwTraceLpacAccessFailure.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
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
