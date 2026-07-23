/*
 * XREFs of MiActOnPartitionNodePages @ 0x14068A054
 * Callers:
 *     MiClearPartitionPageBitMap @ 0x14068AE74 (MiClearPartitionPageBitMap.c)
 *     MiFreePartitionNodePages @ 0x14068B574 (MiFreePartitionNodePages.c)
 *     MiInsertPartitionPages @ 0x14068BA00 (MiInsertPartitionPages.c)
 *     MiReturnPartitionPagesToParent @ 0x14068C3BC (MiReturnPartitionPagesToParent.c)
 *     MiHotAddPartitionMemory @ 0x1407FC9F4 (MiHotAddPartitionMemory.c)
 *     MiMakePartitionMemoryBlock @ 0x1407FCD8C (MiMakePartitionMemoryBlock.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1407FCF90 (MiUpdatePartitionLargePfnBitMap.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140219EE0 (MiUpdateLargePageBitMap.c)
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     RtlClearBitsEx @ 0x1402920E0 (RtlClearBitsEx.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiHotRemoveHugeRange @ 0x140671710 (MiHotRemoveHugeRange.c)
 *     MiSetHugeRangePartitionId @ 0x140672D78 (MiSetHugeRangePartitionId.c)
 *     MiMoveBadPageChargesCrossPartition @ 0x14068478C (MiMoveBadPageChargesCrossPartition.c)
 *     MiFreePartitionPageRun @ 0x14068B600 (MiFreePartitionPageRun.c)
 *     MiSplitPfnBitMapsForPartitionHierarchy @ 0x14068C5C4 (MiSplitPfnBitMapsForPartitionHierarchy.c)
 *     MiTransferPartitionPageRun @ 0x14068C62C (MiTransferPartitionPageRun.c)
 *     MiUpdatePartitionChildPageCounts @ 0x14068CA34 (MiUpdatePartitionChildPageCounts.c)
 *     MiAddPhysicalMemoryChunks @ 0x1407E8F14 (MiAddPhysicalMemoryChunks.c)
 *     MiHotAddHugeRange @ 0x1407EB5AC (MiHotAddHugeRange.c)
 *     MiHotRemovePartitionPageRun @ 0x1407FCCF8 (MiHotRemovePartitionPageRun.c)
 */

