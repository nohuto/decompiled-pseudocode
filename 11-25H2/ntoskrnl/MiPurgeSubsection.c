/*
 * XREFs of MiPurgeSubsection @ 0x1403400A0
 * Callers:
 *     MmPurgeSection @ 0x1402C5AB8 (MmPurgeSection.c)
 *     MiDeleteCachedSubsection @ 0x14033F8B4 (MiDeleteCachedSubsection.c)
 *     MiDeleteSubsectionPages @ 0x14044A8C4 (MiDeleteSubsectionPages.c)
 *     MiPurgeImageSection @ 0x140ABEF04 (MiPurgeImageSection.c)
 * Callees:
 *     MiDeleteSectionCluster @ 0x140229404 (MiDeleteSectionCluster.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCheckProtoPtePageState @ 0x14033E110 (MiCheckProtoPtePageState.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14033F5DC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiDeleteTransitionPte @ 0x140340900 (MiDeleteTransitionPte.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiReleasePageFileSpace @ 0x1403E1160 (MiReleasePageFileSpace.c)
 *     MiWaitForPageWriteCompletion @ 0x140417F6C (MiWaitForPageWriteCompletion.c)
 *     MiPurgeValidPage @ 0x140472A4C (MiPurgeValidPage.c)
 *     MiDeleteSubsectionLargePages @ 0x1404CAC68 (MiDeleteSubsectionLargePages.c)
 *     MiSubsectionProtosCreated @ 0x1404CFB8C (MiSubsectionProtosCreated.c)
 *     MiMakeGlobalSubsectionPte @ 0x1404D68D8 (MiMakeGlobalSubsectionPte.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x14066EB8C (MiChangingSubsectionProtos.c)
 */

