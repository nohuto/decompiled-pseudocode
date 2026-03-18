/*
 * XREFs of MiReservePageFileSpaceForPage @ 0x1403687E0
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x140302690 (MiOutSwapWorkingSetPte.c)
 *     MiReservePageFileSpace @ 0x140368314 (MiReservePageFileSpace.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiClearPageFileReservation @ 0x140213DEC (MiClearPageFileReservation.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14023C31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiIncreaseUsedPtes @ 0x14028A180 (MiIncreaseUsedPtes.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiLockLeafPage @ 0x1402E8100 (MiLockLeafPage.c)
 *     MiInvalidPteConforms @ 0x140302590 (MiInvalidPteConforms.c)
 *     MiPageStandbyLookasideStatus @ 0x140367540 (MiPageStandbyLookasideStatus.c)
 *     MI_IS_RESET_PTE @ 0x140368EE0 (MI_IS_RESET_PTE.c)
 *     MiTransferSoftwarePte @ 0x14039F300 (MiTransferSoftwarePte.c)
 *     MiDiscardTransitionPteEx @ 0x1403A1C98 (MiDiscardTransitionPteEx.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReservePageFileSpaceForPage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v6; // rsi
  int v7; // r13d
  BOOL v8; // r12d
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 DemandZeroPte; // rbx
  unsigned int v12; // ebp
  __int64 v13; // rbp
  __int64 v14; // rcx
  char v15; // dl
  __int64 v16; // r8
  int v17; // r10d
  __int64 v19; // rax
  ULONG_PTR v20; // rbx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned int v23; // ebp
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rax
  int v31; // ebp
  unsigned int v32; // [rsp+30h] [rbp-48h]
  unsigned __int64 v33[8]; // [rsp+38h] [rbp-40h] BYREF
  int v35; // [rsp+90h] [rbp+18h]

  v32 = 0;
  v6 = 0LL;
  v35 = 0;
  v7 = 0;
  v8 = 0;
  if ( (a3 & 0x80u) == 0 )
  {
    v9 = MiLockLeafPage((unsigned __int64 *)a2, 0);
    v8 = v9 != 0;
  }
  else
  {
LABEL_2:
    v9 = 0LL;
  }
  v10 = MI_READ_PTE_LOCK_FREE(a2);
  DemandZeroPte = v10;
  if ( (v10 & 1) != 0 )
  {
    if ( (a3 & 0x80u) != 0 )
    {
      v9 = 48 * ((v10 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( (a3 & 1) == 0 )
      {
        v8 = 1;
        v12 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v12 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v12);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v9 + 24) < 0 );
        }
        v6 = 0LL;
      }
      if ( *(__int64 *)(v9 + 40) < 0 )
        goto LABEL_18;
    }
    if ( (*(_QWORD *)v9 & 1) == 0 )
      goto LABEL_18;
    v13 = a1;
    if ( *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) != a1 )
      goto LABEL_18;
    if ( (*(_DWORD *)(v9 + 32) & 0x8000000) != 0 )
      goto LABEL_18;
    DemandZeroPte = *(_QWORD *)(v9 + 16);
    if ( !MiInvalidPteConforms(DemandZeroPte) )
      goto LABEL_18;
    if ( !(unsigned int)MI_IS_RESET_PTE(v14) || (*(_BYTE *)(v9 + 34) & 0x10) != 0 )
      goto LABEL_15;
    if ( (a3 & 0x80u) == 0 )
      goto LABEL_18;
    v24 = (v15 & 0x42) == 0;
    goto LABEL_48;
  }
  if ( (v10 & 0x400) != 0 )
    goto LABEL_18;
  if ( (v10 & 0x800) == 0 )
  {
    if ( v10 )
    {
      if ( !MiInvalidPteConforms(v10) )
        goto LABEL_18;
      v30 = (DemandZeroPte >> 5) & 0x1F;
      if ( (_DWORD)v30 == 16 || !(_DWORD)v30 )
        goto LABEL_18;
    }
    else
    {
      if ( (a3 & 2) == 0 )
        goto LABEL_18;
      DemandZeroPte = MiMakeDemandZeroPte((a3 >> 2) & 0x1F);
      v35 = v17;
    }
    v13 = a1;
    goto LABEL_15;
  }
  if ( (a3 & 0x80u) != 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v19 = MI_READ_PTE_LOCK_FREE(a2);
        v20 = v19;
        if ( (v19 & 0x800) == 0 )
          goto LABEL_110;
        if ( MiInvalidPteConforms(v19) )
        {
          if ( qword_140E2DB80 )
          {
            if ( (v20 & 0x10) != 0 )
              v21 &= ~0x10uLL;
            else
              v21 = v20 & ~qword_140E2DB80;
          }
          v22 = (v21 >> 12) & 0xFFFFFFFFFFLL;
          v9 = 48 * v22 - 0x220000000000LL;
          if ( v22 <= qword_140E2DBE0 && (*(_QWORD *)(48 * v22 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
            break;
        }
      }
      v23 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v23 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v23);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      if ( MI_READ_PTE_LOCK_FREE(a2) == v20 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
    {
      v9 = MiLockSpecialPurposeMemoryCachedPage(v9, 0);
      if ( !v9 )
        goto LABEL_110;
    }
    if ( (*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) != a2 && (*(_QWORD *)(v9 + 40) & 0x10000000000LL) == 0 )
      KeBugCheckEx(0x1Au, 0x411uLL, a2, v20, *(_QWORD *)(v9 + 8));
    if ( !v9 )
    {
LABEL_110:
      v8 = 0;
      goto LABEL_2;
    }
    v8 = 1;
    if ( *(__int64 *)(v9 + 40) < 0 )
      goto LABEL_19;
  }
  v13 = a1;
  if ( *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) != a1 )
    goto LABEL_18;
  DemandZeroPte = *(_QWORD *)(v9 + 16);
  if ( (unsigned int)MI_IS_RESET_PTE(DemandZeroPte) )
  {
    v24 = (*(_BYTE *)(v9 + 34) & 0x10) == 0;
LABEL_48:
    if ( v24 )
      goto LABEL_18;
  }
LABEL_15:
  if ( (((unsigned __int8)DemandZeroPte >> 1) & (unsigned __int8)v17) == 0 )
  {
    if ( v9 && (*(_BYTE *)(v9 + 34) & 0x28) != 0 )
      goto LABEL_18;
    if ( (((unsigned __int8)DemandZeroPte >> 2) & (unsigned __int8)v17) != 0 )
    {
      if ( !v9 )
        goto LABEL_18;
      if ( ((unsigned __int8)a3 & (unsigned __int8)v17) == 0 )
      {
        if ( !(unsigned __int16)*(_DWORD *)(v9 + 32) )
        {
          v31 = MiPageStandbyLookasideStatus(0xAAAAAAAAAAAAAAABuLL * ((v9 + 0x220000000000LL) >> 4));
          if ( (MiUnlinkPageFromListEx(v9, 0) & 3) != 0 )
          {
            MiDiscardTransitionPteEx(v9, 0LL);
            goto LABEL_18;
          }
          v16 = 0LL;
          if ( !v31
            && (unsigned int)MiPageStandbyLookasideStatus(0xAAAAAAAAAAAAAAABuLL * ((v9 + 0x220000000000LL) >> 4)) )
          {
            if ( (DemandZeroPte & 0x400) != 0 )
              DemandZeroPte &= ~8uLL;
            else
              DemandZeroPte &= ~0x8000000uLL;
          }
          v13 = a1;
          LOBYTE(v17) = 1;
          v7 = 1;
        }
        v33[0] = *(_QWORD *)(v9 + 16);
        if ( ((LOBYTE(v33[0]) >> 2) & (unsigned __int8)v17) != 0 )
        {
          *(_QWORD *)(v9 + 16) &= ~4uLL;
          MiClearPageFileReservation((__int64 *)v33);
          v6 = v33[0];
        }
        else
        {
          v6 = v16;
          v33[0] = v16;
        }
        MiSetPfnModified(v9, v17);
        goto LABEL_52;
      }
    }
    else if ( ((unsigned __int8)a3 & (unsigned __int8)v17) == 0 )
    {
LABEL_52:
      v25 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a4);
      v26 = *(_QWORD *)(v13 + 8LL * ((unsigned __int16)v25 >> 12) + 18528);
      if ( qword_140E2DB80 && (v25 & 0x10) == 0 )
        v25 &= ~qword_140E2DB80;
      v27 = MiTransferSoftwarePte(DemandZeroPte, v26, HIDWORD(v25), 2LL);
      v29 = v27;
      if ( v9 )
      {
        if ( !(unsigned __int16)*(_DWORD *)(v9 + 32) && (*(_BYTE *)(v9 + 34) & 0x10) != 0 && !v7 )
        {
          MiUnlinkPageFromListEx(v9, 0);
          v7 = 1;
        }
        *(_QWORD *)(v9 + 16) = v29;
        if ( v7 )
          MiInsertPageInList(v9, 8u);
      }
      else
      {
        *(_QWORD *)a2 = v27;
      }
      if ( v35 )
        MiIncreaseUsedPtes(v28, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u, 2);
      v17 = 1;
    }
    v32 = v17;
    goto LABEL_18;
  }
  if ( ((unsigned __int8)a3 & (unsigned __int8)v17) != 0 )
    *a4 = DemandZeroPte;
LABEL_18:
  if ( v8 )
LABEL_19:
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v6 )
    MiReleasePageFileInfo(a1, v6, 1LL);
  return v32;
}