void __fastcall MiActOnPartitionNodePages(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int16 **a4)
{
  unsigned int v5; // r13d
  __int64 v6; // r9
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned __int64 *v9; // rbx
  unsigned __int64 v10; // r14
  ULONG_PTR v11; // r14
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r8
  _QWORD *v18; // rdi
  __int64 i; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r11
  _QWORD *v24; // r8
  __int64 v25; // r9
  _QWORD *j; // rax
  unsigned __int64 v27; // r9
  __int64 v28; // rcx
  unsigned __int64 v29; // r14
  unsigned __int64 k; // rax
  unsigned __int64 *v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // r15
  int v34; // ecx
  ULONG_PTR v35; // r15
  ULONG_PTR *v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r8
  ULONG *v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rdi
  ULONG_PTR v42; // r13
  ULONG_PTR CurrentIrql; // rax
  __int64 v44; // r12
  __int64 v45; // rbx
  __int64 v46; // r12
  unsigned __int8 v47; // bl
  _QWORD *m; // rdi
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  unsigned __int64 *v51; // r12
  _QWORD *v52; // r13
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // rdx
  _QWORD **v55; // rax
  _QWORD *v56; // rcx
  _QWORD *v57; // rcx
  unsigned __int64 v58; // rdx
  __int64 *v59; // rcx
  char v60; // r10
  __int64 v61; // r8
  __int64 *v62; // r9
  bool v63; // zf
  bool n; // zf
  __int64 v65; // rdx
  _QWORD *v66; // rbx
  unsigned __int16 *v67; // rdx
  bool v68; // r8
  unsigned __int16 *v69; // rax
  signed __int64 v70; // rbx
  int v71; // r8d
  int v72; // edx
  int v73; // ecx
  int v74; // edx
  int v75; // ecx
  __int64 v76; // rbx
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // r8
  int v79; // eax
  __m128i v80; // xmm0
  _QWORD *v81; // [rsp+38h] [rbp-40h] BYREF
  ULONG_PTR v82; // [rsp+40h] [rbp-38h]
  int v83; // [rsp+48h] [rbp-30h]
  ULONG_PTR v84; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 *v85; // [rsp+58h] [rbp-20h]
  ULONG_PTR v86; // [rsp+60h] [rbp-18h] BYREF
  unsigned __int64 v87; // [rsp+68h] [rbp-10h]
  int v91; // [rsp+D8h] [rbp+60h]

  v86 = 0LL;
  v84 = 0LL;
  v5 = a2;
  v91 = 0;
  v6 = a3;
  v7 = a1;
  *((_DWORD *)a4 + 6) = 0;
  if ( a2 <= 3 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    if ( (v8 & 0x4000000000000000LL) != 0 )
    {
      v91 = 1;
      *(_QWORD *)(a1 + 24) = v8 & 0xBFFFFFFFFFFFFFFFuLL;
    }
  }
  v9 = (unsigned __int64 *)(a1 + 32);
  v10 = 0LL;
  v85 = (unsigned __int64 *)(a1 + 32);
  while ( 1 )
  {
    if ( *(__int64 *)(v7 + 24) >= 0 )
    {
      v14 = *v9;
      v15 = v9[1];
      v16 = v10 & -(__int64)(v10 < v14);
      v17 = v14 - 1;
      while ( 1 )
      {
        v83 = 0;
        if ( v17 - v16 == -1LL )
          goto LABEL_9;
        v18 = (_QWORD *)(v15 + 8 * (v16 >> 6));
        for ( i = ~*v18 | ((1LL << (v16 & 0x3F)) - 1); i == -1; i = ~*v18 )
        {
          if ( (unsigned __int64)++v18 > v15 + 8 * (v17 >> 6) )
            goto LABEL_9;
        }
        _BitScanForward64(&v20, ~i);
        v12 = v20 + ((__int64)((__int64)v18 - v15) >> 3 << 6);
        v83 = v20;
        if ( v12 > v17 )
        {
LABEL_9:
          v12 = -1LL;
        }
        else if ( v12 != -1LL )
        {
          break;
        }
        if ( !v16 )
          break;
        v21 = v10 + 1;
        if ( v10 + 1 > v14 )
          v21 = v14;
        v17 = v21 - 1;
        v16 = 0LL;
      }
      v5 = a2;
      if ( v12 < v10 || v12 == -1LL )
        return;
      v13 = 0LL;
      v22 = *(_QWORD *)(v7 + 32);
      if ( v22 <= v12 )
        goto LABEL_39;
      v23 = v15 + 8 * ((v22 - 1) >> 6);
      v24 = (_QWORD *)(v15 + 8 * (v12 >> 6));
      v25 = ((1LL << (v12 & 0x3F)) - 1) | *v24;
      for ( j = v24 + 1; ; ++j )
      {
        v27 = ~v25;
        if ( v27 )
          break;
        if ( (unsigned __int64)j > v23 )
          goto LABEL_28;
        v25 = *++v24;
      }
      _BitScanForward64((unsigned __int64 *)&v28, v27);
      v29 = (unsigned int)v28 + ((__int64)((__int64)v24 - v15) >> 3 << 6);
      if ( v29 > v22 )
      {
LABEL_28:
        v29 = *(_QWORD *)(v7 + 32);
        goto LABEL_38;
      }
      for ( k = ~(v27 | ((1LL << v28) - 1)); !k; k = *v31 )
      {
        v31 = v24 + 1;
        if ( (unsigned __int64)(v24 + 1) > v23 )
        {
          k = 64LL;
          goto LABEL_35;
        }
        ++v24;
      }
      _BitScanForward64(&k, k);
LABEL_35:
      v32 = k + ((__int64)((__int64)v24 - v15) >> 3 << 6);
      if ( v32 > v22 )
        v32 = *(_QWORD *)(v7 + 32);
      v13 = v32 - v29;
LABEL_38:
      if ( !v13 )
LABEL_39:
        v29 = *(_QWORD *)(v7 + 32);
      v6 = a3;
      v9 = (unsigned __int64 *)(v7 + 32);
      v11 = v29 - v12;
    }
    else
    {
      v11 = *v9;
      v12 = 0LL;
      v13 = 0LL;
    }
    v33 = *(_QWORD *)(v7 + 24);
    v82 = v11;
    v34 = 0;
    v87 = v13 + v12 + v11;
    v35 = v12 + (v33 & 0x3FFFFFFFFFFFFFFFLL);
    if ( v5 - 11 > 1 )
    {
      if ( v35 > qword_140E2DD20 || ((*(_QWORD *)(48 * v35 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
        v34 = 1;
      switch ( v5 )
      {
        case 7u:
          goto LABEL_151;
        case 8u:
          v36 = (ULONG_PTR *)&a4[8][8 * ((_QWORD)a4[5] + 1)];
          *v36 = v35;
          v36[1] = v11;
          goto LABEL_151;
        case 0u:
          MiFreePartitionPageRun(v34, v35, v11, v6, v91);
          goto LABEL_151;
      }
    }
    if ( ((v5 - 1) & 0xFFFFFFFD) != 0 )
      break;
    if ( v34 )
    {
      MiHotRemoveHugeRange(v35, v11, 1);
      v79 = 0;
    }
    else
    {
      v79 = MiHotRemovePartitionPageRun(v35, v11, v5, v91, v6);
    }
    *((_DWORD *)a4 + 6) = v79;
    if ( v79 < 0 )
      return;
    RtlClearBitsEx((__int64)v9, v12, v11);
    *(_QWORD *)(v7 + 24) &= ~0x8000000000000000uLL;
LABEL_151:
    v80 = (__m128i)v11;
    v10 = v87;
    *(__m128i *)(a4 + 5) = _mm_add_epi64(
                             _mm_unpacklo_epi64((__m128i)1uLL, v80),
                             _mm_loadu_si128((const __m128i *)(a4 + 5)));
    if ( v10 >= *v9 )
      return;
    v6 = a3;
  }
  switch ( v5 )
  {
    case 4u:
      if ( !v34 )
      {
        v37 = (v35 + 511) & 0xFFFFFFFFFFFFFE00uLL;
        v38 = (v37 + v11) & 0xFFFFFFFFFFFFFE00uLL;
        if ( v37 < v38 )
          MiUpdateLargePageBitMap((unsigned __int64)*a4, v37, v38 - v37, 1);
      }
      goto LABEL_151;
    case 5u:
      if ( !(unsigned int)MiSplitPfnBitMapsForPartitionHierarchy(*a4, v35, v11, v6) )
        *((_DWORD *)a4 + 6) = -1073741670;
      goto LABEL_151;
    case 6u:
      if ( !v34 )
        MiUpdateLargePageBitMap(
          (unsigned __int64)*a4,
          v35 & 0xFFFFFFFFFFFFFE00uLL,
          ((v35 + v11 + 511) & 0xFFFFFFFFFFFFFE00uLL) - (v35 & 0xFFFFFFFFFFFFFE00uLL),
          0);
      MiTransferPartitionPageRun(a4[1], *a4, v35, v11);
      goto LABEL_151;
    case 0xAu:
      if ( v34 )
      {
        MiSetHugeRangePartitionId((__int16 *)*a4, (__int64)a4[1], v35, v11);
      }
      else
      {
        v39 = (ULONG *)a4[1];
        if ( v39 != &MiSystemPartition )
          MiUpdateLargePageBitMap((unsigned __int64)v39, v35, v11, 0);
        v40 = **a4;
        v41 = 48 * v35 - 0x220000000000LL;
        v42 = v41 + 48 * v11;
        CurrentIrql = KeGetCurrentIrql();
        v82 = CurrentIrql;
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
        v44 = v40;
        v45 = v41 + 24;
        v46 = v44 << 43;
        do
        {
          LODWORD(v81) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v45, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx((unsigned int *)&v81);
            while ( *(__int64 *)v45 < 0 );
          }
          if ( (*(_DWORD *)(v45 + 8) & 0x40000000) != 0 )
            MiMoveBadPageChargesCrossPartition(v41, (__int64)a4[1], (__int64)*a4);
          *(_QWORD *)(v45 + 16) = v46 ^ (v46 ^ *(_QWORD *)(v45 + 16)) & 0xFFE007FFFFFFFFFFuLL;
          _InterlockedAnd64((volatile signed __int64 *)v45, 0x7FFFFFFFFFFFFFFFuLL);
          v41 += 48LL;
          v45 += 48LL;
        }
        while ( v41 != v42 );
        v47 = v82;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v82);
        __writecr8(v47);
        MiUpdatePartitionChildPageCounts(*a4, a4[1], v35, v11);
        v5 = a2;
        v7 = a1;
        v9 = v85;
      }
      goto LABEL_151;
  }
  if ( v5 != 2 && v5 - 11 > 1 )
  {
    if ( v5 == 13 )
    {
      __debugbreak();
    }
    else
    {
      *((_QWORD *)*a4 + 2314) -= v11;
      *((_BYTE *)*a4 + 12) = 1;
      m = (_QWORD *)*((_QWORD *)*a4 + 3);
      if ( !m )
        goto LABEL_91;
      v49 = *(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      do
      {
        v50 = m[3] & 0x3FFFFFFFFFFFFFFFLL;
        if ( v49 >= v50 )
        {
          if ( v49 < m[4] + v50 )
            goto LABEL_91;
          m = (_QWORD *)m[1];
        }
        else
        {
          m = (_QWORD *)*m;
        }
      }
      while ( m );
      do
      {
LABEL_91:
        v51 = m + 4;
        v81 = m;
        v52 = m + 3;
        v53 = v11;
        v54 = v35 - (m[3] & 0x3FFFFFFFFFFFFFFFLL);
        if ( m[4] - v54 <= v11 )
          v53 = m[4] - v54;
        RtlClearBitsEx((__int64)(m + 4), v54, v53);
        v35 += v53;
        *v52 &= ~0x8000000000000000uLL;
        v11 -= v53;
        if ( v11 )
        {
          v55 = (_QWORD **)m[1];
          v56 = m;
          if ( v55 )
          {
            v57 = *v55;
            for ( m = (_QWORD *)m[1]; v57; v57 = (_QWORD *)*v57 )
              m = v57;
          }
          else
          {
            while ( 1 )
            {
              m = (_QWORD *)(m[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !m || (_QWORD *)*m == v56 )
                break;
              v56 = m;
            }
          }
        }
        v58 = *v51;
        if ( !*v51 )
          continue;
        if ( v58 <= 1 )
        {
          if ( v58 != 1 || _bittest64((const signed __int64 *)v51[1], 0) )
            continue;
LABEL_114:
          v66 = v81;
          RtlAvlRemoveNode((unsigned __int64 *)*a4 + 3, (__int64)v81);
          v67 = a4[4];
          v68 = 0;
          if ( !v67 )
            goto LABEL_121;
          while ( 1 )
          {
            if ( (*v52 & 0x3FFFFFFFFFFFFFFFuLL) >= (*((_QWORD *)v67 + 3) & 0x3FFFFFFFFFFFFFFFuLL) )
            {
              v69 = (unsigned __int16 *)*((_QWORD *)v67 + 1);
              if ( !v69 )
              {
                v68 = 1;
LABEL_121:
                RtlAvlInsertNodeEx((unsigned __int64 *)a4 + 4, (unsigned __int64)v67, v68, v66);
                goto LABEL_122;
              }
            }
            else
            {
              v69 = *(unsigned __int16 **)v67;
              if ( !*(_QWORD *)v67 )
              {
                v68 = 0;
                goto LABEL_121;
              }
            }
            v67 = v69;
          }
        }
        v59 = (__int64 *)v51[1];
        v60 = v58 - 1;
        v61 = *v59;
        v62 = &v59[(v58 - 1) >> 6];
        if ( v59 == v62 )
        {
          v63 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v58)) & v61) == 0;
        }
        else
        {
          for ( n = v61 == 0; ; n = v65 == 0 )
          {
            if ( !n )
              goto LABEL_122;
            v65 = *++v59;
            if ( v59 == v62 )
              break;
          }
          v63 = (v65 & (0xFFFFFFFFFFFFFFFFuLL >> ~v60)) == 0;
        }
        if ( v63 )
          goto LABEL_114;
LABEL_122:
        ;
      }
      while ( v11 );
      v11 = v82;
      v5 = a2;
      v7 = a1;
      v9 = v85;
    }
    goto LABEL_151;
  }
  v70 = v11 << 12;
  v63 = *((_BYTE *)a4 + 17) == 0;
  v84 = v11 << 12;
  if ( v63 )
  {
    v86 = v35 << 12;
    if ( v5 == 2 )
    {
      v71 = 0;
      v72 = (v91 + 128) << 9;
    }
    else
    {
      v71 = 1;
      v72 = 128;
      if ( v5 != 11 )
        v72 = 0x20000;
    }
    v73 = v72 | 0x400;
    if ( !*((_BYTE *)a4 + 16) )
      v73 = v72;
    v74 = v73 | 0x800;
    if ( (v6 & 0x40) == 0 )
      v74 = v73;
    v75 = v74 | 0x80000;
    if ( (*((_DWORD *)*a4 + 1) & 0x80u) == 0 )
      v75 = v74;
    MiAddPhysicalMemoryChunks((unsigned int)*a4, (unsigned int)&v86, (unsigned int)&v84, (unsigned int)a4[7], v75, v71);
    v70 = v84;
  }
  else
  {
    if ( v91 && *((_DWORD *)a4 + 5) == 2 )
      *((_DWORD *)a4 + 5) = 1;
    MiHotAddHugeRange((unsigned int)*a4, v35, v11, *((unsigned __int8 *)a4 + 16), *((_DWORD *)a4 + 5), 0);
  }
  v76 = v70 / 4096;
  if ( !*((_BYTE *)a4 + 17) && *a4 != (unsigned __int16 *)&MiSystemPartition )
  {
    v77 = (v35 + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v78 = (v77 + v76) & 0xFFFFFFFFFFFFFE00uLL;
    if ( v77 < v78 )
      MiUpdateLargePageBitMap((unsigned __int64)&MiSystemPartition, v77, v78 - v77, 1);
  }
  if ( v76 == v11 )
  {
    v9 = (unsigned __int64 *)(v7 + 32);
    goto LABEL_151;
  }
  *((_DWORD *)a4 + 6) = -1073741823;
  RtlClearBitsEx(v7 + 32, v12 + v76, *(_QWORD *)(v7 + 32) - v12 - v76);
  if ( v76 )
    a4[5] = (unsigned __int16 *)((char *)a4[5] + 1);
  *(_QWORD *)(v7 + 24) &= ~0x8000000000000000uLL;
  a4[6] = (unsigned __int16 *)((char *)a4[6] + v76);
}
