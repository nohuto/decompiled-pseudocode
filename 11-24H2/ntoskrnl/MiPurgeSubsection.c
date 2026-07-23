/*
 * XREFs of MiPurgeSubsection @ 0x140204780
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140203EB8 (MiDeleteSubsectionPages.c)
 *     MiDeleteCachedSubsection @ 0x140204084 (MiDeleteCachedSubsection.c)
 *     MmPurgeSection @ 0x1403F06F0 (MmPurgeSection.c)
 *     MiPurgeImageSection @ 0x140ABDFDC (MiPurgeImageSection.c)
 * Callees:
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140204044 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiDeleteTransitionPte @ 0x140204FF0 (MiDeleteTransitionPte.c)
 *     MiDeleteSectionCluster @ 0x140216B54 (MiDeleteSectionCluster.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiWaitForPageWriteCompletion @ 0x140270FAC (MiWaitForPageWriteCompletion.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiCheckProtoPtePageState @ 0x140345BB0 (MiCheckProtoPtePageState.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiReleasePageFileSpace @ 0x1403D2B30 (MiReleasePageFileSpace.c)
 *     MiPurgeValidPage @ 0x14046B8C8 (MiPurgeValidPage.c)
 *     MiDeleteSubsectionLargePages @ 0x1404C3EC4 (MiDeleteSubsectionLargePages.c)
 *     MiSubsectionProtosCreated @ 0x1404C8D48 (MiSubsectionProtosCreated.c)
 *     MiMakeGlobalSubsectionPte @ 0x1404CF418 (MiMakeGlobalSubsectionPte.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x14067B60C (MiChangingSubsectionProtos.c)
 */

char __fastcall MiPurgeSubsection(
        __int64 *BugCheckParameter2,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v9; // r9
  ULONG_PTR v11; // r15
  __int64 v12; // r11
  char v13; // al
  int v14; // ecx
  __int64 DemandZeroPte; // rax
  _QWORD *v16; // rsi
  unsigned int v17; // r14d
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR v19; // rbx
  unsigned __int64 *v20; // rdx
  __int64 v21; // rbx
  int v22; // r8d
  unsigned __int64 v23; // rax
  int v24; // eax
  __int64 v25; // r8
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r14
  unsigned int v31; // edi
  PVOID v32; // rcx
  unsigned __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned int i; // ecx
  char v36; // al
  __int64 v37; // rdx
  __int64 v39; // [rsp+30h] [rbp-A8h]
  _QWORD *v40; // [rsp+38h] [rbp-A0h]
  __int64 v41; // [rsp+48h] [rbp-90h]
  _OWORD v42[2]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v43; // [rsp+90h] [rbp-48h]
  int v45; // [rsp+E8h] [rbp+10h]
  int v46; // [rsp+F0h] [rbp+18h]
  unsigned __int8 v47; // [rsp+F8h] [rbp+20h] BYREF

  v5 = *BugCheckParameter2;
  v6 = a5;
  memset(v42, 0, sizeof(v42));
  v43 = 0LL;
  *(_OWORD *)a5 = 0LL;
  v9 = 0LL;
  *(_OWORD *)(v6 + 16) = 0LL;
  *(_QWORD *)(v6 + 32) = 0LL;
  v11 = a2;
  v41 = v5;
  v12 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(v5 + 60) & 0x3FF));
  v13 = *(_BYTE *)(v5 + 62);
  v39 = v12;
  if ( (v13 & 0xC) != 0 )
  {
    LOBYTE(v14) = 1;
    v46 = 1;
    if ( (v13 & 0xC) != 8 )
      goto LABEL_4;
    v14 = 3;
  }
  else
  {
    v14 = 0;
  }
  v46 = v14;
