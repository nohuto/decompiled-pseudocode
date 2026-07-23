/*
 * XREFs of MiActivePageClaimCandidate @ 0x140310420
 * Callers:
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 *     MiPfnsWorthTrying @ 0x14030F9E0 (MiPfnsWorthTrying.c)
 *     MiCheckContiguityTradeEligible @ 0x140681EE8 (MiCheckContiguityTradeEligible.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiGetBaseResidentPage @ 0x140310FE0 (MiGetBaseResidentPage.c)
 *     MiHyperPage @ 0x1403125F8 (MiHyperPage.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x14041DC14 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiRequestIoPageMdlCacheRelease @ 0x140431478 (MiRequestIoPageMdlCacheRelease.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiActivePageClaimCandidate(__int64 a1, unsigned __int64 a2, char a3, int a4, int a5, _DWORD *a6)
{
  int v7; // r10d
  unsigned __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rsi
  unsigned __int8 v12; // bp
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned int j; // r8d
  int v19; // edx
  int v21; // ecx
  __int64 i; // r9
  __int64 k; // rdx
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  int SystemRegionType; // ecx
  unsigned __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 BaseResidentPage; // r12
  int PfnPageSizeIndex; // eax
  int v33; // ecx
  _DWORD v34[18]; // [rsp+20h] [rbp-48h] BYREF
  int v36; // [rsp+78h] [rbp+10h] BYREF
  int v37; // [rsp+80h] [rbp+18h]

  v7 = a3 & 1;
  v37 = v7;
  v9 = a2;
  v10 = a1;
  v11 = 1LL;
  v12 = 17;
  v13 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  v14 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  if ( (*(_DWORD *)(a2 + 32) & 0x8000000) != 0 )
  {
    if ( a5 )
      ++dword_140EF50AC;
    else
      ++dword_140EF524C;
    return v11;
  }
  if ( (*(_QWORD *)(a2 + 40) & 0x10000000000LL) != 0 )
  {
    if ( (a3 & 1) != 0 )
    {
      BaseResidentPage = MiGetBaseResidentPage(a2);
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
      if ( BaseResidentPage != v9 )
        _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v10 = a1;
    }
    else
    {
      v34[0] = 0;
      v36 = 0;
      PfnPageSizeIndex = MiGetPfnPageSizeIndexUnsynchronized(a2, v34, &v36);
    }
    if ( PfnPageSizeIndex != 3 )
      return MiPageSizes[PfnPageSizeIndex];
    v7 = v37;
  }
  if ( *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) != v10 )
  {
    if ( a5 )
      ++dword_140EF5090;
    else
      ++dword_140EF51D0;
    return v11;
  }
  if ( (a4 & 0x410000) != 0x410000 && (a3 & 2) == 0 && *(_BYTE *)(v10 + 16102) )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 2 )
      {
        v7 = v37;
        goto LABEL_6;
      }
      if ( *(_QWORD *)(v10 + 16LL * (unsigned int)i + 16328) )
      {
        a2 = v13 >> MiLargePageShifts[i];
        if ( _bittest64(*(const signed __int64 **)(v10 + 16LL * (unsigned int)i + 16336), a2) )
          break;
      }
    }
    return MiPageSizes[i];
  }
LABEL_6:
  if ( *(__int64 *)(v9 + 40) < 0 )
  {
    if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) != 0 || v14 == qword_140E2DBA8 || v14 == qword_140E2DBB0 )
    {
      if ( a5 )
        ++dword_140EF50EC;
      else
        ++dword_140EF523C;
      return v11;
    }
    if ( v7 && _bittest64((const signed __int64 *)(v9 + 40), 0x35u) )
    {
      if ( a5 )
        ++dword_140EF50E0;
      else
        ++dword_140EF5240;
      return v11;
    }
    v21 = *(_DWORD *)(v9 + 32);
    if ( (unsigned __int16)v21 > 1u || (unsigned __int16)v21 > (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
    {
      if ( a5 )
        ++dword_140EF50F0;
      else
        ++dword_140EF5248;
      return v11;
    }
    if ( (*(_QWORD *)v9 & 1) == 0 )
    {
      if ( a5 )
        ++dword_140EF50F4;
      else
        ++dword_140EF5244;
      return v11;
    }
    if ( (*(_QWORD *)(v9 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v9 + 8) > 0 )
    {
      *a6 |= 2u;
      if ( a5 )
        ++dword_140EF50F8;
      else
        ++dword_140EF5250;
      return v11;
    }
    return 0LL;
  }
  if ( v14 == -8LL )
  {
    if ( a5 )
      ++dword_140EF5104;
    else
      ++dword_140EF5280;
    return v11;
  }
  if ( v14 >= 0xFFFF800000000000uLL && byte_140E38AE8[((v14 >> 39) & 0x1FF) - 256] == 4 )
  {
    if ( a5 )
      ++dword_140EF5110;
    else
      ++dword_140EF5294;
    return v11;
  }
  if ( ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 1 || (*(_QWORD *)(v9 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
  {
    if ( a5 )
      ++dword_140EF5114;
    else
      ++dword_140EF5234;
    return v11;
  }
  if ( v14 < 0xFFFFF68000000000uLL || v14 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    ++dword_140EF529C;
    return v11;
  }
  v15 = (__int64)(v14 << 25) >> 16;
  if ( (*(_QWORD *)v9 & 1) != 0 )
  {
    if ( PsInitialSystemProcess && v13 == PsInitialSystemProcess->DirectoryTableBase >> 12 )
    {
      if ( a5 )
        ++dword_140EF5130;
      else
        ++dword_140EF5208;
      return v11;
    }
    v16 = 0xFFFFF6FB40000000uLL;
    v17 = 0xFFFFF6FB5FFFFFF8uLL;
    for ( j = 0; j < 3; ++j )
    {
      if ( v14 >= v16 && v14 <= v17 )
      {
        if ( (unsigned __int16)*(_DWORD *)(v9 + 32) > 1u )
        {
          if ( a5 )
            ++dword_140EF5134;
          else
            ++dword_140EF520C;
        }
        else
        {
          if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
            return 0LL;
          if ( a5 )
            ++dword_140EF5138;
          else
            ++dword_140EF5214;
        }
        return v11;
      }
      v16 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    if ( (*(_QWORD *)(v9 + 40) & 0xFFFFFFFFFFLL) == v13 )
    {
      v11 = 0LL;
      if ( v14 == 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( (unsigned __int16)*(_DWORD *)(v9 + 32) > 1u )
        {
          if ( a5 )
            ++dword_140EF514C;
          else
            ++dword_140EF5264;
          return 1LL;
        }
      }
      else
      {
        if ( a5 )
          ++dword_140EF513C;
        else
          ++dword_140EF5298;
        return 1LL;
      }
      return v11;
    }
    if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 )
    {
      if ( (unsigned int)MiGetSystemRegionType(v15) == 5 )
      {
        if ( (unsigned __int16)*(_DWORD *)(v9 + 32) > 1u )
        {
          if ( a5 )
            ++dword_140EF5140;
          else
            ++dword_140EF5210;
        }
        else
        {
          if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
            return 0LL;
          if ( a5 )
            ++dword_140EF5144;
          else
            ++dword_140EF5218;
        }
      }
      else if ( (unsigned int)MiHyperPage(v9, v29, v30) )
      {
        if ( (unsigned __int16)*(_DWORD *)(v9 + 32) <= 1u )
          return 0LL;
        if ( a5 )
          ++dword_140EF5148;
        else
          ++dword_140EF52A0;
      }
      else if ( a5 )
      {
        ++dword_140EF5150;
      }
      else
      {
        ++dword_140EF5268;
      }
      return v11;
    }
    if ( (*(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFLL) == 0 )
    {
      if ( a5 )
        ++dword_140EF5154;
      else
        ++dword_140EF5230;
      return v11;
    }
    v19 = *(_DWORD *)(v9 + 32);
    if ( (unsigned __int16)v19 > 1u || (unsigned __int16)v19 > (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
    {
      if ( !v7 )
        MiRequestIoPageMdlCacheRelease(v13);
      v28 = *(_DWORD *)(v9 + 32);
      if ( (unsigned __int16)v28 > 1u || (unsigned __int16)v28 > (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
      {
        if ( a5 )
          ++dword_140EF5158;
        else
          ++dword_140EF521C;
        return v11;
      }
    }
    return 0LL;
  }
  if ( (unsigned int)MiHyperPage(v9, a2, 0x140000000uLL) )
  {
    v33 = *(_DWORD *)(v9 + 32);
    if ( (unsigned __int16)v33 > 1u || (unsigned __int16)v33 > (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
    {
      if ( a5 )
        ++dword_140EF514C;
      else
        ++dword_140EF5264;
      return v11;
    }
    return 0LL;
  }
  for ( k = 0LL; (unsigned int)k < *(_DWORD *)(v10 + 18520); k = (unsigned int)(k + 1) )
  {
    v24 = *(_QWORD *)(v10 + 8 * k + 18528);
    v25 = *(_QWORD *)(v24 + 184);
    if ( v25
      && v15 >= v25
      && v15 < *(_QWORD *)(v24 + 184) + (unsigned int)dword_140E373CC * (unsigned __int64)*(unsigned int *)(v24 + 4) )
    {
      return 0LL;
    }
  }
  SystemRegionType = MiGetSystemRegionType((__int64)(v14 << 25) >> 16);
  if ( SystemRegionType != 4 )
  {
    if ( v15 < MmPfnDatabase || v15 > MmPfnDatabase + (MxPfnAllocation << 12) )
    {
      if ( SystemRegionType == 11 )
      {
        if ( a5 )
          ++dword_140EF5120;
        else
          ++dword_140EF5224;
      }
      else if ( SystemRegionType == 8 )
      {
        if ( a5 )
          ++dword_140EF5124;
        else
          ++dword_140EF5228;
      }
      else if ( v15 < 0xFFFFF68000000000uLL || v15 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( a5 )
          ++dword_140EF512C;
        else
          ++dword_140EF5220;
      }
      else if ( a5 )
      {
        ++dword_140EF5128;
      }
      else
      {
        ++dword_140EF522C;
      }
    }
    else if ( a5 )
    {
      ++dword_140EF511C;
    }
    else
    {
      ++dword_140EF5254;
    }
    return v11;
  }
  if ( (*(_BYTE *)(v9 + 35) & 0x10) != 0 )
  {
    if ( a5 )
    {
LABEL_204:
      ++dword_140EF50FC;
      return v11;
    }
LABEL_203:
    ++dword_140EF5278;
    return v11;
  }
  if ( (unsigned __int16)*(_DWORD *)(v9 + 32) > 1u )
  {
    if ( a5 )
      goto LABEL_204;
    goto LABEL_203;
  }
  if ( (byte_140E2DC09 & 1) == 0 )
  {
    if ( a5 )
      ++dword_140EF5100;
    else
      ++dword_140EF527C;
    return v11;
  }
  if ( v37 )
    goto LABEL_75;
  ++dword_140EF52A8;
  v12 = MiSafeLockPage(v13);
  if ( v12 == 17 )
  {
    ++dword_140EF528C;
    return v11;
  }
  if ( (*(_BYTE *)(v9 + 34) & 7) == 6
    && (unsigned __int16)*(_DWORD *)(v9 + 32) <= 1u
    && (*(_QWORD *)(v9 + 40) & 0x10000000000LL) == 0
    && (*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) == v14
    && (unsigned int)MiGetSystemRegionType((__int64)(v14 << 25) >> 16) == 4 )
  {
LABEL_75:
    v27 = MI_READ_PTE_LOCK_FREE(v14);
    if ( (v27 & 1) != 0 && v13 == ((v27 >> 12) & 0xFFFFFFFFFFLL) )
    {
      if ( (v27 & 0x200) != 0 )
      {
        if ( a5 )
          ++dword_140EF510C;
        else
          ++dword_140EF5288;
      }
      else
      {
        v11 = 0LL;
      }
    }
    else if ( a5 )
    {
      ++dword_140EF5108;
    }
    else
    {
      ++dword_140EF5284;
    }
    if ( v12 == 17 )
      return v11;
  }
  else
  {
    ++dword_140EF528C;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v12 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
    __writecr8(v12);
  }
  return v11;
}
