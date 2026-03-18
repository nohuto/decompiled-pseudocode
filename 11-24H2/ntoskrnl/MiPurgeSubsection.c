/*
 * XREFs of MiPurgeSubsection @ 0x14023C9F0
 * Callers:
 *     MiDeleteCachedSubsection @ 0x14023C35C (MiDeleteCachedSubsection.c)
 *     MmPurgeSection @ 0x1403704CC (MmPurgeSection.c)
 *     MiDeleteSubsectionPages @ 0x140370928 (MiDeleteSubsectionPages.c)
 *     MiPurgeImageSection @ 0x140AC2CF4 (MiPurgeImageSection.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiCheckProtoPtePageState @ 0x14023BE50 (MiCheckProtoPtePageState.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14023C31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiDeleteTransitionPte @ 0x14023D260 (MiDeleteTransitionPte.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiDeleteSectionCluster @ 0x1403A0124 (MiDeleteSectionCluster.c)
 *     MiReleasePageFileSpace @ 0x1403E4F90 (MiReleasePageFileSpace.c)
 *     MiWaitForPageWriteCompletion @ 0x14041514C (MiWaitForPageWriteCompletion.c)
 *     MiPurgeValidPage @ 0x140471150 (MiPurgeValidPage.c)
 *     MiDeleteSubsectionLargePages @ 0x1404CA9A4 (MiDeleteSubsectionLargePages.c)
 *     MiSubsectionProtosCreated @ 0x1404CFC98 (MiSubsectionProtosCreated.c)
 *     MiMakeGlobalSubsectionPte @ 0x1404D5FC8 (MiMakeGlobalSubsectionPte.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x14067A42C (MiChangingSubsectionProtos.c)
 */

void __fastcall MiPurgeSubsection(
        __int64 *BugCheckParameter2,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v9; // r9
  __int64 v12; // r11
  char v13; // al
  int v14; // ecx
  _QWORD *v15; // rsi
  char v16; // r14
  unsigned __int64 BugCheckParameter4; // rbx
  unsigned __int64 v18; // rbx
  unsigned __int64 *v19; // rdx
  __int64 v20; // rbx
  int v21; // r8d
  unsigned __int64 v22; // rax
  int v23; // eax
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r14
  unsigned int v29; // edi
  PVOID v30; // rcx
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned int i; // ecx
  char v35; // al
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // [rsp+30h] [rbp-A8h]
  _QWORD *v41; // [rsp+38h] [rbp-A0h]
  __int64 v42; // [rsp+48h] [rbp-90h]
  _OWORD v43[2]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v44; // [rsp+90h] [rbp-48h]
  char v46; // [rsp+E8h] [rbp+10h]
  int v47; // [rsp+F0h] [rbp+18h]
  unsigned __int8 v48; // [rsp+F8h] [rbp+20h] BYREF

  v5 = *BugCheckParameter2;
  v6 = a5;
  memset(v43, 0, sizeof(v43));
  v44 = 0LL;
  *(_OWORD *)a5 = 0LL;
  v9 = 0LL;
  *(_OWORD *)(v6 + 16) = 0LL;
  *(_QWORD *)(v6 + 32) = 0LL;
  v42 = v5;
  v12 = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(v5 + 60) & 0x3FF));
  v13 = *(_BYTE *)(v5 + 62);
  v40 = v12;
  if ( (v13 & 0xC) == 0 )
  {
    v14 = 0;
LABEL_3:
    v47 = v14;
    goto LABEL_4;
  }
  LOBYTE(v14) = 1;
  v47 = 1;
  if ( (v13 & 0xC) == 8 )
  {
    v14 = 3;
    goto LABEL_3;
  }
