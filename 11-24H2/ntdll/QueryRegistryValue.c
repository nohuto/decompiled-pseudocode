/*
 * XREFs of QueryRegistryValue @ 0x18007FAA4
 * Callers:
 *     _GetOverlayPackagePathFromKey @ 0x18007F704 (_GetOverlayPackagePathFromKey.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     NtQueryValueKey @ 0x180160330 (NtQueryValueKey.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall QueryRegistryValue(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        _DWORD *a3,
        void *a4,
        unsigned int *a5)
{
  ULONG Length; // ebx
  _DWORD *Heap; // rdi
  NTSTATUS ValueKey; // eax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  ULONG ResultLength[10]; // [rsp+30h] [rbp-28h] BYREF

  ResultLength[0] = 0;
  if ( !a5 )
    return 3221225485LL;
  Length = *a5 + 12;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
  if ( Heap )
  {
    ValueKey = NtQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, Heap, Length, ResultLength);
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
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
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
