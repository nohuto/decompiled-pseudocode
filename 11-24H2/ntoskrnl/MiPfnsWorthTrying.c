/*
 * XREFs of MiPfnsWorthTrying @ 0x140305B00
 * Callers:
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     MiFindRebuildCandidate @ 0x1403058C0 (MiFindRebuildCandidate.c)
 *     MiDefragmentSlabWorker @ 0x140686E60 (MiDefragmentSlabWorker.c)
 *     MmIdentifyPhysicalMemory @ 0x1407EBB48 (MmIdentifyPhysicalMemory.c)
 *     MmRelocatePfnList @ 0x140932988 (MmRelocatePfnList.c)
 *     MiScrubNode @ 0x140A38DD4 (MiScrubNode.c)
 * Callees:
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiIsPageOnBadList @ 0x14030492C (MiIsPageOnBadList.c)
 *     MiActivePageClaimCandidate @ 0x140306540 (MiActivePageClaimCandidate.c)
 *     MiGetPfnPageSizeIndex @ 0x1403070C0 (MiGetPfnPageSizeIndex.c)
 *     MiGetBaseResidentPage @ 0x140307100 (MiGetBaseResidentPage.c)
 *     MiSafeLockPageAtDpc @ 0x1403072A0 (MiSafeLockPageAtDpc.c)
 *     MiPfnLargeBitSet @ 0x14040DC80 (MiPfnLargeBitSet.c)
 *     MiRequestIoPageMdlCacheRelease @ 0x14043D1D8 (MiRequestIoPageMdlCacheRelease.c)
 *     MiFindNextLowerLargePageCandidate @ 0x14044D47C (MiFindNextLowerLargePageCandidate.c)
 *     MiClusterVadFull @ 0x140454E04 (MiClusterVadFull.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiPfnsWorthTrying(__int16 *a1, unsigned __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  __int16 *v8; // r14
  _DWORD *v9; // r10
  __int16 v10; // r13
  __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  int PfnPageSizeIndex; // r15d
  unsigned int v16; // edi
  int v17; // esi
  int v18; // ecx
  int v19; // eax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdx
  unsigned __int64 active; // rax
  __int64 CurrentIrql; // rdx
  ULONG_PTR v25; // rcx
  char v26; // al
  __int64 v27; // rdx
  unsigned __int8 v28; // r14
  __int64 BaseResidentPage; // rsi
  unsigned int i; // r9d
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rbp
  __int64 v34; // r11
  __int64 v35; // r8
  unsigned int v36; // r9d
  __int64 j; // rdx
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rbp
  __int64 v42; // rax
  unsigned __int64 v43; // rsi
  unsigned __int64 v44; // rbp
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // rbp
  unsigned __int64 v49; // rax
  int v50; // eax
  unsigned __int64 NextLowerLargePageCandidate; // rax
  unsigned __int64 v52; // [rsp+30h] [rbp-48h]
  unsigned __int64 v54; // [rsp+88h] [rbp+10h]

  v8 = a1;
  if ( (MiZeroCont & 2) != 0 )
    memset_0(MiCont, 0, 0x354uLL);
  v9 = a5;
  v10 = *v8;
  v11 = -1LL;
  v52 = -1LL;
  v12 = a2 + 48 * a3;
  *a5 = 0;
  v54 = 0LL;
  while ( 1 )
  {
    v13 = 0xFFFFDE0000000000uLL;
    v14 = 0xAAAAAAAAAAAAAAABuLL;
    if ( a2 >= v12 )
      return 0LL;
    if ( ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FF) != v10 )
    {
      v47 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
      v48 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 + 0x220000000000LL) >> 4);
      if ( (a4 & 0x410000) != 0x410000 )
      {
        v50 = MiPfnLargeBitSet(&MiSystemPartition, v47);
        if ( v50 != 3 )
        {
          v47 &= ~(MiPageSizes[v50] - 1);
          NextLowerLargePageCandidate = MiFindNextLowerLargePageCandidate(&MiSystemPartition, v47);
          if ( NextLowerLargePageCandidate < v47 )
          {
            ++dword_140EF4FD8;
            ++dword_140EF4FB0;
            return v48 - NextLowerLargePageCandidate;
          }
          ++dword_140EF4FD4;
        }
      }
      ++dword_140EF4FB0;
      return v48 - v47;
    }
    PfnPageSizeIndex = 3;
    v16 = HIWORD(*(_DWORD *)(a2 + 32)) & 7;
    if ( (*(_QWORD *)(a2 + 40) & 0x10000000000LL) != 0 )
    {
      v16 = *(_BYTE *)(a2 + 34) & 7;
      CurrentIrql = KeGetCurrentIrql();
      v25 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
      if ( (unsigned __int8)CurrentIrql < 2u )
        v26 = MiSafeLockPage(v25, CurrentIrql, 0xFFFFDE0000000000uLL);
      else
        v26 = MiSafeLockPageAtDpc(v25, CurrentIrql, 0xFFFFDE0000000000uLL, 0xAAAAAAAAAAAAAAABuLL);
      v28 = v26;
      if ( v26 == 17 )
        goto LABEL_24;
      if ( (*(_QWORD *)(a2 + 40) & 0x10000000000LL) != 0 )
      {
        BaseResidentPage = MiGetBaseResidentPage(a2, v27);
        v16 = *(_BYTE *)(BaseResidentPage + 34) & 7;
        PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
        if ( BaseResidentPage != a2 )
          _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      MiUnlockPage(a2, v28);
      v11 = v52;
      v9 = a5;
      v14 = 0xAAAAAAAAAAAAAAABuLL;
      v8 = a1;
      if ( PfnPageSizeIndex == 3 )
        goto LABEL_24;
      if ( v16 == 6 )
      {
        v43 = ~(MiPageSizes[PfnPageSizeIndex] - 1) & (0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
        v44 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 + 0x220000000000LL) >> 4);
        v45 = MiFindNextLowerLargePageCandidate(a1, v43);
        if ( v45 < v43 )
        {
          ++dword_140EF4FB8;
          return v44 - v45;
        }
        else
        {
          ++dword_140EF4FB4;
          return v44 - v43;
        }
      }
      v13 = 0xFFFFDE0000000000uLL;
    }
    if ( v16 == 5 )
      break;
    if ( v16 <= 1 )
    {
      if ( PfnPageSizeIndex == 3 )
        goto LABEL_24;
      goto LABEL_75;
    }
    v17 = 0;
    v18 = 0;
    if ( (a4 & 0x10000000) != 0 )
    {
      if ( v16 != 2 && v16 != 7 )
      {
        if ( v16 != 6
          || (*(_BYTE *)(a2 + 34) & 0x10) != 0
          || (unsigned __int16)*(_DWORD *)(a2 + 32) != 1
          || ((*(_QWORD *)(a2 + 40) >> 60) & 7) == 2
          || (*(_DWORD *)(a2 + 32) & 0x8000000) != 0
          || (*(_QWORD *)a2 & 1) == 0 )
        {
          ++dword_140EF504C;
          return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 - a2) >> 4);
        }
        goto LABEL_21;
      }
      if ( (unsigned __int16)*(_DWORD *)(a2 + 32) )
      {
        MiRequestIoPageMdlCacheRelease(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
        if ( (unsigned __int16)*(_DWORD *)(a2 + 32) )
        {
          ++dword_140EF504C;
          goto LABEL_84;
        }
      }
    }
    else
    {
      if ( *(char *)(a2 + 35) < 0 )
      {
        ++dword_140EF5050;
        return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 - a2) >> 4);
      }
      v19 = a4 & 0x410000;
      v20 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
      if ( v16 <= 4 )
      {
        if ( v19 != 4259840
          && byte_140E3CAE6
          && *(_BYTE *)(qword_140E3D140 + 2 * (v20 >> 9))
          && *(_BYTE *)(qword_140E3D140 + 2 * (v20 >> 9)) != 10 )
        {
          ++dword_140EF5040;
          v13 = 0xFFFFDE0000000000uLL;
          goto LABEL_80;
        }
        if ( (unsigned __int16)*(_DWORD *)(a2 + 32) )
        {
          MiRequestIoPageMdlCacheRelease(v20);
          if ( (unsigned __int16)*(_DWORD *)(a2 + 32) )
          {
            ++dword_140EF4FCC;
            goto LABEL_84;
          }
        }
        if ( (a4 & 0x4000000) == 0 && (*(_QWORD *)(a2 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(a2 + 8) > 0 )
        {
          ++dword_140EF4FCC;
          return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 - a2) >> 4);
        }
      }
      else
      {
        if ( v19 != 4259840 && (v20 & 0xFFFFFFFFFFFFFE00uLL) != v11 )
        {
          v52 = v20 & 0xFFFFFFFFFFFFFE00uLL;
          if ( *((_BYTE *)v8 + 16102) )
          {
            for ( i = 0; ; ++i )
            {
              if ( i >= 2 )
              {
                v9 = a5;
                goto LABEL_14;
              }
              if ( *(_QWORD *)&v8[8 * i + 8164]
                && _bittest64(*(const signed __int64 **)&v8[8 * i + 8168], v20 >> MiLargePageShifts[i]) )
              {
                break;
              }
            }
            v42 = MiPageSizes[i];
            ++dword_140EF4FD4;
            v41 = v12 - 48 * (v20 & -v42) + 0x220000000000LL;
            return 0xAAAAAAAAAAAAAAABuLL * (v41 >> 4);
          }
        }
LABEL_14:
        v18 = 2;
        if ( v16 != 6 )
        {
          ++dword_140EF4FD0;
          return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 - a2) >> 4);
        }
        if ( ((*(_QWORD *)(a2 + 40) >> 60) & 7) != 2 )
        {
          if ( (a4 & 0x800000) != 0 )
          {
            if ( *(__int64 *)(a2 + 40) < 0 )
            {
              if ( (*(_QWORD *)(a2 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(a2 + 8) > 0 )
              {
                *v9 |= 2u;
                ++dword_140EF5030;
                return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 - a2) >> 4);
              }
              if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (a4 & 0x8000000) == 0 )
              {
                ++dword_140EF4FE4;
                return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 - a2) >> 4);
              }
              goto LABEL_21;
            }
            if ( (a4 & 0x8000000) == 0 || a3 == 16 )
            {
              v21 = 16LL;
LABEL_20:
              v54 = v21;
              if ( v20 == (v20 & ~(v21 - 1)) && 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 - a2) >> 4) >= v21 )
                v17 = 1;
              goto LABEL_21;
            }
            if ( a3 == 512 )
            {
              v21 = 512LL;
              goto LABEL_20;
            }
            v54 = 0LL;
          }
LABEL_21:
          active = MiActivePageClaimCandidate((_DWORD)v8, a2, v18, a4, 0, (__int64)v9);
          if ( active )
          {
            v31 = ~(active - 1) & (0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
            v32 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 + 0x220000000000LL) >> 4);
            if ( active >= 0x200 )
            {
              v49 = MiFindNextLowerLargePageCandidate(v8, v31);
              if ( v49 >= v31 )
              {
                ++dword_140EF4FC0;
              }
              else
              {
                ++dword_140EF4FBC;
                v31 = v49;
              }
            }
            return v32 - v31;
          }
          if ( (a4 & 8) != 0 )
          {
            ++dword_140EF4FE0;
            goto LABEL_84;
          }
          if ( v17 && (unsigned int)MiClusterVadFull(a2, v54, 0LL) )
          {
            ++dword_140EF5084;
            goto LABEL_84;
          }
          goto LABEL_24;
        }
        if ( (a4 & 8) != 0 )
        {
          ++dword_140EF4FE0;
          return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 - a2) >> 4);
        }
        if ( (*(_QWORD *)a2 & 0xFFFFFFFFFFELL) != 0 )
        {
          if ( 8 * (*(_QWORD *)a2 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL) == -32LL )
          {
            ++dword_140EF4FDC;
            return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 - a2) >> 4);
          }
        }
        else
        {
          *v9 |= 1u;
        }
      }
    }
LABEL_24:
    v8 = a1;
    a2 += 48LL;
    v11 = v52;
    v9 = a5;
  }
  if ( MiIsPageOnBadList(a2) )
  {
    ++dword_140EF4FC4;
    return v14 * ((__int64)(v12 - a2) >> 4);
  }
  if ( *(_QWORD *)(a2 + 8) == -8LL )
  {
    ++dword_140EF4FC8;
    return v14 * ((__int64)(v12 - a2) >> 4);
  }
  if ( (a4 & 0x410000) != 0x410000 && (unsigned int)MiGetPfnSlabType(a2) != 9 )
  {
    ++dword_140EF503C;
LABEL_80:
    v40 = 3 * ((v14 * ((__int64)(a2 - v13) >> 4)) & 0xFFFFFFFFFFFFFE00uLL);
    return v14 * ((__int64)(v12 - 16 * v40 - v13) >> 4);
  }
  if ( PfnPageSizeIndex != 3 )
  {
LABEL_75:
    v38 = v14 * ((__int64)(a2 - v13) >> 4);
    v39 = MiPageSizes[PfnPageSizeIndex];
    if ( v39 >= 0x200 )
    {
      if ( (a4 & 0x2000000) != 0 )
      {
LABEL_77:
        ++dword_140EF5054;
        v40 = 3 * (v38 & -(__int64)v39);
        return v14 * ((__int64)(v12 - 16 * v40 - v13) >> 4);
      }
    }
    else if ( (a4 & 0x1000000) != 0 )
    {
      goto LABEL_77;
    }
    v46 = v39 - (v38 & (v39 - 1));
    if ( v46 > v14 * ((__int64)(v12 - a2) >> 4) )
      v46 = v14 * ((__int64)(v12 - a2) >> 4);
    a2 += 48 * v46 - 48;
    goto LABEL_24;
  }
  if ( (*(_QWORD *)a2 & 1) != 0 )
    goto LABEL_24;
  v35 = v14 * ((__int64)(a2 - v13) >> 4);
  v36 = v34;
LABEL_67:
  if ( v36 >= 2 )
    goto LABEL_24;
  for ( j = v34; ; ++j )
  {
    if ( j > 3 )
    {
      ++v36;
      goto LABEL_67;
    }
    if ( (PVOID)v35 == *(&qword_140E37340[7 * v36] + j) )
      break;
  }
  ++dword_140EF5070;
LABEL_84:
  v41 = v12 - a2;
  return 0xAAAAAAAAAAAAAAABuLL * (v41 >> 4);
}
