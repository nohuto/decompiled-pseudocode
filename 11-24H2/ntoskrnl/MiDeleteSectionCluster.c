/*
 * XREFs of MiDeleteSectionCluster @ 0x1403A0124
 * Callers:
 *     MiPurgeSubsection @ 0x14023C9F0 (MiPurgeSubsection.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiBadShareCount @ 0x14023EE28 (MiBadShareCount.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiLockLeafPage @ 0x1402E8100 (MiLockLeafPage.c)
 *     MiTryLockLeafPage @ 0x14030245C (MiTryLockLeafPage.c)
 *     MiIsPageOnBadList @ 0x14030492C (MiIsPageOnBadList.c)
 *     MiClearPfnImageVerified @ 0x14036C0C0 (MiClearPfnImageVerified.c)
 *     MiDereferenceControlAreaPfnList @ 0x14036FF5C (MiDereferenceControlAreaPfnList.c)
 *     MiTransferSoftwarePte @ 0x14039F300 (MiTransferSoftwarePte.c)
 *     MiSetPfnIdentity @ 0x1403A00D0 (MiSetPfnIdentity.c)
 *     MiClearPfnReuseFields @ 0x1403A1D30 (MiClearPfnReuseFields.c)
 *     MiCreateInitialLargeLeafPfns @ 0x14043CFC8 (MiCreateInitialLargeLeafPfns.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x140459D90 (MiInitializeAllResidentPageBasePfns.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteSectionCluster(_WORD *a1, unsigned __int64 *a2, char a3)
{
  ULONG_PTR v3; // r14
  ULONG_PTR v4; // rdi
  __int64 v5; // r15
  __int64 v6; // r12
  unsigned __int64 v7; // rbx
  unsigned int v8; // esi
  unsigned int v9; // r9d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r15
  unsigned __int64 v16; // rbx
  int v17; // eax
  ULONG_PTR v18; // rdi
  ULONG_PTR v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  ULONG_PTR v24; // rcx
  unsigned __int64 v25; // rax
  ULONG_PTR v26; // rcx
  __int64 v27; // r13
  __int64 v28; // rbx
  unsigned int v29; // edi
  __int64 v30; // r8
  __int64 v32; // rbx
  unsigned __int64 v33; // r8
  unsigned int v34; // ecx
  volatile signed __int64 *v35; // rdx
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  volatile signed __int64 *v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // r15
  int BugCheckParameter4; // [rsp+20h] [rbp-50h]
  int v43; // [rsp+40h] [rbp-30h]
  int v44; // [rsp+40h] [rbp-30h]
  int v45; // [rsp+48h] [rbp-28h]
  int v46; // [rsp+4Ch] [rbp-24h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-20h] BYREF
  __int64 v48; // [rsp+58h] [rbp-18h]
  unsigned __int64 v49; // [rsp+60h] [rbp-10h]
  unsigned __int64 v50; // [rsp+68h] [rbp-8h]
  unsigned int v53; // [rsp+C8h] [rbp+58h]

  v46 = 1;
  v3 = -1LL;
  v45 = 0;
  v4 = 0LL;
  BugCheckParameter2 = 0LL;
  v5 = 0LL;
  v49 = 0LL;
  v6 = 0LL;
  v53 = 0;
  v7 = 0LL;
  v48 = 0LL;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    if ( v8 >= 0x10uLL )
      goto LABEL_40;
    if ( v8 )
      MiTryLockLeafPage(a2, 1, &BugCheckParameter2);
    else
      BugCheckParameter2 = MiLockLeafPage(a2, 0);
    v11 = *a2;
    v9 = 0;
    v4 = BugCheckParameter2;
    if ( !BugCheckParameter2 )
      break;
    ++v6;
    if ( (v11 & 1) != 0 )
    {
      v27 = ++v48;
      goto LABEL_41;
    }
    v12 = *a2;
    if ( qword_140E2DB80 )
    {
      if ( (v11 & 0x10) != 0 )
        v12 = v11 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v12 = v11 & ~qword_140E2DB80;
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
    if ( (unsigned __int64 *)(*(_QWORD *)(v4 + 8) | 0x8000000000000000uLL) != a2 )
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
    if ( MiIsPageOnBadList(BugCheckParameter2)
      || _bittest64((const signed __int64 *)(v4 + 40), 0x35u)
      || (unsigned int)MiGetPfnSlabType(v4) != 9
      || (((a3 & 1) == 0) & (*(_BYTE *)(v4 + 34) >> 4)) != 0 )
    {
      goto LABEL_40;
    }
    ++v48;
    MiUnlinkPageFromListEx(v4, 0);
    v14 = *(_QWORD *)(v4 + 16);
    v49 = v7 + 1;
    if ( (v14 & 0x400) != 0 )
    {
      v15 = v14;
      if ( qword_140E2DB80 && (v14 & 0x10) == 0 )
        v15 = ~qword_140E2DB80 & v14;
      ++v53;
      v5 = v15 >> 16;
      v16 = MiTransferSoftwarePte(*(_QWORD *)(v4 + 16), 0LL, 0, 0);
    }
    else
    {
      v16 = 0LL;
    }
    if ( ((*(_QWORD *)(v4 + 40) >> 60) & 7) == 3 )
      MiClearPfnImageVerified(v4, 12);
    v50 = *(_QWORD *)(v4 + 16);
    if ( (v50 & 0x400) == 0 )
    {
      if ( ((v50 & 4) != 0 || (v50 & 2) != 0) && v50 )
        MiReleasePageFileInfo((__int64)a1, v50, 1LL);
      v4 = BugCheckParameter2;
    }
    if ( (*(_DWORD *)(v4 + 16) & 4) != 0 )
    {
      v37 = *(_QWORD *)(v4 + 16);
      v4 = BugCheckParameter2;
      *(_QWORD *)(BugCheckParameter2 + 16) = v37 & 0xFFFFFFFFFFFFFFFBuLL;
    }
    if ( (*(_DWORD *)(v4 + 16) & 2) != 0 )
    {
      v38 = *(_QWORD *)(v4 + 16);
      v4 = BugCheckParameter2;
      *(_QWORD *)(BugCheckParameter2 + 16) = v38 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    v17 = *(_DWORD *)(v4 + 32);
    v18 = BugCheckParameter2;
    v43 = v17;
    v19 = BugCheckParameter2;
    HIBYTE(v43) = HIBYTE(v17) & 0xF8;
    *(_DWORD *)(BugCheckParameter2 + 32) = v43;
    MiSetPfnIdentity(v19, 0);
    if ( !v45 )
    {
      v36 = *(_DWORD *)(v18 + 32);
      v18 = BugCheckParameter2;
      v46 = BYTE2(v36) >> 6;
      v45 = 1;
    }
    MiClearPfnReuseFields(v18, v20, v21, v22);
    MiSetPfnModified(v23, 0);
    v9 = 0;
    v24 = BugCheckParameter2;
    v44 = *(_DWORD *)(v18 + 32);
    BYTE2(v44) = BYTE2(v44) & 0xF8 | 1;
    *(_DWORD *)(BugCheckParameter2 + 32) = v44;
    *(_QWORD *)(v24 + 8) = 0LL;
    v25 = *(_QWORD *)(v24 + 24) & 0xC000000000000000uLL;
    v26 = BugCheckParameter2;
    *(_QWORD *)(BugCheckParameter2 + 24) = v25;
    v4 = BugCheckParameter2;
    *(_QWORD *)(BugCheckParameter2 + 24) = *(_QWORD *)(v26 + 24) & 0xBFFFFFFFFFFFFFFFuLL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *a2++ = v16;
    v7 = v49;
    ++v8;
  }
  if ( v8 || (v11 & 0xC00) != 0 || !v11 )
  {
LABEL_40:
    v27 = v48;
LABEL_41:
    if ( v53 )
    {
      MiDereferenceControlAreaPfnList(*(_QWORD *)v5, v5, v53, 2);
      v9 = 0;
    }
    if ( v7 )
    {
      v28 = 48 * (*(_QWORD *)(48 * v3 - 0x21FFFFFFFFD8LL) & 0xFFFFFFFFFFLL);
      v29 = v9;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
      {
        do
        {
          if ( (++v29 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v29);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v28 - 0x21FFFFFFFFE8LL) < 0 );
      }
      *(_QWORD *)(v28 - 0x220000000000LL + 24) = (*(_QWORD *)(v28 - 0x21FFFFFFFFE8LL) - v49) ^ ((*(_QWORD *)(v28 - 0x21FFFFFFFFE8LL)
                                                                                               - v49) ^ *(_QWORD *)(v28 - 0x21FFFFFFFFE8LL)) & 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v28 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
      v4 = BugCheckParameter2;
      v7 = v49;
    }
    if ( v8 == 16LL )
    {
      v32 = 48 * v3 - 0x220000000000LL;
      MiInitializeAllResidentPageBasePfns((_DWORD)a1, v3, 16, 2, v46, 1, 1);
      LOWORD(BugCheckParameter4) = *a1;
      MiCreateInitialLargeLeafPfns(v3, 16, 2, v46, BugCheckParameter4, 1);
      v33 = v49;
      v34 = 1;
      if ( v49 > 1 )
      {
        v35 = (volatile signed __int64 *)(v32 + 72);
        do
        {
          _InterlockedAnd64(v35, 0x7FFFFFFFFFFFFFFFuLL);
          ++v34;
          v35 += 6;
        }
        while ( v34 < v33 );
        v27 = v48;
      }
      MiInsertPageInFreeOrZeroedList(v3, 2LL);
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      if ( v6 != v7 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        --v6;
      }
      v30 = 48 * v3 - 0x220000000000LL;
      BugCheckParameter2 = v30;
      if ( v6 )
      {
        v39 = (volatile signed __int64 *)(v30 + 24);
        v40 = 48 * v3 - 0x220000000000LL;
        v41 = v40;
        do
        {
          MiSetPfnContainingFrame(v30, 0LL);
          MiInsertPageInFreeOrZeroedList(v3, 2LL);
          if ( v6 != 1 )
            v40 = v41;
          _InterlockedAnd64(v39, 0x7FFFFFFFFFFFFFFFuLL);
          v30 = v40 + 48;
          ++v3;
          BugCheckParameter2 = v30;
          v40 += 48LL;
          v39 += 6;
          v41 = v30;
          --v6;
        }
        while ( v6 );
        return v48;
      }
    }
    return v27;
  }
  if ( (a3 & 2) == 0 )
    KeBugCheckEx(0xDEu, 3uLL, v5, (ULONG_PTR)a2, *a2);
  return 0LL;
}
