/*
 * XREFs of MiZeroChainWorker @ 0x1402242C4
 * Callers:
 *     MiZeroInParallelWorker @ 0x140224150 (MiZeroInParallelWorker.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     MiZeroWithUltraSpace @ 0x140224410 (MiZeroWithUltraSpace.c)
 *     MiZeroPhysicalPage @ 0x14024D560 (MiZeroPhysicalPage.c)
 *     MiZeroAndConvertPage @ 0x1403F8AEC (MiZeroAndConvertPage.c)
 */

__int64 __fastcall MiZeroChainWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  int v5; // edx
  __int64 v6; // r10
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v10; // rbx
  unsigned int v11; // r8d
  unsigned __int64 v12; // rbp
  unsigned int PfnPageSizeIndex; // eax
  unsigned int v14; // r12d
  unsigned __int64 v15; // rdi
  _DWORD *v16; // r15
  int v17; // [rsp+80h] [rbp+8h]

  v4 = a2;
  v5 = *(_DWORD *)(a1 + 20);
  v6 = a4;
  v7 = a3;
  v17 = v5;
  result = v4 + 112;
  v10 = *(_QWORD *)(v4 + 112);
  while ( v10 != result )
  {
    v11 = 3;
    if ( (*(_QWORD *)(v10 + 40) & 0x10000000000LL) != 0 )
    {
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(v10);
      v6 = a4;
      v11 = PfnPageSizeIndex;
      v5 = v17;
    }
    v12 = MiPageSizes[v11];
    if ( v11 <= 2 && (*(_DWORD *)(a1 + 16) & 0x20) == 0 && (unsigned __int8)BYTE2(*(_DWORD *)(v10 + 32)) >> 6 != v5 )
    {
      MiZeroAndConvertPage(v7, v10, v11, v5, *(_DWORD *)(a1 + 16));
      goto LABEL_8;
    }
    if ( v6 )
    {
      MiZeroWithUltraSpace(v6, v7, v10);
LABEL_8:
      v6 = a4;
      goto LABEL_9;
    }
    v14 = 0;
    v15 = 0xAAAAAAAAAAAAAAABuLL * ((v10 + 0x220000000000LL) >> 4);
    if ( v12 )
    {
      v16 = (_DWORD *)(v10 + 32);
      do
      {
        MiZeroPhysicalPage(a3, v15, 0LL, (unsigned __int8)BYTE2(*v16) >> 6);
        ++v14;
        v16 += 12;
        ++v15;
      }
      while ( v14 < v12 );
      v4 = a2;
      v7 = a3;
      goto LABEL_8;
    }
LABEL_9:
    v10 = *(_QWORD *)v10;
    result = v4 + 112;
    *(_QWORD *)(v4 + 104) -= v12;
    v5 = v17;
  }
  return result;
}
