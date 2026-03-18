/*
 * XREFs of HalpAcpiCheckAndMapTable @ 0x140413610
 * Callers:
 *     HalpAcpiGetTableFromBios @ 0x140413440 (HalpAcpiGetTableFromBios.c)
 *     HalpAcpiGetRsdt @ 0x140413928 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetAllTablesWork @ 0x14053AA98 (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiGetFacsMapping @ 0x14053ACA0 (HalpAcpiGetFacsMapping.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1402AA7B8 (MiUnmapContiguousMemory.c)
 *     HalpMap @ 0x140412738 (HalpMap.c)
 *     MmMapIoSpaceEx @ 0x140413F40 (MmMapIoSpaceEx.c)
 *     HalpFlushTLB @ 0x1404F281C (HalpFlushTLB.c)
 *     strncmp @ 0x1406B4820 (strncmp.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

unsigned __int64 __fastcall HalpAcpiCheckAndMapTable(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        char *Str1,
        char *a6,
        char a7,
        _DWORD *a8)
{
  unsigned __int64 v8; // rsi
  __int64 v13; // rbp
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  void *v20; // rcx
  unsigned __int64 v21; // rax
  int v22; // ecx
  char v23; // r8
  char *v24; // rdx
  char v25; // al
  char v26; // al
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdi
  void *v30; // rcx

  v8 = 0LL;
  if ( !a2 )
    return v8;
  LODWORD(v13) = 36;
  v14 = a1
      ? HalpMap(a2, ((unsigned __int64)(a2 & 0xFFF) + 4131) >> 12, 1u, 0, 4u, 0LL)
      : MmMapIoSpaceEx(a2, 36LL, 516LL);
  v15 = v14;
  if ( !v14 )
    return v8;
  if ( *(_DWORD *)(v14 + 4) < a3
    || a4 && *(_DWORD *)v14 != a4
    || Str1 && strncmp(Str1, (const char *)(v14 + 10), 6uLL)
    || a6 && strncmp(a6, (const char *)(v15 + 16), 8uLL) )
  {
    if ( !v15 )
      return v8;
    goto LABEL_9;
  }
  v13 = *(unsigned int *)(v15 + 4);
  if ( a1 )
  {
    v27 = ((v15 & 0xFFF) + 4131) >> 12;
    v28 = v15 + ((unsigned __int64)(unsigned int)v27 << 12) - 1;
    if ( v15 >= HalpOriginalHeapStart && v28 >= v15 && v28 <= HalpOriginalHeapEnd )
    {
      v29 = v15 & 0xFFFFFFFFFFFFF000uLL;
      v30 = (void *)(8 * ((v29 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL);
      if ( (_DWORD)v27 )
        memset_0(v30, 0, 8LL * (unsigned int)v27);
      HalpFlushTLB(v30);
      if ( HalpHeapStart > v29 )
        HalpHeapStart = v29;
    }
    v21 = HalpMap(a2, (v13 + (unsigned __int64)(a2 & 0xFFF) + 4095) >> 12, 1u, 0, 4u, 0LL);
  }
  else
  {
    MiUnmapContiguousMemory(v15, 0x24uLL, 1);
    v21 = MmMapIoSpaceEx(a2, (unsigned int)v13, 516LL);
  }
  v15 = v21;
  if ( v21 )
  {
    if ( !a7 )
      goto LABEL_27;
    v22 = *(_DWORD *)(v21 + 4);
    v23 = 0;
    if ( !v22 )
      goto LABEL_27;
    v24 = (char *)v21;
    do
    {
      v25 = *v24++;
      v26 = v23 + v25;
      v23 = v26;
      --v22;
    }
    while ( v22 );
    if ( !v26 )
    {
LABEL_27:
      v8 = v15;
      *a8 = v13;
      return v8;
    }
LABEL_9:
    if ( a1 )
    {
      v17 = ((v15 & 0xFFF) + (unsigned int)v13 + 4095LL) >> 12;
      v18 = v15 + ((unsigned __int64)(unsigned int)v17 << 12) - 1;
      if ( v15 >= HalpOriginalHeapStart && v18 >= v15 && v18 <= HalpOriginalHeapEnd )
      {
        v19 = v15 & 0xFFFFFFFFFFFFF000uLL;
        v20 = (void *)(8 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL);
        if ( (_DWORD)v17 )
          memset_0(v20, 0, 8LL * (unsigned int)v17);
        HalpFlushTLB(v20);
        if ( HalpHeapStart > v19 )
          HalpHeapStart = v19;
      }
    }
    else
    {
      MiUnmapContiguousMemory(v15, (unsigned int)v13, 1);
    }
  }
  return v8;
}
