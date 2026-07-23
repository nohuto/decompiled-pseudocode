/*
 * XREFs of MiReservePageFileSpaceForPage @ 0x1403FDC68
 * Callers:
 *     MiReservePageFileSpace @ 0x140202948 (MiReservePageFileSpace.c)
 *     MiOutSwapWorkingSetPte @ 0x140346260 (MiOutSwapWorkingSetPte.c)
 * Callees:
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140204044 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiTransferSoftwarePte @ 0x140215AA0 (MiTransferSoftwarePte.c)
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     MiDiscardTransitionPteEx @ 0x1402188CC (MiDiscardTransitionPteEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiClearPageFileReservation @ 0x14030714C (MiClearPageFileReservation.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiInvalidPteConforms @ 0x1403461F0 (MiInvalidPteConforms.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MI_IS_RESET_PTE @ 0x1403FE370 (MI_IS_RESET_PTE.c)
 *     MiPageStandbyLookasideStatus @ 0x1403FE3D0 (MiPageStandbyLookasideStatus.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  __int64 v11; // r9
  unsigned __int64 DemandZeroPte; // rbx
  unsigned int v13; // ebp
  __int64 v14; // rbp
  __int64 v15; // rcx
  char v16; // dl
  __int64 v17; // r8
  int v18; // r10d
  __int64 v20; // rax
  ULONG_PTR v21; // rbx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned int v24; // ebp
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // ebp
  unsigned int v33; // [rsp+30h] [rbp-48h]
  unsigned __int64 v34[8]; // [rsp+38h] [rbp-40h] BYREF
  int v36; // [rsp+90h] [rbp+18h]

  v33 = 0;
  v6 = 0LL;
  v36 = 0;
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
        v13 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v13 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v13);
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
    v14 = a1;
    if ( *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) != a1 )
      goto LABEL_18;
    if ( (*(_DWORD *)(v9 + 32) & 0x8000000) != 0 )
      goto LABEL_18;
    DemandZeroPte = *(_QWORD *)(v9 + 16);
    if ( !MiInvalidPteConforms(DemandZeroPte) )
      goto LABEL_18;
    if ( !(unsigned int)MI_IS_RESET_PTE(v15) || (*(_BYTE *)(v9 + 34) & 0x10) != 0 )
      goto LABEL_15;
    if ( (a3 & 0x80u) == 0 )
      goto LABEL_18;
    v25 = (v16 & 0x42) == 0;
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
      v31 = (DemandZeroPte >> 5) & 0x1F;
      if ( (_DWORD)v31 == 16 || !(_DWORD)v31 )
        goto LABEL_18;
    }
    else
    {
      if ( (a3 & 2) == 0 )
        goto LABEL_18;
      DemandZeroPte = MiMakeDemandZeroPte((a3 >> 2) & 0x1F);
      v36 = v18;
    }
    v14 = a1;
    goto LABEL_15;
  }
  if ( (a3 & 0x80u) != 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v20 = MI_READ_PTE_LOCK_FREE(a2);
        v21 = v20;
        if ( (v20 & 0x800) == 0 )
          goto LABEL_110;
        if ( MiInvalidPteConforms(v20) )
        {
          if ( qword_140E2DCC0 )
          {
            if ( (v21 & 0x10) != 0 )
              v22 &= ~0x10uLL;
            else
              v22 = v21 & ~qword_140E2DCC0;
          }
          v23 = (v22 >> 12) & 0xFFFFFFFFFFLL;
          v9 = 48 * v23 - 0x220000000000LL;
          if ( v23 <= qword_140E2DD20 && (*(_QWORD *)(48 * v23 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
            break;
        }
      }
      v24 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v24 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v24);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      if ( MI_READ_PTE_LOCK_FREE(a2) == v21 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
    {
      v9 = MiLockSpecialPurposeMemoryCachedPage(v9, 0);
      if ( !v9 )
        goto LABEL_110;
    }
    if ( (*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) != a2 && (*(_QWORD *)(v9 + 40) & 0x10000000000LL) == 0 )
      KeBugCheckEx(0x1Au, 0x411uLL, a2, v21, *(_QWORD *)(v9 + 8));
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
  v14 = a1;
  if ( *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) != a1 )
    goto LABEL_18;
  DemandZeroPte = *(_QWORD *)(v9 + 16);
  if ( (unsigned int)MI_IS_RESET_PTE(DemandZeroPte) )
  {
    v25 = (*(_BYTE *)(v9 + 34) & 0x10) == 0;
LABEL_48:
    if ( v25 )
      goto LABEL_18;
  }
LABEL_15:
  if ( (((unsigned __int8)DemandZeroPte >> 1) & (unsigned __int8)v18) == 0 )
  {
    if ( v9 && (*(_BYTE *)(v9 + 34) & 0x28) != 0 )
      goto LABEL_18;
    if ( (((unsigned __int8)DemandZeroPte >> 2) & (unsigned __int8)v18) != 0 )
    {
      if ( !v9 )
        goto LABEL_18;
      if ( ((unsigned __int8)a3 & (unsigned __int8)v18) == 0 )
      {
        if ( !(unsigned __int16)*(_DWORD *)(v9 + 32) )
        {
          v32 = MiPageStandbyLookasideStatus(0xAAAAAAAAAAAAAAABuLL * ((v9 + 0x220000000000LL) >> 4));
          if ( (MiUnlinkPageFromListEx(v9, 0) & 3) != 0 )
          {
            MiDiscardTransitionPteEx(v9);
            goto LABEL_18;
          }
          v17 = 0LL;
          if ( !v32
            && (unsigned int)MiPageStandbyLookasideStatus(0xAAAAAAAAAAAAAAABuLL * ((v9 + 0x220000000000LL) >> 4)) )
          {
            if ( (DemandZeroPte & 0x400) != 0 )
              DemandZeroPte &= ~8uLL;
            else
              DemandZeroPte &= ~0x8000000uLL;
          }
          v14 = a1;
          LOBYTE(v18) = 1;
          v7 = 1;
        }
        v34[0] = *(_QWORD *)(v9 + 16);
        if ( ((LOBYTE(v34[0]) >> 2) & (unsigned __int8)v18) != 0 )
        {
          *(_QWORD *)(v9 + 16) &= ~4uLL;
          MiClearPageFileReservation((__int64 *)v34);
          v6 = v34[0];
        }
        else
        {
          v6 = v17;
          v34[0] = v17;
        }
        MiSetPfnModified(v9, v18);
        goto LABEL_52;
      }
    }
    else if ( ((unsigned __int8)a3 & (unsigned __int8)v18) == 0 )
    {
LABEL_52:
      v26 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a4);
      v27 = *(_QWORD *)(v14 + 8LL * ((unsigned __int16)v26 >> 12) + 18528);
      if ( qword_140E2DCC0 && (v26 & 0x10) == 0 )
        v26 &= ~qword_140E2DCC0;
      v28 = MiTransferSoftwarePte(DemandZeroPte, v27, HIDWORD(v26), 2);
      v30 = v28;
      if ( v9 )
      {
        if ( !(unsigned __int16)*(_DWORD *)(v9 + 32) && (*(_BYTE *)(v9 + 34) & 0x10) != 0 && !v7 )
        {
          MiUnlinkPageFromListEx(v9, 0);
          v7 = 1;
        }
        *(_QWORD *)(v9 + 16) = v30;
        if ( v7 )
          MiInsertPageInList(v9, 8u);
      }
      else
      {
        *(_QWORD *)a2 = v28;
      }
      if ( v36 )
        MiIncreaseUsedPtes(v29, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, 2LL);
      v18 = 1;
    }
    v33 = v18;
    goto LABEL_18;
  }
  if ( ((unsigned __int8)a3 & (unsigned __int8)v18) != 0 )
    *a4 = DemandZeroPte;
LABEL_18:
  if ( v8 )
LABEL_19:
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v6 )
    MiReleasePageFileInfo(a1, v6, 1LL, v11);
  return v33;
}
