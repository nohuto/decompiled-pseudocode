/*
 * XREFs of MiMakeLargePageTable @ 0x1404F5A48
 * Callers:
 *     MiCreateSystemPageTable @ 0x14038EDA0 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiTransformValidPteInPlace @ 0x14038D668 (MiTransformValidPteInPlace.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiDemotePfnListChain @ 0x14069341C (MiDemotePfnListChain.c)
 */

__int64 __fastcall MiMakeLargePageTable(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r14
  _QWORD *v6; // rdi
  unsigned int v7; // r9d
  __int64 v8; // r10
  unsigned __int64 LeafVa; // r11
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r10
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // ebp
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // r14
  unsigned __int64 ValidPte; // rbx
  unsigned int v25; // ecx
  __int64 v26; // rax
  __int64 result; // rax
  __int64 ContainingPageTable; // [rsp+30h] [rbp-58h] BYREF
  __int64 v29; // [rsp+38h] [rbp-50h]
  __int64 v30; // [rsp+40h] [rbp-48h]
  int v31; // [rsp+90h] [rbp+8h]
  unsigned int v33; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 184);
  v29 = v3;
  if ( (*(_DWORD *)(v3 + 128) & 0x80u) == 0 || a3 != 2 && a3 != 1 )
    return 0LL;
  v6 = (_QWORD *)a2;
  LeafVa = MiGetLeafVa(a2);
  v10 = v7;
  v30 = v7;
  v11 = MiPageSizes[v7] << 12;
  if ( ((v11 - 1) & LeafVa) != 0 )
    return 0LL;
  if ( v11 + LeafVa - 1 > *(_QWORD *)(v8 + 48) )
    return 0LL;
  v12 = (__int64 *)(v3 + 24LL * v7);
  v13 = *v12;
  if ( (__int64 *)*v12 == v12 )
  {
    if ( !v7 )
      return 0LL;
    MiDemotePfnListChain(v3, v7);
    v13 = *v12;
    if ( (__int64 *)*v12 == v12 )
      return 0LL;
  }
  if ( *(__int64 **)(v13 + 8) != v12 || (v14 = *(_QWORD *)v13, *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13) )
    __fastfail(3u);
  *v12 = v14;
  *(_QWORD *)(v14 + 8) = v12;
  --v12[2];
  v15 = 0xAAAAAAAAAAAAAAABuLL * ((v13 + 0x220000000000LL) >> 4);
  ContainingPageTable = MiGetContainingPageTable(a2);
  v17 = v16 + 48 * ContainingPageTable;
  v33 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v33);
    while ( *(__int64 *)(v13 + 24) < 0 );
  }
  *(_QWORD *)(v13 + 8) = a2;
  *(_QWORD *)(v13 + 16) = MiMakeDemandZeroPte(4);
  v18 = ContainingPageTable;
  v31 = *(_DWORD *)(v13 + 32);
  BYTE2(v31) = BYTE2(v31) & 0xF8 | 6;
  *(_DWORD *)(v13 + 32) = v31;
  MiSetPfnContainingFrame(v13, v18);
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v20 = 0;
  v21 = MiPtesToSupportLargePageSizes[v10];
  v22 = 0LL;
  if ( v21 )
  {
    v23 = v21;
    do
    {
      ValidPte = MiMakeValidPte((unsigned __int64)v6, v15, -2080374780);
      if ( (*v6 & 1) != 0 )
      {
        MiTransformValidPteInPlace((ULONG_PTR)v6, (__int64)v6, ValidPte, 0x60u, a3);
      }
      else
      {
        v25 = v20 + 1;
        if ( *v6 )
          v25 = v20;
        v20 = v25;
        v19 = v22 + 1;
        if ( (*v6 & 0xC00LL) == 0x800 )
          v19 = v22;
        v22 = v19;
        if ( _bittest64(&MiFlags, 0x24u) )
        {
          if ( (ValidPte & 0x20) == 0 )
          {
            v19 = 0x4000000000LL;
            if ( (unsigned __int64)v6 >= 0xFFFFF6C000000000uLL )
              MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v6, ValidPte, 128LL);
          }
        }
        *v6 = ValidPte;
      }
      ++v15;
      ++v6;
      --v23;
    }
    while ( v23 );
    v3 = v29;
  }
  if ( v22 | v20 )
  {
    LODWORD(ContainingPageTable) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx((unsigned int *)&ContainingPageTable);
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    if ( v22 )
    {
      v26 = *(_QWORD *)(v17 + 24);
      v19 = v26 + v22;
      *(_QWORD *)(v17 + 24) = (v26 + v22) ^ (v26 ^ (v26 + v22)) & 0xC000000000000000uLL;
    }
    if ( v20 )
      MiIncreaseUsedPtes(v19, a2, v20, 3LL);
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  result = 1LL;
  *(_QWORD *)(v3 + 112) += MiPageSizes[v30];
  return result;
}
