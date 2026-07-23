/*
 * XREFs of MiZeroChainWorker @ 0x140314138
 * Callers:
 *     MiZeroInParallelWorker @ 0x140313F70 (MiZeroInParallelWorker.c)
 * Callees:
 *     MiZeroPhysicalPage @ 0x14024B990 (MiZeroPhysicalPage.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiZeroWithUltraSpace @ 0x140312E40 (MiZeroWithUltraSpace.c)
 *     MiZeroAndConvertPage @ 0x1403F8F1C (MiZeroAndConvertPage.c)
 */

__int64 __fastcall MiZeroChainWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  int v5; // edx
  __int64 v6; // r10
  __int64 v7; // r15
  __int64 result; // rax
  unsigned int v10; // esi
  __int64 v11; // rbx
  unsigned int v12; // r8d
  unsigned __int64 v13; // rbp
  unsigned int PfnPageSizeIndex; // eax
  unsigned int v15; // r12d
  __int64 v16; // rdi
  _DWORD *v17; // r15
  int v18; // [rsp+80h] [rbp+8h]

  v4 = a2;
  v5 = *(_DWORD *)(a1 + 20);
  v6 = a4;
  v7 = a3;
  v18 = v5;
  result = v4 + 112;
  v10 = (*(_DWORD *)(a1 + 16) >> 1) & 4;
  v11 = *(_QWORD *)(v4 + 112);
  while ( v11 != result )
  {
    v12 = 3;
    if ( (*(_QWORD *)(v11 + 40) & 0x10000000000LL) != 0 )
    {
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(v11);
      v6 = a4;
      v12 = PfnPageSizeIndex;
      v5 = v18;
    }
    v13 = MiPageSizes[v12];
    if ( v12 <= 2 && (*(_DWORD *)(a1 + 16) & 0x20) == 0 && (unsigned __int8)BYTE2(*(_DWORD *)(v11 + 32)) >> 6 != v5 )
    {
      MiZeroAndConvertPage(v7, v11, v12, v5, *(_DWORD *)(a1 + 16));
      goto LABEL_8;
    }
    if ( v6 )
    {
      MiZeroWithUltraSpace(v6, v7, v11, v10);
LABEL_8:
      v6 = a4;
      goto LABEL_9;
    }
    v15 = 0;
    v16 = 0xAAAAAAAAAAAAAAABuLL * ((v11 + 0x220000000000LL) >> 4);
    if ( v13 )
    {
      v17 = (_DWORD *)(v11 + 32);
      do
      {
        MiZeroPhysicalPage(a3, v16, 0, (unsigned __int8)BYTE2(*v17) >> 6);
        ++v15;
        v17 += 12;
        ++v16;
      }
      while ( v15 < v13 );
      v4 = a2;
      v7 = a3;
      goto LABEL_8;
    }
LABEL_9:
    v11 = *(_QWORD *)v11;
    result = v4 + 112;
    *(_QWORD *)(v4 + 104) -= v13;
    v5 = v18;
  }
  return result;
}
