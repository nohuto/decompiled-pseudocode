/*
 * XREFs of MiZeroCfgSystemWideBitmapWorker @ 0x1403D2314
 * Callers:
 *     MiZeroCfgSystemWideBitmap @ 0x1403D22BC (MiZeroCfgSystemWideBitmap.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiTransferSoftwarePte @ 0x140215AA0 (MiTransferSoftwarePte.c)
 *     MiDiscardTransitionPteEx @ 0x1402188CC (MiDiscardTransitionPteEx.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiDetermineModifiedPageListHead @ 0x140300F80 (MiDetermineModifiedPageListHead.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiClearPageFileReservation @ 0x14030714C (MiClearPageFileReservation.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 *     MiLocatePagefileSubsection @ 0x1403D2A80 (MiLocatePagefileSubsection.c)
 *     MiReleasePageFileSpace @ 0x1403D2B30 (MiReleasePageFileSpace.c)
 *     KeZeroSinglePage @ 0x1406B42F0 (KeZeroSinglePage.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int64 v20; // rdi
  __int64 v21; // r15
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  ULONG_PTR v24; // r14
  unsigned __int64 v25; // rdi
  __int64 v26; // rbx
  unsigned __int64 v27; // r8
  unsigned int v28; // r12d
  char v29; // r9
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  unsigned __int64 v33; // r9
  __int64 v34; // r15
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  char v37; // r9
  unsigned __int64 v38; // r8
  __int64 v39; // rdx
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rbx
  size_t v43; // r8
  void *v44; // rcx
  __int64 v45; // rax
  ULONG_PTR v46; // rcx
  bool v47; // zf
  __int64 v48; // r12
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // r15
  size_t v51; // r8
  void *v52; // rcx
  unsigned __int64 v53; // r10
  volatile signed __int32 *v54; // r8
  unsigned int v55; // eax
  __int64 v56; // rax
  char v57; // al
  unsigned __int64 v58; // r8
  int v59; // edi
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // [rsp+20h] [rbp-59h]
  __int64 v62; // [rsp+28h] [rbp-51h]
  unsigned __int64 v63; // [rsp+30h] [rbp-49h]
  __int64 v64; // [rsp+38h] [rbp-41h]
  __int64 v65; // [rsp+40h] [rbp-39h]
  __int64 v66; // [rsp+48h] [rbp-31h]
  unsigned __int64 v67; // [rsp+50h] [rbp-29h] BYREF
  __int64 v68; // [rsp+58h] [rbp-21h] BYREF
  __int64 v69; // [rsp+60h] [rbp-19h]
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
  v62 = *((_QWORD *)qword_140E300C8 + (v6 & 0x3FF));
  v73 = (v4 + (a2 >> 3)) & 0xFFF;
  v70 = ((a2 >> 3) + v4 - 1) >> 12;
  v8 = MiLocatePagefileSubsection(a1, &v70);
  v69 = v8;
  v71 = v70;
  v9 = *(_QWORD *)(v8 + 8);
  v67 = v3 >> 12;
  v10 = v9 + 8 * v70;
  v11 = MiLocatePagefileSubsection(a1, &v67);
  v13 = v67;
  v14 = v11;
  while ( 1 )
  {
    v15 = *(_QWORD *)(v14 + 8);
    if ( v15 )
      break;
    if ( v14 == v8 )
      return;
    v14 = *(_QWORD *)(v14 + 16);
    v13 = 0LL;
    v67 = 0LL;
  }
  v16 = v15 + 8 * v13;
  if ( v14 == v8 )
    v17 = v10;
  else
    v17 = v15 + 8LL * *(unsigned int *)(v14 + 44);
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
      LOBYTE(v17) = v72;
      MiUnlockProtoPoolPage(v19, v17, v18, v12);
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
              v39 = *(_QWORD *)(v62 + 8LL * ((unsigned __int16)v23 >> 12) + 18528);
              if ( qword_140E2DCC0 )
              {
                if ( (v23 & 0x10) != 0 )
                  v58 = v23 & 0xFFFFFFFFFFFFFFEFuLL;
                else
                  v58 = v23 & ~qword_140E2DCC0;
              }
              v38 = HIDWORD(v58);
              v37 = 2;
            }
            else
            {
              v37 = 0;
              LODWORD(v38) = 0;
              v39 = 0LL;
            }
            v40 = MiTransferSoftwarePte(*(_QWORD *)v16, v39, v38, v37);
            MiReleasePageFileSpace(v62, v23, 0LL);
            *(_QWORD *)v16 = v40;
          }
          goto LABEL_30;
        }
        if ( qword_140E2DCC0 )
        {
          if ( (v23 & 0x10) != 0 )
            v23 &= ~0x10uLL;
          else
            v23 &= ~qword_140E2DCC0;
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
                MiClearPageFileReservation(&v68);
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
                if ( qword_140E2DCC0 && (v27 & 0x10) == 0 )
                  v27 &= ~qword_140E2DCC0;
                v30 = HIDWORD(v27);
                v29 = 2;
              }
              else
              {
                v29 = 0;
                LODWORD(v30) = 0;
                v31 = 0LL;
              }
              v33 = MiTransferSoftwarePte(*(_QWORD *)(v24 + 16), v31, v30, v29);
              v34 = 48 * (*(_QWORD *)(v24 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
              *(_QWORD *)v16 = v33;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v28 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v28);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v34 + 24) < 0 );
              }
              MiDecrementShareCountEx(v34, 0LL, v32, v33);
              _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiInsertPageInFreeOrZeroedList(v25, 2LL);
              goto LABEL_26;
            }
            v46 = v24;
LABEL_59:
            MiDiscardTransitionPteEx(v46);
            _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_30:
            v19 = v66;
            v16 += 8LL;
            v20 = v63;
            goto LABEL_31;
          }
          v47 = (*(_BYTE *)(v22 + 34) & 0x10) == 0;
          v75 = 0;
          if ( v47 )
          {
            v75 = 1;
            v57 = MiUnlinkPageFromListEx(v22, 0);
            v46 = v24;
            if ( (v57 & 3) != 0 )
              goto LABEL_59;
            v26 = MiCaptureDirtyBitToPfn(v24);
            v48 = 0LL;
          }
          else
          {
            v48 = MiDetermineModifiedPageListHead(v22, v62, 0);
            ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v48 + 32));
          }
          v49 = MiMapPageInHyperSpaceWorker(v25, 0LL, 0x80000000);
          v50 = v49;
          if ( v16 == v65 )
          {
            v51 = 4096 - v74;
            v52 = (void *)(v49 + v74);
          }
          else
          {
            v51 = v73;
            v52 = (void *)v49;
          }
          memset_0(v52, 0, v51);
          *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
          *(_QWORD *)(((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
          if ( dword_140E3018C == 1 )
          {
            v53 = v25 & 0x1F;
            v12 = 1LL;
            v54 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E301E0 + 1) + 4 * (v25 >> 5));
            if ( v53 + 1 <= 0x20 )
            {
              v55 = 1 << v53;
              goto LABEL_67;
            }
            if ( (v25 & 0x1F) == 0 )
              goto LABEL_92;
            v59 = v25 & 0x1F;
            _InterlockedOr(v54++, ((1 << (32 - v59)) - 1) << v53);
            v12 = 1LL - (unsigned int)(32 - v59);
            if ( v12 >= 0x20 )
            {
              v60 = v12 >> 5;
              v12 += -32LL * (v12 >> 5);
              do
              {
                *v54++ = -1;
                --v60;
              }
              while ( v60 );
            }
            if ( v12 )
            {
LABEL_92:
              v55 = (1 << v12) - 1;
LABEL_67:
              _InterlockedOr(v54, v55);
            }
          }
          if ( v48 )
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v48 + 32));
          if ( v75 )
            MiInsertPageInList(v24, 8u);
LABEL_26:
          v21 = v64;
          v8 = v69;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !v26 )
          goto LABEL_30;
        v35 = v62;
        v36 = v26;
LABEL_29:
        MiReleasePageFileInfo(v35, v36, 1LL, v12);
        goto LABEL_30;
      }
      v41 = MiMapPageInHyperSpaceWorker((v23 >> 12) & 0xFFFFFFFFFFLL, 0LL, 0x80000000);
      v42 = v41;
      if ( v16 == v65 )
      {
        v43 = 4096 - v74;
        v44 = (void *)(v41 + v74);
        goto LABEL_49;
      }
      v44 = (void *)v41;
      if ( v16 == v21 )
      {
        v43 = v73;
LABEL_49:
        memset_0(v44, 0, v43);
      }
      else
      {
        KeZeroSinglePage(v41);
      }
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      *(_QWORD *)(((v42 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
      v45 = MiCaptureDirtyBitToPfn(v24);
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !v45 )
        goto LABEL_30;
      v36 = v45;
      v35 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v24 + 40) >> 43) & 0x3FFLL));
      goto LABEL_29;
    }
    v16 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_31:
    v17 = v61;
    v18 = v73;
  }
  while ( v14 != v8 )
  {
    v14 = *(_QWORD *)(v14 + 16);
    v16 = *(_QWORD *)(v14 + 8);
    if ( v16 )
    {
      if ( v14 == v8 )
      {
        v56 = *(_QWORD *)(v8 + 8);
        v17 = v56 + 8 * v71;
        if ( (_DWORD)v18 )
          v21 = v56 + 8 * v71;
        v64 = v21;
      }
      else
      {
        v17 = v16 + 8LL * *(unsigned int *)(v14 + 44);
      }
      v61 = v17;
      goto LABEL_7;
    }
  }
  if ( v19 )
  {
    LOBYTE(v17) = v72;
    MiUnlockProtoPoolPage(v19, v17, v18, v12);
  }
}
