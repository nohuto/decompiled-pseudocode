/*
 * XREFs of MiZeroCfgSystemWideBitmapWorker @ 0x14033D068
 * Callers:
 *     MiZeroCfgSystemWideBitmap @ 0x14047E884 (MiZeroCfgSystemWideBitmap.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiDetermineModifiedPageListHead @ 0x14021BAB0 (MiDetermineModifiedPageListHead.c)
 *     MiTransferSoftwarePte @ 0x1402280C0 (MiTransferSoftwarePte.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLocatePagefileSubsection @ 0x1402BC3A0 (MiLocatePagefileSubsection.c)
 *     MiDiscardTransitionPteEx @ 0x1402C5640 (MiDiscardTransitionPteEx.c)
 *     MiClearPageFileReservation @ 0x1402CC084 (MiClearPageFileReservation.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileSpace @ 0x1403E1160 (MiReleasePageFileSpace.c)
 *     KeZeroSinglePage @ 0x1406A8080 (KeZeroSinglePage.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall MiZeroCfgSystemWideBitmapWorker(unsigned int *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r8
  __int16 v6; // r9
  __int64 v7; // r15
  unsigned int *v8; // r12
  __int64 v9; // rcx
  unsigned __int64 v10; // r14
  unsigned int *v11; // rax
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rdx
  unsigned int *v14; // r13
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  ULONG_PTR v19; // rcx
  unsigned __int64 v20; // rdi
  __int64 v21; // r15
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  ULONG_PTR v24; // r14
  unsigned __int64 v25; // rdi
  __int64 v26; // rbx
  unsigned __int64 v27; // r8
  int v28; // r12d
  char v29; // r9
  _KPROCESS *v30; // r8
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // r15
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  char v36; // r9
  _KPROCESS *v37; // r8
  __int64 v38; // rdx
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rbx
  void *v42; // rcx
  size_t v43; // r8
  __int64 v44; // rax
  ULONG_PTR v45; // rcx
  bool v46; // zf
  __int64 v47; // r12
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // r15
  size_t v50; // r8
  void *v51; // rcx
  unsigned __int64 v52; // r10
  volatile signed __int32 *v53; // r8
  unsigned int v54; // eax
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  char v57; // al
  unsigned __int64 v58; // r8
  int v59; // edi
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // [rsp+20h] [rbp-59h]
  __int64 v62; // [rsp+28h] [rbp-51h]
  unsigned __int64 v63; // [rsp+30h] [rbp-49h]
  __int64 v64; // [rsp+38h] [rbp-41h]
  __int64 v65; // [rsp+40h] [rbp-39h]
  unsigned __int64 v66; // [rsp+48h] [rbp-31h]
  unsigned __int64 v67; // [rsp+50h] [rbp-29h] BYREF
  __int64 v68; // [rsp+58h] [rbp-21h] BYREF
  unsigned int *v69; // [rsp+60h] [rbp-19h]
  unsigned __int64 v70; // [rsp+68h] [rbp-11h] BYREF
  unsigned __int64 v71; // [rsp+70h] [rbp-9h]
  unsigned __int8 v72; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v73; // [rsp+E8h] [rbp+6Fh]
  unsigned int v74; // [rsp+F0h] [rbp+77h]
  int v75; // [rsp+F8h] [rbp+7Fh]

  v3 = a2 >> 3;
  v4 = a3 >> 3;
  v6 = *(_WORD *)(*(_QWORD *)a1 + 60LL);
  v7 = (a2 >> 3) & 0xFFF;
  v74 = (a2 >> 3) & 0xFFF;
  v62 = *((_QWORD *)qword_140E2FD48 + (v6 & 0x3FF));
  v73 = (v4 + (a2 >> 3)) & 0xFFF;
  v70 = ((a2 >> 3) + v4 - 1) >> 12;
  v8 = MiLocatePagefileSubsection(a1, &v70);
  v69 = v8;
  v71 = v70;
  v9 = *((_QWORD *)v8 + 1);
  v67 = v3 >> 12;
  v10 = v9 + 8 * v70;
  v11 = MiLocatePagefileSubsection(a1, &v67);
  v13 = v67;
  v14 = v11;
  while ( 1 )
  {
    v15 = *((_QWORD *)v14 + 1);
    if ( v15 )
      break;
    if ( v14 == v8 )
      return;
    v14 = (unsigned int *)*((_QWORD *)v14 + 2);
    v13 = 0LL;
    v67 = 0LL;
  }
  v16 = v15 + 8 * v13;
  if ( v14 == v8 )
    v17 = v10;
  else
    v17 = v15 + 8LL * v14[11];
  v18 = v73;
  v61 = v17;
  v19 = 0LL;
  v72 = 17;
  v66 = 0LL;
  v63 = 0LL;
  v65 = v16 & -(__int64)((_DWORD)v7 != 0);
  v20 = 0LL;
  v21 = v10 & -(__int64)(v73 != 0);
  v64 = v21;
  while ( v16 < v17 )
  {
LABEL_7:
    if ( (v20 & 0xFFFFFFFFFFFFF000uLL) == (v16 & 0xFFFFFFFFFFFFF000uLL) || !v20 )
    {
      if ( v19 )
        goto LABEL_9;
    }
    else
    {
      MiUnlockProtoPoolPage(v19, v72, v18, v12);
      v20 = 0LL;
      v63 = 0LL;
    }
    v66 = MiLockProtoPoolPage(v16, &v72);
    v19 = v66;
    if ( v66 )
    {
      v63 = v16;
LABEL_9:
      v22 = MiLockLeafPage((unsigned __int64 *)v16, 0);
      v23 = *(_QWORD *)v16;
      v24 = v22;
      if ( (*(_QWORD *)v16 & 1) == 0 )
      {
        if ( (v23 & 0x400) != 0 )
          goto LABEL_30;
        if ( (v23 & 0x800) == 0 )
        {
          if ( v23 && v16 != v65 && v16 != v21 )
          {
            if ( (v23 & 2) != 0 )
            {
              v58 = *(_QWORD *)v16;
              v38 = *(_QWORD *)(v62 + 8LL * ((unsigned __int16)v23 >> 12) + 18528);
              if ( qword_140E2D940 )
              {
                if ( (v23 & 0x10) != 0 )
                  v58 = v23 & 0xFFFFFFFFFFFFFFEFuLL;
                else
                  v58 = v23 & ~qword_140E2D940;
              }
              v37 = (_KPROCESS *)HIDWORD(v58);
              v36 = 2;
            }
            else
            {
              v36 = 0;
              v37 = 0LL;
              v38 = 0LL;
            }
            v39 = MiTransferSoftwarePte(*(_QWORD *)v16, v38, v37, v36);
            MiReleasePageFileSpace(v62, v23, 0LL);
            *(_QWORD *)v16 = v39;
          }
          goto LABEL_30;
        }
        if ( qword_140E2D940 )
        {
          if ( (v23 & 0x10) != 0 )
            v23 &= ~0x10uLL;
          else
            v23 &= ~qword_140E2D940;
        }
        v25 = (v23 >> 12) & 0xFFFFFFFFFFLL;
        v26 = 0LL;
        if ( !(unsigned __int16)*(_DWORD *)(v22 + 32) )
        {
          if ( v16 != v65 && v16 != v21 )
          {
            if ( (MiUnlinkPageFromListEx(v22, 0) & 3) == 0 )
            {
              v68 = *(_QWORD *)(v24 + 16);
              if ( (v68 & 4) != 0 )
              {
                MiClearPageFileReservation((unsigned __int64)&v68);
                v26 = v68;
              }
              else
              {
                v68 = 0LL;
              }
              v27 = *(_QWORD *)(v24 + 16);
              v28 = 0;
              if ( (v27 & 2) != 0 )
              {
                v31 = *(_QWORD *)(v62 + 8LL * ((unsigned __int16)v27 >> 12) + 18528);
                if ( qword_140E2D940 && (v27 & 0x10) == 0 )
                  v27 &= ~qword_140E2D940;
                v30 = (_KPROCESS *)HIDWORD(v27);
                v29 = 2;
              }
              else
              {
                v29 = 0;
                v30 = 0LL;
                v31 = 0LL;
              }
              v32 = MiTransferSoftwarePte(*(_QWORD *)(v24 + 16), v31, v30, v29);
              v33 = 48 * (*(_QWORD *)(v24 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
              *(_QWORD *)v16 = v32;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v28 & HvlLongSpinCountMask) == 0
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
                while ( *(__int64 *)(v33 + 24) < 0 );
              }
              MiDecrementShareCountEx(v33, 0LL);
              _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiInsertPageInFreeOrZeroedList(v25);
              goto LABEL_26;
            }
            v45 = v24;
LABEL_59:
            MiDiscardTransitionPteEx(v45);
            _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_30:
            v19 = v66;
            v16 += 8LL;
            v20 = v63;
            goto LABEL_31;
          }
          v46 = (*(_BYTE *)(v22 + 34) & 0x10) == 0;
          v75 = 0;
          if ( v46 )
          {
            v75 = 1;
            v57 = MiUnlinkPageFromListEx(v22, 0);
            v45 = v24;
            if ( (v57 & 3) != 0 )
              goto LABEL_59;
            v26 = MiCaptureDirtyBitToPfn(v24);
            v47 = 0LL;
          }
          else
          {
            v47 = MiDetermineModifiedPageListHead(v22, v62, 0);
            ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v47 + 32));
          }
          v48 = MiMapPageInHyperSpaceWorker(v25, 0LL, 0x80000000);
          v49 = v48;
          if ( v16 == v65 )
          {
            v50 = 4096 - v74;
            v51 = (void *)(v48 + v74);
          }
          else
          {
            v50 = v73;
            v51 = (void *)v48;
          }
          memset_0(v51, 0, v50);
          *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
          *(_QWORD *)(((v49 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
          if ( dword_140E2FE0C == 1 )
          {
            v52 = v25 & 0x1F;
            v12 = 1LL;
            v53 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E2FE60 + 1) + 4 * (v25 >> 5));
            if ( v52 + 1 <= 0x20 )
            {
              v54 = 1 << v52;
              goto LABEL_67;
            }
            if ( (v25 & 0x1F) == 0 )
              goto LABEL_95;
            v59 = v25 & 0x1F;
            _InterlockedOr(v53++, ((1 << (32 - v59)) - 1) << v52);
            v12 = 1LL - (unsigned int)(32 - v59);
            if ( v12 >= 0x20 )
            {
              v60 = v12 >> 5;
              v12 += -32LL * (v12 >> 5);
              do
              {
                *v53++ = -1;
                --v60;
              }
              while ( v60 );
            }
            if ( v12 )
            {
LABEL_95:
              v54 = (1 << v12) - 1;
LABEL_67:
              _InterlockedOr(v53, v54);
            }
          }
          if ( v47 )
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v47 + 32));
          if ( v75 )
            MiInsertPageInList(v24, 8u);
LABEL_26:
          v21 = v64;
          v8 = v69;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !v26 )
          goto LABEL_30;
        v34 = v62;
        v35 = v26;
LABEL_29:
        MiReleasePageFileInfo(v34, v35, 1);
        goto LABEL_30;
      }
      v40 = MiMapPageInHyperSpaceWorker((v23 >> 12) & 0xFFFFFFFFFFLL, 0LL, 0x80000000);
      v41 = v40;
      if ( v16 == v65 )
      {
        v43 = 4096 - v74;
        v42 = (void *)(v40 + v74);
      }
      else
      {
        v42 = (void *)v40;
        if ( v16 != v21 )
        {
          KeZeroSinglePage(v40);
LABEL_52:
          *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
          *(_QWORD *)(((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
          v44 = MiCaptureDirtyBitToPfn(v24);
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !v44 )
            goto LABEL_30;
          v35 = v44;
          v34 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v24 + 40) >> 43) & 0x3FFLL));
          goto LABEL_29;
        }
        v43 = v73;
      }
      memset_0(v42, 0, v43);
      goto LABEL_52;
    }
    v16 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_31:
    v17 = v61;
    v18 = v73;
  }
  while ( v14 != v8 )
  {
    v14 = (unsigned int *)*((_QWORD *)v14 + 2);
    v16 = *((_QWORD *)v14 + 1);
    if ( v16 )
    {
      if ( v14 == v8 )
      {
        v55 = *((_QWORD *)v8 + 1);
        v56 = v55 + 8 * v71;
        if ( (_DWORD)v18 )
          v21 = v55 + 8 * v71;
        v64 = v21;
      }
      else
      {
        v56 = v16 + 8LL * v14[11];
      }
      v61 = v56;
      goto LABEL_7;
    }
  }
  if ( v19 )
    MiUnlockProtoPoolPage(v19, v72, v18, v12);
}
