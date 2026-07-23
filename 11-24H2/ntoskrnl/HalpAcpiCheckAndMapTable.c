/*
 * XREFs of HalpAcpiCheckAndMapTable @ 0x14045FE34
 * Callers:
 *     HalpAcpiGetTableFromBios @ 0x14045FC60 (HalpAcpiGetTableFromBios.c)
 *     HalpAcpiGetRsdt @ 0x14046014C (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetAllTablesWork @ 0x14053ABC8 (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiGetFacsMapping @ 0x14053ADD0 (HalpAcpiGetFacsMapping.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     HalpMap @ 0x140460358 (HalpMap.c)
 *     HalpFlushTLB @ 0x1404F29C4 (HalpFlushTLB.c)
 *     strncmp @ 0x1406C0A20 (strncmp.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdi
  void *v21; // rcx
  __int64 v22; // rax
  int v23; // ecx
  char v24; // r8
  char *v25; // rdx
  char v26; // al
  char v27; // al
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdi
  void *v32; // rcx

  v8 = 0LL;
  if ( !a2 )
    return v8;
  LODWORD(v13) = 36;
  v14 = a1 ? HalpMap(a2, ((unsigned __int64)(a2 & 0xFFF) + 4131) >> 12, 1, 0, 4, 0LL) : MmMapIoSpaceEx(a2, 36LL, 516LL);
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
    v28 = ((v15 & 0xFFF) + 4131) >> 12;
    v29 = (unsigned int)v28;
    v30 = v15 + ((unsigned __int64)(unsigned int)v28 << 12) - 1;
    if ( v15 >= HalpOriginalHeapStart && v30 >= v15 && v30 <= HalpOriginalHeapEnd )
    {
      v31 = v15 & 0xFFFFFFFFFFFFF000uLL;
      v32 = (void *)(8 * ((v31 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL);
      if ( (_DWORD)v28 )
        memset_0(v32, 0, 8LL * (unsigned int)v28);
      HalpFlushTLB(v32, v28, v29);
      if ( HalpHeapStart > v31 )
        HalpHeapStart = v31;
    }
    v22 = HalpMap(a2, (v13 + (unsigned __int64)(a2 & 0xFFF) + 4095) >> 12, 1, 0, 4, 0LL);
  }
  else
  {
    MiUnmapContiguousMemory(v15, 0x24uLL, 1);
    v22 = MmMapIoSpaceEx(a2, (unsigned int)v13, 516LL);
  }
  v15 = v22;
  if ( v22 )
  {
    if ( !a7 )
      goto LABEL_27;
    v23 = *(_DWORD *)(v22 + 4);
    v24 = 0;
    if ( !v23 )
      goto LABEL_27;
    v25 = (char *)v22;
    do
    {
      v26 = *v25++;
      v27 = v24 + v26;
      v24 = v27;
      --v23;
    }
    while ( v23 );
    if ( !v27 )
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
      v18 = (unsigned int)v17;
      v19 = v15 + ((unsigned __int64)(unsigned int)v17 << 12) - 1;
      if ( v15 >= HalpOriginalHeapStart && v19 >= v15 && v19 <= HalpOriginalHeapEnd )
      {
        v20 = v15 & 0xFFFFFFFFFFFFF000uLL;
        v21 = (void *)(8 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL);
        if ( (_DWORD)v17 )
          memset_0(v21, 0, 8LL * (unsigned int)v17);
        HalpFlushTLB(v21, v17, v18);
        if ( HalpHeapStart > v20 )
          HalpHeapStart = v20;
      }
    }
    else
    {
      MiUnmapContiguousMemory(v15, (unsigned int)v13, 1);
    }
  }
  return v8;
}
