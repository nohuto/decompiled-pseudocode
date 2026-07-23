/*
 * XREFs of EtwpReleasePrivateBuffers @ 0x1800E4ECC
 * Callers:
 *     EtwEventWriteString @ 0x1800E4C30 (EtwEventWriteString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpReleasePrivateBuffers(int a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = 0;
  while ( v2 < *(_DWORD *)(a2 + 128) )
  {
    v4 = 32LL * v2;
    v5 = *(_QWORD *)(v4 + a2);
    if ( a1 )
      *(_WORD *)(*(_QWORD *)(v4 + a2 + 8) + 2LL) = -16371;
    ++v2;
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v4 + a2 + 16) + 12LL));
    result = EtwpLoggerArray;
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v5 + 20) + 8));
  }
  return result;
}
