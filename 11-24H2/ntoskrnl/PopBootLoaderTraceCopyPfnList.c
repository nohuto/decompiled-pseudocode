/*
 * XREFs of PopBootLoaderTraceCopyPfnList @ 0x140B4B22C
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x140B64920 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     PoSetHiberRange @ 0x1402649E0 (PoSetHiberRange.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

void __fastcall PopBootLoaderTraceCopyPfnList(_QWORD *MemoryMap, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int64 v5; // rbx
  PVOID *v6; // rsi

  v2 = MemoryMap[29];
  if ( v2 )
  {
    v5 = (unsigned __int64)*(unsigned int *)(v2 + 40) >> 12;
    v6 = (PVOID *)(v2 + 48);
    memmove((void *)(a2 + 920), v6, 8 * v5);
    for ( *(_DWORD *)(a2 + 916) = v5; v5; --v5 )
      PoSetHiberRange(MemoryMap, 0xC000u, *v6++, 1uLL, 0x644D6946u);
  }
  else
  {
    *(_DWORD *)(a2 + 916) = 0;
  }
}
