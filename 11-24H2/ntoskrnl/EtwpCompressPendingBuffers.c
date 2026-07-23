/*
 * XREFs of EtwpCompressPendingBuffers @ 0x14064F724
 * Callers:
 *     EtwpBufferingModeCompressionFlush @ 0x14064F324 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x14064F8B0 (EtwpCompressionProc.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     EtwpCompressBuffer @ 0x14064F3BC (EtwpCompressBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x14064F998 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x14064FE08 (EtwpRotateCompressionTargetIfNeeded.c)
 *     EtwpCompleteBuffer @ 0x140ADB650 (EtwpCompleteBuffer.c)
 */

__int64 __fastcall EtwpCompressPendingBuffers(__int64 a1)
{
  unsigned __int64 *v1; // rbx
  char *v3; // rax
  char *v4; // rsi
  LARGE_INTEGER PerformanceCounter; // rbx
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  LARGE_INTEGER v8; // rax
  __int64 v9; // rcx
  LONGLONG v10; // rax

  v1 = (unsigned __int64 *)(a1 + 1408);
  v3 = (char *)KeAbPreAcquire(a1 + 1408, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (__int64)v1);
  if ( v4 )
    v4[10] = 1;
  EtwpRotateCompressionTargetIfNeeded(a1);
  while ( 1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v6 = (_DWORD *)EtwpDequeueBufferPendingCompression(a1);
    v7 = v6;
    if ( !v6 )
      break;
    if ( (int)v6[3] > 0 || v6[1] > 0x48u && v6[2] > 0x48u )
    {
      if ( (int)EtwpCompressBuffer(a1, (__int64)v6) < 0 )
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 252));
      EtwpCompleteBuffer(a1, v7);
      v8 = KeQueryPerformanceCounter(0LL);
      v9 = *(_QWORD *)(a1 + 1536);
      v10 = v8.QuadPart - PerformanceCounter.QuadPart;
      if ( v9 )
        *(_QWORD *)(a1 + 1536) = (v10 + 4 * v9) / 5;
      else
        *(_QWORD *)(a1 + 1536) = v10;
    }
    else
    {
      EtwpCompleteBuffer(a1, v6);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1408), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1408));
  return KeAbPostRelease(a1 + 1408);
}
