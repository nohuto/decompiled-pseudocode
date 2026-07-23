/*
 * XREFs of EtwpFindAndLockBufferForFlushing @ 0x18015A74C
 * Callers:
 *     EtwpBufferingModeFlush @ 0x18015A5D8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpFindAndLockBufferForFlushing(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 i; // rax
  __int64 v4; // rcx

  v2 = a1 + 216;
  for ( i = *(_QWORD *)(a1 + 216); ; i = *(_QWORD *)(v4 + 56) )
  {
    v4 = i - 56;
    if ( i == v2 )
      v4 = 0LL;
    if ( !v4 )
      break;
    if ( *(_QWORD *)(v4 + 24) == a2 )
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 44), 3, 0) )
      {
        if ( *(_QWORD *)(v4 + 24) == a2 )
          return v4;
        _InterlockedExchange((volatile __int32 *)(v4 + 44), 0);
      }
      return 0LL;
    }
  }
  return 0LL;
}
