/*
 * XREFs of MiDeleteSectionCluster @ 0x140216B54
 * Callers:
 *     MiPurgeSubsection @ 0x140204780 (MiPurgeSubsection.c)
 * Callees:
 *     MiBadShareCount @ 0x140206F78 (MiBadShareCount.c)
 *     MiTransferSoftwarePte @ 0x140215AA0 (MiTransferSoftwarePte.c)
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiClearPfnReuseFields @ 0x140218960 (MiClearPfnReuseFields.c)
 *     MiDereferenceControlAreaPfnList @ 0x14021DC9C (MiDereferenceControlAreaPfnList.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiClearPfnImageVerified @ 0x1402EAB40 (MiClearPfnImageVerified.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiIsPageOnBadList @ 0x14030E80C (MiIsPageOnBadList.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiTryLockLeafPage @ 0x1403460BC (MiTryLockLeafPage.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 *     MiCreateInitialLargeLeafPfns @ 0x140431268 (MiCreateInitialLargeLeafPfns.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x14044F1DC (MiInitializeAllResidentPageBasePfns.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteSectionCluster(_WORD *a1, ULONG_PTR *a2, __int64 a3)
{
  ULONG_PTR v3; // r14
  ULONG_PTR v4; // rdi
  ULONG_PTR v5; // r15
  __int64 v6; // r12
  unsigned __int64 v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // r9
  ULONG_PTR v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r15
  unsigned __int64 v16; // rbx
  int v17; // eax
  ULONG_PTR v18; // rdi
  ULONG_PTR v19; // rcx
  __int64 v20; // rcx
  ULONG_PTR v21; // rcx
  unsigned __int64 v22; // rax
  ULONG_PTR v23; // rcx
  __int64 v24; // r13
  __int64 v25; // rcx
  __int64 v26; // rbx
  unsigned int v27; // edi
  ULONG_PTR v28; // r8
  __int64 v30; // rbx
  unsigned __int64 v31; // r8
  unsigned int v32; // ecx
  volatile signed __int64 *v33; // rdx
  int v34; // eax
  __int64 v35; // rax
  char v36; // al
  __int64 v37; // rax
  volatile signed __int64 *v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // r15
  int BugCheckParameter4; // [rsp+20h] [rbp-50h]
  int v42; // [rsp+40h] [rbp-30h]
  int v43; // [rsp+40h] [rbp-30h]
  int v44; // [rsp+48h] [rbp-28h]
  int v45; // [rsp+4Ch] [rbp-24h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-20h] BYREF
  __int64 v47; // [rsp+58h] [rbp-18h]
  unsigned __int64 v48; // [rsp+60h] [rbp-10h]
  __int64 v49; // [rsp+68h] [rbp-8h]
  char v51; // [rsp+C0h] [rbp+50h]
  unsigned int v52; // [rsp+C8h] [rbp+58h]

  v51 = a3;
  v45 = 1;
  v3 = -1LL;
  v44 = 0;
  v4 = 0LL;
  BugCheckParameter2 = 0LL;
  v5 = 0LL;
  v48 = 0LL;
  v6 = 0LL;
  v52 = 0;
  v7 = 0LL;
  v47 = 0LL;
  v8 = 0;
  v9 = 0LL;
  while ( 1 )
  {
    if ( v8 >= 0x10uLL )
      goto LABEL_40;
    if ( v8 )
      MiTryLockLeafPage(a2, 1LL, &BugCheckParameter2, 0LL);
    else
      BugCheckParameter2 = MiLockLeafPage(a2, 0LL, a3, 0LL);
    v11 = *a2;
    v9 = 0LL;
    v4 = BugCheckParameter2;
    if ( !BugCheckParameter2 )
      break;
    ++v6;
    if ( (v11 & 1) != 0 )
    {
      v24 = ++v47;
      goto LABEL_41;
    }
    v12 = *a2;
    if ( qword_140E2DCC0 )
    {
      if ( (v11 & 0x10) != 0 )
        v12 = v11 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v12 = v11 & ~qword_140E2DCC0;
    }
    v13 = (v12 >> 12) & 0xFFFFFFFFFFLL;
    if ( v8 )
    {
      if ( v13 != v3 + v8 )
        goto LABEL_40;
    }
    else
    {
      if ( (v13 & 0xF) != 0 )
        goto LABEL_40;
      v3 = v13;
      v4 = BugCheckParameter2;
    }
    if ( (ULONG_PTR *)(*(_QWORD *)(v4 + 8) | 0x8000000000000000uLL) != a2 )
      KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)a2, *a2, *(_QWORD *)(BugCheckParameter2 + 8));
    if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 6 )
      MiBadShareCount(BugCheckParameter2);
    if ( (unsigned __int16)*(_DWORD *)(BugCheckParameter2 + 32)
      || (*(_DWORD *)(BugCheckParameter2 + 32) & 0x40000000) != 0 )
    {
      v4 = BugCheckParameter2;
      goto LABEL_40;
    }
    v4 = BugCheckParameter2;
    if ( (unsigned int)MiIsPageOnBadList(BugCheckParameter2)
      || _bittest64((const signed __int64 *)(v4 + 40), 0x35u)
      || (unsigned int)MiGetPfnSlabType(v4) != 9
      || (((v51 & 1) == 0) & (*(_BYTE *)(v4 + 34) >> 4)) != 0 )
    {
      goto LABEL_40;
    }
    ++v47;
    MiUnlinkPageFromListEx(v4);
    v14 = *(_QWORD *)(v4 + 16);
    v48 = v7 + 1;
    if ( (v14 & 0x400) != 0 )
    {
      v15 = v14;
      if ( qword_140E2DCC0 && (v14 & 0x10) == 0 )
        v15 = ~qword_140E2DCC0 & v14;
      ++v52;
      v5 = v15 >> 16;
      v16 = MiTransferSoftwarePte(*(_QWORD *)(v4 + 16), 0LL, 0, 0);
    }
    else
    {
      v16 = 0LL;
    }
    if ( ((*(_QWORD *)(v4 + 40) >> 60) & 7) == 3 )
      MiClearPfnImageVerified(v4, 12LL);
    v49 = *(_QWORD *)(v4 + 16);
    if ( (v49 & 0x400) == 0 )
    {
      if ( ((v49 & 4) != 0 || (v49 & 2) != 0) && v49 )
        MiReleasePageFileInfo(a1, v49, 1LL);
      v4 = BugCheckParameter2;
    }
    if ( (*(_DWORD *)(v4 + 16) & 4) != 0 )
    {
      v35 = *(_QWORD *)(v4 + 16);
      v4 = BugCheckParameter2;
      *(_QWORD *)(BugCheckParameter2 + 16) = v35 & 0xFFFFFFFFFFFFFFFBuLL;
    }
    if ( (*(_DWORD *)(v4 + 16) & 2) != 0 )
    {
      v37 = *(_QWORD *)(v4 + 16);
      v4 = BugCheckParameter2;
      *(_QWORD *)(BugCheckParameter2 + 16) = v37 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    v17 = *(_DWORD *)(v4 + 32);
    v18 = BugCheckParameter2;
    v42 = v17;
    v19 = BugCheckParameter2;
    HIBYTE(v42) = HIBYTE(v17) & 0xF8;
    *(_DWORD *)(BugCheckParameter2 + 32) = v42;
    MiSetPfnIdentity(v19, 0);
    if ( !v44 )
    {
      v34 = *(_DWORD *)(v18 + 32);
      v18 = BugCheckParameter2;
      v45 = BYTE2(v34) >> 6;
      v44 = 1;
    }
    MiClearPfnReuseFields(v18);
    MiSetPfnModified(v20, 0);
    v9 = 0LL;
    v21 = BugCheckParameter2;
    v43 = *(_DWORD *)(v18 + 32);
    BYTE2(v43) = BYTE2(v43) & 0xF8 | 1;
    *(_DWORD *)(BugCheckParameter2 + 32) = v43;
    *(_QWORD *)(v21 + 8) = 0LL;
    v22 = *(_QWORD *)(v21 + 24) & 0xC000000000000000uLL;
    v23 = BugCheckParameter2;
    *(_QWORD *)(BugCheckParameter2 + 24) = v22;
    v4 = BugCheckParameter2;
    *(_QWORD *)(BugCheckParameter2 + 24) = *(_QWORD *)(v23 + 24) & 0xBFFFFFFFFFFFFFFFuLL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *a2++ = v16;
    v7 = v48;
    ++v8;
  }
  if ( v8 || (v11 & 0xC00) != 0 || !v11 )
  {
LABEL_40:
    v24 = v47;
LABEL_41:
    if ( v52 )
    {
      MiDereferenceControlAreaPfnList(*(_QWORD *)v5, v5, v52, 2LL);
      v9 = 0LL;
    }
    if ( v7 )
    {
      v25 = 0xFFFFFFFFFFLL;
      v26 = 48 * (*(_QWORD *)(48 * v3 - 0x21FFFFFFFFD8LL) & 0xFFFFFFFFFFLL);
      v27 = v9;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
      {
        do
        {
          if ( (++v27 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (v36 = KiCheckVpBackingLongSpinWaitHypercall(v25, 0xFFFFDE0000000018uLL, a3, v9), v9 = 0LL, v36) )
          {
            HvlNotifyLongSpinWait(v27);
            v9 = 0LL;
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v26 - 0x21FFFFFFFFE8LL) < 0 );
      }
      *(_QWORD *)(v26 - 0x220000000000LL + 24) = (*(_QWORD *)(v26 - 0x21FFFFFFFFE8LL) - v48) ^ ((*(_QWORD *)(v26 - 0x21FFFFFFFFE8LL)
                                                                                               - v48) ^ *(_QWORD *)(v26 - 0x21FFFFFFFFE8LL)) & 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v26 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
      v4 = BugCheckParameter2;
      v7 = v48;
    }
    if ( v8 == 16LL )
    {
      v30 = 48 * v3 - 0x220000000000LL;
      MiInitializeAllResidentPageBasePfns((_DWORD)a1, v3, 16, 2, v45, 1, 1);
      LOWORD(BugCheckParameter4) = *a1;
      MiCreateInitialLargeLeafPfns(v3, 16, 2, v45, BugCheckParameter4, 1);
      v31 = v48;
      v32 = 1;
      if ( v48 > 1 )
      {
        v33 = (volatile signed __int64 *)(v30 + 72);
        do
        {
          _InterlockedAnd64(v33, 0x7FFFFFFFFFFFFFFFuLL);
          ++v32;
          v33 += 6;
        }
        while ( v32 < v31 );
        v24 = v47;
      }
      MiInsertPageInFreeOrZeroedList(v3);
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      if ( v6 != v7 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        --v6;
      }
      v28 = 48 * v3 - 0x220000000000LL;
      BugCheckParameter2 = v28;
      if ( v6 )
      {
        v38 = (volatile signed __int64 *)(v28 + 24);
        v39 = 48 * v3 - 0x220000000000LL;
        v40 = v39;
        do
        {
          MiSetPfnContainingFrame(v28, 0LL);
          MiInsertPageInFreeOrZeroedList(v3);
          if ( v6 != 1 )
            v39 = v40;
          _InterlockedAnd64(v38, 0x7FFFFFFFFFFFFFFFuLL);
          v28 = v39 + 48;
          ++v3;
          BugCheckParameter2 = v28;
          v39 += 48LL;
          v38 += 6;
          v40 = v28;
          --v6;
        }
        while ( v6 );
        return v47;
      }
    }
    return v24;
  }
  if ( (v51 & 2) == 0 )
    KeBugCheckEx(0xDEu, 3uLL, v5, (ULONG_PTR)a2, *a2);
  return 0LL;
}
