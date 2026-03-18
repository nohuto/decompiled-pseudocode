/*
 * XREFs of MiPfnsWorthTrying @ 0x14021F790
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiFindRebuildCandidate @ 0x14021F550 (MiFindRebuildCandidate.c)
 *     MiDefragmentSlabWorker @ 0x14067B5D0 (MiDefragmentSlabWorker.c)
 *     MmIdentifyPhysicalMemory @ 0x1407DBCA8 (MmIdentifyPhysicalMemory.c)
 *     MiScrubNode @ 0x140A337C8 (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x140ABD000 (MmRelocatePfnList.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiIsPageOnBadList @ 0x14021E29C (MiIsPageOnBadList.c)
 *     MiActivePageClaimCandidate @ 0x1402201D0 (MiActivePageClaimCandidate.c)
 *     MiSafeLockPageAtDpc @ 0x140220D38 (MiSafeLockPageAtDpc.c)
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     MiGetBaseResidentPage @ 0x140220E10 (MiGetBaseResidentPage.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiPfnLargeBitSet @ 0x140406750 (MiPfnLargeBitSet.c)
 *     MiRequestIoPageMdlCacheRelease @ 0x14043CFBC (MiRequestIoPageMdlCacheRelease.c)
 *     MiFindNextLowerLargePageCandidate @ 0x14044D8C0 (MiFindNextLowerLargePageCandidate.c)
 *     MiClusterVadFull @ 0x1404545A4 (MiClusterVadFull.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  unsigned __int64 v25; // rcx
  unsigned __int8 v26; // al
  unsigned __int8 v27; // r14
  __int64 BaseResidentPage; // rsi
  unsigned int i; // r9d
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rbp
  __int64 v33; // r11
  __int64 v34; // r8
  unsigned int v35; // r9d
  __int64 j; // rdx
  __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rbp
  __int64 v41; // rax
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // rbp
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // rbp
  unsigned __int64 v48; // rax
  int v49; // eax
  unsigned __int64 NextLowerLargePageCandidate; // rax
  unsigned __int64 v51; // [rsp+30h] [rbp-48h]
  unsigned __int64 v53; // [rsp+88h] [rbp+10h]

  v8 = a1;
  if ( (MiZeroCont & 2) != 0 )
    memset_0(MiCont, 0, 0x354uLL);
  v9 = a5;
  v10 = *v8;
  v11 = -1LL;
  v51 = -1LL;
  v12 = a2 + 48 * a3;
  *a5 = 0;
  v53 = 0LL;
  while ( 1 )
  {
    v13 = 0xFFFFDE0000000000uLL;
    v14 = 0xAAAAAAAAAAAAAAABuLL;
    if ( a2 >= v12 )
      return 0LL;
    if ( ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FF) != v10 )
    {
      v46 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
      v47 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 + 0x220000000000LL) >> 4);
      if ( (a4 & 0x410000) != 0x410000 )
      {
        v49 = MiPfnLargeBitSet(&MiSystemPartition, v46, 0xFFFFDE0000000000uLL, 0xAAAAAAAAAAAAAAABuLL);
        if ( v49 != 3 )
        {
          v46 &= ~(MiPageSizes[v49] - 1);
          NextLowerLargePageCandidate = MiFindNextLowerLargePageCandidate(&MiSystemPartition, v46);
          if ( NextLowerLargePageCandidate < v46 )
          {
            ++dword_140EF4CF8;
            ++dword_140EF4CD0;
            return v47 - NextLowerLargePageCandidate;
          }
          ++dword_140EF4CF4;
        }
      }
      ++dword_140EF4CD0;
      return v47 - v46;
    }
    PfnPageSizeIndex = 3;
    v16 = HIWORD(*(_DWORD *)(a2 + 32)) & 7;
    if ( (*(_QWORD *)(a2 + 40) & 0x10000000000LL) != 0 )
    {
      v16 = *(_BYTE *)(a2 + 34) & 7;
      CurrentIrql = KeGetCurrentIrql();
      v25 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
      if ( (unsigned __int8)CurrentIrql < 2u )
        v26 = MiSafeLockPage(v25, CurrentIrql, 0xFFFFDE0000000000uLL, 0xAAAAAAAAAAAAAAABuLL);
      else
        v26 = MiSafeLockPageAtDpc(v25, CurrentIrql, 0xFFFFDE0000000000uLL, 0xAAAAAAAAAAAAAAABuLL);
      v27 = v26;
      if ( v26 == 17 )
        goto LABEL_24;
      if ( (*(_QWORD *)(a2 + 40) & 0x10000000000LL) != 0 )
      {
        BaseResidentPage = MiGetBaseResidentPage(a2);
        v16 = *(_BYTE *)(BaseResidentPage + 34) & 7;
        PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
        if ( BaseResidentPage != a2 )
          _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      MiUnlockPage(a2, v27);
      v11 = v51;
      v9 = a5;
      v14 = 0xAAAAAAAAAAAAAAABuLL;
      v8 = a1;
      if ( PfnPageSizeIndex == 3 )
        goto LABEL_24;
      if ( v16 == 6 )
      {
        v42 = ~(MiPageSizes[PfnPageSizeIndex] - 1) & (0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
        v43 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 + 0x220000000000LL) >> 4);
        v44 = MiFindNextLowerLargePageCandidate(a1, v42);
        if ( v44 < v42 )
        {
          ++dword_140EF4CD8;
          return v43 - v44;
        }
        else
        {
          ++dword_140EF4CD4;
          return v43 - v42;
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
          ++dword_140EF4D6C;
          return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 - a2) >> 4);
        }
        goto LABEL_21;
      }
      if ( (unsigned __int16)*(_DWORD *)(a2 + 32) )
      {
        MiRequestIoPageMdlCacheRelease(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
        if ( (unsigned __int16)*(_DWORD *)(a2 + 32) )
        {
          ++dword_140EF4D6C;
          goto LABEL_84;
        }
      }
    }
    else
    {
      if ( *(char *)(a2 + 35) < 0 )
      {
        ++dword_140EF4D70;
        return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 - a2) >> 4);
      }
      v19 = a4 & 0x410000;
      v20 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
      if ( v16 <= 4 )
      {
        if ( v19 != 4259840
          && byte_140E3C8A6
          && *(_BYTE *)(qword_140E3CF00 + 2 * (v20 >> 9))
          && *(_BYTE *)(qword_140E3CF00 + 2 * (v20 >> 9)) != 10 )
        {
          ++dword_140EF4D60;
          v13 = 0xFFFFDE0000000000uLL;
          goto LABEL_80;
        }
        if ( (unsigned __int16)*(_DWORD *)(a2 + 32) )
        {
          MiRequestIoPageMdlCacheRelease(v20);
          if ( (unsigned __int16)*(_DWORD *)(a2 + 32) )
          {
            ++dword_140EF4CEC;
            goto LABEL_84;
          }
        }
        if ( (a4 & 0x4000000) == 0 && (*(_QWORD *)(a2 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(a2 + 8) > 0 )
        {
          ++dword_140EF4CEC;
          return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 - a2) >> 4);
        }
      }
      else
      {
        if ( v19 != 4259840 && (v20 & 0xFFFFFFFFFFFFFE00uLL) != v11 )
        {
          v51 = v20 & 0xFFFFFFFFFFFFFE00uLL;
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
            v41 = MiPageSizes[i];
            ++dword_140EF4CF4;
            v40 = v12 - 48 * (v20 & -v41) + 0x220000000000LL;
            return 0xAAAAAAAAAAAAAAABuLL * (v40 >> 4);
          }
        }
LABEL_14:
        v18 = 2;
        if ( v16 != 6 )
        {
          ++dword_140EF4CF0;
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
                ++dword_140EF4D50;
                return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 - a2) >> 4);
              }
              if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (a4 & 0x8000000) == 0 )
              {
                ++dword_140EF4D04;
                return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 - a2) >> 4);
              }
              goto LABEL_21;
            }
            if ( (a4 & 0x8000000) == 0 || a3 == 16 )
            {
              v21 = 16LL;
LABEL_20:
              v53 = v21;
              if ( v20 == (v20 & ~(v21 - 1)) && 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 - a2) >> 4) >= v21 )
                v17 = 1;
              goto LABEL_21;
            }
            if ( a3 == 512 )
            {
              v21 = 512LL;
              goto LABEL_20;
            }
            v53 = 0LL;
          }
LABEL_21:
          active = MiActivePageClaimCandidate((_DWORD)v8, a2, v18, a4, 0, (__int64)v9);
          if ( active )
          {
            v30 = ~(active - 1) & (0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
            v31 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 + 0x220000000000LL) >> 4);
            if ( active >= 0x200 )
            {
              v48 = MiFindNextLowerLargePageCandidate(v8, v30);
              if ( v48 >= v30 )
              {
                ++dword_140EF4CE0;
              }
              else
              {
                ++dword_140EF4CDC;
                v30 = v48;
              }
            }
            return v31 - v30;
          }
          if ( (a4 & 8) != 0 )
          {
            ++dword_140EF4D00;
            goto LABEL_84;
          }
          if ( v17 && (unsigned int)MiClusterVadFull(a2, v53, 0LL) )
          {
            ++dword_140EF4DA4;
            goto LABEL_84;
          }
          goto LABEL_24;
        }
        if ( (a4 & 8) != 0 )
        {
          ++dword_140EF4D00;
          return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v12 - a2) >> 4);
        }
        if ( (*(_QWORD *)a2 & 0xFFFFFFFFFFELL) != 0 )
        {
          if ( 8 * (*(_QWORD *)a2 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL) == -32LL )
          {
            ++dword_140EF4CFC;
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
    v11 = v51;
    v9 = a5;
  }
  if ( MiIsPageOnBadList(a2) )
  {
    ++dword_140EF4CE4;
    return v14 * ((__int64)(v12 - a2) >> 4);
  }
  if ( *(_QWORD *)(a2 + 8) == -8LL )
  {
    ++dword_140EF4CE8;
    return v14 * ((__int64)(v12 - a2) >> 4);
  }
  if ( (a4 & 0x410000) != 0x410000 && (unsigned int)MiGetPfnSlabType(a2) != 9 )
  {
    ++dword_140EF4D5C;
LABEL_80:
    v39 = 3 * ((v14 * ((__int64)(a2 - v13) >> 4)) & 0xFFFFFFFFFFFFFE00uLL);
    return v14 * ((__int64)(v12 - 16 * v39 - v13) >> 4);
  }
  if ( PfnPageSizeIndex != 3 )
  {
LABEL_75:
    v37 = v14 * ((__int64)(a2 - v13) >> 4);
    v38 = MiPageSizes[PfnPageSizeIndex];
    if ( v38 >= 0x200 )
    {
      if ( (a4 & 0x2000000) != 0 )
      {
LABEL_77:
        ++dword_140EF4D74;
        v39 = 3 * (v37 & -(__int64)v38);
        return v14 * ((__int64)(v12 - 16 * v39 - v13) >> 4);
      }
    }
    else if ( (a4 & 0x1000000) != 0 )
    {
      goto LABEL_77;
    }
    v45 = v38 - (v37 & (v38 - 1));
    if ( v45 > v14 * ((__int64)(v12 - a2) >> 4) )
      v45 = v14 * ((__int64)(v12 - a2) >> 4);
    a2 += 48 * v45 - 48;
    goto LABEL_24;
  }
  if ( (*(_QWORD *)a2 & 1) != 0 )
    goto LABEL_24;
  v34 = v14 * ((__int64)(a2 - v13) >> 4);
  v35 = v33;
LABEL_67:
  if ( v35 >= 2 )
    goto LABEL_24;
  for ( j = v33; ; ++j )
  {
    if ( j > 3 )
    {
      ++v35;
      goto LABEL_67;
    }
    if ( (PVOID)v34 == *(&qword_140E37100 + 7 * v35 + j) )
      break;
  }
  ++dword_140EF4D90;
LABEL_84:
  v40 = v12 - a2;
  return 0xAAAAAAAAAAAAAAABuLL * (v40 >> 4);
}
