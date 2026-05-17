/*
 * XREFs of LdrpSpecialCacheTypeHandle @ 0x180116C48
 * Callers:
 *     LdrpSetAlternateResourceModuleHandle @ 0x18005F120 (LdrpSetAlternateResourceModuleHandle.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall LdrpSpecialCacheTypeHandle(__int64 a1, char a2)
{
  __int64 result; // rax
  char v5; // dl
  void *v6; // rcx
  void *Heap; // rax
  unsigned __int64 v8; // rdi

  if ( !a1 )
    return 3221225485LL;
  v5 = gMUICacheType;
  result = 3221225473LL;
  if ( gMUICacheType )
  {
    if ( (gMUICacheType & 1) != 0 )
    {
      v6 = *(void **)(a1 + 40);
      if ( v6 )
      {
        NtClose(v6);
        *(_QWORD *)(a1 + 40) = 0LL;
        v5 = gMUICacheType;
        result = 0LL;
      }
    }
    if ( (v5 & 6) != 0 )
    {
      if ( (unsigned __int64)(*(_QWORD *)(a1 + 32) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL
        && (v5 & 4) == 0
        && (v5 & 2) != 0
        && a2 )
      {
        if ( *(_DWORD *)(a1 + 56) == -1073741799 )
          return 3221225497LL;
        Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, *(_QWORD *)(a1 + 48));
        v8 = (unsigned __int64)Heap;
        if ( !Heap )
          return 3221225495LL;
        memmove(Heap, (const void *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL), *(_QWORD *)(a1 + 48));
        NtUnmapViewOfSection(-1LL);
        *(_DWORD *)(a1 + 56) = -1073741799;
        *(_QWORD *)(a1 + 32) = v8 | 1;
      }
      return 0LL;
    }
  }
  return result;
}
