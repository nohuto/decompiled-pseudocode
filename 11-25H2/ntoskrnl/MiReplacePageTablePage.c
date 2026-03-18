/*
 * XREFs of MiReplacePageTablePage @ 0x14040B438
 * Callers:
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MmStealTopLevelPage @ 0x14040B140 (MmStealTopLevelPage.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x140211990 (MiGetUltraMapping.c)
 *     MiMakeProtectionPfnCompatible @ 0x140224530 (MiMakeProtectionPfnCompatible.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiCopyPfnEntryEx @ 0x1402C7CF0 (MiCopyPfnEntryEx.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiIsPdeOrAboveAccessible @ 0x14040AE10 (MiIsPdeOrAboveAccessible.c)
 *     MiReplaceActivePageTableLinks @ 0x14040BE10 (MiReplaceActivePageTableLinks.c)
 *     MiLockTransitionLeafPageEx @ 0x14040D774 (MiLockTransitionLeafPageEx.c)
 */

unsigned __int64 __fastcall MiReplacePageTablePage(unsigned __int64 a1)
{
  __int64 v1; // r12
  unsigned __int64 v3; // r9
  int v4; // ebp
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // r15
  unsigned __int64 v9; // rsi
  ULONG_PTR *v10; // r14
  int ProtectionPfnCompatible; // eax
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v13; // rbx
  _QWORD *v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // ebx
  __int64 v18; // rbx
  int v19; // esi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rbx
  int v24; // esi
  ULONG_PTR v25; // rbp
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // rsi
  int v33; // r14d
  unsigned __int64 v34; // rcx
  __int64 v35; // rbx
  int v36; // r11d
  __int64 v37; // rcx
  int v38; // ebx
  int v39; // ebx
  unsigned __int64 v40; // rcx
  int v41; // [rsp+20h] [rbp-A8h]
  int v42; // [rsp+24h] [rbp-A4h]
  unsigned __int64 v43; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v44; // [rsp+28h] [rbp-A0h]
  __int64 v45; // [rsp+38h] [rbp-90h]
  unsigned __int64 UltraMapping; // [rsp+40h] [rbp-88h]
  __int64 v47; // [rsp+48h] [rbp-80h]
  ULONG_PTR *v48; // [rsp+60h] [rbp-68h]
  int v50; // [rsp+D8h] [rbp+10h]
  int v51; // [rsp+D8h] [rbp+10h]
  int v52; // [rsp+E0h] [rbp+18h]
  int v53; // [rsp+E8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = v1;
  *(_DWORD *)(a1 + 56) = -1073741823;
  v43 = v3;
  v47 = v5;
  v45 = v1;
  v7 = 48 * v1 - 0x220000000000LL;
  v8 = 48 * v5 - 0x220000000000LL;
  v50 = 0;
  v52 = 0;
  v53 = 0;
  v41 = 0;
  if ( *(_DWORD *)(a1 + 64) == 1 )
  {
    result = *(_QWORD *)(a1 + 48);
    v40 = *(_QWORD *)(result + 1288);
    if ( !v40 )
      return result;
    result = (*(_QWORD *)(((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
    if ( result != v1 )
      return result;
  }
  if ( (*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFLL) == v1 )
  {
    v42 = 1;
    if ( *(_DWORD *)(a1 + 64) == 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL) >> 12;
      v45 = v6;
    }
  }
  else
  {
    v42 = 0;
  }
  v9 = v3;
  UltraMapping = MiGetUltraMapping(*(_QWORD *)(a1 + 16) + 96LL, 3uLL, 1LL, 4);
  v10 = (ULONG_PTR *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v48 = v10;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * v5 - 0x220000000000LL);
  ValidPte = MiMakeValidPte((unsigned __int64)v10, v5, ProtectionPfnCompatible | 0xA0000000);
  v13 = ValidPte;
  if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v10 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v10, ValidPte, 128);
  *v10 = v13;
  v14 = (_QWORD *)UltraMapping;
  do
  {
    while ( 1 )
    {
      v15 = MI_READ_PTE_LOCK_FREE(v9);
      v16 = v15;
      if ( (v15 & 1) != 0 )
        break;
      if ( (v15 & 0xC00) != 0x800 )
        goto LABEL_8;
      v34 = (__int64)(v9 << 25) >> 16;
      if ( v34 >= 0xFFFFF68000000000uLL && v34 <= 0xFFFFF6FFFFFFFFFFuLL && !MiIsPdeOrAboveAccessible(v9) )
      {
        dword_140EF4B18 += v36;
        goto LABEL_87;
      }
      v35 = MiLockTransitionLeafPageEx(v9);
      if ( v35 )
      {
        v16 = MI_READ_PTE_LOCK_FREE(v9);
        if ( (*(_QWORD *)(v35 + 40) & 0xFFFFFFFFFFLL) != v6 && (*(_QWORD *)(v35 + 40) & 0x10000000000LL) != 0 )
          ++v41;
        if ( (*(_BYTE *)(v35 + 34) & 0x20) != 0 )
        {
          ++dword_140EF4B14;
          _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_87;
        }
        ++v4;
LABEL_8:
        if ( v6 == v1 )
          goto LABEL_9;
        goto LABEL_45;
      }
    }
    ++v50;
    if ( (v15 & 0x80u) == 0LL )
    {
      v30 = (v15 >> 12) & 0xFFFFFFFFFFLL;
      if ( v30 == qword_140E37138 )
      {
        ++v53;
        goto LABEL_43;
      }
      if ( v30 > qword_140E2D9A0
        || ((*(_QWORD *)(48 * v30 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0
        || (*(_QWORD *)(48 * v30 - 0x21FFFFFFFFD8LL) & 0x10000000000LL) == 0 )
      {
        goto LABEL_43;
      }
    }
    ++v52;
LABEL_43:
    if ( v6 == v1 )
      goto LABEL_9;
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * ((__int64)(v9 - v43) >> 3));
LABEL_45:
    v16 &= -(__int64)((v16 & 1) != 0);
LABEL_9:
    *v14 = v16;
    v9 += 8LL;
    ++v14;
  }
  while ( (v9 & 0xFFF) != 0 );
  v17 = 0;
  if ( v4 )
  {
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v17 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
  }
  else
  {
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v17 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
  }
  v18 = *(_QWORD *)(v7 + 24);
  if ( (v42 || (unsigned __int16)v18 == (unsigned __int64)(unsigned int)(v4 - v53 - v41 - v52 + v50 + 1))
    && (unsigned __int16)*(_DWORD *)(v7 + 32) == 1
    && (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
  {
    v19 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v19 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    *(_QWORD *)(v8 + 24) = v18 ^ (v18 ^ *(_QWORD *)(v8 + 24)) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v20 = v43;
    v21 = v43;
    if ( v4 )
    {
      do
      {
        v22 = MI_READ_PTE_LOCK_FREE(v21);
        if ( (v22 & 1) == 0 && (v22 & 0xC00) == 0x800 )
        {
          if ( qword_140E2D940 )
          {
            if ( (v22 & 0x10) != 0 )
              v22 &= ~0x10uLL;
            else
              v22 &= ~qword_140E2D940;
          }
          v23 = 48 * ((v22 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          if ( (*(_QWORD *)(v23 + 40) & 0xFFFFFFFFFFLL) == v45 && v45 == v1 )
            MiSetPfnContainingFrame(v23, v47);
          --v4;
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        v21 += 8LL;
      }
      while ( v4 );
      v7 = 48 * v1 - 0x220000000000LL;
      v20 = v43;
    }
    v24 = v50;
    if ( v50 )
    {
      v25 = UltraMapping;
      v26 = v20 - UltraMapping;
      v44 = v26;
      do
      {
        v27 = MI_READ_PTE_LOCK_FREE(v26 + v25);
        v28 = v27;
        if ( (v27 & 1) != 0 )
        {
          --v24;
          v31 = (v27 >> 12) & 0xFFFFFFFFFFLL;
          v51 = v24;
          if ( v31 <= qword_140E2D9A0 && ((*(_QWORD *)(48 * v31 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 && v31 != v45 )
          {
            v32 = 48 * v31 - 0x220000000000LL;
            v33 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v33 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait();
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v32 + 24) < 0 );
            }
            if ( (*(_QWORD *)(v32 + 40) & 0xFFFFFFFFFFLL) == v45 && v45 == v1 )
              MiSetPfnContainingFrame(v32, v47);
            _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v24 = v51;
          }
          if ( v45 != v1 )
            v28 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * ((__int64)(v25 - UltraMapping) >> 3));
          if ( (v28 & 1) != 0 )
            MiWriteValidPteNewProtection(v25, v28 | 0x20);
        }
        v26 = v44;
        v25 += 8LL;
      }
      while ( v24 );
      v7 = 48 * v1 - 0x220000000000LL;
    }
    *v48 = CLFS_LSN_NULL_EXT;
    if ( v42 )
    {
      v38 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v38 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait();
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      v39 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v39 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait();
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v8 + 24) < 0 );
      }
      MiCopyPfnEntryEx(v8, v7);
      MiSetPfnContainingFrame(v8, v47);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( (*(_DWORD *)(48 * v1 - 0x220000000000LL + 36) & 0x4000000) != 0 )
      MiReplaceActivePageTableLinks(*(_QWORD *)a1, v8);
    result = a1;
    *(_DWORD *)(a1 + 56) = 0;
    return result;
  }
  ++dword_140EF4B1C;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_87:
  result = CLFS_LSN_NULL_EXT;
  *v48 = CLFS_LSN_NULL_EXT;
  while ( v4 )
  {
    v9 -= 8LL;
    result = MI_READ_PTE_LOCK_FREE(v9);
    if ( (result & 1) == 0 && (result & 0xC00) == 0x800 )
    {
      if ( qword_140E2D940 )
      {
        if ( (result & 0x10) != 0 )
          result &= ~0x10uLL;
        else
          result &= ~qword_140E2D940;
      }
      --v4;
      v37 = 6 * ((result >> 12) & 0xFFFFFFFFFFLL);
      result = 0xFFFFDE0000000018uLL;
      _InterlockedAnd64((volatile signed __int64 *)(8 * v37 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return result;
}
