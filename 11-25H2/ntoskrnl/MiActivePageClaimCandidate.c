/*
 * XREFs of MiActivePageClaimCandidate @ 0x1402201D0
 * Callers:
 *     MiPfnsWorthTrying @ 0x14021F790 (MiPfnsWorthTrying.c)
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 *     MiCheckContiguityTradeEligible @ 0x14067551C (MiCheckContiguityTradeEligible.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     MiGetBaseResidentPage @ 0x140220E10 (MiGetBaseResidentPage.c)
 *     MiHyperPage @ 0x14022201C (MiHyperPage.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1404337D0 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiRequestIoPageMdlCacheRelease @ 0x14043CFBC (MiRequestIoPageMdlCacheRelease.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiActivePageClaimCandidate(__int64 a1, unsigned __int64 a2, char a3, int a4, int a5, _DWORD *a6)
{
  int v7; // r10d
  unsigned __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rdi
  unsigned __int8 v12; // r14
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned int j; // ecx
  int v19; // edx
  int v21; // ecx
  __int64 i; // r9
  __int64 k; // rdx
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  int SystemRegionType; // ecx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 BaseResidentPage; // r13
  int PfnPageSizeIndex; // eax
  int v36; // ecx
  _DWORD v37[18]; // [rsp+20h] [rbp-48h] BYREF
  int v39; // [rsp+78h] [rbp+10h] BYREF
  int v40; // [rsp+80h] [rbp+18h]

  v7 = a3 & 1;
  v40 = v7;
  v9 = a2;
  v10 = a1;
  v11 = 1LL;
  v12 = 17;
  v13 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  v14 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  if ( (*(_DWORD *)(a2 + 32) & 0x8000000) != 0 )
  {
    if ( a5 )
      ++dword_140EF4BAC;
    else
      ++dword_140EF4D4C;
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
      v37[0] = 0;
      v39 = 0;
      PfnPageSizeIndex = MiGetPfnPageSizeIndexUnsynchronized(a2, v37, &v39);
    }
    if ( PfnPageSizeIndex != 3 )
      return MiPageSizes[PfnPageSizeIndex];
    v7 = v40;
  }
  if ( *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) != v10 )
  {
    if ( a5 )
      ++dword_140EF4B90;
    else
      ++dword_140EF4CD0;
    return v11;
  }
  if ( (a4 & 0x410000) != 0x410000 && (a3 & 2) == 0 && *(_BYTE *)(v10 + 16102) )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 2 )
      {
        v7 = v40;
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
    if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) != 0 || v14 == qword_140E2D828 || v14 == qword_140E2D830 )
    {
      if ( a5 )
        ++dword_140EF4BEC;
      else
        ++dword_140EF4D3C;
      return v11;
    }
    if ( v7 && _bittest64((const signed __int64 *)(v9 + 40), 0x35u) )
    {
      if ( a5 )
        ++dword_140EF4BE0;
      else
        ++dword_140EF4D40;
      return v11;
    }
    v21 = *(_DWORD *)(v9 + 32);
    if ( (unsigned __int16)v21 > 1u || (unsigned __int16)v21 > (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
    {
      if ( a5 )
        ++dword_140EF4BF0;
      else
        ++dword_140EF4D48;
      return v11;
    }
    if ( (*(_QWORD *)v9 & 1) == 0 )
    {
      if ( a5 )
        ++dword_140EF4BF4;
      else
        ++dword_140EF4D44;
      return v11;
    }
    if ( (*(_QWORD *)(v9 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v9 + 8) > 0 )
    {
      *a6 |= 2u;
      if ( a5 )
        ++dword_140EF4BF8;
      else
        ++dword_140EF4D50;
      return v11;
    }
    return 0LL;
  }
  if ( v14 == -8LL )
  {
    if ( a5 )
      ++dword_140EF4C04;
    else
      ++dword_140EF4D80;
    return v11;
  }
  if ( v14 >= 0xFFFF800000000000uLL && byte_140E38768[((v14 >> 39) & 0x1FF) - 256] == 4 )
  {
    if ( a5 )
      ++dword_140EF4C10;
    else
      ++dword_140EF4D94;
    return v11;
  }
  if ( ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 1 || (*(_QWORD *)(v9 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
  {
    if ( a5 )
      ++dword_140EF4C14;
    else
      ++dword_140EF4D34;
    return v11;
  }
  if ( v14 < 0xFFFFF68000000000uLL || v14 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    ++dword_140EF4D9C;
    return v11;
  }
  v15 = (__int64)(v14 << 25) >> 16;
  if ( (*(_QWORD *)v9 & 1) != 0 )
  {
    if ( PsInitialSystemProcess && v13 == PsInitialSystemProcess->DirectoryTableBase >> 12 )
    {
      if ( a5 )
        ++dword_140EF4C30;
      else
        ++dword_140EF4D08;
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
            ++dword_140EF4C34;
          else
            ++dword_140EF4D0C;
        }
        else
        {
          if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
            return 0LL;
          if ( a5 )
            ++dword_140EF4C38;
          else
            ++dword_140EF4D14;
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
            ++dword_140EF4C4C;
          else
            ++dword_140EF4D64;
          return 1LL;
        }
      }
      else
      {
        if ( a5 )
          ++dword_140EF4C3C;
        else
          ++dword_140EF4D98;
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
            ++dword_140EF4C40;
          else
            ++dword_140EF4D10;
        }
        else
        {
          if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
            return 0LL;
          if ( a5 )
            ++dword_140EF4C44;
          else
            ++dword_140EF4D18;
        }
      }
      else if ( (unsigned int)MiHyperPage(v9, v32, v33) )
      {
        if ( (unsigned __int16)*(_DWORD *)(v9 + 32) <= 1u )
          return 0LL;
        if ( a5 )
          ++dword_140EF4C48;
        else
          ++dword_140EF4DA0;
      }
      else if ( a5 )
      {
        ++dword_140EF4C50;
      }
      else
      {
        ++dword_140EF4D68;
      }
      return v11;
    }
    if ( (*(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFLL) == 0 )
    {
      if ( a5 )
        ++dword_140EF4C54;
      else
        ++dword_140EF4D30;
      return v11;
    }
    v19 = *(_DWORD *)(v9 + 32);
    if ( (unsigned __int16)v19 > 1u || (unsigned __int16)v19 > (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
    {
      if ( !v7 )
        MiRequestIoPageMdlCacheRelease(v13);
      v31 = *(_DWORD *)(v9 + 32);
      if ( (unsigned __int16)v31 > 1u || (unsigned __int16)v31 > (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
      {
        if ( a5 )
          ++dword_140EF4C58;
        else
          ++dword_140EF4D1C;
        return v11;
      }
    }
    return 0LL;
  }
  if ( (unsigned int)MiHyperPage(v9, a2, 0x140000000uLL) )
  {
    v36 = *(_DWORD *)(v9 + 32);
    if ( (unsigned __int16)v36 > 1u || (unsigned __int16)v36 > (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
    {
      if ( a5 )
        ++dword_140EF4C4C;
      else
        ++dword_140EF4D64;
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
      && v15 < *(_QWORD *)(v24 + 184) + (unsigned int)dword_140E3704C * (unsigned __int64)*(unsigned int *)(v24 + 4) )
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
          ++dword_140EF4C20;
        else
          ++dword_140EF4D24;
      }
      else if ( SystemRegionType == 8 )
      {
        if ( a5 )
          ++dword_140EF4C24;
        else
          ++dword_140EF4D28;
      }
      else if ( v15 < 0xFFFFF68000000000uLL || v15 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( a5 )
          ++dword_140EF4C2C;
        else
          ++dword_140EF4D20;
      }
      else if ( a5 )
      {
        ++dword_140EF4C28;
      }
      else
      {
        ++dword_140EF4D2C;
      }
    }
    else if ( a5 )
    {
      ++dword_140EF4C1C;
    }
    else
    {
      ++dword_140EF4D54;
    }
    return v11;
  }
  if ( (*(_BYTE *)(v9 + 35) & 0x10) != 0 )
  {
    if ( a5 )
    {
LABEL_204:
      ++dword_140EF4BFC;
      return v11;
    }
LABEL_203:
    ++dword_140EF4D78;
    return v11;
  }
  if ( (unsigned __int16)*(_DWORD *)(v9 + 32) > 1u )
  {
    if ( a5 )
      goto LABEL_204;
    goto LABEL_203;
  }
  if ( (byte_140E2D889 & 1) == 0 )
  {
    if ( a5 )
      ++dword_140EF4C00;
    else
      ++dword_140EF4D7C;
    return v11;
  }
  if ( v40 )
    goto LABEL_74;
  ++dword_140EF4DA8;
  v12 = MiSafeLockPage(v13, v26, v28, v29);
  if ( v12 == 17 )
  {
    ++dword_140EF4D8C;
    return v11;
  }
  if ( (*(_BYTE *)(v9 + 34) & 7) == 6
    && (unsigned __int16)*(_DWORD *)(v9 + 32) <= 1u
    && (*(_QWORD *)(v9 + 40) & 0x10000000000LL) == 0
    && (*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) == v14
    && (unsigned int)MiGetSystemRegionType((__int64)(v14 << 25) >> 16) == 4 )
  {
LABEL_74:
    v30 = MI_READ_PTE_LOCK_FREE(v14);
    if ( (v30 & 1) != 0 && v13 == ((v30 >> 12) & 0xFFFFFFFFFFLL) )
    {
      if ( (v30 & 0x200) != 0 )
      {
        if ( a5 )
          ++dword_140EF4C0C;
        else
          ++dword_140EF4D88;
      }
      else
      {
        v11 = 0LL;
      }
    }
    else if ( a5 )
    {
      ++dword_140EF4C08;
    }
    else
    {
      ++dword_140EF4D84;
    }
    if ( v12 == 17 )
      return v11;
  }
  else
  {
    ++dword_140EF4D8C;
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
