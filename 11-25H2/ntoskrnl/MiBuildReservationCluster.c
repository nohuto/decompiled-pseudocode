/*
 * XREFs of MiBuildReservationCluster @ 0x14040BF84
 * Callers:
 *     MiGatherPagefilePages @ 0x1403C0730 (MiGatherPagefilePages.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiReferencePfBackedSection @ 0x1402185B4 (MiReferencePfBackedSection.c)
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MiReleaseControlAreaWaiters @ 0x14022F630 (MiReleaseControlAreaWaiters.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiRefPageFileSpaceBitmaps @ 0x1402CC570 (MiRefPageFileSpaceBitmaps.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDecrementModifiedWriteCount @ 0x14035A754 (MiDecrementModifiedWriteCount.c)
 *     MiUpdatePageFileHighInPte @ 0x14037C850 (MiUpdatePageFileHighInPte.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiAddToReservationCluster @ 0x14040D120 (MiAddToReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x14040D5F4 (MiGetPageForWriteCluster.c)
 *     MiReferencePageForModifiedWrite @ 0x14040DA18 (MiReferencePageForModifiedWrite.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiBuildReservationCluster(_QWORD *a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  __int64 v4; // r13
  __int16 v5; // ax
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdi
  _QWORD *v10; // rsi
  char v11; // al
  unsigned __int8 v12; // r15
  unsigned __int64 v13; // rbx
  unsigned int v14; // r12d
  unsigned __int64 v15; // rbx
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned int v18; // r14d
  __int64 v19; // rdi
  unsigned __int64 v20; // r12
  __int64 v21; // rcx
  int v22; // r13d
  ULONG_PTR v23; // r13
  int v24; // r15d
  unsigned __int64 *v25; // rax
  ULONG_PTR v26; // rsi
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v28; // rbx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rsi
  unsigned __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 updated; // rbx
  unsigned __int64 v35; // r13
  __int64 v36; // r13
  int v37; // r15d
  __int64 v38; // rdi
  __int64 v39; // rax
  int v40; // r15d
  __int64 v41; // rsi
  unsigned __int64 v42; // rcx
  __int64 v43; // rdi
  unsigned __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 *v47; // r13
  __int64 v48; // r12
  __int64 v49; // rax
  _QWORD *v50; // rsi
  __int64 *v51; // rdx
  unsigned __int64 v52; // rbx
  unsigned __int8 v53; // di
  __int64 v54; // rdx
  __int64 v55; // r8
  unsigned __int64 v56; // r9
  __int64 v57; // r8
  unsigned __int64 v58; // r9
  __int64 v59; // rcx
  int v60; // r12d
  __int64 v61; // rax
  __int64 v62; // rsi
  int v63; // eax
  KIRQL v64; // al
  int *v65; // r12
  int v66; // edi
  unsigned __int64 v68; // rbx
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // rcx
  int v72; // eax
  unsigned __int64 v73; // r8
  unsigned __int64 v74; // rcx
  __int64 v75; // rax
  __int64 *v76; // rax
  int v77; // [rsp+38h] [rbp-89h] BYREF
  int v78; // [rsp+3Ch] [rbp-85h] BYREF
  int v79; // [rsp+40h] [rbp-81h] BYREF
  int v80; // [rsp+44h] [rbp-7Dh]
  void *Src; // [rsp+48h] [rbp-79h]
  __int64 v82; // [rsp+50h] [rbp-71h]
  __int64 v83; // [rsp+58h] [rbp-69h]
  unsigned int v84; // [rsp+60h] [rbp-61h]
  PVOID P[2]; // [rsp+68h] [rbp-59h] BYREF
  __int128 v86; // [rsp+78h] [rbp-49h]
  __int64 v87; // [rsp+88h] [rbp-39h]
  __int128 v88; // [rsp+90h] [rbp-31h]
  __int128 v89; // [rsp+A0h] [rbp-21h]
  __int64 v90; // [rsp+B0h] [rbp-11h]
  __int64 v91; // [rsp+B8h] [rbp-9h]
  unsigned __int64 v92; // [rsp+C0h] [rbp-1h]
  unsigned __int64 *v93; // [rsp+C8h] [rbp+7h]
  _QWORD *v94; // [rsp+128h] [rbp+67h]

  v94 = a1;
  v4 = *(_QWORD *)(a2 + 216);
  v78 = 0;
  v80 = 0;
  v79 = 0;
  v87 = 0LL;
  v90 = 0LL;
  v5 = *(_WORD *)(a2 + 172);
  Src = a1;
  v6 = 88 * ((v5 & 0xF) + 48LL);
  *(_OWORD *)P = 0LL;
  v86 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  MiRefPageFileSpaceBitmaps(a2, (__int64)P);
  v77 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        v9 = *(_QWORD *)(v6 + v4 + 16);
        if ( v9 == 0x3FFFFFFFFFLL )
        {
          v14 = (unsigned int)P[1];
LABEL_100:
          v18 = 0;
          LODWORD(v15) = 0;
          goto LABEL_81;
        }
        v10 = (_QWORD *)(48 * v9 - 0x220000000000LL);
        v11 = MiSafeLockPage(*(_QWORD *)(v6 + v4 + 16), v7, v8);
        v12 = v11;
      }
      while ( v11 == 17 );
      if ( v9 == *(_QWORD *)(v6 + v4 + 16) )
        break;
      MiUnlockPage((__int64)v10, v11);
    }
    v13 = v10[2];
    if ( qword_140E2D940 && (v13 & 0x10) == 0 )
      v13 &= ~qword_140E2D940;
    v14 = (unsigned int)P[1];
    v15 = HIDWORD(v13);
    if ( (unsigned int)v15 >= LODWORD(P[1]) )
    {
      MiUnlockPage((__int64)v10, v11);
      goto LABEL_100;
    }
    if ( !_bittest64((const signed __int64 *)v86, v15) )
      break;
    MiUnlinkPageFromListEx((ULONG_PTR)v10, 0);
    v68 = v10[2];
    v10[2] = v68 & 0xFFFFFFFFFFFFFFFDuLL;
    MiInsertPageInList((ULONG_PTR)v10, 8u);
    MiUnlockPage((__int64)v10, v12);
    MiReleasePageFileInfo(v4, v68, 0);
  }
  MiReferencePageForModifiedWrite((ULONG_PTR)v10);
  v18 = 1;
  *v94 = v9;
  if ( *a3 == 1 )
  {
    MiUnlockPage((__int64)v10, v12);
LABEL_81:
    v40 = v77;
    v50 = Src;
    goto LABEL_57;
  }
  v19 = v10[2];
  v20 = v10[1] | 0x8000000000000000uLL;
  v82 = v10[5] & 0xFFFFFFFFFFLL;
  v21 = 48 * v82 - 0x220000000000LL;
  v83 = v21;
  v22 = 0;
LABEL_12:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
  {
    while ( 1 )
    {
      if ( (++v22 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
          v21 = v83;
          goto LABEL_71;
        }
        v21 = v83;
      }
      _mm_pause();
LABEL_71:
      if ( *(__int64 *)(v21 + 24) >= 0 )
        goto LABEL_12;
    }
  }
  MiAddLockedPageCharge(v21, 1, v16, v17);
  v23 = v83;
  _InterlockedAnd64((volatile signed __int64 *)(v83 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPage((__int64)v10, v12);
  if ( (__int64)v10[5] >= 0 )
  {
    v24 = v80;
    goto LABEL_15;
  }
  v69 = MiReferencePfBackedSection(v20);
  if ( !v69 )
    goto LABEL_79;
  v70 = v20 & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)&v88 = *(_QWORD *)v69;
  v71 = *(_QWORD *)(v69 + 8);
  v24 = 1;
  v72 = *(_DWORD *)(v69 + 44);
  v80 = 1;
  v73 = (v20 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( (v20 & 0xFFFFFFFFFFFFF000uLL) < v71 )
    v70 = v71;
  *(_QWORD *)&v89 = v70;
  v74 = v71 + 8LL * (unsigned int)(v72 - 1);
  v75 = v10[3];
  if ( v73 > v74 )
    v73 = v74;
  *((_QWORD *)&v88 + 1) = 0LL;
  *((_QWORD *)&v89 + 1) = v73;
  if ( (v75 & 0x4000000000000000LL) == 0 )
  {
LABEL_15:
    v25 = (unsigned __int64 *)MiReservePtes((__int64)&qword_140E37328, 1u);
    v93 = v25;
    v26 = (ULONG_PTR)v25;
    if ( !v25 )
      goto LABEL_79;
    ValidPte = MiMakeValidPte((unsigned __int64)v25, v82, 536870913);
    v28 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v26 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(v26, ValidPte, 128);
    *(_QWORD *)v26 = v28;
    v29 = (__int64)(v26 << 25) >> 16;
    v91 = v29;
    v30 = v29 + 8 * ((v20 >> 3) & 0x1FF);
    v82 = v30;
    if ( v24 )
      v31 = v29 + 8 * ((*((_QWORD *)&v89 + 1) >> 3) & 0x1FFLL);
    else
      v31 = v29 + 4088;
    v32 = v19 & 0xFFFFFFFFFC00FC1FuLL;
    v92 = v32;
    v33 = (v31 - v30) >> 3;
    updated = v32;
    v35 = v32;
    v84 = *a3;
    if ( (unsigned int)v33 >= v84 - 1 )
      LODWORD(v33) = v84 - 1;
    if ( qword_140E2D940 && (v32 & 0x10) == 0 )
      v35 = v32 & ~qword_140E2D940;
    v14 = (unsigned int)P[1];
    v36 = HIDWORD(v35);
    if ( v36 + (unsigned __int64)(unsigned int)v33 >= LODWORD(P[1]) )
      LODWORD(v33) = LODWORD(P[1]) - v36 - 1;
    v37 = v77;
    v38 = v30;
    do
    {
      if ( !(_DWORD)v33 )
        break;
      ++v36;
      v38 += 8LL;
      updated = MiUpdatePageFileHighInPte(updated, v36);
      v39 = MiGetPageForWriteCluster(&P[1], v38, updated, &v78, &v79);
      if ( v39 == -1 )
        break;
      LODWORD(v33) = v33 - 1;
      ++v18;
      *++v94 = v39;
      if ( v39 == qword_140E37138 )
        ++v37;
    }
    while ( v79 != 3 || v18 < 0x10 );
    v18 -= v78;
    v40 = v37 - v78;
    v41 = v84 - v18;
    v77 = v40;
    if ( v80 )
      v42 = v91 + 8 * (((unsigned __int64)v89 >> 3) & 0x1FF);
    else
      v42 = v82 & 0xFFFFFFFFFFFFF000uLL;
    v43 = v92;
    v44 = v92;
    v45 = (__int64)(v82 - v42) >> 3;
    if ( (unsigned int)v45 < (unsigned int)v41 )
      v41 = (unsigned int)v45;
    if ( qword_140E2D940 && (v92 & 0x10) == 0 )
      v44 = v92 & ~qword_140E2D940;
    v46 = HIDWORD(v44);
    if ( (unsigned int)v41 > (unsigned __int64)(v46 - 1) )
      v41 = (unsigned int)(v46 - 1);
    if ( (_DWORD)v41 )
    {
      v47 = (__int64 *)((char *)Src + 8 * v41);
      memmove(v47, Src, 8LL * v18);
      v78 = 0;
      v48 = v82;
      do
      {
        if ( !(_DWORD)v41 )
          break;
        --v46;
        v48 -= 8LL;
        v43 = MiUpdatePageFileHighInPte(v43, v46);
        v49 = MiGetPageForWriteCluster(&P[1], v48, v43, &v78, &v79);
        if ( v49 == -1 )
          break;
        --v47;
        LODWORD(v41) = v41 - 1;
        ++v18;
        *v47 = v49;
        if ( v49 == qword_140E37138 )
          ++v40;
      }
      while ( v79 != 3 || v18 < 0x10 );
      v50 = Src;
      v40 -= v78;
      v14 = (unsigned int)P[1];
      v18 -= v78;
      v77 = v40;
      v51 = &v47[v78];
      if ( Src != v51 )
        memmove(Src, v51, 8LL * v18);
    }
    else
    {
      v50 = Src;
    }
    v52 = *(_QWORD *)(48LL * *v50 - 0x21FFFFFFFFF0LL);
    if ( qword_140E2D940 && (v52 & 0x10) == 0 )
      v52 &= ~qword_140E2D940;
    v15 = HIDWORD(v52);
    MiReleasePtes((__int64)&qword_140E37328, v93, 1u);
    v23 = v83;
  }
  else
  {
LABEL_79:
    v14 = (unsigned int)P[1];
    v40 = v77;
    v50 = Src;
  }
  v53 = MiLockPageInline(v23);
  MiRemoveLockedPageChargeAndDecRef(v23, v54, v55, v56);
  MiUnlockPage(v23, v53);
  if ( v80 )
  {
    if ( *((_QWORD *)&v88 + 1) )
      MiUnlockProtoPoolPage(*((ULONG_PTR *)&v88 + 1), v90, v57, v58);
    v76 = MiDecrementModifiedWriteCount(v88, 0);
    if ( v76 )
      MiReleaseControlAreaWaiters(v76);
  }
LABEL_57:
  v59 = *a3;
  if ( v18 < (unsigned int)v59 && v18 && (unsigned int)v15 + (unsigned __int64)v18 < v14 )
  {
    if ( (unsigned __int64)(unsigned int)v15 + v59 > v14 )
      v60 = v14 - v15 - v18;
    else
      v60 = v59 - v18;
    v61 = (__int64)&v50[v18];
    v62 = a2;
    v63 = MiAddToReservationCluster(a2, (unsigned int)&P[1], v60, (unsigned int)v15 + v18, v61, (__int64)&v77);
    v40 = v77;
    v18 += v63;
  }
  else
  {
    v62 = a2;
  }
  v64 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v62 + 200));
  v65 = (int *)P[0];
  --*(_DWORD *)P[0];
  v66 = *v65;
  MiReleaseSpinLockExclusive((_DWORD *)(v62 + 200), v64);
  if ( !v66 && v65 )
    ExFreePoolWithTag(v65, 0);
  *a3 = v18;
  *a4 = v18 - v40;
  return (unsigned int)v15;
}
