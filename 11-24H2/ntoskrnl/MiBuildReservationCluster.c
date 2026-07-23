/*
 * XREFs of MiBuildReservationCluster @ 0x1402EAD30
 * Callers:
 *     MiGatherPagefilePages @ 0x1402F9BC8 (MiGatherPagefilePages.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiDecrementModifiedWriteCount @ 0x140259314 (MiDecrementModifiedWriteCount.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUpdatePageFileHighInPte @ 0x1402EACE0 (MiUpdatePageFileHighInPte.c)
 *     MiAddToReservationCluster @ 0x1402EBEB0 (MiAddToReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x1402EC140 (MiGetPageForWriteCluster.c)
 *     MiReferencePageForModifiedWrite @ 0x1402EC7E8 (MiReferencePageForModifiedWrite.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiReferencePfBackedSection @ 0x140302908 (MiReferencePfBackedSection.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiReleaseControlAreaWaiters @ 0x140338770 (MiReleaseControlAreaWaiters.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiAddLockedPageCharge @ 0x14033F050 (MiAddLockedPageCharge.c)
 *     MiRefPageFileSpaceBitmaps @ 0x1403C5EE8 (MiRefPageFileSpaceBitmaps.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiBuildReservationCluster(_QWORD *a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  __int64 v4; // r13
  __int16 v5; // ax
  __int64 v6; // r14
  __int64 v7; // rdi
  _QWORD *v8; // rsi
  unsigned __int8 v9; // al
  unsigned __int8 v10; // r15
  unsigned __int64 v11; // rbx
  unsigned int v12; // r12d
  unsigned __int64 v13; // rbx
  unsigned int v14; // r14d
  __int64 v15; // rdi
  unsigned __int64 v16; // r12
  __int64 v17; // rcx
  unsigned int v18; // r13d
  __int64 v19; // r13
  int v20; // r15d
  _QWORD *v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  __int64 v24; // r9
  ULONG_PTR v25; // rsi
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rsi
  unsigned __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 updated; // rbx
  unsigned __int64 v34; // r13
  __int64 v35; // r13
  int v36; // r15d
  __int64 v37; // rdi
  __int64 v38; // rax
  int v39; // r15d
  __int64 v40; // rsi
  unsigned __int64 v41; // rcx
  __int64 v42; // rdi
  unsigned __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 *v46; // r13
  __int64 v47; // r12
  __int64 v48; // rax
  _QWORD *v49; // rsi
  __int64 *v50; // rdx
  unsigned __int64 v51; // rbx
  unsigned __int8 v52; // di
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  int v60; // r12d
  __int64 v61; // rax
  __int64 v62; // rsi
  int v63; // eax
  KIRQL v64; // al
  int *v65; // r12
  int v66; // edi
  unsigned __int64 v68; // rbx
  __int64 v69; // r9
  __int64 v70; // rax
  unsigned __int64 v71; // rcx
  int v72; // eax
  unsigned __int64 v73; // rcx
  __int64 v74; // rax
  __int64 *v75; // rax
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
  MiRefPageFileSpaceBitmaps(a2, P);
  v76 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        v7 = *(_QWORD *)(v6 + v4 + 16);
        if ( v7 == 0x3FFFFFFFFFLL )
        {
          v12 = (unsigned int)P[1];
LABEL_100:
          v14 = 0;
          LODWORD(v13) = 0;
          goto LABEL_81;
        }
        v8 = (_QWORD *)(48 * v7 - 0x220000000000LL);
        v9 = MiSafeLockPage(*(_QWORD *)(v6 + v4 + 16));
        v10 = v9;
      }
      while ( v9 == 17 );
      if ( v7 == *(_QWORD *)(v6 + v4 + 16) )
        break;
      MiUnlockPage((__int64)v8, v9);
    }
    v11 = v8[2];
    if ( qword_140E2DCC0 && (v11 & 0x10) == 0 )
      v11 &= ~qword_140E2DCC0;
    v12 = (unsigned int)P[1];
    v13 = HIDWORD(v11);
    if ( (unsigned int)v13 >= LODWORD(P[1]) )
    {
      MiUnlockPage((__int64)v8, v9);
      goto LABEL_100;
    }
    if ( !_bittest64((const signed __int64 *)v85, v13) )
      break;
    MiUnlinkPageFromListEx((ULONG_PTR)v8);
    v68 = v8[2];
    v8[2] = v68 & 0xFFFFFFFFFFFFFFFDuLL;
    MiInsertPageInList(v8, 8LL);
    MiUnlockPage((__int64)v8, v10);
    MiReleasePageFileInfo(v4, v68, 0LL, v69);
  }
  MiReferencePageForModifiedWrite((ULONG_PTR)v8);
  v14 = 1;
  *v93 = v7;
  if ( *a3 == 1 )
  {
    MiUnlockPage((__int64)v8, v10);
LABEL_81:
    v39 = v76;
    v49 = Src;
    goto LABEL_57;
  }
  v15 = v8[2];
  v16 = v8[1] | 0x8000000000000000uLL;
  v81 = v8[5] & 0xFFFFFFFFFFLL;
  v17 = 48 * v81 - 0x220000000000LL;
  v82 = v17;
  v18 = 0;
LABEL_12:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
  {
    while ( 1 )
    {
      if ( (++v18 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v18);
          v17 = v82;
          goto LABEL_70;
        }
        v17 = v82;
      }
      _mm_pause();
LABEL_70:
      if ( *(__int64 *)(v17 + 24) >= 0 )
        goto LABEL_12;
    }
  }
  MiAddLockedPageCharge(v17, 1LL);
  v19 = v82;
  _InterlockedAnd64((volatile signed __int64 *)(v82 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPage((__int64)v8, v10);
  if ( (__int64)v8[5] >= 0 )
  {
    v20 = v79;
    goto LABEL_15;
  }
  v70 = MiReferencePfBackedSection(v16);
  if ( !v70 )
    goto LABEL_79;
  v22 = v16 & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)&v87 = *(_QWORD *)v70;
  v71 = *(_QWORD *)(v70 + 8);
  v20 = 1;
  v72 = *(_DWORD *)(v70 + 44);
  v79 = 1;
  v23 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( (v16 & 0xFFFFFFFFFFFFF000uLL) < v71 )
    v22 = v71;
  *(_QWORD *)&v88 = v22;
  v73 = v71 + 8LL * (unsigned int)(v72 - 1);
  v74 = v8[3];
  if ( v23 > v73 )
    v23 = v73;
  *((_QWORD *)&v87 + 1) = 0LL;
  *((_QWORD *)&v88 + 1) = v23;
  if ( (v74 & 0x4000000000000000LL) == 0 )
  {
LABEL_15:
    v21 = (_QWORD *)MiReservePtes((__int64)&qword_140E376A8, 1u);
    v92 = v21;
    v25 = (ULONG_PTR)v21;
    if ( !v21 )
      goto LABEL_79;
    ValidPte = MiMakeValidPte((unsigned __int64)v21, v81, 536870913);
    v27 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v25 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(v25, ValidPte, 128LL);
    *(_QWORD *)v25 = v27;
    v28 = (__int64)(v25 << 25) >> 16;
    v90 = v28;
    v29 = v28 + 8 * ((v16 >> 3) & 0x1FF);
    v81 = v29;
    if ( v20 )
      v30 = v28 + 8 * ((*((_QWORD *)&v88 + 1) >> 3) & 0x1FFLL);
    else
      v30 = v28 + 4088;
    v31 = v15 & 0xFFFFFFFFFC00FC1FuLL;
    v91 = v31;
    v32 = (v30 - v29) >> 3;
    updated = v31;
    v34 = v31;
    v83 = *a3;
    if ( (unsigned int)v32 >= v83 - 1 )
      LODWORD(v32) = v83 - 1;
    if ( qword_140E2DCC0 && (v31 & 0x10) == 0 )
      v34 = v31 & ~qword_140E2DCC0;
    v12 = (unsigned int)P[1];
    v35 = HIDWORD(v34);
    if ( v35 + (unsigned __int64)(unsigned int)v32 >= LODWORD(P[1]) )
      LODWORD(v32) = LODWORD(P[1]) - v35 - 1;
    v36 = v76;
    v37 = v29;
    do
    {
      if ( !(_DWORD)v32 )
        break;
      ++v35;
      v37 += 8LL;
      updated = MiUpdatePageFileHighInPte(updated, v35);
      v38 = MiGetPageForWriteCluster(&P[1], v37, updated, &v77, &v78);
      if ( v38 == -1 )
        break;
      LODWORD(v32) = v32 - 1;
      ++v14;
      *++v93 = v38;
      if ( v38 == qword_140E374B8 )
        ++v36;
    }
    while ( v78 != 3 || v14 < 0x10 );
    v14 -= v77;
    v39 = v36 - v77;
    v40 = v83 - v14;
    v76 = v39;
    if ( v79 )
      v41 = v90 + 8 * (((unsigned __int64)v88 >> 3) & 0x1FF);
    else
      v41 = v81 & 0xFFFFFFFFFFFFF000uLL;
    v42 = v91;
    v43 = v91;
    v44 = (__int64)(v81 - v41) >> 3;
    if ( (unsigned int)v44 < (unsigned int)v40 )
      v40 = (unsigned int)v44;
    if ( qword_140E2DCC0 && (v91 & 0x10) == 0 )
      v43 = v91 & ~qword_140E2DCC0;
    v45 = HIDWORD(v43);
    if ( (unsigned int)v40 > (unsigned __int64)(v45 - 1) )
      v40 = (unsigned int)(v45 - 1);
    if ( (_DWORD)v40 )
    {
      v46 = (__int64 *)((char *)Src + 8 * v40);
      memmove(v46, Src, 8LL * v14);
      v77 = 0;
      v47 = v81;
      do
      {
        if ( !(_DWORD)v40 )
          break;
        --v45;
        v47 -= 8LL;
        v42 = MiUpdatePageFileHighInPte(v42, v45);
        v48 = MiGetPageForWriteCluster(&P[1], v47, v42, &v77, &v78);
        if ( v48 == -1 )
          break;
        --v46;
        LODWORD(v40) = v40 - 1;
        ++v14;
        *v46 = v48;
        if ( v48 == qword_140E374B8 )
          ++v39;
      }
      while ( v78 != 3 || v14 < 0x10 );
      v49 = Src;
      v39 -= v77;
      v12 = (unsigned int)P[1];
      v14 -= v77;
      v76 = v39;
      v50 = &v46[v77];
      if ( Src != v50 )
        memmove(Src, v50, 8LL * v14);
    }
    else
    {
      v49 = Src;
    }
    v51 = *(_QWORD *)(48LL * *v49 - 0x21FFFFFFFFF0LL);
    if ( qword_140E2DCC0 && (v51 & 0x10) == 0 )
      v51 &= ~qword_140E2DCC0;
    v13 = HIDWORD(v51);
    MiReleasePtes((__int64)&qword_140E376A8, v92, 1u);
    v19 = v82;
  }
  else
  {
LABEL_79:
    v12 = (unsigned int)P[1];
    v39 = v76;
    v49 = Src;
  }
  v52 = MiLockPageInline(v19, v22, v23, v24);
  MiRemoveLockedPageChargeAndDecRef(v19, v53, v54, v55);
  MiUnlockPage(v19, v52);
  if ( v79 )
  {
    if ( *((_QWORD *)&v87 + 1) )
    {
      LOBYTE(v56) = v89;
      MiUnlockProtoPoolPage(*((__int64 *)&v87 + 1), v56, v57, v58);
    }
    v75 = MiDecrementModifiedWriteCount(v87, 0);
    if ( v75 )
      MiReleaseControlAreaWaiters(v75);
  }
LABEL_57:
  v59 = *a3;
  if ( v14 < (unsigned int)v59 && v14 && (unsigned int)v13 + (unsigned __int64)v14 < v12 )
  {
    if ( (unsigned __int64)(unsigned int)v13 + v59 > v12 )
      v60 = v12 - v13 - v14;
    else
      v60 = v59 - v14;
    v61 = (__int64)&v49[v14];
    v62 = a2;
    v63 = MiAddToReservationCluster(a2, (unsigned int)&P[1], v60, (unsigned int)v13 + v14, v61, (__int64)&v76);
    v39 = v76;
    v14 += v63;
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
  *a3 = v14;
  *a4 = v14 - v39;
  return (unsigned int)v13;
}
