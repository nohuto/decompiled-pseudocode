/*
 * XREFs of MiReplacePageTablePage @ 0x1403F2DE8
 * Callers:
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MmStealTopLevelPage @ 0x1403F4960 (MmStealTopLevelPage.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyPfnEntryEx @ 0x140251B90 (MiCopyPfnEntryEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockTransitionLeafPageEx @ 0x1402EC2C0 (MiLockTransitionLeafPageEx.c)
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiMakeProtectionPfnCompatible @ 0x1403F26B0 (MiMakeProtectionPfnCompatible.c)
 *     MiReplaceActivePageTableLinks @ 0x1403F37B8 (MiReplaceActivePageTableLinks.c)
 *     MiIsPdeOrAboveAccessible @ 0x1403F4C00 (MiIsPdeOrAboveAccessible.c)
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
  unsigned int v17; // ebx
  __int64 v18; // rbx
  unsigned int v19; // esi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rbx
  int v24; // esi
  ULONG_PTR v25; // rbp
  ULONG_PTR v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // r8
  unsigned __int64 v32; // rcx
  __int64 v33; // rsi
  unsigned int v34; // r14d
  _BOOL8 v35; // r10
  unsigned __int64 v36; // rcx
  __int64 v37; // rbx
  int v38; // r11d
  __int64 v39; // rcx
  unsigned int v40; // ebx
  unsigned int v41; // ebx
  unsigned __int64 v42; // rcx
  int v43; // [rsp+20h] [rbp-A8h]
  int v44; // [rsp+24h] [rbp-A4h]
  unsigned __int64 v45; // [rsp+28h] [rbp-A0h]
  ULONG_PTR v46; // [rsp+28h] [rbp-A0h]
  __int64 v47; // [rsp+38h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-88h]
  __int64 v49; // [rsp+48h] [rbp-80h]
  ULONG_PTR *v50; // [rsp+60h] [rbp-68h]
  int v52; // [rsp+D8h] [rbp+10h]
  int v53; // [rsp+D8h] [rbp+10h]
  int v54; // [rsp+E0h] [rbp+18h]
  int v55; // [rsp+E8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = v1;
  *(_DWORD *)(a1 + 56) = -1073741823;
  v45 = v3;
  v49 = v5;
  v47 = v1;
  v7 = 48 * v1 - 0x220000000000LL;
  v8 = 48 * v5 - 0x220000000000LL;
  v52 = 0;
  v54 = 0;
  v55 = 0;
  v43 = 0;
  if ( *(_DWORD *)(a1 + 64) == 1 )
  {
    result = *(_QWORD *)(a1 + 48);
    v42 = *(_QWORD *)(result + 1288);
    if ( !v42 )
      return result;
    result = (*(_QWORD *)(((v42 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
    if ( result != v1 )
      return result;
  }
  if ( (*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFLL) == v1 )
  {
    v44 = 1;
    if ( *(_DWORD *)(a1 + 64) == 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL) >> 12;
      v47 = v6;
    }
  }
  else
  {
    v44 = 0;
  }
  v9 = v3;
  BugCheckParameter2 = MiGetUltraMapping(*(_QWORD *)(a1 + 16) + 96LL, 3uLL, 1LL, 4);
  v10 = (ULONG_PTR *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v50 = v10;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * v5 - 0x220000000000LL);
  ValidPte = MiMakeValidPte((unsigned __int64)v10, v5, ProtectionPfnCompatible | 0xA0000000);
  v13 = ValidPte;
  if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v10 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v10, ValidPte, 128LL);
  *v10 = v13;
  v14 = (_QWORD *)BugCheckParameter2;
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
      v35 = v4 != 0;
      v36 = (__int64)(v9 << 25) >> 16;
      if ( v36 >= 0xFFFFF68000000000uLL && v36 <= 0xFFFFF6FFFFFFFFFFuLL && !(unsigned int)MiIsPdeOrAboveAccessible(v9) )
      {
        dword_140EF5018 += v38;
        goto LABEL_87;
      }
      v37 = MiLockTransitionLeafPageEx(v9, (unsigned __int8 *)v35, 0);
      if ( v37 )
      {
        v16 = MI_READ_PTE_LOCK_FREE(v9);
        if ( (*(_QWORD *)(v37 + 40) & 0xFFFFFFFFFFLL) != v6 && (*(_QWORD *)(v37 + 40) & 0x10000000000LL) != 0 )
          ++v43;
        if ( (*(_BYTE *)(v37 + 34) & 0x20) != 0 )
        {
          ++dword_140EF5014;
          _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_87;
        }
        ++v4;
LABEL_8:
        if ( v6 == v1 )
          goto LABEL_9;
        goto LABEL_45;
      }
    }
    ++v52;
    if ( (v15 & 0x80u) == 0LL )
    {
      v30 = (v15 >> 12) & 0xFFFFFFFFFFLL;
      if ( v30 == qword_140E374B8 )
      {
        ++v55;
        goto LABEL_43;
      }
      if ( v30 > qword_140E2DD20
        || ((*(_QWORD *)(48 * v30 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0
        || (*(_QWORD *)(48 * v30 - 0x21FFFFFFFFD8LL) & 0x10000000000LL) == 0 )
      {
        goto LABEL_43;
      }
    }
    ++v54;
LABEL_43:
    if ( v6 == v1 )
      goto LABEL_9;
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * ((__int64)(v9 - v45) >> 3));
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
          HvlNotifyLongSpinWait(v17);
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
          HvlNotifyLongSpinWait(v17);
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
  if ( (v44 || (unsigned __int16)v18 == (unsigned __int64)(unsigned int)(v4 - v55 - v43 - v54 + v52 + 1))
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
          HvlNotifyLongSpinWait(v19);
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
    v20 = v45;
    v21 = v45;
    if ( v4 )
    {
      do
      {
        v22 = MI_READ_PTE_LOCK_FREE(v21);
        if ( (v22 & 1) == 0 && (v22 & 0xC00) == 0x800 )
        {
          if ( qword_140E2DCC0 )
          {
            if ( (v22 & 0x10) != 0 )
              v22 &= ~0x10uLL;
            else
              v22 &= ~qword_140E2DCC0;
          }
          v23 = 48 * ((v22 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          if ( (*(_QWORD *)(v23 + 40) & 0xFFFFFFFFFFLL) == v47 && v47 == v1 )
            MiSetPfnContainingFrame(v23, v49);
          --v4;
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        v21 += 8LL;
      }
      while ( v4 );
      v7 = 48 * v1 - 0x220000000000LL;
      v20 = v45;
    }
    v24 = v52;
    if ( v52 )
    {
      v25 = BugCheckParameter2;
      v26 = v20 - BugCheckParameter2;
      v46 = v26;
      do
      {
        v27 = MI_READ_PTE_LOCK_FREE(v26 + v25);
        v28 = v27;
        if ( (v27 & 1) != 0 )
        {
          --v24;
          v31 = 0xFFFFFFFFFFLL;
          v32 = (v27 >> 12) & 0xFFFFFFFFFFLL;
          v53 = v24;
          if ( v32 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v32 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 && v32 != v47 )
          {
            v33 = 48 * v32 - 0x220000000000LL;
            v34 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v34 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait(v34);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v33 + 24) < 0 );
            }
            if ( (*(_QWORD *)(v33 + 40) & 0xFFFFFFFFFFLL) == v47 && v47 == v1 )
              MiSetPfnContainingFrame(v33, v49);
            _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v24 = v53;
          }
          if ( v47 != v1 )
            v28 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * ((__int64)(v25 - BugCheckParameter2) >> 3));
          if ( (v28 & 1) != 0 )
            MiWriteValidPteNewProtection(v25, v28 | 0x20, v31);
        }
        v26 = v46;
        v25 += 8LL;
      }
      while ( v24 );
      v7 = 48 * v1 - 0x220000000000LL;
    }
    *v50 = CLFS_LSN_NULL_EXT;
    if ( v44 )
    {
      v40 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v40 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v40);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      v41 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v41 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v41);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v8 + 24) < 0 );
      }
      MiCopyPfnEntryEx(v8, v7);
      MiSetPfnContainingFrame(v8, v49);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( (*(_DWORD *)(48 * v1 - 0x220000000000LL + 36) & 0x4000000) != 0 )
      MiReplaceActivePageTableLinks(*(_QWORD *)a1, v8);
    result = a1;
    *(_DWORD *)(a1 + 56) = 0;
    return result;
  }
  ++dword_140EF501C;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_87:
  result = CLFS_LSN_NULL_EXT;
  *v50 = CLFS_LSN_NULL_EXT;
  while ( v4 )
  {
    v9 -= 8LL;
    result = MI_READ_PTE_LOCK_FREE(v9);
    if ( (result & 1) == 0 && (result & 0xC00) == 0x800 )
    {
      if ( qword_140E2DCC0 )
      {
        if ( (result & 0x10) != 0 )
          result &= ~0x10uLL;
        else
          result &= ~qword_140E2DCC0;
      }
      --v4;
      v39 = 6 * ((result >> 12) & 0xFFFFFFFFFFLL);
      result = 0xFFFFDE0000000018uLL;
      _InterlockedAnd64((volatile signed __int64 *)(8 * v39 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return result;
}
