/*
 * XREFs of MiDeleteSectionCluster @ 0x140229404
 * Callers:
 *     MiPurgeSubsection @ 0x1403400A0 (MiPurgeSubsection.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiIsPageOnBadList @ 0x14021E29C (MiIsPageOnBadList.c)
 *     MiTransferSoftwarePte @ 0x1402280C0 (MiTransferSoftwarePte.c)
 *     MiSetPfnIdentity @ 0x1402293B0 (MiSetPfnIdentity.c)
 *     MiTryLockLeafPage @ 0x14022A6FC (MiTryLockLeafPage.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiClearPfnReuseFields @ 0x1402C4CC0 (MiClearPfnReuseFields.c)
 *     MiClearPfnImageVerified @ 0x1402CC5F0 (MiClearPfnImageVerified.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     MiBadShareCount @ 0x140340DD8 (MiBadShareCount.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 *     MiDereferenceControlAreaPfnList @ 0x140419984 (MiDereferenceControlAreaPfnList.c)
 *     MiCreateInitialLargeLeafPfns @ 0x140443314 (MiCreateInitialLargeLeafPfns.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x14045DDAC (MiInitializeAllResidentPageBasePfns.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteSectionCluster(_WORD *a1, ULONG_PTR *a2, char a3)
{
  ULONG_PTR v3; // r14
  ULONG_PTR v4; // rdi
  ULONG_PTR v5; // r15
  __int64 v6; // r12
  unsigned __int64 v7; // rbx
  unsigned int v8; // esi
  unsigned int v9; // r9d
  ULONG_PTR v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned int v17; // edi
  ULONG_PTR v18; // r8
  __int64 v20; // rbx
  unsigned __int64 v21; // r8
  unsigned int v22; // ecx
  volatile signed __int64 *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r15
  unsigned __int64 v26; // rbx
  int v27; // eax
  ULONG_PTR v28; // rdi
  ULONG_PTR v29; // rcx
  __int64 v30; // rcx
  ULONG_PTR v31; // rcx
  unsigned __int64 v32; // rax
  ULONG_PTR v33; // rcx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rax
  volatile signed __int64 *v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // r15
  int BugCheckParameter4; // [rsp+20h] [rbp-50h]
  int v41; // [rsp+40h] [rbp-30h]
  int v42; // [rsp+40h] [rbp-30h]
  int v43; // [rsp+48h] [rbp-28h]
  int v44; // [rsp+4Ch] [rbp-24h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-20h] BYREF
  __int64 v46; // [rsp+58h] [rbp-18h]
  unsigned __int64 v47; // [rsp+60h] [rbp-10h]
  __int64 v48; // [rsp+68h] [rbp-8h]
  unsigned int v51; // [rsp+C8h] [rbp+58h]

  v44 = 1;
  v3 = -1LL;
  v43 = 0;
  v4 = 0LL;
  BugCheckParameter2 = 0LL;
  v5 = 0LL;
  v47 = 0LL;
  v6 = 0LL;
  v51 = 0;
  v7 = 0LL;
  v46 = 0LL;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    if ( v8 >= 0x10uLL )
      goto LABEL_20;
    if ( v8 )
      MiTryLockLeafPage(a2, 1LL, &BugCheckParameter2);
    else
      BugCheckParameter2 = MiLockLeafPage(a2, 0LL);
    v11 = *a2;
    v9 = 0;
    v4 = BugCheckParameter2;
    if ( !BugCheckParameter2 )
      break;
    ++v6;
    if ( (v11 & 1) != 0 )
    {
      v14 = ++v46;
      goto LABEL_21;
    }
    v12 = *a2;
    if ( qword_140E2D940 )
    {
      if ( (v11 & 0x10) != 0 )
        v12 = v11 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v12 = v11 & ~qword_140E2D940;
    }
    v13 = (v12 >> 12) & 0xFFFFFFFFFFLL;
    if ( v8 )
    {
      if ( v13 != v3 + v8 )
        goto LABEL_20;
    }
    else
    {
      if ( (v13 & 0xF) != 0 )
        goto LABEL_20;
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
      goto LABEL_20;
    }
    v4 = BugCheckParameter2;
    if ( MiIsPageOnBadList(BugCheckParameter2)
      || _bittest64((const signed __int64 *)(v4 + 40), 0x35u)
      || (unsigned int)MiGetPfnSlabType(v4) != 9
      || (((a3 & 1) == 0) & (*(_BYTE *)(v4 + 34) >> 4)) != 0 )
    {
      goto LABEL_20;
    }
    ++v46;
    MiUnlinkPageFromListEx(v4, 0);
    v24 = *(_QWORD *)(v4 + 16);
    v47 = v7 + 1;
    if ( (v24 & 0x400) != 0 )
    {
      v25 = v24;
      if ( qword_140E2D940 && (v24 & 0x10) == 0 )
        v25 = ~qword_140E2D940 & v24;
      ++v51;
      v5 = v25 >> 16;
      v26 = MiTransferSoftwarePte(*(_QWORD *)(v4 + 16), 0LL, 0LL, 0);
    }
    else
    {
      v26 = 0LL;
    }
    if ( ((*(_QWORD *)(v4 + 40) >> 60) & 7) == 3 )
      MiClearPfnImageVerified(v4, 12LL);
    v48 = *(_QWORD *)(v4 + 16);
    if ( (v48 & 0x400) == 0 )
    {
      if ( ((v48 & 4) != 0 || (v48 & 2) != 0) && v48 )
        MiReleasePageFileInfo(a1, v48, 1LL);
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
      v36 = *(_QWORD *)(v4 + 16);
      v4 = BugCheckParameter2;
      *(_QWORD *)(BugCheckParameter2 + 16) = v36 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    v27 = *(_DWORD *)(v4 + 32);
    v28 = BugCheckParameter2;
    v41 = v27;
    v29 = BugCheckParameter2;
    HIBYTE(v41) = HIBYTE(v27) & 0xF8;
    *(_DWORD *)(BugCheckParameter2 + 32) = v41;
    MiSetPfnIdentity(v29, 0);
    if ( !v43 )
    {
      v34 = *(_DWORD *)(v28 + 32);
      v28 = BugCheckParameter2;
      v44 = BYTE2(v34) >> 6;
      v43 = 1;
    }
    MiClearPfnReuseFields(v28);
    MiSetPfnModified(v30, 0LL);
    v9 = 0;
    v31 = BugCheckParameter2;
    v42 = *(_DWORD *)(v28 + 32);
    BYTE2(v42) = BYTE2(v42) & 0xF8 | 1;
    *(_DWORD *)(BugCheckParameter2 + 32) = v42;
    *(_QWORD *)(v31 + 8) = 0LL;
    v32 = *(_QWORD *)(v31 + 24) & 0xC000000000000000uLL;
    v33 = BugCheckParameter2;
    *(_QWORD *)(BugCheckParameter2 + 24) = v32;
    v4 = BugCheckParameter2;
    *(_QWORD *)(BugCheckParameter2 + 24) = *(_QWORD *)(v33 + 24) & 0xBFFFFFFFFFFFFFFFuLL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *a2++ = v26;
    v7 = v47;
    ++v8;
  }
  if ( v8 || (v11 & 0xC00) != 0 || !v11 )
  {
LABEL_20:
    v14 = v46;
LABEL_21:
    if ( v51 )
    {
      MiDereferenceControlAreaPfnList(*(_QWORD *)v5, v5, v51, 2LL);
      v9 = 0;
    }
    if ( v7 )
    {
      v15 = 0xFFFFFFFFFFLL;
      v16 = 48 * (*(_QWORD *)(48 * v3 - 0x21FFFFFFFFD8LL) & 0xFFFFFFFFFFLL);
      v17 = v9;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
      {
        do
        {
          if ( (++v17 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15) )
          {
            HvlNotifyLongSpinWait(v17);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v16 - 0x21FFFFFFFFE8LL) < 0 );
      }
      *(_QWORD *)(v16 - 0x220000000000LL + 24) = (*(_QWORD *)(v16 - 0x21FFFFFFFFE8LL) - v47) ^ ((*(_QWORD *)(v16 - 0x21FFFFFFFFE8LL)
                                                                                               - v47) ^ *(_QWORD *)(v16 - 0x21FFFFFFFFE8LL)) & 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v16 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
      v4 = BugCheckParameter2;
      v7 = v47;
    }
    if ( v8 == 16LL )
    {
      v20 = 48 * v3 - 0x220000000000LL;
      MiInitializeAllResidentPageBasePfns((_DWORD)a1, v3, 16, 2, v44, 1, 1);
      LOWORD(BugCheckParameter4) = *a1;
      MiCreateInitialLargeLeafPfns(v3, 16, 2, v44, BugCheckParameter4, 1);
      v21 = v47;
      v22 = 1;
      if ( v47 > 1 )
      {
        v23 = (volatile signed __int64 *)(v20 + 72);
        do
        {
          _InterlockedAnd64(v23, 0x7FFFFFFFFFFFFFFFuLL);
          ++v22;
          v23 += 6;
        }
        while ( v22 < v21 );
        v14 = v46;
      }
      MiInsertPageInFreeOrZeroedList(v3);
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      if ( v6 != v7 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        --v6;
      }
      v18 = 48 * v3 - 0x220000000000LL;
      BugCheckParameter2 = v18;
      if ( v6 )
      {
        v37 = (volatile signed __int64 *)(v18 + 24);
        v38 = 48 * v3 - 0x220000000000LL;
        v39 = v38;
        do
        {
          MiSetPfnContainingFrame(v18, 0LL);
          MiInsertPageInFreeOrZeroedList(v3);
          if ( v6 != 1 )
            v38 = v39;
          _InterlockedAnd64(v37, 0x7FFFFFFFFFFFFFFFuLL);
          v18 = v38 + 48;
          ++v3;
          BugCheckParameter2 = v18;
          v38 += 48LL;
          v37 += 6;
          v39 = v18;
          --v6;
        }
        while ( v6 );
        return v46;
      }
    }
    return v14;
  }
  if ( (a3 & 2) == 0 )
    KeBugCheckEx(0xDEu, 3uLL, v5, (ULONG_PTR)a2, *a2);
  return 0LL;
}
