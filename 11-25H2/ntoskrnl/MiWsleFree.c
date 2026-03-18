/*
 * XREFs of MiWsleFree @ 0x14022FD60
 * Callers:
 *     MiFreeWsleList @ 0x1403815C4 (MiFreeWsleList.c)
 * Callees:
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140226334 (MiRewriteTrimPteAsDemandZero.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiConfirmPageIsZero @ 0x14024D480 (MiConfirmPageIsZero.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiClearPageFileReservation @ 0x1402CC084 (MiClearPageFileReservation.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiBadShareCount @ 0x140340DD8 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x140342440 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPagingFileOffset @ 0x14037C4CC (MiGetPagingFileOffset.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiWsleFree(unsigned __int64 a1, unsigned __int64 a2, char a3, unsigned __int64 a4)
{
  unsigned int v4; // r12d
  char v5; // bl
  __int64 v6; // rbp
  __int64 v7; // r14
  char v8; // si
  __int64 v9; // rax
  BOOL v10; // r13d
  int v11; // r15d
  unsigned int v12; // edi
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // r15d
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 ContainingPageTable; // r15
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // r13
  unsigned __int64 v29; // r9
  __int64 v30; // r10
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 *v33; // r11
  __int64 v34; // r8
  __int64 v35; // rax
  _QWORD *v36; // r13
  unsigned __int64 v37; // r9
  __int64 v38; // r10
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 *v41; // r11
  __int64 v42; // r8
  __int64 v43; // rax
  char v44; // al
  char v45; // al
  __int64 v46; // [rsp+30h] [rbp-A8h]
  __int64 v47; // [rsp+30h] [rbp-A8h]
  __int64 v48; // [rsp+38h] [rbp-A0h]
  __int64 v49; // [rsp+40h] [rbp-98h]
  __int64 v50; // [rsp+48h] [rbp-90h] BYREF
  __int64 v51; // [rsp+50h] [rbp-88h]
  __int64 v52; // [rsp+58h] [rbp-80h]
  __int64 v53; // [rsp+60h] [rbp-78h]
  __int64 v54; // [rsp+E0h] [rbp+8h]
  unsigned int v55; // [rsp+E8h] [rbp+10h]
  int v57; // [rsp+F0h] [rbp+18h]
  int v58; // [rsp+F0h] [rbp+18h]
  int v59; // [rsp+F0h] [rbp+18h]
  int v60; // [rsp+F0h] [rbp+18h]
  int v61; // [rsp+F0h] [rbp+18h]
  bool v62; // [rsp+F8h] [rbp+20h]

  v54 = a1;
  v4 = 0;
  v5 = a4;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 48 * ((a4 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    v8 = HIBYTE(a4) & 0xF | (16 * ((a4 >> 60) & 7));
  else
    v8 = (*(_QWORD *)v7 >> 42) & 7;
  v9 = *(_QWORD *)(v7 + 40);
  v10 = v9 >= 0;
  v62 = v9 >= 0;
  if ( (a3 & 4) != 0 )
    goto LABEL_55;
  if ( *(__int64 *)(v7 + 40) < 0 )
  {
    if ( (*(_QWORD *)(v7 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v7 + 8) >= 0 && *(_QWORD *)(v7 + 8)
      || (*(_DWORD *)(v7 + 16) & 0x400LL) != 0 )
    {
      goto LABEL_55;
    }
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 || (MiGetPagePrivilege(v7) & 0xFFFFFFFD) != 0 )
      goto LABEL_55;
    a1 = v6 << 25 >> 16;
    if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v11 = 0;
      goto LABEL_12;
    }
  }
  if ( (unsigned __int16)*(_DWORD *)(v7 + 32) != 1
    || (HIWORD(*(_DWORD *)(v7 + 32)) & 0xC0) != 0x40
    || (*(_DWORD *)(v7 + 32) & 0x40000000) != 0 )
  {
LABEL_55:
    v11 = 0;
    goto LABEL_12;
  }
  v11 = 1;
LABEL_12:
  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v12 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v12);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  if ( v11 && (unsigned int)MiConfirmPageIsZero(v7) )
  {
    MiRewriteTrimPteAsDemandZero(v54, (_QWORD *)v7);
    v48 = 0LL;
    goto LABEL_62;
  }
  v48 = 0LL;
  v13 = 0LL;
  if ( (v5 & 4) != 0 )
  {
LABEL_62:
    ContainingPageTable = MiGetContainingPageTable(v6);
    v59 = *(_DWORD *)(v7 + 32);
    *(_QWORD *)(v7 + 40) &= ~0x8000000000000000uLL;
    v22 = 0;
    HIWORD(v59) &= 0xD7C7u;
    *(_DWORD *)(v7 + 32) = v59;
    if ( (*(_QWORD *)(v7 + 40) & 0x10000000000LL) != 0 )
      v22 = *(_DWORD *)(v7 + 36) & 0x18000000;
    *(_DWORD *)(v7 + 36) = v22;
    *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
    HIWORD(v60) = HIWORD(*(_DWORD *)(v7 + 32));
    LOWORD(v60) = 0;
    *(_DWORD *)(v7 + 32) = v60;
    v50 = *(_QWORD *)(v7 + 16);
    if ( (v50 & 4) != 0 )
    {
      MiClearPageFileReservation(&v50);
      v13 = v50;
    }
    else
    {
      v13 = 0LL;
      v50 = 0LL;
    }
    if ( v13 )
      v48 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
    MiInsertPageInFreeOrZeroedList((v7 + 0x220000000000LL) / 48);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v7 = 48 * ContainingPageTable - 0x220000000000LL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v23) )
        {
          HvlNotifyLongSpinWait(v4);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v7 + 34) & 7) != 6 )
      MiBadShareCount(48 * ContainingPageTable - 0x220000000000LL);
    v24 = (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v7 + 24) = v24 ^ (v24 ^ *(_QWORD *)(v7 + 24)) & 0xC000000000000000uLL;
    if ( !v24 )
      MiPfnShareCountIsZero(48 * ContainingPageTable - 0x220000000000LL, 0LL);
    goto LABEL_49;
  }
  if ( (v5 & 0x42) != 0 )
  {
    v13 = MiCaptureDirtyBitToPfn(v7);
    if ( v13 )
      v48 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
  }
  if ( v10 )
    v46 = -1LL;
  else
    v46 = MiGetContainingPageTable(v6);
  if ( (a3 & 1) != 0
    && (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && (unsigned __int16)*(_DWORD *)(v7 + 32) == 1
    && (*(_BYTE *)(v7 + 34) & 0x10) == 0
    && (unsigned int)MiGetPfnPriority(v7) == 5 )
  {
    v61 = *(_DWORD *)(v7 + 32);
    HIBYTE(v61) = HIBYTE(v61) & 0xF8 | 4;
    *(_DWORD *)(v7 + 32) = v61;
  }
  if ( (*(_BYTE *)(v7 + 34) & 7) != 6 )
    MiBadShareCount(v7);
  v14 = -9LL;
  v15 = (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v7 + 24) = v15 ^ (v15 ^ *(_QWORD *)(v7 + 24)) & 0xC000000000000000uLL;
  if ( !v15 )
  {
    v57 = *(_DWORD *)(v7 + 32);
    if ( *(__int64 *)(v7 + 40) < 0 )
    {
      v28 = (_QWORD *)v7;
      v29 = 0LL;
      v51 = *(_QWORD *)(v7 + 16) >> 5;
      v30 = 0LL;
      v49 = 0LL;
      while ( !v30 )
      {
        v31 = ((unsigned int)v28[1] >> 3) & 0x1FF;
        if ( !v29 )
        {
          v32 = MiMapPageInHyperSpaceWorker(v28[5] & 0xFFFFFFFFFFLL, 0LL, 0x80000000LL);
          v30 = v49;
          v29 = v32;
        }
        v33 = (__int64 *)(v29 + 8 * v31);
        v34 = ((unsigned __int64)*v33 >> 12) & 0xFFFFFFFFFFLL;
        if ( (_QWORD *)(48 * v34 - 0x220000000000LL) != v28 )
          KeBugCheckEx(
            0x4Eu,
            6uLL,
            0xAAAAAAAAAAAAAAABuLL * ((__int64)(v28 + 0x44000000000LL) >> 4),
            (ULONG_PTR)v33,
            *(_QWORD *)(v29 + 8 * v31));
        v35 = 32 * ((v34 << 7) | v51 & 0x1F | 0x40);
        if ( qword_140E2D940 )
        {
          if ( (qword_140E2D940 & v35) != 0 )
            v35 |= 0x10uLL;
          else
            v35 |= qword_140E2D940;
        }
        *v33 = v35;
        v49 = ++v30;
        if ( v30 == 1 )
          break;
        v28 = (_QWORD *)(48 * (*v28 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
      }
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      *(_QWORD *)(((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    }
    v15 = (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0;
    LOWORD(v57) = v57 - 1;
    if ( (_WORD)v57 )
    {
      if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0 )
      {
        BYTE2(v57) |= 7u;
      }
      else
      {
        if ( (v57 & 0x100000) != 0 )
        {
          v44 = BYTE2(v57) & 0xF8 | 3;
        }
        else if ( (v57 & 0x80000) != 0 )
        {
          v44 = BYTE2(v57) & 0xF8 | 3;
        }
        else
        {
          v44 = BYTE2(v57) & 0xF8 | 2;
        }
        BYTE2(v57) = v44;
      }
      *(_DWORD *)(v7 + 32) = v57;
      if ( (*(_DWORD *)(v7 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(v7 + 16)) )
      {
        v15 = (__int64)qword_140E2FD48;
        *(_BYTE *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)) + 723LL) = 1;
      }
    }
    else if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (v57 & 0x10000000) != 0 )
        HIBYTE(v57) &= ~0x10u;
      *(_DWORD *)(v7 + 32) = v57;
      v16 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
      v52 = *(_QWORD *)(v7 + 16);
      if ( (v52 & 0x400) == 0 && ((v52 & 4) != 0 || (v52 & 2) != 0) && v52 )
        MiReleasePageFileInfo(v16, v52, 1LL);
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((v7 + 0x220000000000LL) >> 4));
    }
    else
    {
      v25 = MI_READ_PTE_LOCK_FREE(v7 + 16);
      v26 = -9LL;
      if ( (v25 & 0x400) != 0 )
        v26 = -2049LL;
      *(_QWORD *)(v7 + 16) = v25 & v26;
      if ( (v57 & 0x100000) != 0 )
      {
        *(_DWORD *)(v7 + 32) = v57;
        MiInsertPageInList(v7, 8u);
      }
      else
      {
        BYTE2(v57) = BYTE2(v57) & 0xF8 | 2;
        *(_DWORD *)(v7 + 32) = v57;
        MiInsertPageInList(v7, 4u);
      }
    }
  }
  if ( v46 != -1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v7 = 48 * v46 - 0x220000000000LL;
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v17 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15) )
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
    if ( (*(_BYTE *)(v7 + 34) & 7) != 6 )
      MiBadShareCount(v7);
    v18 = (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v7 + 24) = v18 ^ (v18 ^ *(_QWORD *)(v7 + 24)) & 0xC000000000000000uLL;
    if ( !v18 )
    {
      v58 = *(_DWORD *)(v7 + 32);
      if ( *(__int64 *)(v7 + 40) < 0 )
      {
        v36 = (_QWORD *)(48 * v46 - 0x220000000000LL);
        v37 = 0LL;
        v51 = *(_QWORD *)(v7 + 16) >> 5;
        v38 = 0LL;
        v47 = 0LL;
        while ( !v38 )
        {
          v39 = ((unsigned int)v36[1] >> 3) & 0x1FF;
          if ( !v37 )
          {
            v40 = MiMapPageInHyperSpaceWorker(v36[5] & 0xFFFFFFFFFFLL, 0LL, 0x80000000LL);
            v38 = v47;
            v37 = v40;
          }
          v41 = (__int64 *)(v37 + 8 * v39);
          v42 = ((unsigned __int64)*v41 >> 12) & 0xFFFFFFFFFFLL;
          if ( (_QWORD *)(48 * v42 - 0x220000000000LL) != v36 )
            KeBugCheckEx(
              0x4Eu,
              6uLL,
              0xAAAAAAAAAAAAAAABuLL * ((__int64)(v36 + 0x44000000000LL) >> 4),
              (ULONG_PTR)v41,
              *(_QWORD *)(v37 + 8 * v39));
          v43 = 32 * ((v42 << 7) | v51 & 0x1F | 0x40);
          if ( qword_140E2D940 )
          {
            if ( (v43 & qword_140E2D940) != 0 )
              v43 |= 0x10uLL;
            else
              v43 |= qword_140E2D940;
          }
          *v41 = v43;
          v47 = ++v38;
          if ( v38 == 1 )
            break;
          v36 = (_QWORD *)(48 * (*v36 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
        }
        *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
        *(_QWORD *)(((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
      }
      LOWORD(v58) = v58 - 1;
      if ( (_WORD)v58 )
      {
        if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0 )
        {
          BYTE2(v58) |= 7u;
        }
        else
        {
          if ( (v58 & 0x100000) != 0 )
          {
            v45 = BYTE2(v58) & 0xF8 | 3;
          }
          else if ( (v58 & 0x80000) != 0 )
          {
            v45 = BYTE2(v58) & 0xF8 | 3;
          }
          else
          {
            v45 = BYTE2(v58) & 0xF8 | 2;
          }
          BYTE2(v58) = v45;
        }
        *(_DWORD *)(v7 + 32) = v58;
        if ( (*(_DWORD *)(v7 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(v7 + 16)) )
          *(_BYTE *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)) + 723LL) = 1;
      }
      else if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0 )
      {
        if ( (v58 & 0x10000000) != 0 )
          HIBYTE(v58) &= ~0x10u;
        *(_DWORD *)(v7 + 32) = v58;
        v19 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
        v53 = *(_QWORD *)(v7 + 16);
        if ( (v53 & 0x400) == 0 && ((v53 & 4) != 0 || (v53 & 2) != 0) && v53 )
          MiReleasePageFileInfo(v19, v53, 1LL);
        MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((v7 + 0x220000000000LL) >> 4));
      }
      else
      {
        v27 = MI_READ_PTE_LOCK_FREE(v7 + 16);
        if ( (v27 & 0x400) != 0 )
          v14 = -2049LL;
        *(_QWORD *)(v7 + 16) = v27 & v14;
        if ( (v58 & 0x100000) != 0 )
        {
          *(_DWORD *)(v7 + 32) = v58;
          MiInsertPageInList(v7, 8u);
        }
        else
        {
          BYTE2(v58) = BYTE2(v58) & 0xF8 | 2;
          *(_DWORD *)(v7 + 32) = v58;
          MiInsertPageInList(v7, 4u);
        }
      }
    }
  }
LABEL_49:
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v13 )
    MiReleasePageFileInfo(v48, v13, 1LL);
  LOBYTE(v55) = v8;
  BYTE1(v55) = (2 * v62) | 1;
  HIWORD(v55) = ((unsigned int)v6 >> 3) & 0x1FF;
  return v55;
}
