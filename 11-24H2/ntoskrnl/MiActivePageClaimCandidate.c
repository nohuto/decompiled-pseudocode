/*
 * XREFs of MiActivePageClaimCandidate @ 0x140306540
 * Callers:
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 *     MiPfnsWorthTrying @ 0x140305B00 (MiPfnsWorthTrying.c)
 *     MiCheckContiguityTradeEligible @ 0x140680D3C (MiCheckContiguityTradeEligible.c)
 * Callees:
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiGetPfnPageSizeIndex @ 0x1403070C0 (MiGetPfnPageSizeIndex.c)
 *     MiGetBaseResidentPage @ 0x140307100 (MiGetBaseResidentPage.c)
 *     MiHyperPage @ 0x140308718 (MiHyperPage.c)
 *     MiRequestIoPageMdlCacheRelease @ 0x14043D1D8 (MiRequestIoPageMdlCacheRelease.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x140463848 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiActivePageClaimCandidate(__int64 a1, unsigned __int64 a2, char a3, int a4, int a5, _DWORD *a6)
{
  int v7; // r10d
  unsigned __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rsi
  unsigned __int8 v12; // bp
  ULONG_PTR v13; // r13
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
  __int64 v26; // rdx
  int SystemRegionType; // ecx
  __int64 v28; // r8
  unsigned __int64 v29; // rax
  int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 BaseResidentPage; // r12
  int PfnPageSizeIndex; // eax
  int v35; // ecx
  _DWORD v36[18]; // [rsp+20h] [rbp-48h] BYREF
  int v38; // [rsp+78h] [rbp+10h] BYREF
  int v39; // [rsp+80h] [rbp+18h]

  v7 = a3 & 1;
  v39 = v7;
  v9 = a2;
  v10 = a1;
  v11 = 1LL;
  v12 = 17;
  v13 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  v14 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  if ( (*(_DWORD *)(a2 + 32) & 0x8000000) != 0 )
  {
    if ( a5 )
      ++dword_140EF4E8C;
    else
      ++dword_140EF502C;
    return v11;
  }
  if ( (*(_QWORD *)(a2 + 40) & 0x10000000000LL) != 0 )
  {
    if ( (a3 & 1) != 0 )
    {
      BaseResidentPage = MiGetBaseResidentPage(a2, a2);
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
      if ( BaseResidentPage != v9 )
        _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v10 = a1;
    }
    else
    {
      v36[0] = 0;
      v38 = 0;
      PfnPageSizeIndex = MiGetPfnPageSizeIndexUnsynchronized(a2, v36, &v38);
    }
    if ( PfnPageSizeIndex != 3 )
      return MiPageSizes[PfnPageSizeIndex];
    v7 = v39;
  }
  if ( *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) != v10 )
  {
    if ( a5 )
      ++dword_140EF4E70;
    else
      ++dword_140EF4FB0;
    return v11;
  }
  if ( (a4 & 0x410000) != 0x410000 && (a3 & 2) == 0 && *(_BYTE *)(v10 + 16102) )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 2 )
      {
        v7 = v39;
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
    if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) != 0 || v14 == qword_140E2DA68 || v14 == qword_140E2DA70 )
    {
      if ( a5 )
        ++dword_140EF4ECC;
      else
        ++dword_140EF501C;
      return v11;
    }
    if ( v7 && _bittest64((const signed __int64 *)(v9 + 40), 0x35u) )
    {
      if ( a5 )
        ++dword_140EF4EC0;
      else
        ++dword_140EF5020;
      return v11;
    }
    v21 = *(_DWORD *)(v9 + 32);
    if ( (unsigned __int16)v21 > 1u || (unsigned __int16)v21 > (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
    {
      if ( a5 )
        ++dword_140EF4ED0;
      else
        ++dword_140EF5028;
      return v11;
    }
    if ( (*(_QWORD *)v9 & 1) == 0 )
    {
      if ( a5 )
        ++dword_140EF4ED4;
      else
        ++dword_140EF5024;
      return v11;
    }
    if ( (*(_QWORD *)(v9 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v9 + 8) > 0 )
    {
      *a6 |= 2u;
      if ( a5 )
        ++dword_140EF4ED8;
      else
        ++dword_140EF5030;
      return v11;
    }
    return 0LL;
  }
  if ( v14 == -8LL )
  {
    if ( a5 )
      ++dword_140EF4EE4;
    else
      ++dword_140EF5060;
    return v11;
  }
  if ( v14 >= 0xFFFF800000000000uLL && byte_140E389A8[((v14 >> 39) & 0x1FF) - 256] == 4 )
  {
    if ( a5 )
      ++dword_140EF4EF0;
    else
      ++dword_140EF5074;
    return v11;
  }
  if ( ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 1 || (*(_QWORD *)(v9 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
  {
    if ( a5 )
      ++dword_140EF4EF4;
    else
      ++dword_140EF5014;
    return v11;
  }
  if ( v14 < 0xFFFFF68000000000uLL || v14 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    ++dword_140EF507C;
    return v11;
  }
  v15 = (__int64)(v14 << 25) >> 16;
  if ( (*(_QWORD *)v9 & 1) != 0 )
  {
    if ( PsInitialSystemProcess && v13 == PsInitialSystemProcess->DirectoryTableBase >> 12 )
    {
      if ( a5 )
        ++dword_140EF4F10;
      else
        ++dword_140EF4FE8;
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
            ++dword_140EF4F14;
          else
            ++dword_140EF4FEC;
        }
        else
        {
          if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
            return 0LL;
          if ( a5 )
            ++dword_140EF4F18;
          else
            ++dword_140EF4FF4;
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
            ++dword_140EF4F2C;
          else
            ++dword_140EF5044;
          return 1LL;
        }
      }
      else
      {
        if ( a5 )
          ++dword_140EF4F1C;
        else
          ++dword_140EF5078;
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
            ++dword_140EF4F20;
          else
            ++dword_140EF4FF0;
        }
        else
        {
          if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
            return 0LL;
          if ( a5 )
            ++dword_140EF4F24;
          else
            ++dword_140EF4FF8;
        }
      }
      else if ( (unsigned int)MiHyperPage(v9, v31, v32) )
      {
        if ( (unsigned __int16)*(_DWORD *)(v9 + 32) <= 1u )
          return 0LL;
        if ( a5 )
          ++dword_140EF4F28;
        else
          ++dword_140EF5080;
      }
      else if ( a5 )
      {
        ++dword_140EF4F30;
      }
      else
      {
        ++dword_140EF5048;
      }
      return v11;
    }
    if ( (*(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFLL) == 0 )
    {
      if ( a5 )
        ++dword_140EF4F34;
      else
        ++dword_140EF5010;
      return v11;
    }
    v19 = *(_DWORD *)(v9 + 32);
    if ( (unsigned __int16)v19 > 1u || (unsigned __int16)v19 > (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
    {
      if ( !v7 )
        MiRequestIoPageMdlCacheRelease(v13);
      v30 = *(_DWORD *)(v9 + 32);
      if ( (unsigned __int16)v30 > 1u || (unsigned __int16)v30 > (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
      {
        if ( a5 )
          ++dword_140EF4F38;
        else
          ++dword_140EF4FFC;
        return v11;
      }
    }
    return 0LL;
  }
  if ( (unsigned int)MiHyperPage(v9, a2, 0x140000000uLL) )
  {
    v35 = *(_DWORD *)(v9 + 32);
    if ( (unsigned __int16)v35 > 1u || (unsigned __int16)v35 > (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
    {
      if ( a5 )
        ++dword_140EF4F2C;
      else
        ++dword_140EF5044;
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
      && v15 < *(_QWORD *)(v24 + 184) + (unsigned int)dword_140E3728C * (unsigned __int64)*(unsigned int *)(v24 + 4) )
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
          ++dword_140EF4F00;
        else
          ++dword_140EF5004;
      }
      else if ( SystemRegionType == 8 )
      {
        if ( a5 )
          ++dword_140EF4F04;
        else
          ++dword_140EF5008;
      }
      else if ( v15 < 0xFFFFF68000000000uLL || v15 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( a5 )
          ++dword_140EF4F0C;
        else
          ++dword_140EF5000;
      }
      else if ( a5 )
      {
        ++dword_140EF4F08;
      }
      else
      {
        ++dword_140EF500C;
      }
    }
    else if ( a5 )
    {
      ++dword_140EF4EFC;
    }
    else
    {
      ++dword_140EF5034;
    }
    return v11;
  }
  if ( (*(_BYTE *)(v9 + 35) & 0x10) != 0 )
  {
    if ( a5 )
    {
LABEL_204:
      ++dword_140EF4EDC;
      return v11;
    }
LABEL_203:
    ++dword_140EF5058;
    return v11;
  }
  if ( (unsigned __int16)*(_DWORD *)(v9 + 32) > 1u )
  {
    if ( a5 )
      goto LABEL_204;
    goto LABEL_203;
  }
  if ( (byte_140E2DAC9 & 1) == 0 )
  {
    if ( a5 )
      ++dword_140EF4EE0;
    else
      ++dword_140EF505C;
    return v11;
  }
  if ( v39 )
    goto LABEL_75;
  ++dword_140EF5088;
  v12 = MiSafeLockPage(v13, v26, v28);
  if ( v12 == 17 )
  {
    ++dword_140EF506C;
    return v11;
  }
  if ( (*(_BYTE *)(v9 + 34) & 7) == 6
    && (unsigned __int16)*(_DWORD *)(v9 + 32) <= 1u
    && (*(_QWORD *)(v9 + 40) & 0x10000000000LL) == 0
    && (*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) == v14
    && (unsigned int)MiGetSystemRegionType((__int64)(v14 << 25) >> 16) == 4 )
  {
LABEL_75:
    v29 = MI_READ_PTE_LOCK_FREE(v14);
    if ( (v29 & 1) != 0 && v13 == ((v29 >> 12) & 0xFFFFFFFFFFLL) )
    {
      if ( (v29 & 0x200) != 0 )
      {
        if ( a5 )
          ++dword_140EF4EEC;
        else
          ++dword_140EF5068;
      }
      else
      {
        v11 = 0LL;
      }
    }
    else if ( a5 )
    {
      ++dword_140EF4EE8;
    }
    else
    {
      ++dword_140EF5064;
    }
    if ( v12 == 17 )
      return v11;
  }
  else
  {
    ++dword_140EF506C;
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
