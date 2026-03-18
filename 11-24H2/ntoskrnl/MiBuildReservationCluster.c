/*
 * XREFs of MiBuildReservationCluster @ 0x140368F90
 * Callers:
 *     MiGatherPagefilePages @ 0x14039C8C8 (MiGatherPagefilePages.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiReferencePfBackedSection @ 0x14022EFF8 (MiReferencePfBackedSection.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAddLockedPageCharge @ 0x1402F6F40 (MiAddLockedPageCharge.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140367484 (MiRefPageFileSpaceBitmaps.c)
 *     MiUpdatePageFileHighInPte @ 0x140368F40 (MiUpdatePageFileHighInPte.c)
 *     MiAddToReservationCluster @ 0x14036A110 (MiAddToReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x14036A3A0 (MiGetPageForWriteCluster.c)
 *     MiReferencePageForModifiedWrite @ 0x14036AA48 (MiReferencePageForModifiedWrite.c)
 *     MiDecrementModifiedWriteCount @ 0x140370FD4 (MiDecrementModifiedWriteCount.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  unsigned int v16; // r14d
  __int64 v17; // rdi
  unsigned __int64 v18; // r12
  __int64 v19; // rcx
  unsigned int v20; // r13d
  ULONG_PTR v21; // r13
  int v22; // r15d
  _QWORD *v23; // rax
  ULONG_PTR v24; // rsi
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v26; // rbx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rsi
  unsigned __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 updated; // rbx
  unsigned __int64 v33; // r13
  __int64 v34; // r13
  int v35; // r15d
  __int64 v36; // rdi
  __int64 v37; // rax
  int v38; // r15d
  __int64 v39; // rsi
  unsigned __int64 v40; // rcx
  __int64 v41; // rdi
  unsigned __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 *v45; // r13
  __int64 v46; // r12
  __int64 v47; // rax
  _QWORD *v48; // rsi
  __int64 *v49; // rdx
  unsigned __int64 v50; // rbx
  unsigned __int8 v51; // di
  __int64 v52; // rdx
  __int64 v53; // r8
  unsigned __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rcx
  int v57; // r12d
  __int64 v58; // rax
  __int64 v59; // rsi
  int v60; // eax
  KIRQL v61; // al
  int *v62; // r12
  int v63; // edi
  unsigned __int64 v65; // rbx
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // rcx
  int v69; // eax
  unsigned __int64 v70; // r8
  unsigned __int64 v71; // rcx
  __int64 v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  int v76; // [rsp+38h] [rbp-89h] BYREF
  int v77; // [rsp+3Ch] [rbp-85h] BYREF
  int v78; // [rsp+40h] [rbp-81h] BYREF
  int v79; // [rsp+44h] [rbp-7Dh]
  void *Src; // [rsp+48h] [rbp-79h]
  __int64 v81; // [rsp+50h] [rbp-71h]
  __int64 v82; // [rsp+58h] [rbp-69h]
  unsigned int v83; // [rsp+60h] [rbp-61h]
  PVOID P[2]; // [rsp+68h] [rbp-59h] BYREF
  __int128 v85; // [rsp+78h] [rbp-49h]
  __int64 v86; // [rsp+88h] [rbp-39h]
  __int128 v87; // [rsp+90h] [rbp-31h]
  __int128 v88; // [rsp+A0h] [rbp-21h]
  __int64 v89; // [rsp+B0h] [rbp-11h]
  __int64 v90; // [rsp+B8h] [rbp-9h]
  unsigned __int64 v91; // [rsp+C0h] [rbp-1h]
  _QWORD *v92; // [rsp+C8h] [rbp+7h]
  _QWORD *v93; // [rsp+128h] [rbp+67h]

  v93 = a1;
  v4 = *(_QWORD *)(a2 + 216);
  v77 = 0;
  v79 = 0;
  v78 = 0;
  v86 = 0LL;
  v89 = 0LL;
  v5 = *(_WORD *)(a2 + 172);
  Src = a1;
  v6 = 88 * ((v5 & 0xF) + 48LL);
  *(_OWORD *)P = 0LL;
  v85 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  MiRefPageFileSpaceBitmaps(a2, (__int64)P);
  v76 = 0;
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
          v16 = 0;
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
    if ( qword_140E2DB80 && (v13 & 0x10) == 0 )
      v13 &= ~qword_140E2DB80;
    v14 = (unsigned int)P[1];
    v15 = HIDWORD(v13);
    if ( (unsigned int)v15 >= LODWORD(P[1]) )
    {
      MiUnlockPage((__int64)v10, v11);
      goto LABEL_100;
    }
    if ( !_bittest64((const signed __int64 *)v85, v15) )
      break;
    MiUnlinkPageFromListEx((ULONG_PTR)v10, 0);
    v65 = v10[2];
    v10[2] = v65 & 0xFFFFFFFFFFFFFFFDuLL;
    MiInsertPageInList((ULONG_PTR)v10, 8u);
    MiUnlockPage((__int64)v10, v12);
    MiReleasePageFileInfo(v4, v65, 0LL);
  }
  MiReferencePageForModifiedWrite((ULONG_PTR)v10);
  v16 = 1;
  *v93 = v9;
  if ( *a3 == 1 )
  {
    MiUnlockPage((__int64)v10, v12);
LABEL_81:
    v38 = v76;
    v48 = Src;
    goto LABEL_57;
  }
  v17 = v10[2];
  v18 = v10[1] | 0x8000000000000000uLL;
  v81 = v10[5] & 0xFFFFFFFFFFLL;
  v19 = 48 * v81 - 0x220000000000LL;
  v82 = v19;
  v20 = 0;
LABEL_12:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
  {
    while ( 1 )
    {
      if ( (++v20 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v20);
          v19 = v82;
          goto LABEL_70;
        }
        v19 = v82;
      }
      _mm_pause();
LABEL_70:
      if ( *(__int64 *)(v19 + 24) >= 0 )
        goto LABEL_12;
    }
  }
  MiAddLockedPageCharge(v19, 1);
  v21 = v82;
  _InterlockedAnd64((volatile signed __int64 *)(v82 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPage((__int64)v10, v12);
  if ( (__int64)v10[5] >= 0 )
  {
    v22 = v79;
    goto LABEL_15;
  }
  v66 = MiReferencePfBackedSection(v18);
  if ( !v66 )
    goto LABEL_79;
  v67 = v18 & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)&v87 = *(_QWORD *)v66;
  v68 = *(_QWORD *)(v66 + 8);
  v22 = 1;
  v69 = *(_DWORD *)(v66 + 44);
  v79 = 1;
  v70 = (v18 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( (v18 & 0xFFFFFFFFFFFFF000uLL) < v68 )
    v67 = v68;
  *(_QWORD *)&v88 = v67;
  v71 = v68 + 8LL * (unsigned int)(v69 - 1);
  v72 = v10[3];
  if ( v70 > v71 )
    v70 = v71;
  *((_QWORD *)&v87 + 1) = 0LL;
  *((_QWORD *)&v88 + 1) = v70;
  if ( (v72 & 0x4000000000000000LL) == 0 )
  {
LABEL_15:
    v23 = (_QWORD *)MiReservePtes((__int64)&qword_140E37568, 1u);
    v92 = v23;
    v24 = (ULONG_PTR)v23;
    if ( !v23 )
      goto LABEL_79;
    ValidPte = MiMakeValidPte((unsigned __int64)v23, v81, 536870913);
    v26 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v24 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(v24, ValidPte, 128);
    *(_QWORD *)v24 = v26;
    v27 = (__int64)(v24 << 25) >> 16;
    v90 = v27;
    v28 = v27 + 8 * ((v18 >> 3) & 0x1FF);
    v81 = v28;
    if ( v22 )
      v29 = v27 + 8 * ((*((_QWORD *)&v88 + 1) >> 3) & 0x1FFLL);
    else
      v29 = v27 + 4088;
    v30 = v17 & 0xFFFFFFFFFC00FC1FuLL;
    v91 = v30;
    v31 = (v29 - v28) >> 3;
    updated = v30;
    v33 = v30;
    v83 = *a3;
    if ( (unsigned int)v31 >= v83 - 1 )
      LODWORD(v31) = v83 - 1;
    if ( qword_140E2DB80 && (v30 & 0x10) == 0 )
      v33 = v30 & ~qword_140E2DB80;
    v14 = (unsigned int)P[1];
    v34 = HIDWORD(v33);
    if ( v34 + (unsigned __int64)(unsigned int)v31 >= LODWORD(P[1]) )
      LODWORD(v31) = LODWORD(P[1]) - v34 - 1;
    v35 = v76;
    v36 = v28;
    do
    {
      if ( !(_DWORD)v31 )
        break;
      ++v34;
      v36 += 8LL;
      updated = MiUpdatePageFileHighInPte(updated, v34);
      v37 = MiGetPageForWriteCluster(&P[1], v36, updated, &v77, &v78);
      if ( v37 == -1 )
        break;
      LODWORD(v31) = v31 - 1;
      ++v16;
      *++v93 = v37;
      if ( v37 == qword_140E37378 )
        ++v35;
    }
    while ( v78 != 3 || v16 < 0x10 );
    v16 -= v77;
    v38 = v35 - v77;
    v39 = v83 - v16;
    v76 = v38;
    if ( v79 )
      v40 = v90 + 8 * (((unsigned __int64)v88 >> 3) & 0x1FF);
    else
      v40 = v81 & 0xFFFFFFFFFFFFF000uLL;
    v41 = v91;
    v42 = v91;
    v43 = (__int64)(v81 - v40) >> 3;
    if ( (unsigned int)v43 < (unsigned int)v39 )
      v39 = (unsigned int)v43;
    if ( qword_140E2DB80 && (v91 & 0x10) == 0 )
      v42 = v91 & ~qword_140E2DB80;
    v44 = HIDWORD(v42);
    if ( (unsigned int)v39 > (unsigned __int64)(v44 - 1) )
      v39 = (unsigned int)(v44 - 1);
    if ( (_DWORD)v39 )
    {
      v45 = (__int64 *)((char *)Src + 8 * v39);
      memmove(v45, Src, 8LL * v16);
      v77 = 0;
      v46 = v81;
      do
      {
        if ( !(_DWORD)v39 )
          break;
        --v44;
        v46 -= 8LL;
        v41 = MiUpdatePageFileHighInPte(v41, v44);
        v47 = MiGetPageForWriteCluster(&P[1], v46, v41, &v77, &v78);
        if ( v47 == -1 )
          break;
        --v45;
        LODWORD(v39) = v39 - 1;
        ++v16;
        *v45 = v47;
        if ( v47 == qword_140E37378 )
          ++v38;
      }
      while ( v78 != 3 || v16 < 0x10 );
      v48 = Src;
      v38 -= v77;
      v14 = (unsigned int)P[1];
      v16 -= v77;
      v76 = v38;
      v49 = &v45[v77];
      if ( Src != v49 )
        memmove(Src, v49, 8LL * v16);
    }
    else
    {
      v48 = Src;
    }
    v50 = *(_QWORD *)(48LL * *v48 - 0x21FFFFFFFFF0LL);
    if ( qword_140E2DB80 && (v50 & 0x10) == 0 )
      v50 &= ~qword_140E2DB80;
    v15 = HIDWORD(v50);
    MiReleasePtes((__int64)&qword_140E37568, v92, 1u);
    v21 = v82;
  }
  else
  {
LABEL_79:
    v14 = (unsigned int)P[1];
    v38 = v76;
    v48 = Src;
  }
  v51 = MiLockPageInline(v21);
  MiRemoveLockedPageChargeAndDecRef(v21, v52, v53);
  MiUnlockPage(v21, v51);
  if ( v79 )
  {
    if ( *((_QWORD *)&v87 + 1) )
    {
      LOBYTE(v54) = v89;
      MiUnlockProtoPoolPage(*((ULONG_PTR *)&v87 + 1), v54, v55);
    }
    v73 = (_QWORD *)MiDecrementModifiedWriteCount(v87, 0LL);
    if ( v73 )
      MiReleaseControlAreaWaiters(v73, v74, v75);
  }
LABEL_57:
  v56 = *a3;
  if ( v16 < (unsigned int)v56 && v16 && (unsigned int)v15 + (unsigned __int64)v16 < v14 )
  {
    if ( (unsigned __int64)(unsigned int)v15 + v56 > v14 )
      v57 = v14 - v15 - v16;
    else
      v57 = v56 - v16;
    v58 = (__int64)&v48[v16];
    v59 = a2;
    v60 = MiAddToReservationCluster(a2, (unsigned int)&P[1], v57, (unsigned int)v15 + v16, v58, (__int64)&v76);
    v38 = v76;
    v16 += v60;
  }
  else
  {
    v59 = a2;
  }
  v61 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v59 + 200));
  v62 = (int *)P[0];
  --*(_DWORD *)P[0];
  v63 = *v62;
  MiReleaseSpinLockExclusive((_DWORD *)(v59 + 200), v61);
  if ( !v63 && v62 )
    ExFreePoolWithTag(v62, 0);
  *a3 = v16;
  *a4 = v16 - v38;
  return (unsigned int)v15;
}
