/*
 * XREFs of MiWsleFree @ 0x14021BFD0
 * Callers:
 *     MiFreeWsleList @ 0x140287894 (MiFreeWsleList.c)
 * Callees:
 *     MiClearPageFileReservation @ 0x140213DEC (MiClearPageFileReservation.c)
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MiConfirmPageIsZero @ 0x14021D260 (MiConfirmPageIsZero.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPfnShareCountIsZero @ 0x1402209B0 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     MiBadShareCount @ 0x14023EE28 (MiBadShareCount.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14046511C (MiRewriteTrimPteAsDemandZero.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiWsleFree(unsigned __int64 a1, unsigned __int64 a2, char a3, unsigned __int64 a4)
{
  unsigned int v4; // r12d
  char v5; // bl
  __int64 v7; // r13
  unsigned __int64 v8; // r14
  char v9; // si
  int v10; // ebp
  unsigned int v11; // edi
  unsigned __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // r9
  __int64 v15; // rcx
  _QWORD *v16; // r15
  unsigned __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 *v21; // r11
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // ebp
  __int64 v26; // rcx
  _QWORD *v27; // r15
  unsigned __int64 v28; // r8
  __int64 v29; // r11
  __int64 v30; // r10
  __int64 v31; // rbp
  __int64 v32; // rax
  ULONG_PTR BugCheckParameter4; // rcx
  __int64 *v34; // rbp
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 ContainingPageTable; // r15
  int v40; // ecx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  char v46; // al
  char v47; // al
  __int64 v48; // [rsp+30h] [rbp-A8h]
  __int64 v49; // [rsp+30h] [rbp-A8h]
  __int64 v50; // [rsp+38h] [rbp-A0h]
  __int64 v51; // [rsp+40h] [rbp-98h]
  unsigned __int64 v52; // [rsp+48h] [rbp-90h] BYREF
  __int64 v53; // [rsp+50h] [rbp-88h]
  unsigned __int64 v54; // [rsp+58h] [rbp-80h]
  unsigned __int64 v55; // [rsp+60h] [rbp-78h]
  unsigned __int64 v56; // [rsp+E0h] [rbp+8h]
  unsigned int v57; // [rsp+E8h] [rbp+10h]
  int v58; // [rsp+F0h] [rbp+18h]
  int v59; // [rsp+F0h] [rbp+18h]
  int v60; // [rsp+F0h] [rbp+18h]
  int v61; // [rsp+F0h] [rbp+18h]
  int v62; // [rsp+F0h] [rbp+18h]
  BOOL v63; // [rsp+F8h] [rbp+20h]

  v56 = a1;
  v4 = 0;
  v5 = a4;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 48 * ((a4 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    v9 = HIBYTE(a4) & 0xF | (16 * ((a4 >> 60) & 7));
  else
    v9 = (*(_QWORD *)v8 >> 42) & 7;
  v63 = *(_QWORD *)(v8 + 40) >= 0LL;
  if ( (a3 & 4) != 0 )
    goto LABEL_75;
  if ( *(__int64 *)(v8 + 40) < 0 )
  {
    if ( (*(_QWORD *)(v8 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v8 + 8) >= 0 && *(_QWORD *)(v8 + 8)
      || (*(_DWORD *)(v8 + 16) & 0x400LL) != 0 )
    {
      goto LABEL_75;
    }
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
      goto LABEL_75;
    if ( (MiGetPagePrivilege(48 * ((a4 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) & 0xFFFFFFFD) != 0 )
      goto LABEL_75;
    a1 = v7 << 25 >> 16;
    if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_75;
  }
  if ( (unsigned __int16)*(_DWORD *)(v8 + 32) != 1
    || (HIWORD(*(_DWORD *)(v8 + 32)) & 0xC0) != 0x40
    || (*(_DWORD *)(v8 + 32) & 0x40000000) != 0 )
  {
LABEL_75:
    v10 = 0;
    goto LABEL_12;
  }
  v10 = 1;
LABEL_12:
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v11 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v11);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  if ( v10 && (unsigned int)MiConfirmPageIsZero(v8) )
  {
    MiRewriteTrimPteAsDemandZero(v56, v8);
    v50 = 0LL;
    goto LABEL_83;
  }
  v50 = 0LL;
  v12 = 0LL;
  if ( (v5 & 4) != 0 )
  {
LABEL_83:
    ContainingPageTable = MiGetContainingPageTable(v7);
    v60 = *(_DWORD *)(v8 + 32);
    *(_QWORD *)(v8 + 40) &= ~0x8000000000000000uLL;
    v40 = 0;
    HIWORD(v60) &= 0xD7C7u;
    *(_DWORD *)(v8 + 32) = v60;
    if ( (*(_QWORD *)(v8 + 40) & 0x10000000000LL) != 0 )
      v40 = *(_DWORD *)(v8 + 36) & 0x18000000;
    *(_DWORD *)(v8 + 36) = v40;
    *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
    HIWORD(v61) = HIWORD(*(_DWORD *)(v8 + 32));
    LOWORD(v61) = 0;
    *(_DWORD *)(v8 + 32) = v61;
    v52 = *(_QWORD *)(v8 + 16);
    if ( (v52 & 4) != 0 )
    {
      MiClearPageFileReservation((__int64 *)&v52);
      v12 = v52;
    }
    else
    {
      v12 = 0LL;
      v52 = 0LL;
    }
    if ( v12 )
      v50 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
    MiInsertPageInFreeOrZeroedList((__int64)(v8 + 0x220000000000LL) / 48);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v8 = 48 * ContainingPageTable - 0x220000000000LL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v41) )
        {
          HvlNotifyLongSpinWait(v4);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
      MiBadShareCount(48 * ContainingPageTable - 0x220000000000LL);
    v42 = (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v8 + 24) = v42 ^ (v42 ^ *(_QWORD *)(v8 + 24)) & 0xC000000000000000uLL;
    if ( !v42 )
      MiPfnShareCountIsZero(48 * ContainingPageTable - 0x220000000000LL, 0LL);
    goto LABEL_69;
  }
  if ( (v5 & 0x42) != 0 )
  {
    v12 = MiCaptureDirtyBitToPfn(v8);
    if ( v12 )
      v50 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  }
  if ( v63 )
    v48 = -1LL;
  else
    v48 = MiGetContainingPageTable(v7);
  if ( (a3 & 1) != 0
    && (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && (unsigned __int16)*(_DWORD *)(v8 + 32) == 1
    && (*(_BYTE *)(v8 + 34) & 0x10) == 0
    && (unsigned int)MiGetPfnPriority(v8) == 5 )
  {
    v62 = *(_DWORD *)(v8 + 32);
    HIBYTE(v62) = HIBYTE(v62) & 0xF8 | 4;
    *(_DWORD *)(v8 + 32) = v62;
  }
  if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
    MiBadShareCount(v8);
  v13 = -9LL;
  v14 = 0x4000000000000000LL;
  v15 = (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v8 + 24) = v15 ^ (v15 ^ *(_QWORD *)(v8 + 24)) & 0xC000000000000000uLL;
  if ( !v15 )
  {
    v58 = *(_DWORD *)(v8 + 32);
    if ( *(__int64 *)(v8 + 40) < 0 )
    {
      v16 = (_QWORD *)v8;
      v17 = 0LL;
      v53 = *(_QWORD *)(v8 + 16) >> 5;
      v18 = 0LL;
      v51 = 0LL;
      while ( !v18 )
      {
        v19 = ((unsigned int)v16[1] >> 3) & 0x1FF;
        if ( !v17 )
        {
          v20 = MiMapPageInHyperSpaceWorker(v16[5] & 0xFFFFFFFFFFLL, 0LL, 0x80000000LL, v14);
          v18 = v51;
          v17 = v20;
        }
        v21 = (__int64 *)(v17 + 8 * v19);
        v22 = ((unsigned __int64)*v21 >> 12) & 0xFFFFFFFFFFLL;
        if ( (_QWORD *)(48 * v22 - 0x220000000000LL) != v16 )
          KeBugCheckEx(
            0x4Eu,
            6uLL,
            0xAAAAAAAAAAAAAAABuLL * ((__int64)(v16 + 0x44000000000LL) >> 4),
            (ULONG_PTR)v21,
            *(_QWORD *)(v17 + 8 * v19));
        v14 = v22 << 7;
        v23 = 32 * (v14 | v53 & 0x1F | 0x40);
        if ( qword_140E2DB80 )
        {
          if ( (qword_140E2DB80 & v23) != 0 )
            v23 |= 0x10uLL;
          else
            v23 |= qword_140E2DB80;
        }
        *v21 = v23;
        v51 = ++v18;
        if ( v18 == 1 )
          break;
        v16 = (_QWORD *)(48 * (*v16 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
      }
      v14 = 0x4000000000000000LL;
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      *(_QWORD *)(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    }
    v15 = (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) != 0;
    LOWORD(v58) = v58 - 1;
    if ( (_WORD)v58 )
    {
      if ( (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) != 0 )
      {
        BYTE2(v58) |= 7u;
      }
      else
      {
        if ( (v58 & 0x100000) != 0 )
        {
          v46 = BYTE2(v58) & 0xF8 | 3;
        }
        else if ( (v58 & 0x80000) != 0 )
        {
          v46 = BYTE2(v58) & 0xF8 | 3;
        }
        else
        {
          v46 = BYTE2(v58) & 0xF8 | 2;
        }
        BYTE2(v58) = v46;
      }
      *(_DWORD *)(v8 + 32) = v58;
      if ( (*(_DWORD *)(v8 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(v8 + 16)) )
      {
        v15 = (__int64)qword_140E2FF88;
        *(_BYTE *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) + 723LL) = 1;
      }
    }
    else if ( (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (v58 & 0x10000000) != 0 )
        HIBYTE(v58) &= ~0x10u;
      *(_DWORD *)(v8 + 32) = v58;
      v24 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
      v54 = *(_QWORD *)(v8 + 16);
      if ( (v54 & 0x400) == 0 && ((v54 & 4) != 0 || (v54 & 2) != 0) && v54 )
        MiReleasePageFileInfo(v24, v54, 1LL);
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v8 + 0x220000000000LL) >> 4));
    }
    else
    {
      v43 = MI_READ_PTE_LOCK_FREE(v8 + 16);
      v44 = -9LL;
      if ( (v43 & 0x400) != 0 )
        v44 = -2049LL;
      *(_QWORD *)(v8 + 16) = v43 & v44;
      if ( (v58 & 0x100000) == 0 )
        BYTE2(v58) = BYTE2(v58) & 0xF8 | 2;
      *(_DWORD *)(v8 + 32) = v58;
      MiInsertPageInList(v8);
    }
  }
  if ( v48 != -1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v8 = 48 * v48 - 0x220000000000LL;
    v25 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v25 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15) )
        {
          HvlNotifyLongSpinWait(v25);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
      MiBadShareCount(v8);
    v26 = (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v8 + 24) = v26 ^ (v26 ^ *(_QWORD *)(v8 + 24)) & 0xC000000000000000uLL;
    if ( !v26 )
    {
      v59 = *(_DWORD *)(v8 + 32);
      if ( *(__int64 *)(v8 + 40) < 0 )
      {
        v27 = (_QWORD *)(48 * v48 - 0x220000000000LL);
        v28 = 0LL;
        v29 = *(_QWORD *)(v8 + 16) >> 5;
        v53 = v29;
        v30 = 0LL;
        v49 = 0LL;
        while ( !v30 )
        {
          v31 = ((unsigned int)v27[1] >> 3) & 0x1FF;
          if ( !v28 )
          {
            v32 = MiMapPageInHyperSpaceWorker(v27[5] & 0xFFFFFFFFFFLL, 0LL, 0x80000000LL, v14);
            v30 = v49;
            v28 = v32;
            LOBYTE(v29) = v53;
          }
          BugCheckParameter4 = *(_QWORD *)(v28 + 8 * v31);
          v34 = (__int64 *)(v28 + 8 * v31);
          v35 = (BugCheckParameter4 >> 12) & 0xFFFFFFFFFFLL;
          if ( (_QWORD *)(48 * v35 - 0x220000000000LL) != v27 )
            KeBugCheckEx(
              0x4Eu,
              6uLL,
              0xAAAAAAAAAAAAAAABuLL * ((__int64)(v27 + 0x44000000000LL) >> 4),
              (ULONG_PTR)v34,
              BugCheckParameter4);
          v14 = v35 << 7;
          v36 = 32 * (v14 | v29 & 0x1F | 0x40);
          if ( qword_140E2DB80 )
          {
            if ( (v36 & qword_140E2DB80) != 0 )
              v36 |= 0x10uLL;
            else
              v36 |= qword_140E2DB80;
          }
          *v34 = v36;
          v49 = ++v30;
          if ( v30 == 1 )
            break;
          v27 = (_QWORD *)(48 * (*v27 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
        }
        *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
        *(_QWORD *)(((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
      }
      LOWORD(v59) = v59 - 1;
      if ( (_WORD)v59 )
      {
        if ( (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) != 0 )
        {
          BYTE2(v59) |= 7u;
        }
        else
        {
          if ( (v59 & 0x100000) != 0 )
          {
            v47 = BYTE2(v59) & 0xF8 | 3;
          }
          else if ( (v59 & 0x80000) != 0 )
          {
            v47 = BYTE2(v59) & 0xF8 | 3;
          }
          else
          {
            v47 = BYTE2(v59) & 0xF8 | 2;
          }
          BYTE2(v59) = v47;
        }
        *(_DWORD *)(v8 + 32) = v59;
        if ( (*(_DWORD *)(v8 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(v8 + 16)) )
          *(_BYTE *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) + 723LL) = 1;
      }
      else if ( (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) != 0 )
      {
        if ( (v59 & 0x10000000) != 0 )
          HIBYTE(v59) &= ~0x10u;
        *(_DWORD *)(v8 + 32) = v59;
        v37 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
        v55 = *(_QWORD *)(v8 + 16);
        if ( (v55 & 0x400) == 0 && ((v55 & 4) != 0 || (v55 & 2) != 0) && v55 )
          MiReleasePageFileInfo(v37, v55, 1LL);
        MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v8 + 0x220000000000LL) >> 4));
      }
      else
      {
        v45 = MI_READ_PTE_LOCK_FREE(v8 + 16);
        if ( (v45 & 0x400) != 0 )
          v13 = -2049LL;
        *(_QWORD *)(v8 + 16) = v45 & v13;
        if ( (v59 & 0x100000) == 0 )
          BYTE2(v59) = BYTE2(v59) & 0xF8 | 2;
        *(_DWORD *)(v8 + 32) = v59;
        MiInsertPageInList(v8);
      }
    }
  }
LABEL_69:
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v12 )
    MiReleasePageFileInfo(v50, v12, 1LL);
  LOBYTE(v57) = v9;
  BYTE1(v57) = (2 * v63) | 1;
  HIWORD(v57) = ((unsigned int)v7 >> 3) & 0x1FF;
  return v57;
}
