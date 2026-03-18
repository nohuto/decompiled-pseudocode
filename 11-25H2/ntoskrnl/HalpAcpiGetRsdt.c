/*
 * XREFs of HalpAcpiGetRsdt @ 0x140413928
 * Callers:
 *     HalpAcpiGetTableFromBios @ 0x140413440 (HalpAcpiGetTableFromBios.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1402AA7B8 (MiUnmapContiguousMemory.c)
 *     HalpUnmapVirtualAddress @ 0x140411990 (HalpUnmapVirtualAddress.c)
 *     HalpMap @ 0x140412738 (HalpMap.c)
 *     HalpAcpiGetCachedTable @ 0x1404132D4 (HalpAcpiGetCachedTable.c)
 *     HalpAcpiCheckAndMapTable @ 0x140413610 (HalpAcpiCheckAndMapTable.c)
 *     MmMapIoSpaceEx @ 0x140413F40 (MmMapIoSpaceEx.c)
 *     HalpFlushTLB @ 0x1404F281C (HalpFlushTLB.c)
 *     HalpAcpiCopyBiosTable @ 0x14053A980 (HalpAcpiCopyBiosTable.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

_QWORD *__fastcall HalpAcpiGetRsdt(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *CachedTable; // rdi
  __int64 v4; // rcx
  int *v5; // rax
  unsigned __int64 v6; // rbx
  int v7; // eax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  void *v12; // rcx
  bool v13; // si
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF

  LODWORD(v19) = 0;
  v1 = HalpAcpiTableCacheList;
  CachedTable = 0LL;
  while ( (__int64 *)v1 != &HalpAcpiTableCacheList )
  {
    if ( *(_DWORD *)(v1 + 24) == 1413763922 )
    {
      CachedTable = (_QWORD *)(v1 + 24);
      break;
    }
    v1 = *(_QWORD *)v1;
  }
  if ( CachedTable || (CachedTable = (_QWORD *)HalpAcpiGetCachedTable(1413763928, 0LL, 0LL)) != 0LL )
  {
    v4 = *(CachedTable - 1);
    if ( v4 )
    {
      v5 = (int *)(a1
                 ? HalpMap(*(CachedTable - 1), ((*(CachedTable - 1) & 0xFFFuLL) + 4131) >> 12, 1u, 0, 4u, 0LL)
                 : MmMapIoSpaceEx(v4, 36LL, 516LL));
      v6 = (unsigned __int64)v5;
      if ( v5 )
      {
        v7 = *v5;
        if ( v7 == 1413763922 || v7 == 1413763928 )
        {
          v13 = memcmp(CachedTable, (const void *)v6, 0x24uLL) == 0;
          if ( a1 )
            HalpUnmapVirtualAddress(v6, ((v6 & 0xFFF) + 4131) >> 12, 0);
          else
            MiUnmapContiguousMemory(v6, 0x24uLL, 1);
          if ( !v13 )
          {
            v14 = HalpAcpiCheckAndMapTable(a1, *(CachedTable - 1), 0x24u, 0, 0LL, 0LL, 1, &v19);
            v15 = v14;
            if ( v14 )
            {
              v16 = HalpAcpiCopyBiosTable(a1, v14, *(CachedTable - 1));
              if ( a1 )
                HalpUnmapVirtualAddress(v15, ((unsigned int)v19 + 4095LL + (v15 & 0xFFF)) >> 12, 0);
              else
                MiUnmapContiguousMemory(v15, (unsigned int)v19, 1);
              if ( v16 )
              {
                v17 = HalpAcpiTableCacheList;
                v18 = (_QWORD *)(v16 - 24);
                if ( *(__int64 **)(HalpAcpiTableCacheList + 8) != &HalpAcpiTableCacheList )
                  __fastfail(3u);
                *v18 = HalpAcpiTableCacheList;
                CachedTable = (_QWORD *)v16;
                v18[1] = &HalpAcpiTableCacheList;
                *(_QWORD *)(v17 + 8) = v18;
                HalpAcpiTableCacheList = v16 - 24;
              }
            }
          }
        }
        else if ( a1 )
        {
          v9 = ((v6 & 0xFFF) + 4131) >> 12;
          v10 = v6 + ((unsigned __int64)(unsigned int)v9 << 12) - 1;
          if ( v6 >= HalpOriginalHeapStart && v10 >= v6 && v10 <= HalpOriginalHeapEnd )
          {
            v11 = v6 & 0xFFFFFFFFFFFFF000uLL;
            v12 = (void *)(8 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL);
            if ( (_DWORD)v9 )
              memset_0(v12, 0, 8LL * (unsigned int)v9);
            HalpFlushTLB(v12);
            if ( HalpHeapStart > v11 )
              HalpHeapStart = v11;
          }
        }
        else
        {
          MiUnmapContiguousMemory(v6, 0x24uLL, 1);
        }
      }
    }
  }
  return CachedTable;
}