LABEL_4:
  v47 = 17;
  LOBYTE(DemandZeroPte) = a4 & 2;
  v40 = 0LL;
  v16 = 0LL;
  if ( (a4 & 2) != 0 )
  {
    v17 = 1;
    v45 = 1;
  }
  else
  {
    v45 = 0;
    v17 = 0;
    if ( (v14 & 1) != 0 )
    {
      LOBYTE(DemandZeroPte) = MiChangingSubsectionProtos((ULONG_PTR)BugCheckParameter2);
      goto LABEL_28;
    }
  }
  while ( 1 )
  {
    v25 = 0xFFFFFFFFFFLL;
    while ( 1 )
    {
      if ( v11 >= a3 )
        goto LABEL_83;
      if ( (v11 & 0xFFF) != 0 )
      {
        if ( v47 != 17 )
          break;
      }
      else if ( v47 != 17 )
      {
        MiUnlockProtoPoolPage(v16, v47);
      }
      DemandZeroPte = MiCheckProtoPtePageState(v5, v11, v17, &v47);
      v12 = v39;
      v16 = (_QWORD *)DemandZeroPte;
      v40 = (_QWORD *)DemandZeroPte;
      v25 = 0xFFFFFFFFFFLL;
      if ( DemandZeroPte )
        break;
      v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    if ( (a4 & 4) != 0 )
      break;
    if ( (unsigned __int64)((__int64)(a3 - v11) >> 3) < 0x10 )
      break;
    if ( ((4096 - (v11 & 0xFFF)) & 0xFFFFFFF8) < 0x80 )
      break;
    v33 = *(_QWORD *)v11;
    if ( (*(_QWORD *)v11 & 0xC01LL) != 0x800 )
      break;
    if ( qword_140E2DCC0 )
    {
      if ( (v33 & 0x10) != 0 )
        v33 &= ~0x10uLL;
      else
        v33 &= ~qword_140E2DCC0;
    }
    v34 = (v33 >> 12) & 0xFFFFFFFFFFLL;
    if ( (v34 & 0xF) != 0 )
      break;
    a2 = v34 + 1;
    for ( i = 1; i < 0x10uLL; ++i )
    {
      if ( ((*(_QWORD *)(v11 + 8LL * i) >> 12) & 0xFFFFFFFFFFLL) != a2 )
        goto LABEL_34;
      ++a2;
    }
    DemandZeroPte = MiDeleteSectionCluster(v12, v11, a4, v9);
    if ( !DemandZeroPte )
      break;
    *(_QWORD *)v6 += DemandZeroPte;
    v11 += 8 * DemandZeroPte;
    v16 = v40;
LABEL_28:
    v12 = v39;
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_34:
      v26 = *(_QWORD *)v11;
      v27 = *(_QWORD *)v11;
      if ( (*(_QWORD *)v11 & 1) != 0 )
        goto LABEL_41;
      DemandZeroPte = *(_QWORD *)v11 & 0xC00LL;
      if ( DemandZeroPte != 2048 )
      {
        BugCheckParameter4 = *(_QWORD *)v11;
LABEL_75:
        if ( (BugCheckParameter4 & 0x400) != 0 )
          goto LABEL_80;
        if ( (a4 & 2) != 0 )
        {
          a2 = BugCheckParameter4;
          LOBYTE(DemandZeroPte) = (unsigned __int8)BugCheckParameter4 >> 2;
          if ( (BugCheckParameter4 & 4) != 0
            || (LOBYTE(DemandZeroPte) = (unsigned __int8)BugCheckParameter4 >> 1, (BugCheckParameter4 & 2) != 0) )
          {
            if ( BugCheckParameter4 )
            {
              LOBYTE(DemandZeroPte) = MiReleasePageFileInfo(v39, BugCheckParameter4, 1LL);
              v6 = a5;
              v11 += 8LL;
              v5 = v41;
              goto LABEL_26;
            }
          }
        }
        else if ( (a4 & 4) != 0 )
        {
          DemandZeroPte = MiMakeDemandZeroPte(24LL, a2, v25, v9);
          if ( BugCheckParameter4 != DemandZeroPte )
          {
            MiReleasePageFileSpace(v39, BugCheckParameter4, 1LL);
            DemandZeroPte = MiMakeGlobalSubsectionPte(BugCheckParameter2, v11);
            *(_QWORD *)v11 = DemandZeroPte;
          }
        }
        else if ( (BugCheckParameter4 & 0x800) == 0 && BugCheckParameter4 )
        {
          KeBugCheckEx(0xDEu, 4uLL, (ULONG_PTR)BugCheckParameter2, v11, BugCheckParameter4);
        }
LABEL_80:
        v6 = a5;
        v11 += 8LL;
        v5 = v41;
LABEL_26:
        v16 = v40;
LABEL_27:
        v17 = v45;
        goto LABEL_28;
      }
      if ( !v26 || !qword_140E2DCC0 || (v26 & qword_140E2DCC0) != 0 )
      {
        v27 = *(_QWORD *)v11;
        if ( qword_140E2DCC0 )
        {
          if ( (v26 & 0x10) != 0 )
            v27 = v26 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v27 = v26 & ~qword_140E2DCC0;
        }
LABEL_41:
        v25 = 0xFFFFFFFFFFLL;
        v28 = (v27 >> 12) & 0xFFFFFFFFFFLL;
        if ( v28 <= qword_140E2DD20 )
        {
          v29 = 6 * v28;
          if ( (*(_QWORD *)(48 * v28 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
            break;
        }
      }
    }
    v30 = 48 * v28 - 0x220000000000LL;
    v31 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v31 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v29, a2, v25, v9) )
        {
          HvlNotifyLongSpinWait(v31);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v30 + 24) < 0 );
    }
    if ( *(_QWORD *)v11 == v26 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v32 = qword_140E300C8;
  LODWORD(DemandZeroPte) = *(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v30 + 40) >> 43) & 0x3FFLL)) + 4LL);
  if ( (DemandZeroPte & 0x80u) != 0LL )
  {
    DemandZeroPte = MiLockSpecialPurposeMemoryCachedPage(v30, 0);
    v30 = DemandZeroPte;
  }
  BugCheckParameter4 = *(_QWORD *)v11;
  if ( !v30 )
    goto LABEL_75;
  if ( (BugCheckParameter4 & 1) != 0 )
  {
    v6 = a5;
    if ( (a4 & 2) != 0 )
    {
      MiPurgeValidPage(v32, *(_QWORD *)v11, a5, v9);
      LOBYTE(DemandZeroPte) = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v5 = v41;
      v11 += 8LL;
      v16 = v40;
      goto LABEL_27;
    }
    goto LABEL_130;
  }
  if ( (BugCheckParameter4 & 0x400) != 0
    || (*(_BYTE *)(v30 + 16) & 1) != 0
    || (*(_QWORD *)(v30 + 8) | 0x8000000000000000uLL) != v11
    || (a2 = *(_QWORD *)(v30 + 16), (a4 & 6) == 0 && (a2 & 0x400) == 0) )
  {
    KeBugCheckEx(0xDEu, 1uLL, v11, *(_QWORD *)(v30 + 8), *(_QWORD *)v11);
  }
  if ( qword_140E2DCC0 )
  {
    if ( (BugCheckParameter4 & 0x10) != 0 )
      BugCheckParameter4 &= ~0x10uLL;
    else
      BugCheckParameter4 &= ~qword_140E2DCC0;
  }
  v19 = BugCheckParameter4 >> 12;
  if ( (a4 & 4) != 0 && (((a2 & 0x400) != 0) & (unsigned __int8)~(*(_BYTE *)(v30 + 34) >> 4)) != 0 )
  {
    LOBYTE(DemandZeroPte) = -1;
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_80;
  }
  if ( (a4 & 2) == 0 )
  {
    v6 = a5;
    if ( (*(_BYTE *)(v30 + 34) & 0x10) != 0 )
    {
      if ( (a4 & 1) == 0 )
        goto LABEL_130;
      *(_BYTE *)(a5 + 10) = 1;
    }
    if ( !(unsigned __int16)*(_DWORD *)(v30 + 32) )
    {
      v36 = v46;
      goto LABEL_72;
    }
    if ( (a4 & 8) == 0 )
    {
      if ( (((a4 & 4) == 0) & (*(_BYTE *)(v30 + 34) >> 3)) != 0 )
      {
        v16 = v40;
        v5 = v41;
        LOBYTE(DemandZeroPte) = MiWaitForPageWriteCompletion(v30, v41, v40, v47);
        goto LABEL_92;
      }
      v36 = v46;
      if ( !v46 )
        goto LABEL_11;
      *(_BYTE *)(v6 + 9) = 1;
LABEL_72:
      if ( (v36 & 2) != 0 )
        *(_BYTE *)(v6 + 9) = 1;
      goto LABEL_11;
    }
LABEL_130:
    LOBYTE(DemandZeroPte) = -1;
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_BYTE *)(v6 + 8) = 1;
    goto LABEL_82;
  }
