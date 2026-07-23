/*
 * XREFs of HalpPowerInitFwPerformanceTableMappings @ 0x140C10554
 * Callers:
 *     HalpPowerInitSystem @ 0x140B4E560 (HalpPowerInitSystem.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     HalpAcpiGetTable @ 0x14045F918 (HalpAcpiGetTable.c)
 *     HalGetMemoryCachingRequirements @ 0x14047B010 (HalGetMemoryCachingRequirements.c)
 */

__int64 HalpPowerInitFwPerformanceTableMappings()
{
  unsigned int v0; // esi
  _DWORD *Table; // rax
  _DWORD *v2; // rbp
  _DWORD *i; // r14
  unsigned __int64 v4; // rbx
  unsigned int v5; // r15d
  unsigned __int64 v6; // rax
  unsigned int v7; // edi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned int v10; // r15d
  unsigned __int64 v11; // rax
  unsigned int v12; // edi
  __int64 v13; // rax
  int v15; // [rsp+50h] [rbp+8h] BYREF

  v0 = 0;
  v15 = 0;
  Table = (_DWORD *)HalpAcpiGetTable(0LL, 1413763142, 0, 0);
  v2 = Table;
  if ( Table && *Table == 1413763142 )
  {
    for ( i = Table + 9;
          i < (_DWORD *)((char *)v2 + (unsigned int)v2[1]);
          i = (_DWORD *)((char *)i + *((unsigned __int8 *)i + 2)) )
    {
      if ( *(_WORD *)i )
      {
        if ( *(_WORD *)i != 1 )
          return (unsigned int)-1073741822;
        v9 = *((_QWORD *)i + 1);
        HalGetMemoryCachingRequirements(v9, 8LL, &v15);
        v10 = 4;
        if ( v15 != 1 )
          v10 = 516;
        v11 = MmMapIoSpaceEx(v9, 8LL, v10);
        if ( !v11 )
          return (unsigned int)-1073741670;
        v12 = *(_DWORD *)(v11 + 4);
        MiUnmapContiguousMemory(v11, 8uLL, 1);
        v13 = MmMapIoSpaceEx(v9, v12, v10);
        if ( !v13 )
          return (unsigned int)-1073741670;
        HalpFwS3PerformanceTable = v13;
        HalpFwS3PerformanceTableMaximumLength = ((v12 + (v13 & 0xFFF) + 4095) & 0xFFFFF000) - (v13 & 0xFFF);
      }
      else
      {
        v4 = *((_QWORD *)i + 1);
        HalGetMemoryCachingRequirements(v4, 8LL, &v15);
        v5 = 4;
        if ( v15 != 1 )
          v5 = 516;
        v6 = MmMapIoSpaceEx(v4, 8LL, v5);
        if ( !v6 )
          return (unsigned int)-1073741670;
        v7 = *(_DWORD *)(v6 + 4);
        MiUnmapContiguousMemory(v6, 8uLL, 1);
        v8 = MmMapIoSpaceEx(v4, v7, v5);
        if ( !v8 )
          return (unsigned int)-1073741670;
        HalpFwBootPerformanceTable = v8;
        HalpFwBootPerformanceTableMaximumLength = v7;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v0;
}
