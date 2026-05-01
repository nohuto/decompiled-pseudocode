/*
 * XREFs of SdbpInitializeSearchDBContext @ 0x18009B898
 * Callers:
 *     SdbpCheckMatchingDir @ 0x180099880 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x180099A30 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x18009A4BC (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x18009A880 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x180092DEC (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbpGetProcessHistory @ 0x180095228 (SdbpGetProcessHistory.c)
 *     memmove_0 @ 0x1800A7AFE (memmove_0.c)
 */

__int64 __fastcall SdbpInitializeSearchDBContext(__int64 a1)
{
  __int64 result; // rax
  const wchar_t *ProcessHistory; // r14
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi
  wchar_t *Heap; // rax
  __int64 v8; // rsi
  size_t v9; // rdi

  if ( *(_QWORD *)(a1 + 72) )
    return 1LL;
  ProcessHistory = *(const wchar_t **)(a1 + 64);
  if ( !ProcessHistory )
  {
    if ( (*(_BYTE *)a1 & 2) != 0 || (v4 = *(_QWORD *)(a1 + 56)) == 0 )
    {
      v5 = -1LL;
      v6 = -1LL;
      do
        ++v6;
      while ( *(_WORD *)(*(_QWORD *)(a1 + 32) + 2 * v6) );
      do
        ++v5;
      while ( *(_WORD *)(*(_QWORD *)(a1 + 40) + 2 * v5) );
      Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * (unsigned int)(v5 + v6 + 1));
      ProcessHistory = Heap;
      if ( !Heap )
        goto LABEL_12;
      v8 = (unsigned int)v6;
      v9 = (unsigned int)v6;
      memmove_0(Heap, *(const void **)(a1 + 32), v9 * 2);
      memmove_0((void *)&ProcessHistory[v9], *(const void **)(a1 + 40), 2LL * (unsigned int)v5);
      ProcessHistory[(unsigned int)v5 + v8] = 0;
    }
    else
    {
      ProcessHistory = SdbpGetProcessHistory(v4, *(_WORD **)(a1 + 32), *(_WORD **)(a1 + 40));
      if ( !ProcessHistory )
      {
LABEL_12:
        AslLogCallPrintf(1LL);
        return 0LL;
      }
    }
  }
  *(_QWORD *)(a1 + 64) = ProcessHistory;
  result = SdbpCreateSearchPathPartsFromPath(ProcessHistory, (_QWORD *)(a1 + 72));
  if ( (_DWORD)result )
    *(_DWORD *)a1 |= 1u;
  return result;
}
