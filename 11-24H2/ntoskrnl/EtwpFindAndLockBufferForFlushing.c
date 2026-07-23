/*
 * XREFs of EtwpFindAndLockBufferForFlushing @ 0x1409DC5E0
 * Callers:
 *     EtwpBufferingModeFlush @ 0x1409D2A94 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpGetFirstBuffer @ 0x1404ECB34 (EtwpGetFirstBuffer.c)
 */

__int64 __fastcall EtwpFindAndLockBufferForFlushing(__int64 a1)
{
  _QWORD *FirstBuffer; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx

  FirstBuffer = (_QWORD *)EtwpGetFirstBuffer(a1);
  while ( 1 )
  {
    if ( !FirstBuffer )
      return 0LL;
    v4 = FirstBuffer[2];
    if ( *(_QWORD *)(v4 + 24) == v2 )
      break;
    FirstBuffer = (_QWORD *)*FirstBuffer;
    if ( FirstBuffer == (_QWORD *)(v3 + 80) )
      FirstBuffer = 0LL;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 44), 3, 0) )
    return 0LL;
  if ( *(_QWORD *)(v4 + 24) != v2 )
  {
    _InterlockedExchange((volatile __int32 *)(v4 + 44), 0);
    return 0LL;
  }
  return v4;
}
