/*
 * XREFs of MmGetNodeChannelRanges @ 0x140A65044
 * Callers:
 *     ExpQueryMemoryTopologyInformation @ 0x140A64FA0 (ExpQueryMemoryTopologyInformation.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiDereferencePageRuns @ 0x1403F89A4 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x1403F8A50 (MiReferencePageRuns.c)
 */

__int64 __fastcall MmGetNodeChannelRanges(__int64 *a1, ULONG_PTR *a2)
{
  unsigned int *v4; // rdi
  ULONG_PTR v5; // rbp
  __int64 Pool; // rax
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 *v10; // r11
  __int64 v11; // r10
  unsigned int v12; // r14d
  __int64 v13; // rcx
  unsigned int *v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx

  v4 = (unsigned int *)MiReferencePageRuns((__int64)&MiSystemPartition, 1u);
  v5 = 32LL * (*v4 - 1) + 48;
  Pool = MiAllocatePool(0x40uLL, v5, 1750101325);
  v7 = 0;
  v8 = Pool;
  if ( Pool )
  {
    v10 = (__int64 *)(v4 + 4);
    *(_QWORD *)Pool = *v4;
    v11 = Pool + 16;
    v12 = 0;
    *(_DWORD *)(Pool + 8) = (unsigned __int16)KeNumberNodes;
    *(_DWORD *)(Pool + 12) = (unsigned __int8)MmNumberOfChannels;
    v13 = *v4;
    v14 = &v4[4 * v13 + 4];
    if ( (_DWORD)v13 )
    {
      do
      {
        v15 = *v10;
        v10 += 2;
        *(_QWORD *)(v11 + 8) = v15;
        *(_QWORD *)(v11 + 16) = *(v10 - 1);
        v16 = *v14;
        v14 += 2;
        *(_DWORD *)v11 = v16;
        v11 += 32LL;
        v17 = *((unsigned __int8 *)v14 - 4);
        *(_DWORD *)(v11 - 28) = v17;
        ++v12;
        *(_QWORD *)(v11 - 8) = *(_BYTE *)(v17 + qword_140E38D50 + 57216 * v16 + 15237) == 1;
      }
      while ( v12 < *v4 );
    }
  }
  else
  {
    v7 = -1073741670;
  }
  MiDereferencePageRuns((__int64)v4);
  result = v7;
  *a1 = v8;
  *a2 = v5;
  return result;
}
