/*
 * XREFs of HalpAcpiGetAllTablesWork @ 0x14053ABC8
 * Callers:
 *     HalpAcpiGetAllTables @ 0x14053AB90 (HalpAcpiGetAllTables.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     HalpAcpiGetTableWork @ 0x14045F9FC (HalpAcpiGetTableWork.c)
 *     HalpAcpiCheckAndMapTable @ 0x14045FE34 (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiAllocateMemory @ 0x14053A9C0 (HalpAcpiAllocateMemory.c)
 *     HalpAcpiCacheTable @ 0x14053AA44 (HalpAcpiCacheTable.c)
 *     HalpAcpiCopyBiosTable @ 0x14053AAB0 (HalpAcpiCopyBiosTable.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpAcpiGetAllTablesWork(__int64 a1)
{
  unsigned int v1; // edi
  unsigned __int64 TableWork; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int *v11; // r14
  __int64 v12; // r12
  __int64 *v13; // r15
  __int64 v14; // rbx
  ULONG_PTR v15; // rax
  unsigned __int64 v16; // r13
  char *v17; // rbx
  __int64 v18; // rax
  int v19; // esi
  int v20; // ecx
  _DWORD *Memory; // rax
  _DWORD *v22; // rbx
  __int64 i; // rcx
  int v24; // eax
  __int64 v25; // rax
  unsigned int v27; // [rsp+70h] [rbp+8h] BYREF
  int v28; // [rsp+74h] [rbp+Ch]

  v28 = HIDWORD(a1);
  v1 = 0;
  v27 = 0;
  if ( !HalpAcpiTablePointers )
  {
    TableWork = HalpAcpiGetTableWork(0LL, 0x54445358u, 0LL, 0LL);
    v3 = TableWork;
    if ( TableWork )
    {
      v9 = *(unsigned int *)(TableWork + 4);
      v5 = 0LL;
      v10 = (unsigned int)v9;
      if ( (unsigned int)v9 >= 0x24 )
        v10 = 36LL;
      v8 = (unsigned __int64)(v9 - v10) >> 3;
    }
    else
    {
      v4 = HalpAcpiGetTableWork(0LL, 0x54445352u, 0LL, 0LL);
      v5 = v4;
      if ( !v4 )
        return HalpAcpiTablePointers;
      v6 = *(unsigned int *)(v4 + 4);
      v7 = (unsigned int)v6;
      if ( (unsigned int)v6 >= 0x24 )
        v7 = 36LL;
      v8 = (unsigned __int64)(v6 - v7) >> 2;
    }
    if ( (_DWORD)v8 )
    {
      v11 = (unsigned int *)(v5 + 36);
      v12 = (unsigned int)v8;
      v13 = (__int64 *)(v3 + 36);
      do
      {
        if ( v3 )
          v14 = *v13;
        else
          v14 = *v11;
        v15 = HalpAcpiCheckAndMapTable(0LL, v14, 0x24u, 0, 0LL, 0LL, 1, &v27);
        v16 = v15;
        if ( v15 )
        {
          v17 = HalpAcpiCopyBiosTable(0LL, v15, v14);
          MiUnmapContiguousMemory(v16, v27, 1);
          if ( v17 )
            HalpAcpiCacheTable(0LL, (__int64)v17);
        }
        ++v11;
        ++v13;
        --v12;
      }
      while ( v12 );
    }
    v18 = HalpAcpiTableCacheList;
    v19 = 0;
    while ( (__int64 *)v18 != &HalpAcpiTableCacheList )
    {
      v20 = *(_DWORD *)(v18 + 24);
      if ( v20 != 1413763922 && v20 != 1413763928 && v20 != 1396916550 && v20 != 1413763908 )
        ++v19;
      v18 = *(_QWORD *)v18;
    }
    Memory = (_DWORD *)HalpAcpiAllocateMemory(0LL, 8 * v19 + 8);
    v22 = Memory;
    if ( Memory )
    {
      memset_0(Memory, 0, (unsigned int)(8 * v19 + 8));
      *v22 = v19;
      for ( i = HalpAcpiTableCacheList; (__int64 *)i != &HalpAcpiTableCacheList; i = *(_QWORD *)i )
      {
        v24 = *(_DWORD *)(i + 24);
        if ( v24 != 1413763922 && v24 != 1413763928 && v24 != 1396916550 && v24 != 1413763908 )
        {
          v25 = v1++;
          *(_QWORD *)&v22[2 * v25 + 2] = i + 24;
        }
      }
      HalpAcpiTablePointers = (__int64)v22;
    }
  }
  return HalpAcpiTablePointers;
}