void __fastcall MiPurgeSubsection(
        __int64 *BugCheckParameter2,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  ULONG_PTR v8; // r9
  char v9; // si
  _WORD *v12; // r10
  char v13; // al
  int v14; // ecx
  ULONG_PTR v15; // r14
  unsigned __int64 BugCheckParameter4; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int64 *v18; // rdx
  __int64 v19; // rbx
  int v20; // r8d
  unsigned __int64 v21; // rax
  int v22; // eax
  __int64 v23; // r8
  ULONG_PTR v24; // rbx
  ULONG_PTR v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // r14
  int v28; // edi
  PVOID v29; // rcx
  ULONG_PTR v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned int i; // ecx
  char v34; // al
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // [rsp+30h] [rbp-A8h]
  _QWORD *v39; // [rsp+38h] [rbp-A0h]
  __int64 v40; // [rsp+48h] [rbp-90h]
  _OWORD v41[2]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v42; // [rsp+90h] [rbp-48h]
  char v44; // [rsp+E8h] [rbp+10h]
  int v45; // [rsp+F0h] [rbp+18h]
  unsigned __int8 v46; // [rsp+F8h] [rbp+20h] BYREF

  v5 = *BugCheckParameter2;
  v6 = a5;
  memset(v41, 0, sizeof(v41));
  v42 = 0LL;
  v8 = (ULONG_PTR)BugCheckParameter2;
  *(_OWORD *)a5 = 0LL;
  v9 = 0;
  *(_OWORD *)(v6 + 16) = 0LL;
  *(_QWORD *)(v6 + 32) = 0LL;
  v40 = v5;
  v12 = (_WORD *)*((_QWORD *)qword_140E2FD48 + (*(_WORD *)(v5 + 60) & 0x3FF));
  v13 = *(_BYTE *)(v5 + 62);
  v38 = (__int64)v12;
  if ( (v13 & 0xC) == 0 )
  {
    v14 = 0;
LABEL_3:
    v45 = v14;
    goto LABEL_4;
  }
  LOBYTE(v14) = 1;
  v45 = 1;
  if ( (v13 & 0xC) == 8 )
  {
    v14 = 3;
    goto LABEL_3;
  }
LABEL_4:
  v46 = 17;
  v39 = 0LL;
  v15 = 0LL;
  if ( (a4 & 2) != 0 )
  {
    v9 = 1;
    v44 = 1;
  }
  else
  {
    v44 = 0;
    if ( (v14 & 1) != 0 )
    {
      MiChangingSubsectionProtos(v8);
      goto LABEL_31;
    }
  }
  while ( 1 )
  {
    v23 = 0xFFFFFFFFFFLL;
    while ( 1 )
    {
      if ( a2 >= a3 )
        goto LABEL_82;
      if ( (a2 & 0xFFF) != 0 )
      {
        if ( v46 != 17 )
          break;
      }
      else if ( v46 != 17 )
      {
        MiUnlockProtoPoolPage(v15, v46, 0xFFFFFFFFFFLL, v8);
      }
      v36 = MiCheckProtoPtePageState(v5, a2, v9, &v46);
      v12 = (_WORD *)v38;
      v15 = v36;
      v39 = (_QWORD *)v36;
      v23 = 0xFFFFFFFFFFLL;
      if ( v36 )
        break;
      a2 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    if ( (a4 & 4) == 0
      && (unsigned __int64)((__int64)(a3 - a2) >> 3) >= 0x10
      && ((4096 - (a2 & 0xFFF)) & 0xFFFFFFF8) >= 0x80 )
    {
      v30 = *(_QWORD *)a2;
      if ( (*(_QWORD *)a2 & 0xC01LL) == 0x800 )
      {
        if ( qword_140E2D940 )
        {
          if ( (v30 & 0x10) != 0 )
            v30 &= ~0x10uLL;
          else
            v30 &= ~qword_140E2D940;
        }
        v31 = (v30 >> 12) & 0xFFFFFFFFFFLL;
        if ( (v31 & 0xF) == 0 )
        {
          v32 = v31 + 1;
          for ( i = 1; i < 0x10uLL; ++i )
          {
            if ( ((*(_QWORD *)(a2 + 8LL * i) >> 12) & 0xFFFFFFFFFFLL) != v32 )
              goto LABEL_37;
            ++v32;
          }
          v37 = MiDeleteSectionCluster(v12, (ULONG_PTR *)a2, a4);
          if ( v37 )
          {
            *(_QWORD *)v6 += v37;
            a2 += 8 * v37;
            goto LABEL_30;
          }
        }
      }
    }
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_37:
        v24 = *(_QWORD *)a2;
        v25 = *(_QWORD *)a2;
        if ( (*(_QWORD *)a2 & 1) != 0 )
          goto LABEL_44;
        if ( (*(_QWORD *)a2 & 0xC00LL) != 0x800 )
        {
          BugCheckParameter4 = *(_QWORD *)a2;
LABEL_78:
          if ( (BugCheckParameter4 & 0x400) != 0 )
            goto LABEL_79;
          if ( (a4 & 2) != 0 )
          {
            if ( ((BugCheckParameter4 & 4) != 0 || (BugCheckParameter4 & 2) != 0) && BugCheckParameter4 )
            {
              MiReleasePageFileInfo(v38, BugCheckParameter4, 1);
              v6 = a5;
              a2 += 8LL;
              v5 = v40;
              goto LABEL_29;
            }
          }
          else if ( (a4 & 4) != 0 )
          {
            if ( BugCheckParameter4 != MiMakeDemandZeroPte(24LL) )
            {
              MiReleasePageFileSpace(v38, BugCheckParameter4, 1LL);
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
          v5 = v40;
LABEL_29:
          v15 = (ULONG_PTR)v39;
          goto LABEL_30;
        }
        if ( !v24 || !qword_140E2D940 || (v24 & qword_140E2D940) != 0 )
        {
          v25 = *(_QWORD *)a2;
          if ( qword_140E2D940 )
          {
            if ( (v24 & 0x10) != 0 )
              v25 = v24 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v25 = v24 & ~qword_140E2D940;
          }
LABEL_44:
          v26 = (v25 >> 12) & 0xFFFFFFFFFFLL;
          if ( v26 <= qword_140E2D9A0 && (*(_QWORD *)(48 * v26 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
            break;
        }
      }
      v27 = 48 * v26 - 0x220000000000LL;
      v28 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
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
        while ( *(__int64 *)(v27 + 24) < 0 );
      }
      if ( *(_QWORD *)a2 == v24 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    v29 = qword_140E2FD48;
    if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v27 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
      v27 = MiLockSpecialPurposeMemoryCachedPage(v27, 0LL, v23, v8);
    BugCheckParameter4 = *(_QWORD *)a2;
    if ( !v27 )
      goto LABEL_78;
    if ( (BugCheckParameter4 & 1) == 0 )
      break;
    v6 = a5;
    if ( (a4 & 2) == 0 )
      goto LABEL_132;
    MiPurgeValidPage(v29, *(_QWORD *)a2, a5, v8);
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v5 = v40;
    a2 += 8LL;
    v15 = (ULONG_PTR)v39;
LABEL_30:
    v9 = v44;
LABEL_31:
    v12 = (_WORD *)v38;
  }
  if ( (BugCheckParameter4 & 0x400) != 0
    || (*(_BYTE *)(v27 + 16) & 1) != 0
    || (*(_QWORD *)(v27 + 8) | 0x8000000000000000uLL) != a2
    || (a4 & 6) == 0 && (*(_DWORD *)(v27 + 16) & 0x400LL) == 0 )
  {
    KeBugCheckEx(0xDEu, 1uLL, a2, *(_QWORD *)(v27 + 8), *(_QWORD *)a2);
  }
  if ( qword_140E2D940 )
  {
    if ( (BugCheckParameter4 & 0x10) != 0 )
      BugCheckParameter4 &= ~0x10uLL;
    else
      BugCheckParameter4 &= ~qword_140E2D940;
  }
  v17 = BugCheckParameter4 >> 12;
  if ( (a4 & 4) != 0 && (*(_BYTE *)(v27 + 34) & 0x10) == 0 && (*(_DWORD *)(v27 + 16) & 0x400LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_79;
  }
  if ( (a4 & 2) == 0 )
  {
    v6 = a5;
    if ( (*(_BYTE *)(v27 + 34) & 0x10) != 0 )
    {
      if ( (a4 & 1) == 0 )
        goto LABEL_132;
      *(_BYTE *)(a5 + 10) = 1;
    }
    if ( !(unsigned __int16)*(_DWORD *)(v27 + 32) )
    {
      v34 = v45;
LABEL_75:
      if ( (v34 & 2) != 0 )
        *(_BYTE *)(v6 + 9) = 1;
      goto LABEL_14;
    }
    if ( (a4 & 8) != 0 )
    {
LABEL_132:
      _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v6 + 8) = 1;
      goto LABEL_81;
    }
    if ( (((a4 & 4) == 0) & (*(_BYTE *)(v27 + 34) >> 3)) == 0 )
    {
      v34 = v45;
      if ( !v45 )
        goto LABEL_14;
      *(_BYTE *)(v6 + 9) = 1;
      goto LABEL_75;
    }
    v5 = v40;
    MiWaitForPageWriteCompletion(v27, v40, v39, v46);
    v15 = (ULONG_PTR)v39;
    goto LABEL_96;
  }
LABEL_14:
  if ( (a4 & 4) != 0 && (unsigned __int16)*(_DWORD *)(v27 + 32) && (*(_DWORD *)(v27 + 16) & 0x400LL) == 0 )
  {
    v38 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v27 + 40) >> 43) & 0x3FFLL));
    MiChargeCommit(v38, 1uLL, 4);
  }
  v18 = (unsigned __int64 *)(a2 + 8);
  v19 = (unsigned int)v17 & 0xFFFFFFF0;
  v20 = 8;
  if ( a2 + 8 < a3 )
  {
    do
    {
      if ( ((unsigned __int16)v18 & 0xFFF) == 0 )
        break;
      v21 = *v18;
      if ( (*v18 & 1) == 0 && (*v18 & 0xC00) == 0x800 )
      {
        if ( qword_140E2D940 )
        {
          if ( (v21 & 0x10) != 0 )
            v21 &= ~0x10uLL;
          else
            v21 &= ~qword_140E2D940;
        }
        if ( ((v21 >> 12) & 0xFFFFFFF0) == v19 )
          break;
      }
      --v20;
    }
    while ( v20 );
  }
  v22 = MiDeleteTransitionPte(a2, v27);
  v6 = a5;
  if ( v22 == 3 && (a4 & 2) != 0 )
    ++*(_QWORD *)(a5 + 32);
  v5 = v40;
  ++*(_QWORD *)v6;
  if ( (*(_DWORD *)(v40 + 56) & 0xA0) != 0x80 || *(_QWORD *)(v40 + 32) )
  {
    if ( (a4 & 4) != 0 )
      *(_QWORD *)a2 = MiMakeGlobalSubsectionPte(BugCheckParameter2, a2);
    a2 += 8LL;
    if ( (*(_BYTE *)v6 & 0xF) != 0 )
      goto LABEL_29;
    v15 = (ULONG_PTR)v39;
    if ( (*v39 & 0xFFFFFFFFFFELL) == 0 && !KeShouldYieldProcessor() )
      goto LABEL_29;
    MiUnlockProtoPoolPage((ULONG_PTR)v39, v46, v23, v8);
LABEL_96:
    v46 = 17;
    goto LABEL_30;
  }
LABEL_81:
  v15 = (ULONG_PTR)v39;
LABEL_82:
  if ( v46 != 17 )
    MiUnlockProtoPoolPage(v15, v46, v23, v8);
  if ( v45 && (a4 & 2) == 0 )
    MiSubsectionProtosCreated(BugCheckParameter2, v41, 0LL, *(_QWORD *)v6 != 0LL);
  v35 = *(_QWORD *)(v6 + 16);
  if ( v35 )
    *(_QWORD *)(v6 + 32) += MiDeleteSubsectionLargePages(BugCheckParameter2, v35, *(_QWORD *)(v6 + 24), v8);
}
