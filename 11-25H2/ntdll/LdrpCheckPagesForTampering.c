/*
 * XREFs of LdrpCheckPagesForTampering @ 0x180110664
 * Callers:
 *     LdrpGetImportDescriptorForSnap @ 0x180020E7C (LdrpGetImportDescriptorForSnap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 */

char __fastcall LdrpCheckPagesForTampering(__int64 a1, __int64 a2)
{
  char v2; // bl
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  __int64 Heap; // rdi
  unsigned int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned int i; // ecx

  v2 = 0;
  v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v4 = (a2 + (unsigned __int64)(a1 & 0xFFF) + 4095) >> 12;
  Heap = RtlAllocateHeap((char *)LdrpHeap, (NtdllBaseTag + 1572864) | 8u, 16 * v4);
  if ( !Heap )
    return 1;
  v6 = 0;
  if ( v4 )
  {
    v7 = 0LL;
    do
    {
      ++v6;
      *(_QWORD *)(Heap + 16 * v7) = v3;
      v3 += 4096LL;
      v7 = v6;
    }
    while ( v6 < v4 );
  }
  if ( (int)ZwQueryVirtualMemory(-1LL, 0LL, 4LL, Heap, 16 * v4, 0LL) < 0 )
  {
LABEL_11:
    v2 = 1;
  }
  else
  {
    for ( i = 0; i < v4; ++i )
    {
      if ( (*(_DWORD *)(Heap + 16LL * i + 8) & 0x40000000) == 0 )
        goto LABEL_11;
    }
  }
  RtlFreeHeap(LdrpHeap, 0, Heap, v8);
  return v2;
}
