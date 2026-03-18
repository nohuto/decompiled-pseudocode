/*
 * XREFs of MiZeroCfgSystemWideBitmapWorker @ 0x1403E4774
 * Callers:
 *     MiZeroCfgSystemWideBitmap @ 0x1403E471C (MiZeroCfgSystemWideBitmap.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiClearPageFileReservation @ 0x140213DEC (MiClearPageFileReservation.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiDetermineModifiedPageListHead @ 0x14022D670 (MiDetermineModifiedPageListHead.c)
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockLeafPage @ 0x1402E8100 (MiLockLeafPage.c)
 *     MiTransferSoftwarePte @ 0x14039F300 (MiTransferSoftwarePte.c)
 *     MiDiscardTransitionPteEx @ 0x1403A1C98 (MiDiscardTransitionPteEx.c)
 *     MiLocatePagefileSubsection @ 0x1403E4EE0 (MiLocatePagefileSubsection.c)
 *     MiReleasePageFileSpace @ 0x1403E4F90 (MiReleasePageFileSpace.c)
 *     KeZeroSinglePage @ 0x1406B3350 (KeZeroSinglePage.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall MiZeroCfgSystemWideBitmapWorker(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r8
  __int16 v6; // r9
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rcx
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  ULONG_PTR v18; // rcx
  unsigned __int64 v19; // rdi
  __int64 v20; // r15
  ULONG_PTR v21; // rax
  unsigned __int64 v22; // rdi
  ULONG_PTR v23; // r14
  unsigned __int64 v24; // rdi
  __int64 v25; // rbx
  unsigned __int64 v26; // r8
  unsigned int v27; // r12d
  char v28; // r9
  unsigned __int64 v29; // r8
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r15
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  char v35; // r9
  unsigned __int64 v36; // r8
  __int64 v37; // rdx
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rbx
  size_t v41; // r8
  void *v42; // rcx
  __int64 v43; // rax
  ULONG_PTR v44; // rcx
  bool v45; // zf
  __int64 v46; // r12
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // r15
  size_t v49; // r8
  void *v50; // rcx
  unsigned __int64 v51; // r10
  unsigned __int64 v52; // r9
  volatile signed __int32 *v53; // r8
  unsigned int v54; // eax
  __int64 v55; // rax
  char v56; // al
  unsigned __int64 v57; // r8
  int v58; // edi
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // [rsp+20h] [rbp-59h]
  __int64 v61; // [rsp+28h] [rbp-51h]
  unsigned __int64 v62; // [rsp+30h] [rbp-49h]
  __int64 v63; // [rsp+38h] [rbp-41h]
  __int64 v64; // [rsp+40h] [rbp-39h]
  __int64 v65; // [rsp+48h] [rbp-31h]
  unsigned __int64 v66; // [rsp+50h] [rbp-29h] BYREF
  __int64 v67; // [rsp+58h] [rbp-21h] BYREF
  __int64 v68; // [rsp+60h] [rbp-19h]
  unsigned __int64 v69; // [rsp+68h] [rbp-11h] BYREF
  unsigned __int64 v70; // [rsp+70h] [rbp-9h]
  unsigned __int8 v71; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v72; // [rsp+E8h] [rbp+6Fh]
  unsigned int v73; // [rsp+F0h] [rbp+77h]
  int v74; // [rsp+F8h] [rbp+7Fh]

  v3 = a2 >> 3;
  v4 = a3 >> 3;
  v6 = *(_WORD *)(*(_QWORD *)a1 + 60LL);
  v7 = (a2 >> 3) & 0xFFF;
  v73 = (a2 >> 3) & 0xFFF;
  v61 = *((_QWORD *)qword_140E2FF88 + (v6 & 0x3FF));
  v72 = (v4 + (a2 >> 3)) & 0xFFF;
  v69 = ((a2 >> 3) + v4 - 1) >> 12;
  v8 = MiLocatePagefileSubsection(a1, &v69);
  v68 = v8;
  v70 = v69;
  v9 = *(_QWORD *)(v8 + 8);
  v66 = v3 >> 12;
  v10 = v9 + 8 * v69;
  v11 = MiLocatePagefileSubsection(a1, &v66);
  v12 = v66;
  v13 = v11;
  while ( 1 )
  {
    v14 = *(_QWORD *)(v13 + 8);
    if ( v14 )
      break;
    if ( v13 == v8 )
      return;
    v13 = *(_QWORD *)(v13 + 16);
    v12 = 0LL;
    v66 = 0LL;
  }
  v15 = v14 + 8 * v12;
  if ( v13 == v8 )
    v16 = v10;
  else
    v16 = v14 + 8LL * *(unsigned int *)(v13 + 44);
  v17 = v72;
  v60 = v16;
  v18 = 0LL;
  v71 = 17;
  v65 = 0LL;
  v62 = 0LL;
  v64 = v15 & -(__int64)((_DWORD)v7 != 0);
  v19 = 0LL;
  v20 = v10 & -(__int64)(v72 != 0);
  v63 = v20;
  while ( v15 < v16 )
  {
LABEL_7:
    if ( (v19 & 0xFFFFFFFFFFFFF000uLL) == (v15 & 0xFFFFFFFFFFFFF000uLL) || !v19 )
    {
      if ( v18 )
        goto LABEL_9;
    }
    else
    {
      LOBYTE(v16) = v71;
      MiUnlockProtoPoolPage(v18, v16, v17);
      v19 = 0LL;
      v62 = 0LL;
    }
    v65 = MiLockProtoPoolPage(v15, &v71);
    v18 = v65;
    if ( v65 )
    {
      v62 = v15;
LABEL_9:
      v21 = MiLockLeafPage((unsigned __int64 *)v15, 0);
      v22 = *(_QWORD *)v15;
      v23 = v21;
      if ( (*(_QWORD *)v15 & 1) == 0 )
      {
        if ( (v22 & 0x400) != 0 )
          goto LABEL_30;
        if ( (v22 & 0x800) == 0 )
        {
          if ( v22 && v15 != v64 && v15 != v20 )
          {
            if ( (v22 & 2) != 0 )
            {
              v57 = *(_QWORD *)v15;
              v37 = *(_QWORD *)(v61 + 8LL * ((unsigned __int16)v22 >> 12) + 18528);
              if ( qword_140E2DB80 )
              {
                if ( (v22 & 0x10) != 0 )
                  v57 = v22 & 0xFFFFFFFFFFFFFFEFuLL;
                else
                  v57 = v22 & ~qword_140E2DB80;
              }
              v36 = HIDWORD(v57);
              v35 = 2;
            }
            else
            {
              v35 = 0;
              LODWORD(v36) = 0;
              v37 = 0LL;
            }
            v38 = MiTransferSoftwarePte(*(_QWORD *)v15, v37, v36, v35);
            MiReleasePageFileSpace(v61, v22, 0LL);
            *(_QWORD *)v15 = v38;
          }
          goto LABEL_30;
        }
        if ( qword_140E2DB80 )
        {
          if ( (v22 & 0x10) != 0 )
            v22 &= ~0x10uLL;
          else
            v22 &= ~qword_140E2DB80;
        }
        v24 = (v22 >> 12) & 0xFFFFFFFFFFLL;
        v25 = 0LL;
        if ( !(unsigned __int16)*(_DWORD *)(v21 + 32) )
        {
          if ( v15 != v64 && v15 != v20 )
          {
            if ( (MiUnlinkPageFromListEx(v21, 0) & 3) == 0 )
            {
              v67 = *(_QWORD *)(v23 + 16);
              if ( (v67 & 4) != 0 )
              {
                MiClearPageFileReservation(&v67);
                v25 = v67;
              }
              else
              {
                v67 = 0LL;
              }
              v26 = *(_QWORD *)(v23 + 16);
              v27 = 0;
              if ( (v26 & 2) != 0 )
              {
                v30 = *(_QWORD *)(v61 + 8LL * ((unsigned __int16)v26 >> 12) + 18528);
                if ( qword_140E2DB80 && (v26 & 0x10) == 0 )
                  v26 &= ~qword_140E2DB80;
                v29 = HIDWORD(v26);
                v28 = 2;
              }
              else
              {
                v28 = 0;
                LODWORD(v29) = 0;
                v30 = 0LL;
              }
              v31 = MiTransferSoftwarePte(*(_QWORD *)(v23 + 16), v30, v29, v28);
              v32 = 48 * (*(_QWORD *)(v23 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
              *(_QWORD *)v15 = v31;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v27 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v27);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v32 + 24) < 0 );
              }
              MiDecrementShareCountEx(v32, 0LL);
              _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiInsertPageInFreeOrZeroedList(v24, 2LL);
              goto LABEL_26;
            }
            v44 = v23;
LABEL_59:
            MiDiscardTransitionPteEx(v44, 0);
            _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_30:
            v18 = v65;
            v15 += 8LL;
            v19 = v62;
            goto LABEL_31;
          }
          v45 = (*(_BYTE *)(v21 + 34) & 0x10) == 0;
          v74 = 0;
          if ( v45 )
          {
            v74 = 1;
            v56 = MiUnlinkPageFromListEx(v21, 0);
            v44 = v23;
            if ( (v56 & 3) != 0 )
              goto LABEL_59;
            v25 = MiCaptureDirtyBitToPfn(v23);
            v46 = 0LL;
          }
          else
          {
            v46 = MiDetermineModifiedPageListHead(v21, v61, 0);
            ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v46 + 32));
          }
          v47 = MiMapPageInHyperSpaceWorker(v24, 0LL, 0x80000000LL);
          v48 = v47;
          if ( v15 == v64 )
          {
            v49 = 4096 - v73;
            v50 = (void *)(v47 + v73);
          }
          else
          {
            v49 = v72;
            v50 = (void *)v47;
          }
          memset_0(v50, 0, v49);
          *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
          *(_QWORD *)(((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
          if ( dword_140E3004C == 1 )
          {
            v51 = v24 & 0x1F;
            LOBYTE(v52) = 1;
            v53 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E300A0 + 1) + 4 * (v24 >> 5));
            if ( v51 + 1 <= 0x20 )
            {
              v54 = 1 << v51;
              goto LABEL_67;
            }
            if ( (v24 & 0x1F) == 0 )
              goto LABEL_92;
            v58 = v24 & 0x1F;
            _InterlockedOr(v53++, ((1 << (32 - v58)) - 1) << v51);
            v52 = 1LL - (unsigned int)(32 - v58);
            if ( v52 >= 0x20 )
            {
              v59 = v52 >> 5;
              v52 += -32LL * (v52 >> 5);
              do
              {
                *v53++ = -1;
                --v59;
              }
              while ( v59 );
            }
            if ( v52 )
            {
LABEL_92:
              v54 = (1 << v52) - 1;
LABEL_67:
              _InterlockedOr(v53, v54);
            }
          }
          if ( v46 )
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v46 + 32));
          if ( v74 )
            MiInsertPageInList(v23, 8u);
LABEL_26:
          v20 = v63;
          v8 = v68;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !v25 )
          goto LABEL_30;
        v33 = v61;
        v34 = v25;
LABEL_29:
        MiReleasePageFileInfo(v33, v34, 1LL);
        goto LABEL_30;
      }
      v39 = MiMapPageInHyperSpaceWorker((v22 >> 12) & 0xFFFFFFFFFFLL, 0LL, 0x80000000LL);
      v40 = v39;
      if ( v15 == v64 )
      {
        v41 = 4096 - v73;
        v42 = (void *)(v39 + v73);
        goto LABEL_49;
      }
      v42 = (void *)v39;
      if ( v15 == v20 )
      {
        v41 = v72;
LABEL_49:
        memset_0(v42, 0, v41);
      }
      else
      {
        KeZeroSinglePage(v39);
      }
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      *(_QWORD *)(((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
      v43 = MiCaptureDirtyBitToPfn(v23);
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !v43 )
        goto LABEL_30;
      v34 = v43;
      v33 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v23 + 40) >> 43) & 0x3FFLL));
      goto LABEL_29;
    }
    v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_31:
    v16 = v60;
    v17 = v72;
  }
  while ( v13 != v8 )
  {
    v13 = *(_QWORD *)(v13 + 16);
    v15 = *(_QWORD *)(v13 + 8);
    if ( v15 )
    {
      if ( v13 == v8 )
      {
        v55 = *(_QWORD *)(v8 + 8);
        v16 = v55 + 8 * v70;
        if ( (_DWORD)v17 )
          v20 = v55 + 8 * v70;
        v63 = v20;
      }
      else
      {
        v16 = v15 + 8LL * *(unsigned int *)(v13 + 44);
      }
      v60 = v16;
      goto LABEL_7;
    }
  }
  if ( v18 )
  {
    LOBYTE(v16) = v71;
    MiUnlockProtoPoolPage(v18, v16, v17);
  }
}