LABEL_11:
  if ( (a4 & 4) != 0 && (unsigned __int16)*(_DWORD *)(v30 + 32) && (*(_DWORD *)(v30 + 16) & 0x400LL) == 0 )
  {
    v39 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v30 + 40) >> 43) & 0x3FFLL));
    MiChargeCommit(v39, 1LL, 4LL, v9);
  }
  v20 = (unsigned __int64 *)(v11 + 8);
  v21 = (unsigned int)v19 & 0xFFFFFFF0;
  v22 = 8;
  if ( v11 + 8 < a3 )
  {
    do
    {
      if ( ((unsigned __int16)v20 & 0xFFF) == 0 )
        break;
      v23 = *v20;
      if ( (*v20 & 1) == 0 && (*v20 & 0xC00) == 0x800 )
      {
        if ( qword_140E2DCC0 )
        {
          if ( (v23 & 0x10) != 0 )
            v23 &= ~0x10uLL;
          else
            v23 &= ~qword_140E2DCC0;
        }
        if ( ((v23 >> 12) & 0xFFFFFFF0) == v21 )
          break;
      }
      --v22;
    }
    while ( v22 );
  }
  v24 = MiDeleteTransitionPte(v11);
  v6 = a5;
  if ( v24 == 3 && (a4 & 2) != 0 )
    ++*(_QWORD *)(a5 + 32);
  v5 = v41;
  ++*(_QWORD *)v6;
  LOBYTE(DemandZeroPte) = *(_DWORD *)(v41 + 56) & 0xA0;
  if ( (_BYTE)DemandZeroPte != 0x80 || *(_QWORD *)(v41 + 32) )
  {
    if ( (a4 & 4) != 0 )
    {
      DemandZeroPte = MiMakeGlobalSubsectionPte(BugCheckParameter2, v11);
      *(_QWORD *)v11 = DemandZeroPte;
    }
    v11 += 8LL;
    if ( (*(_BYTE *)v6 & 0xF) == 0 )
    {
      v16 = v40;
      if ( (*v40 & 0xFFFFFFFFFFELL) != 0 || (LODWORD(DemandZeroPte) = KeShouldYieldProcessor(), (_DWORD)DemandZeroPte) )
      {
        LOBYTE(DemandZeroPte) = MiUnlockProtoPoolPage(v40, v47);
LABEL_92:
        v47 = 17;
        goto LABEL_27;
      }
    }
    goto LABEL_26;
  }
LABEL_82:
  v16 = v40;
LABEL_83:
  if ( v47 != 17 )
    LOBYTE(DemandZeroPte) = MiUnlockProtoPoolPage(v16, v47);
  if ( v46 && (a4 & 2) == 0 )
    LOBYTE(DemandZeroPte) = MiSubsectionProtosCreated(BugCheckParameter2, v42, 0LL, *(_QWORD *)v6 != 0LL);
  v37 = *(_QWORD *)(v6 + 16);
  if ( v37 )
  {
    DemandZeroPte = MiDeleteSubsectionLargePages(BugCheckParameter2, v37, *(_QWORD *)(v6 + 24), v9);
    *(_QWORD *)(v6 + 32) += DemandZeroPte;
  }
  return DemandZeroPte;
}