LABEL_4:
  v48 = 17;
  v41 = 0LL;
  v15 = 0LL;
  if ( (a4 & 2) != 0 )
  {
    v16 = 1;
    v46 = 1;
  }
  else
  {
    v46 = 0;
    v16 = 0;
    if ( (v14 & 1) != 0 )
    {
      MiChangingSubsectionProtos((ULONG_PTR)BugCheckParameter2);
      goto LABEL_28;
    }
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( a2 >= a3 )
        goto LABEL_82;
      if ( (a2 & 0xFFF) != 0 )
        break;
      if ( v48 != 17 )
        MiUnlockProtoPoolPage(v15, v48);
LABEL_96:
      v37 = MiCheckProtoPtePageState(v5, a2, v16, &v48);
      v12 = v40;
      v15 = (_QWORD *)v37;
      v41 = (_QWORD *)v37;
      if ( v37 )
        goto LABEL_32;
      a2 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    if ( v48 == 17 )
      goto LABEL_96;
LABEL_32:
    if ( (a4 & 4) != 0 )
      break;
    if ( (unsigned __int64)((__int64)(a3 - a2) >> 3) < 0x10 )
      break;
    if ( ((4096 - (a2 & 0xFFF)) & 0xFFFFFFF8) < 0x80 )
      break;
    v31 = *(_QWORD *)a2;
    if ( (*(_QWORD *)a2 & 0xC01LL) != 0x800 )
      break;
    if ( qword_140E2DB80 )
    {
      if ( (v31 & 0x10) != 0 )
        v31 &= ~0x10uLL;
      else
        v31 &= ~qword_140E2DB80;
    }
    v32 = (v31 >> 12) & 0xFFFFFFFFFFLL;
    if ( (v32 & 0xF) != 0 )
      break;
    v33 = v32 + 1;
    for ( i = 1; i < 0x10uLL; ++i )
    {
      if ( ((*(_QWORD *)(a2 + 8LL * i) >> 12) & 0xFFFFFFFFFFLL) != v33 )
        goto LABEL_33;
      ++v33;
    }
    v39 = MiDeleteSectionCluster(v12, a2, a4, v9);
    if ( !v39 )
      break;
    *(_QWORD *)v6 += v39;
    a2 += 8 * v39;
    v15 = v41;
LABEL_28:
    v12 = v40;
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_33:
      v24 = *(_QWORD *)a2;
      v25 = *(_QWORD *)a2;
      if ( (*(_QWORD *)a2 & 1) != 0 )
        goto LABEL_40;
      if ( (*(_QWORD *)a2 & 0xC00LL) != 0x800 )
      {
        BugCheckParameter4 = *(_QWORD *)a2;
LABEL_74:
        if ( (BugCheckParameter4 & 0x400) != 0 )
          goto LABEL_79;
        if ( (a4 & 2) != 0 )
        {
          if ( ((BugCheckParameter4 & 4) != 0 || (BugCheckParameter4 & 2) != 0) && BugCheckParameter4 )
          {
            MiReleasePageFileInfo(v40, BugCheckParameter4, 1LL);
            v6 = a5;
            a2 += 8LL;
            v5 = v42;
            goto LABEL_26;
          }
        }
        else if ( (a4 & 4) != 0 )
        {
          if ( BugCheckParameter4 != MiMakeDemandZeroPte(24LL) )
          {
            MiReleasePageFileSpace(v40, BugCheckParameter4, 1LL);
            *(_QWORD *)a2 = MiMakeGlobalSubsectionPte(BugCheckParameter2, a2);
          }
        }
        else if ( (BugCheckParameter4 & 0x800) == 0 && BugCheckParameter4 )
        {
          KeBugCheckEx(0xDEu, 4uLL, (ULONG_PTR)BugCheckParameter2, a2, BugCheckParameter4);
        }
LABEL_79:
        v6 = a5;
        a2 += 8LL;
        v5 = v42;
LABEL_26:
        v15 = v41;
LABEL_27:
        v16 = v46;
        goto LABEL_28;
      }
      if ( !v24 || !qword_140E2DB80 || (v24 & qword_140E2DB80) != 0 )
      {
        v25 = *(_QWORD *)a2;
        if ( qword_140E2DB80 )
        {
          if ( (v24 & 0x10) != 0 )
            v25 = v24 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v25 = v24 & ~qword_140E2DB80;
        }
LABEL_40:
        v26 = (v25 >> 12) & 0xFFFFFFFFFFLL;
        if ( v26 <= qword_140E2DBE0 )
        {
          v27 = 6 * v26;
          if ( (*(_QWORD *)(48 * v26 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
            break;
        }
      }
    }
    v28 = 48 * v26 - 0x220000000000LL;
    v29 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v29 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v27) )
        {
          HvlNotifyLongSpinWait(v29);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v28 + 24) < 0 );
    }
    if ( *(_QWORD *)a2 == v24 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v30 = qword_140E2FF88;
  if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v28 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
    v28 = MiLockSpecialPurposeMemoryCachedPage(v28, 0);
  BugCheckParameter4 = *(_QWORD *)a2;
  if ( !v28 )
    goto LABEL_74;
  if ( (BugCheckParameter4 & 1) != 0 )
  {
    v6 = a5;
    if ( (a4 & 2) != 0 )
    {
      MiPurgeValidPage(v30, *(_QWORD *)a2, a5, v9);
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v5 = v42;
      a2 += 8LL;
      v15 = v41;
      goto LABEL_27;
    }
    goto LABEL_129;
  }
  if ( (BugCheckParameter4 & 0x400) != 0
    || (*(_BYTE *)(v28 + 16) & 1) != 0
    || (*(_QWORD *)(v28 + 8) | 0x8000000000000000uLL) != a2
    || (v38 = *(_QWORD *)(v28 + 16), (a4 & 6) == 0 && (v38 & 0x400) == 0) )
  {
    KeBugCheckEx(0xDEu, 1uLL, a2, *(_QWORD *)(v28 + 8), *(_QWORD *)a2);
  }
  if ( qword_140E2DB80 )
  {
    if ( (BugCheckParameter4 & 0x10) != 0 )
      BugCheckParameter4 &= ~0x10uLL;
    else
      BugCheckParameter4 &= ~qword_140E2DB80;
  }
  v18 = BugCheckParameter4 >> 12;
  if ( (a4 & 4) != 0 && (((v38 & 0x400) != 0) & (unsigned __int8)~(*(_BYTE *)(v28 + 34) >> 4)) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_79;
  }
  if ( (a4 & 2) == 0 )
  {
    v6 = a5;
    if ( (*(_BYTE *)(v28 + 34) & 0x10) != 0 )
    {
      if ( (a4 & 1) == 0 )
        goto LABEL_129;
      *(_BYTE *)(a5 + 10) = 1;
    }
    if ( !(unsigned __int16)*(_DWORD *)(v28 + 32) )
    {
      v35 = v47;
      goto LABEL_71;
    }
    if ( (a4 & 8) == 0 )
    {
      if ( (((a4 & 4) == 0) & (*(_BYTE *)(v28 + 34) >> 3)) != 0 )
      {
        v15 = v41;
        v5 = v42;
        MiWaitForPageWriteCompletion(v28, v42, v41, v48);
        goto LABEL_91;
      }
      v35 = v47;
      if ( !v47 )
        goto LABEL_11;
      *(_BYTE *)(v6 + 9) = 1;
LABEL_71:
      if ( (v35 & 2) != 0 )
        *(_BYTE *)(v6 + 9) = 1;
      goto LABEL_11;
    }
LABEL_129:
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_BYTE *)(v6 + 8) = 1;
    goto LABEL_81;
  }
