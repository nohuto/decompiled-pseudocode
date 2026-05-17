/*
 * XREFs of QueryRegistryValue @ 0x1800B3204
 * Callers:
 *     _GetOverlayPackagePathFromKey @ 0x1800B2E64 (_GetOverlayPackagePathFromKey.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall QueryRegistryValue(__int64 a1, __int64 a2, _DWORD *a3, void *a4, unsigned int *a5)
{
  unsigned int v9; // ebx
  _DWORD *Heap; // rdi
  int ValueKey; // eax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  _DWORD v15[10]; // [rsp+30h] [rbp-28h] BYREF

  v15[0] = 0;
  if ( !a5 )
    return 3221225485LL;
  v9 = *a5 + 12;
  Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v9);
  if ( Heap )
  {
    ValueKey = NtQueryValueKey(a1, a2, 2LL, Heap, v9, v15);
    v12 = ValueKey;
    if ( ValueKey < 0 )
    {
      if ( ValueKey != -2147483643 && ValueKey != -1073741789 )
        goto LABEL_12;
    }
    else
    {
      v13 = Heap[2];
      if ( !v13 )
      {
        v12 = -1073741811;
LABEL_12:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
        return v12;
      }
      if ( v13 <= *a5 )
      {
        *a5 = v13;
        if ( a4 )
          memmove(a4, Heap + 3, v13);
        if ( a3 )
          *a3 = Heap[1];
        goto LABEL_12;
      }
    }
    v12 = -1073741789;
    *a5 = Heap[2];
    goto LABEL_12;
  }
  return 3221225626LL;
}
