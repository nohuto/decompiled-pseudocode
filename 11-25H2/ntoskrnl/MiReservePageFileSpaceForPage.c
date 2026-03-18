/*
 * XREFs of MiReservePageFileSpaceForPage @ 0x1403FAC48
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x140225A10 (MiOutSwapWorkingSetPte.c)
 *     MiReservePageFileSpace @ 0x1402471FC (MiReservePageFileSpace.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiTransferSoftwarePte @ 0x1402280C0 (MiTransferSoftwarePte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1402343E0 (MiInvalidPteConforms.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiDiscardTransitionPteEx @ 0x1402C5640 (MiDiscardTransitionPteEx.c)
 *     MiClearPageFileReservation @ 0x1402CC084 (MiClearPageFileReservation.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14033F5DC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiIncreaseUsedPtes @ 0x1403837D0 (MiIncreaseUsedPtes.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 *     MI_IS_RESET_PTE @ 0x1403FB340 (MI_IS_RESET_PTE.c)
 *     MiPageStandbyLookasideStatus @ 0x1403FB3A0 (MiPageStandbyLookasideStatus.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
  int v12; // ebp
  __int64 v13; // rbp
  __int64 v14; // rcx
  char v15; // dl
  unsigned __int64 v16; // r8
  int v17; // r11d
  __int64 v19; // rax
  ULONG_PTR v20; // rbx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  int v23; // ebp
  __int64 v24; // r8
  __int64 v25; // r9
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  __int64 v32; // rax
  int v33; // ebp
  unsigned int v34; // [rsp+30h] [rbp-48h]
  unsigned __int64 v35[8]; // [rsp+38h] [rbp-40h] BYREF
  int v37; // [rsp+90h] [rbp+18h]

  v34 = 0;
  v6 = 0LL;
  v37 = 0;
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
              HvlNotifyLongSpinWait();
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
    if ( *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) != a1 )
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
    v26 = (v15 & 0x42) == 0;
    goto LABEL_44;
  }
  if ( (v10 & 0x400) != 0 )
    goto LABEL_18;
  if ( (v10 & 0x800) == 0 )
  {
    if ( v10 )
    {
      if ( !MiInvalidPteConforms(v10) )
        goto LABEL_18;
      v32 = (DemandZeroPte >> 5) & 0x1F;
      if ( (_DWORD)v32 == 16 || !(_DWORD)v32 )
        goto LABEL_18;
    }
    else
    {
      if ( (a3 & 2) == 0 )
        goto LABEL_18;
      DemandZeroPte = MiMakeDemandZeroPte((a3 >> 2) & 0x1F);
      v37 = v17;
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
          if ( qword_140E2D940 )
          {
            if ( (v20 & 0x10) != 0 )
              v21 &= ~0x10uLL;
            else
              v21 = v20 & ~qword_140E2D940;
          }
          v22 = (v21 >> 12) & 0xFFFFFFFFFFLL;
          v9 = 48 * v22 - 0x220000000000LL;
          if ( v22 <= qword_140E2D9A0 && (*(_QWORD *)(48 * v22 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
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
            HvlNotifyLongSpinWait();
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
    if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
    {
      v9 = MiLockSpecialPurposeMemoryCachedPage(v9, 0LL, v24, v25);
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
  if ( *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) != a1 )
    goto LABEL_18;
  DemandZeroPte = *(_QWORD *)(v9 + 16);
  if ( (unsigned int)MI_IS_RESET_PTE(DemandZeroPte) )
  {
    v26 = (*(_BYTE *)(v9 + 34) & 0x10) == 0;
LABEL_44:
    if ( v26 )
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
          v33 = MiPageStandbyLookasideStatus(0xAAAAAAAAAAAAAAABuLL * ((v9 + 0x220000000000LL) >> 4));
          if ( (MiUnlinkPageFromListEx(v9, 0) & 3) != 0 )
          {
            MiDiscardTransitionPteEx(v9);
            goto LABEL_18;
          }
          v16 = 0LL;
          if ( !v33
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
        v35[0] = *(_QWORD *)(v9 + 16);
        if ( ((LOBYTE(v35[0]) >> 2) & (unsigned __int8)v17) != 0 )
        {
          *(_QWORD *)(v9 + 16) &= ~4uLL;
          MiClearPageFileReservation((unsigned __int64)v35);
          v6 = v35[0];
        }
        else
        {
          v6 = v16;
          v35[0] = v16;
        }
        MiSetPfnModified(v9, v17);
        goto LABEL_52;
      }
    }
    else if ( ((unsigned __int8)a3 & (unsigned __int8)v17) == 0 )
    {
LABEL_52:
      v27 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a4);
      v28 = *(_QWORD *)(v13 + 8LL * ((unsigned __int16)v27 >> 12) + 18528);
      if ( qword_140E2D940 && (v27 & 0x10) == 0 )
        v27 &= ~qword_140E2D940;
      v29 = MiTransferSoftwarePte(DemandZeroPte, v28, (_KPROCESS *)HIDWORD(v27), 2);
      v31 = v29;
      if ( v9 )
      {
        if ( !(unsigned __int16)*(_DWORD *)(v9 + 32) && (*(_BYTE *)(v9 + 34) & 0x10) != 0 && !v7 )
        {
          MiUnlinkPageFromListEx(v9, 0);
          v7 = 1;
        }
        *(_QWORD *)(v9 + 16) = v31;
        if ( v7 )
          MiInsertPageInList(v9, 8u);
      }
      else
      {
        *(_QWORD *)a2 = v29;
      }
      if ( v37 )
        MiIncreaseUsedPtes(v30, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u, 2);
      v17 = 1;
    }
    v34 = v17;
    goto LABEL_18;
  }
  if ( ((unsigned __int8)a3 & (unsigned __int8)v17) != 0 )
    *a4 = DemandZeroPte;
LABEL_18:
  if ( v8 )
LABEL_19:
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v6 )
    MiReleasePageFileInfo(a1, v6, 1);
  return v34;
}