LABEL_11:
  if ( (a4 & 4) != 0 && (unsigned __int16)*(_DWORD *)(v28 + 32) && (*(_DWORD *)(v28 + 16) & 0x400LL) == 0 )
  {
    v40 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v28 + 40) >> 43) & 0x3FFLL));
    MiChargeCommit(v40, 1uLL, 4);
  }
  v19 = (unsigned __int64 *)(a2 + 8);
  v20 = (unsigned int)v18 & 0xFFFFFFF0;
  v21 = 8;
  if ( a2 + 8 < a3 )
  {
    do
    {
      if ( ((unsigned __int16)v19 & 0xFFF) == 0 )
        break;
      v22 = *v19;
      if ( (*v19 & 1) == 0 && (*v19 & 0xC00) == 0x800 )
      {
        if ( qword_140E2DB80 )
        {
          if ( (v22 & 0x10) != 0 )
            v22 &= ~0x10uLL;
          else
            v22 &= ~qword_140E2DB80;
        }
        if ( ((v22 >> 12) & 0xFFFFFFF0) == v20 )
          break;
      }
      --v21;
    }
    while ( v21 );
  }
  v23 = MiDeleteTransitionPte(a2, v28);
  v6 = a5;
  if ( v23 == 3 && (a4 & 2) != 0 )
    ++*(_QWORD *)(a5 + 32);
  v5 = v42;
  ++*(_QWORD *)v6;
  if ( (*(_DWORD *)(v42 + 56) & 0xA0) != 0x80 || *(_QWORD *)(v42 + 32) )
  {
    if ( (a4 & 4) != 0 )
      *(_QWORD *)a2 = MiMakeGlobalSubsectionPte(BugCheckParameter2, a2);
    a2 += 8LL;
    if ( (*(_BYTE *)v6 & 0xF) == 0 )
    {
      v15 = v41;
      if ( (*v41 & 0xFFFFFFFFFFELL) != 0 || KeShouldYieldProcessor() )
      {
        MiUnlockProtoPoolPage(v41, v48);
LABEL_91:
        v48 = 17;
        goto LABEL_27;
      }
    }
    goto LABEL_26;
  }
LABEL_81:
  v15 = v41;
LABEL_82:
  if ( v48 != 17 )
    MiUnlockProtoPoolPage(v15, v48);
  if ( v47 && (a4 & 2) == 0 )
    MiSubsectionProtosCreated(BugCheckParameter2, v43, 0LL, *(_QWORD *)v6 != 0LL);
  v36 = *(_QWORD *)(v6 + 16);
  if ( v36 )
    *(_QWORD *)(v6 + 32) += MiDeleteSubsectionLargePages(BugCheckParameter2, v36, *(_QWORD *)(v6 + 24), v9);
}
