/*
 * XREFs of RtlpEnsureTailingSlashAndAddToList @ 0x18015C894
 * Callers:
 *     RtlpLookupSafeCurDirList @ 0x18010F9B4 (RtlpLookupSafeCurDirList.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlUnicodeStringCopy @ 0x1800D7530 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringCatString @ 0x18015C7D8 (RtlUnicodeStringCatString.c)
 */

__int64 __fastcall RtlpEnsureTailingSlashAndAddToList(__int64 a1, __int64 a2)
{
  unsigned __int16 v5; // bp
  char *Heap; // rax
  _QWORD *v7; // rbx
  _WORD *v8; // rcx
  _QWORD *v9; // rax

  if ( *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * (unsigned __int16)((*(_WORD *)a2 >> 1) - 1)) != 92
    && (int)RtlUnicodeStringCatString((_WORD *)a2) < 0 )
  {
    return 0LL;
  }
  v5 = *(_WORD *)a2 + 2;
  Heap = (char *)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, v5 + 32LL);
  v7 = Heap;
  v8 = Heap + 16;
  if ( Heap )
  {
    *v8 = 0;
    *((_QWORD *)Heap + 3) = Heap + 32;
    *((_WORD *)Heap + 9) = v5;
    RtlUnicodeStringCopy((__int64)v8, (unsigned __int16 *)a2);
    v9 = *(_QWORD **)(a1 + 8);
    if ( *v9 != a1 )
      __fastfail(3u);
    *v7 = a1;
    v7[1] = v9;
    *v9 = v7;
    *(_QWORD *)(a1 + 8) = v7;
    return 0LL;
  }
  return 3221225495LL;
}
