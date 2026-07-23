/*
 * XREFs of HalpAcpiGetRsdt @ 0x14046014C
 * Callers:
 *     HalpAcpiGetTableFromBios @ 0x14045FC60 (HalpAcpiGetTableFromBios.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     HalpAcpiGetCachedTable @ 0x14045FAF4 (HalpAcpiGetCachedTable.c)
 *     HalpAcpiCheckAndMapTable @ 0x14045FE34 (HalpAcpiCheckAndMapTable.c)
 *     HalpMap @ 0x140460358 (HalpMap.c)
 *     HalpUnmapVirtualAddress @ 0x1404605A0 (HalpUnmapVirtualAddress.c)
 *     HalpFlushTLB @ 0x1404F29C4 (HalpFlushTLB.c)
 *     HalpAcpiCopyBiosTable @ 0x14053AAB0 (HalpAcpiCopyBiosTable.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  void *v13; // rcx
  bool v14; // si
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF

  LODWORD(v20) = 0;
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
                 ? HalpMap(*(CachedTable - 1), ((*(CachedTable - 1) & 0xFFFuLL) + 4131) >> 12, 1, 0, 4, 0LL)
                 : MmMapIoSpaceEx(v4, 36LL, 516LL));
      v6 = (unsigned __int64)v5;
      if ( v5 )
      {
        v7 = *v5;
        if ( v7 == 1413763922 || v7 == 1413763928 )
        {
          v14 = memcmp(CachedTable, (const void *)v6, 0x24uLL) == 0;
          if ( a1 )
            HalpUnmapVirtualAddress(v6, ((v6 & 0xFFF) + 4131) >> 12, 0LL);
          else
            MiUnmapContiguousMemory(v6, 0x24uLL, 1);
          if ( !v14 )
          {
            v15 = HalpAcpiCheckAndMapTable(a1, *(CachedTable - 1), 0x24u, 0, 0LL, 0LL, 1, &v20);
            v16 = v15;
            if ( v15 )
            {
              v17 = HalpAcpiCopyBiosTable(a1, v15, *(CachedTable - 1));
              if ( a1 )
                HalpUnmapVirtualAddress(v16, ((unsigned int)v20 + 4095LL + (v16 & 0xFFF)) >> 12, 0LL);
              else
                MiUnmapContiguousMemory(v16, (unsigned int)v20, 1);
              if ( v17 )
              {
                v18 = HalpAcpiTableCacheList;
                v19 = (_QWORD *)(v17 - 24);
                if ( *(__int64 **)(HalpAcpiTableCacheList + 8) != &HalpAcpiTableCacheList )
                  __fastfail(3u);
                *v19 = HalpAcpiTableCacheList;
                CachedTable = (_QWORD *)v17;
                v19[1] = &HalpAcpiTableCacheList;
                *(_QWORD *)(v18 + 8) = v19;
                HalpAcpiTableCacheList = v17 - 24;
              }
            }
          }
        }
        else if ( a1 )
        {
          v9 = ((v6 & 0xFFF) + 4131) >> 12;
          v10 = (unsigned int)v9;
          v11 = v6 + ((unsigned __int64)(unsigned int)v9 << 12) - 1;
          if ( v6 >= HalpOriginalHeapStart && v11 >= v6 && v11 <= HalpOriginalHeapEnd )
          {
            v12 = v6 & 0xFFFFFFFFFFFFF000uLL;
            v13 = (void *)(8 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL);
            if ( (_DWORD)v9 )
              memset_0(v13, 0, 8LL * (unsigned int)v9);
            HalpFlushTLB(v13, v9, v10);
            if ( HalpHeapStart > v12 )
              HalpHeapStart = v12;
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
