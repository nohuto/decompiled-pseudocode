/*
 * XREFs of MiWsleFree @ 0x140248D20
 * Callers:
 *     MiFreeWsleList @ 0x140297494 (MiFreeWsleList.c)
 * Callees:
 *     MiRewriteTrimPteAsDemandZero @ 0x140200A7C (MiRewriteTrimPteAsDemandZero.c)
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiBadShareCount @ 0x140206F78 (MiBadShareCount.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiConfirmPageIsZero @ 0x140249FB0 (MiConfirmPageIsZero.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPfnShareCountIsZero @ 0x14024D700 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiClearPageFileReservation @ 0x14030714C (MiClearPageFileReservation.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiWsleFree(unsigned __int64 a1, unsigned __int64 a2, char a3, unsigned __int64 a4)
{
  unsigned int v4; // r12d
  char v5; // bl
  __int64 v7; // r13
  __int64 v8; // r8
  __int64 v9; // r14
  char v10; // si
  __int64 v11; // rax
  _BOOL8 v12; // rdx
  int v13; // ebp
  unsigned int v14; // edi
  unsigned __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  _QWORD *v20; // r15
  unsigned __int64 v21; // r8
  __int64 v22; // r10
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 *v25; // r11
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // ebp
  __int64 v31; // rcx
  _QWORD *v32; // r15
  unsigned __int64 v33; // r8
  __int64 v34; // r11
  __int64 v35; // r10
  __int64 v36; // rbp
  __int64 v37; // rax
  ULONG_PTR BugCheckParameter4; // rcx
  __int64 *v39; // rbp
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 ContainingPageTable; // r15
  int v45; // ecx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  char v53; // al
  char v54; // al
  __int64 v55; // [rsp+30h] [rbp-A8h]
  __int64 v56; // [rsp+30h] [rbp-A8h]
  __int64 v57; // [rsp+38h] [rbp-A0h]
  __int64 v58; // [rsp+40h] [rbp-98h]
  unsigned __int64 v59; // [rsp+48h] [rbp-90h] BYREF
  __int64 v60; // [rsp+50h] [rbp-88h]
  unsigned __int64 v61; // [rsp+58h] [rbp-80h]
  unsigned __int64 v62; // [rsp+60h] [rbp-78h]
  __int64 v63; // [rsp+E0h] [rbp+8h]
  unsigned int v64; // [rsp+E8h] [rbp+10h]
  int v65; // [rsp+F0h] [rbp+18h]
  int v66; // [rsp+F0h] [rbp+18h]
  int v67; // [rsp+F0h] [rbp+18h]
  int v68; // [rsp+F0h] [rbp+18h]
  int v69; // [rsp+F0h] [rbp+18h]
  BOOL v70; // [rsp+F8h] [rbp+20h]

  v63 = a1;
  v4 = 0;
  v5 = a4;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0xFFFFFFFFFFLL;
  v9 = 48 * ((a4 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    v10 = HIBYTE(a4) & 0xF | (16 * ((a4 >> 60) & 7));
  else
    v10 = (*(_QWORD *)v9 >> 42) & 7;
  v11 = *(_QWORD *)(v9 + 40);
  v12 = v11 >= 0;
  v70 = v11 >= 0;
  if ( (a3 & 4) != 0 )
    goto LABEL_75;
  if ( *(__int64 *)(v9 + 40) < 0 )
  {
    if ( (*(_QWORD *)(v9 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v9 + 8) >= 0 && *(_QWORD *)(v9 + 8)
      || (*(_DWORD *)(v9 + 16) & 0x400LL) != 0 )
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
  if ( (unsigned __int16)*(_DWORD *)(v9 + 32) != 1
    || (HIWORD(*(_DWORD *)(v9 + 32)) & 0xC0) != 0x40
    || (*(_DWORD *)(v9 + 32) & 0x40000000) != 0 )
  {
LABEL_75:
    v13 = 0;
    goto LABEL_12;
  }
  v13 = 1;
LABEL_12:
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v14 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, v12, v8, a4) )
      {
        HvlNotifyLongSpinWait(v14);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v9 + 24) < 0 );
  }
  if ( v13 && (unsigned int)MiConfirmPageIsZero(v9) )
  {
    MiRewriteTrimPteAsDemandZero(v63, (_QWORD *)v9);
    v57 = 0LL;
    goto LABEL_83;
  }
  v57 = 0LL;
  v15 = 0LL;
  if ( (v5 & 4) != 0 )
  {
LABEL_83:
    ContainingPageTable = MiGetContainingPageTable(v7);
    v67 = *(_DWORD *)(v9 + 32);
    *(_QWORD *)(v9 + 40) &= ~0x8000000000000000uLL;
    v45 = 0;
    HIWORD(v67) &= 0xD7C7u;
    *(_DWORD *)(v9 + 32) = v67;
    if ( (*(_QWORD *)(v9 + 40) & 0x10000000000LL) != 0 )
      v45 = *(_DWORD *)(v9 + 36) & 0x18000000;
    *(_DWORD *)(v9 + 36) = v45;
    *(_QWORD *)(v9 + 24) &= 0xC000000000000000uLL;
    HIWORD(v68) = HIWORD(*(_DWORD *)(v9 + 32));
    LOWORD(v68) = 0;
    *(_DWORD *)(v9 + 32) = v68;
    v59 = *(_QWORD *)(v9 + 16);
    if ( (v59 & 4) != 0 )
    {
      MiClearPageFileReservation(&v59);
      v15 = v59;
    }
    else
    {
      v15 = 0LL;
      v59 = 0LL;
    }
    if ( v15 )
      v57 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
    MiInsertPageInFreeOrZeroedList((v9 + 0x220000000000LL) / 48);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v9 = 48 * ContainingPageTable - 0x220000000000LL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v47, v46, v48, v17) )
        {
          HvlNotifyLongSpinWait(v4);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v9 + 34) & 7) != 6 )
      MiBadShareCount(48 * ContainingPageTable - 0x220000000000LL);
    v49 = (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v9 + 24) = v49 ^ (v49 ^ *(_QWORD *)(v9 + 24)) & 0xC000000000000000uLL;
    if ( !v49 )
      MiPfnShareCountIsZero(48 * ContainingPageTable - 0x220000000000LL, 0LL);
    goto LABEL_69;
  }
  if ( (v5 & 0x42) != 0 )
  {
    v15 = MiCaptureDirtyBitToPfn(v9);
    if ( v15 )
      v57 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
  }
  if ( v70 )
    v55 = -1LL;
  else
    v55 = MiGetContainingPageTable(v7);
  if ( (a3 & 1) != 0
    && (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && (unsigned __int16)*(_DWORD *)(v9 + 32) == 1
    && (*(_BYTE *)(v9 + 34) & 0x10) == 0
    && (unsigned int)MiGetPfnPriority(v9) == 5 )
  {
    v69 = *(_DWORD *)(v9 + 32);
    HIBYTE(v69) = HIBYTE(v69) & 0xF8 | 4;
    *(_DWORD *)(v9 + 32) = v69;
  }
  if ( (*(_BYTE *)(v9 + 34) & 7) != 6 )
    MiBadShareCount(v9);
  v16 = -9LL;
  v17 = 0x4000000000000000LL;
  v18 = (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  v19 = 0xC000000000000000uLL;
  *(_QWORD *)(v9 + 24) = v18 ^ (v18 ^ *(_QWORD *)(v9 + 24)) & 0xC000000000000000uLL;
  if ( !v18 )
  {
    v65 = *(_DWORD *)(v9 + 32);
    if ( *(__int64 *)(v9 + 40) < 0 )
    {
      v20 = (_QWORD *)v9;
      v21 = 0LL;
      v60 = *(_QWORD *)(v9 + 16) >> 5;
      v19 = 0xFFFFFFFFFFLL;
      v22 = 0LL;
      v58 = 0LL;
      while ( !v22 )
      {
        v23 = ((unsigned int)v20[1] >> 3) & 0x1FF;
        if ( !v21 )
        {
          v24 = MiMapPageInHyperSpaceWorker(v20[5] & 0xFFFFFFFFFFLL, 0LL, 0x80000000LL);
          v22 = v58;
          v21 = v24;
        }
        v25 = (__int64 *)(v21 + 8 * v23);
        v26 = ((unsigned __int64)*v25 >> 12) & 0xFFFFFFFFFFLL;
        if ( (_QWORD *)(48 * v26 - 0x220000000000LL) != v20 )
          KeBugCheckEx(
            0x4Eu,
            6uLL,
            0xAAAAAAAAAAAAAAABuLL * ((__int64)(v20 + 0x44000000000LL) >> 4),
            (ULONG_PTR)v25,
            *(_QWORD *)(v21 + 8 * v23));
        v19 = qword_140E2DCC0;
        v27 = 32 * ((v26 << 7) | v60 & 0x1F | 0x40);
        if ( qword_140E2DCC0 )
        {
          if ( (qword_140E2DCC0 & v27) != 0 )
            v27 |= 0x10uLL;
          else
            v27 |= qword_140E2DCC0;
        }
        *v25 = v27;
        v58 = ++v22;
        if ( v22 == 1 )
          break;
        v19 = 0xFFFFFFFFFFLL;
        v20 = (_QWORD *)(48 * (*v20 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
      }
      v17 = 0x4000000000000000LL;
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      *(_QWORD *)(((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    }
    v18 = (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) != 0;
    LOWORD(v65) = v65 - 1;
    if ( (_WORD)v65 )
    {
      if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) != 0 )
      {
        BYTE2(v65) |= 7u;
      }
      else
      {
        if ( (v65 & 0x100000) != 0 )
        {
          v53 = BYTE2(v65) & 0xF8 | 3;
        }
        else if ( (v65 & 0x80000) != 0 )
        {
          v53 = BYTE2(v65) & 0xF8 | 3;
        }
        else
        {
          v53 = BYTE2(v65) & 0xF8 | 2;
        }
        BYTE2(v65) = v53;
      }
      *(_DWORD *)(v9 + 32) = v65;
      if ( (*(_DWORD *)(v9 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(v9 + 16)) )
      {
        v18 = (__int64)qword_140E300C8;
        v19 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
        *(_BYTE *)(v19 + 723) = 1;
      }
    }
    else if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (v65 & 0x10000000) != 0 )
        HIBYTE(v65) &= ~0x10u;
      *(_DWORD *)(v9 + 32) = v65;
      v28 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
      v61 = *(_QWORD *)(v9 + 16);
      if ( (v61 & 0x400) == 0 && ((v61 & 4) != 0 || (v61 & 2) != 0) && v61 )
        MiReleasePageFileInfo(v28, v61, 1LL, 0x4000000000000000LL);
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((v9 + 0x220000000000LL) >> 4));
    }
    else
    {
      v50 = MI_READ_PTE_LOCK_FREE(v9 + 16);
      v51 = -9LL;
      if ( (v50 & 0x400) != 0 )
        v51 = -2049LL;
      *(_QWORD *)(v9 + 16) = v50 & v51;
      if ( (v65 & 0x100000) != 0 )
      {
        *(_DWORD *)(v9 + 32) = v65;
        MiInsertPageInList(v9, 8LL);
      }
      else
      {
        BYTE2(v65) = BYTE2(v65) & 0xF8 | 2;
        *(_DWORD *)(v9 + 32) = v65;
        MiInsertPageInList(v9, 4LL);
      }
    }
  }
  if ( v55 != -1 )
  {
    v29 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v9 = 48 * v55 - 0x220000000000LL;
    v30 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v30 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v18, v19, v29, v17) )
        {
          HvlNotifyLongSpinWait(v30);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v9 + 34) & 7) != 6 )
      MiBadShareCount(v9);
    v31 = (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v9 + 24) = v31 ^ (v31 ^ *(_QWORD *)(v9 + 24)) & 0xC000000000000000uLL;
    if ( !v31 )
    {
      v66 = *(_DWORD *)(v9 + 32);
      if ( *(__int64 *)(v9 + 40) < 0 )
      {
        v32 = (_QWORD *)(48 * v55 - 0x220000000000LL);
        v33 = 0LL;
        v34 = *(_QWORD *)(v9 + 16) >> 5;
        v60 = v34;
        v35 = 0LL;
        v56 = 0LL;
        while ( !v35 )
        {
          v36 = ((unsigned int)v32[1] >> 3) & 0x1FF;
          if ( !v33 )
          {
            v37 = MiMapPageInHyperSpaceWorker(v32[5] & 0xFFFFFFFFFFLL, 0LL, 0x80000000LL);
            v35 = v56;
            v33 = v37;
            LOBYTE(v34) = v60;
          }
          BugCheckParameter4 = *(_QWORD *)(v33 + 8 * v36);
          v39 = (__int64 *)(v33 + 8 * v36);
          v40 = (BugCheckParameter4 >> 12) & 0xFFFFFFFFFFLL;
          if ( (_QWORD *)(48 * v40 - 0x220000000000LL) != v32 )
            KeBugCheckEx(
              0x4Eu,
              6uLL,
              0xAAAAAAAAAAAAAAABuLL * ((__int64)(v32 + 0x44000000000LL) >> 4),
              (ULONG_PTR)v39,
              BugCheckParameter4);
          v17 = v40 << 7;
          v41 = 32 * (v17 | v34 & 0x1F | 0x40);
          if ( qword_140E2DCC0 )
          {
            if ( (v41 & qword_140E2DCC0) != 0 )
              v41 |= 0x10uLL;
            else
              v41 |= qword_140E2DCC0;
          }
          *v39 = v41;
          v56 = ++v35;
          if ( v35 == 1 )
            break;
          v32 = (_QWORD *)(48 * (*v32 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
        }
        *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
        *(_QWORD *)(((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
      }
      LOWORD(v66) = v66 - 1;
      if ( (_WORD)v66 )
      {
        if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) != 0 )
        {
          BYTE2(v66) |= 7u;
        }
        else
        {
          if ( (v66 & 0x100000) != 0 )
          {
            v54 = BYTE2(v66) & 0xF8 | 3;
          }
          else if ( (v66 & 0x80000) != 0 )
          {
            v54 = BYTE2(v66) & 0xF8 | 3;
          }
          else
          {
            v54 = BYTE2(v66) & 0xF8 | 2;
          }
          BYTE2(v66) = v54;
        }
        *(_DWORD *)(v9 + 32) = v66;
        if ( (*(_DWORD *)(v9 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(v9 + 16)) )
          *(_BYTE *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) + 723LL) = 1;
      }
      else if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) != 0 )
      {
        if ( (v66 & 0x10000000) != 0 )
          HIBYTE(v66) &= ~0x10u;
        *(_DWORD *)(v9 + 32) = v66;
        v42 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
        v62 = *(_QWORD *)(v9 + 16);
        if ( (v62 & 0x400) == 0 && ((v62 & 4) != 0 || (v62 & 2) != 0) && v62 )
          MiReleasePageFileInfo(v42, v62, 1LL, v17);
        MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((v9 + 0x220000000000LL) >> 4));
      }
      else
      {
        v52 = MI_READ_PTE_LOCK_FREE(v9 + 16);
        if ( (v52 & 0x400) != 0 )
          v16 = -2049LL;
        *(_QWORD *)(v9 + 16) = v52 & v16;
        if ( (v66 & 0x100000) != 0 )
        {
          *(_DWORD *)(v9 + 32) = v66;
          MiInsertPageInList(v9, 8LL);
        }
        else
        {
          BYTE2(v66) = BYTE2(v66) & 0xF8 | 2;
          *(_DWORD *)(v9 + 32) = v66;
          MiInsertPageInList(v9, 4LL);
        }
      }
    }
  }
LABEL_69:
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v15 )
    MiReleasePageFileInfo(v57, v15, 1LL, v17);
  LOBYTE(v64) = v10;
  BYTE1(v64) = (2 * v70) | 1;
  HIWORD(v64) = ((unsigned int)v7 >> 3) & 0x1FF;
  return v64;
}
