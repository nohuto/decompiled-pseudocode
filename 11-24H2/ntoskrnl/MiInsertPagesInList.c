/*
 * XREFs of MiInsertPagesInList @ 0x140271500
 * Callers:
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 *     MiInsertProtectedStandbyPage @ 0x1402F09B0 (MiInsertProtectedStandbyPage.c)
 *     MmUnmapViewInSystemCache @ 0x1402F1760 (MmUnmapViewInSystemCache.c)
 *     MiUnlockMdlWritePages @ 0x1402F1FF0 (MiUnlockMdlWritePages.c)
 *     MiAddPageToInsertList @ 0x1402F2180 (MiAddPageToInsertList.c)
 *     MiEnqueuePageList @ 0x1402F2770 (MiEnqueuePageList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiSynchronizeFastPageInsert @ 0x14022D9F0 (MiSynchronizeFastPageInsert.c)
 *     MiIsDecayPfn @ 0x14022EFD0 (MiIsDecayPfn.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiSharedInsertPfnChainInList @ 0x14026FCE0 (MiSharedInsertPfnChainInList.c)
 *     MiUpdateLargePageCandidateValue @ 0x140272210 (MiUpdateLargePageCandidateValue.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     MiSignalCommitSignals @ 0x14028F200 (MiSignalCommitSignals.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiSufficientAvailablePages @ 0x1402AA420 (MiSufficientAvailablePages.c)
 *     MiWakeModifiedPageWriter @ 0x1402D0460 (MiWakeModifiedPageWriter.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x1402D1890 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1402D19B0 (MiUpdateAvailableEventsAtDpc.c)
 *     MiExclusiveInsertPfnChainInList @ 0x1403EF1A0 (MiExclusiveInsertPfnChainInList.c)
 *     MiRebuildStandbyLookasideList @ 0x1403F43F0 (MiRebuildStandbyLookasideList.c)
 *     MiRestockOverCommit @ 0x14043A6C0 (MiRestockOverCommit.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MiInsertPagesInList(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v2; // r12
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // r8
  unsigned __int64 v6; // rbx
  int v7; // r11d
  __int64 v8; // rax
  __int64 v9; // r10
  char v10; // r15
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // ecx
  char v14; // r15
  int v15; // esi
  unsigned __int64 v16; // rdx
  int v17; // r13d
  int v18; // eax
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r14
  int v21; // edx
  _QWORD *v22; // r13
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r14
  __int64 v25; // r11
  __int64 v26; // r11
  __int64 v27; // rsi
  unsigned __int64 v28; // rax
  ULONG_PTR v29; // rcx
  __int64 *v30; // r10
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // esi
  unsigned int v35; // r13d
  __int64 v36; // r12
  __int64 v37; // r14
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // r15
  char v43; // r8
  int v44; // ebx
  __int64 v45; // rax
  int v46; // edx
  __int64 v47; // rcx
  volatile signed __int32 *v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // r14
  __int64 v51; // rsi
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 i; // r8
  signed __int32 v54; // eax
  unsigned __int64 v55; // r9
  struct _KPRCB *v56; // r8
  signed __int32 CachedResidentAvailable; // edx
  bool v58; // zf
  signed __int32 v59; // eax
  char v60; // r9d^2
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // r14
  unsigned __int64 v63; // rax
  __int64 v64; // rsi
  unsigned __int64 v65; // rbx
  unsigned __int64 v66; // rax
  unsigned int PfnPriority; // eax
  __int64 v68; // r10
  __int64 v69; // r14
  volatile LONG *v70; // rcx
  KIRQL v71; // r13
  __int64 v72; // rdi
  __int64 v73; // rdi
  __int64 v74; // rdi
  int v75; // ecx
  __int64 v76; // rax
  volatile LONG *v77; // rsi
  struct _KEVENT *v78; // rdi
  signed __int32 v79[6]; // [rsp+8h] [rbp-100h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  __int64 v81; // [rsp+38h] [rbp-D0h]
  __int64 v82; // [rsp+40h] [rbp-C8h]
  int v83; // [rsp+48h] [rbp-C0h]
  int v84; // [rsp+4Ch] [rbp-BCh]
  unsigned int v85; // [rsp+50h] [rbp-B8h]
  unsigned int v86; // [rsp+54h] [rbp-B4h]
  unsigned __int64 v87; // [rsp+58h] [rbp-B0h]
  __int64 v88; // [rsp+60h] [rbp-A8h]
  unsigned __int64 *v89; // [rsp+68h] [rbp-A0h]
  __int64 v90; // [rsp+70h] [rbp-98h]
  __int64 v91; // [rsp+78h] [rbp-90h]
  __int64 v92; // [rsp+80h] [rbp-88h]
  unsigned __int64 v93; // [rsp+88h] [rbp-80h]
  __int128 v94; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v95; // [rsp+B8h] [rbp-50h]
  __int128 v96; // [rsp+C8h] [rbp-40h]
  __int128 v97; // [rsp+D8h] [rbp-30h]
  __int128 v98; // [rsp+E8h] [rbp-20h]
  __int128 v99; // [rsp+F8h] [rbp-10h]
  __int64 v100; // [rsp+108h] [rbp+0h]
  __int64 retaddr; // [rsp+150h] [rbp+48h]

  v2 = *a1;
  result = 0LL;
  LODWORD(v88) = a2;
  v89 = a1;
  v4 = (__int64)a1;
  v100 = 0LL;
  v93 = v2;
  v94 = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  if ( !v2 )
    return result;
  v91 = a1[11];
  v5 = 48 * a1[2];
  v6 = v5 - 0x220000000000LL;
  v7 = 5;
  v8 = (*(_QWORD *)(v5 - 0x220000000000LL + 40) >> 43) & 0x3FFLL;
  LODWORD(v81) = *(_DWORD *)(v5 - 0x220000000000LL + 32);
  v9 = *((_QWORD *)qword_140E2FF88 + v8);
  LODWORD(v8) = HIBYTE(*(_DWORD *)(v5 - 0x220000000000LL + 32));
  v82 = v9;
  if ( (v8 & 8) != 0
    && (v6 < 0xFFFFDE0000000000uLL
     || v6 >= 48 * qword_140E2DBE0 - 0x21FFFFFFFFD0LL
     || MiIsDecayPfn(0xAAAAAAAAAAAAAAABuLL * (v5 >> 4))
     || (v60 & 7) != 6 && (unsigned int)MiGetPfnSlabType(v6) == 9) )
  {
    v86 = v7;
  }
  else
  {
    v86 = BYTE3(v81) & 7;
  }
  v10 = *(_BYTE *)(v6 + 34);
  v11 = v9 + 19392;
  v12 = 1LL;
  v13 = _bittest64((const signed __int64 *)(v6 + 40), 0x35u);
  v83 = v13;
  v14 = v10 & 0x10;
  if ( !v14 )
    v11 = v9 + 3136;
  v15 = 4;
  v90 = v11;
  if ( v13 )
  {
    LODWORD(v81) = 0;
    v18 = 0;
    if ( !v14 )
      v18 = 4;
LABEL_99:
    v21 = *(_DWORD *)(v4 + 96);
    v17 = v18;
    v84 = v21;
    if ( !v14 && v13 )
      goto LABEL_17;
    goto LABEL_15;
  }
  _InterlockedOr(v79, 0);
  v16 = (unsigned int)KiTbFlushTimeStamp;
  v17 = 0;
  LODWORD(v81) = KiTbFlushTimeStamp;
  if ( !v14 )
    v17 = 4;
  v18 = v17;
  if ( v14 )
    goto LABEL_99;
  if ( v2 == 1 )
  {
    v19 = _InterlockedIncrement64((volatile signed __int64 *)(v9 + 18688));
    if ( v19 > 0x420 )
      goto LABEL_12;
    switch ( v19 )
    {
      case 0xA0uLL:
        v76 = 16232LL;
        break;
      case 0x420uLL:
        v76 = 16264LL;
        break;
      case 0x22uLL:
        v76 = 16200LL;
        break;
      case 0x120uLL:
        MiSlabDemotionLowMemoryConditionUpdate(v9, 1LL, 1LL);
LABEL_164:
        v9 = v82;
LABEL_12:
        v20 = v19 - 1;
        if ( v20 == *(_QWORD *)(v9 + 16640) || v20 == *(_QWORD *)(v9 + 16648) )
          MiUpdateAvailableEventsAtDpc(v9, v16, v12);
        v21 = *(_DWORD *)(v4 + 96);
        v84 = v21;
        goto LABEL_15;
      default:
        goto LABEL_12;
    }
    v77 = (volatile LONG *)(v9 + 16192);
    v78 = (struct _KEVENT *)(v9 + v76);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 16192));
    KeSetEvent(v78, 0, 0);
    ++v78[1].Header.LockNV;
    ExReleaseSpinLockExclusiveFromDpcLevel(v77);
    v4 = (__int64)v89;
    goto LABEL_164;
  }
  v61 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 18688), v2);
  v62 = v2 + v61;
  v87 = v61;
  if ( v61 < 0x420 )
  {
    if ( v62 < 0x420 )
      v15 = 0;
    if ( v61 < 0xA0 )
    {
      v75 = v15 | 2;
      if ( v62 < 0xA0 )
        v75 = v15;
      v15 = v75;
      if ( v61 < 0x22 && v62 >= 0x22 )
        v15 = v75 | 1;
    }
    else if ( v61 >= 0x120 )
    {
LABEL_147:
      if ( v15 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 16192));
        if ( (v15 & 1) != 0 )
        {
          v72 = v82;
          KeSetEvent((PRKEVENT)(v82 + 16200), 0, 0);
          ++*(_DWORD *)(v72 + 16224);
        }
        if ( (v15 & 2) != 0 )
        {
          v73 = v82;
          KeSetEvent((PRKEVENT)(v82 + 16232), 0, 0);
          ++*(_DWORD *)(v73 + 16256);
        }
        if ( (v15 & 4) != 0 )
        {
          v74 = v82;
          KeSetEvent((PRKEVENT)(v82 + 16264), 0, 0);
          ++*(_DWORD *)(v74 + 16288);
        }
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v82 + 16192));
        v9 = v82;
        v4 = (__int64)v89;
      }
      goto LABEL_103;
    }
    if ( v62 >= 0x120 )
    {
      MiSlabDemotionLowMemoryConditionUpdate(v9, 1LL, 1LL);
      v9 = v82;
    }
    goto LABEL_147;
  }
LABEL_103:
  v63 = *(_QWORD *)(v9 + 16648);
  if ( v87 > v63 || v62 <= v63 )
  {
    v16 = *(_QWORD *)(v9 + 16640);
    v18 = v17;
    if ( v87 > v16 || v62 <= v16 )
    {
      v13 = v83;
      goto LABEL_99;
    }
  }
  MiUpdateAvailableEventsAtDpc(v9, v16, v12);
  v21 = *(_DWORD *)(v4 + 96);
  v84 = v21;
LABEL_15:
  v9 = v82;
  if ( *(__int64 *)(v6 + 40) >= 0 )
    _InterlockedAdd64((volatile signed __int64 *)(v82 + 16320), v2);
  else
    _InterlockedAdd64((volatile signed __int64 *)(v82 + 7232), v2);
LABEL_17:
  if ( v17 )
    v85 = 0;
  else
    v85 = *(_DWORD *)(*(_QWORD *)(v9 + 17600) + 24LL);
  if ( !v21 )
  {
    v6 = 48LL * *(_QWORD *)(v4 + 16) - 0x220000000000LL;
    v22 = (_QWORD *)v6;
    v23 = 0LL;
    v24 = 0LL;
    v25 = *(_QWORD *)(v6 + 40);
    v92 = *(_QWORD *)(v6 + 16) >> 5;
    v26 = v25 & 0xFFFFFFFFFFLL;
    while ( 1 )
    {
      if ( v24 >= v2 )
      {
LABEL_30:
        *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
        *(_QWORD *)(((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
        goto LABEL_31;
      }
      v27 = ((unsigned int)v22[1] >> 3) & 0x1FF;
      if ( !v24 || (v22[5] & 0xFFFFFFFFFFLL) == v26 )
      {
        if ( v23 )
          goto LABEL_25;
      }
      else
      {
        *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
        *(_QWORD *)(((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
      }
      v87 = v22[5] & 0xFFFFFFFFFFLL;
      v28 = MiMapPageInHyperSpaceWorker(v87, 0LL, 0x80000000LL);
      v26 = v87;
      v23 = v28;
LABEL_25:
      v29 = *(_QWORD *)(v23 + 8 * v27);
      v30 = (__int64 *)(v23 + 8 * v27);
      v31 = (v29 >> 12) & 0xFFFFFFFFFFLL;
      if ( (_QWORD *)(48 * v31 - 0x220000000000LL) != v22 )
        KeBugCheckEx(0x4Eu, 6uLL, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v22 + 0x44000000000LL) >> 4), (ULONG_PTR)v30, v29);
      v32 = 32 * ((v31 << 7) | v92 & 0x1F | 0x40);
      if ( qword_140E2DB80 )
      {
        if ( (v32 & qword_140E2DB80) != 0 )
          v32 |= 0x10uLL;
        else
          v32 |= qword_140E2DB80;
      }
      *v30 = v32;
      if ( ++v24 == v2 )
        goto LABEL_30;
      v22 = (_QWORD *)(48 * (*v22 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    }
  }
  if ( v21 != 1 )
    goto LABEL_31;
  v51 = v2;
  if ( !*(_QWORD *)(v9 + 16904) )
    goto LABEL_73;
  v69 = v9 + 16888;
  v70 = (volatile LONG *)(v9 + 16888);
  if ( KeGetCurrentIrql() == 2 )
  {
    v71 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v70);
  }
  else
  {
    v71 = ExAcquireSpinLockExclusive(v70);
  }
  v51 = MiRestockOverCommit(v82, v2);
  MiReleaseSpinLockExclusive(v69, v71);
  if ( v51 )
  {
    v9 = v82;
LABEL_73:
    if ( (ULONG *)v9 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
      for ( i = CurrentPrcb->CachedCommit; (unsigned __int64)(i + v51) <= 0x100; i = v54 )
      {
        v54 = _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedCommit, i + v51, i);
        if ( v54 == i )
        {
          v55 = v2;
          goto LABEL_80;
        }
      }
    }
    _InterlockedAdd64((volatile signed __int64 *)(v9 + 19328), -v51);
    MiSignalCommitSignals(v9, _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 19264), -v51) - v51);
  }
  v9 = v82;
  v55 = v2;
  if ( (ULONG *)v82 != &MiSystemPartition )
  {
LABEL_110:
    _InterlockedAdd64((volatile signed __int64 *)(v9 + 18752), v55);
    goto LABEL_31;
  }
LABEL_80:
  v56 = KeGetCurrentPrcb();
  CachedResidentAvailable = v56->CachedResidentAvailable;
  if ( CachedResidentAvailable == -1 )
  {
    _InterlockedAdd64((volatile signed __int64 *)(v9 + 18752), v2);
  }
  else
  {
    do
    {
      if ( v2 + CachedResidentAvailable > 0x100 || v2 >= 0x80000 )
        break;
      v59 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&v56->CachedResidentAvailable,
              CachedResidentAvailable + v2,
              CachedResidentAvailable);
      v58 = CachedResidentAvailable == v59;
      CachedResidentAvailable = v59;
      if ( v58 )
        goto LABEL_31;
    }
    while ( v59 != -1 );
    if ( CachedResidentAvailable > 192
      && CachedResidentAvailable == _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&v56->CachedResidentAvailable,
                                      192,
                                      CachedResidentAvailable) )
    {
      v55 = v2 + CachedResidentAvailable - 192;
    }
    if ( v55 )
      goto LABEL_110;
  }
LABEL_31:
  v33 = *(_QWORD *)(v4 + 16);
  v34 = v83;
  v35 = v85;
  if ( v33 != 0x3FFFFFFFFFLL )
  {
    v36 = v82;
    v37 = (unsigned int)v81;
    do
    {
      v6 = 48 * v33 - 0x220000000000LL;
      v38 = *(_QWORD *)v6 & 0xFFFFFFFFFFLL;
      if ( !v34 )
      {
        v39 = (v37 << 59) ^ *(_QWORD *)(v6 + 24);
        BugCheckParameter4 = 0LL;
        *(_QWORD *)(v6 + 24) = (v37 << 59) ^ v39 & 0xC7FFFFFFFFFFFFFFuLL;
        MiUpdateLargePageCandidateValue(v36, v33, 3LL);
      }
      LODWORD(v81) = *(_DWORD *)(v6 + 32);
      if ( v14 )
      {
        BYTE2(v81) = BYTE2(v81) & 0xF8 | 3;
        *(_DWORD *)(v6 + 32) = v81;
        *(_BYTE *)(v6 + 36) ^= (v35 ^ *(_BYTE *)(v6 + 36)) & 0xF;
      }
      else
      {
        BYTE2(v81) = BYTE2(v81) & 0xF8 | 2;
        *(_DWORD *)(v6 + 32) = v81;
      }
      v33 = v38;
    }
    while ( v38 != 0x3FFFFFFFFFLL );
    v2 = v93;
    v4 = (__int64)v89;
  }
  if ( !v14 )
  {
    if ( v34 )
    {
      v42 = v90;
      v43 = 0;
      goto LABEL_46;
    }
    v40 = v86;
    v41 = v91;
    if ( v91 )
      v40 = 5LL;
    v42 = 88 * v40 + v82 + 3264;
    MiSynchronizeFastPageInsert(v82, v42, v6, 9, v91, &v94);
    if ( (_BYTE)v94 )
      goto LABEL_44;
    if ( v41 )
    {
      if ( (*(_DWORD *)(v41 + 32) & 0x8000000) == 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v42 + 32));
        *(_QWORD *)(v4 + 88) = 0LL;
        PfnPriority = MiGetPfnPriority(48LL * *(_QWORD *)(v4 + 16) - 0x220000000000LL);
        v82 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v68 + 40) >> 43) & 0x3FFLL));
        v42 = 88LL * PfnPriority + v82 + 3264;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v42 + 32));
        MiExclusiveInsertPfnChainInList(v4, v42);
        goto LABEL_45;
      }
    }
    else if ( BYTE2(v94) != 3 )
    {
      MiRebuildStandbyLookasideList(v6, BYTE2(v94), BYTE1(v94));
      MiExclusiveInsertPfnChainInList(v4, v42);
      goto LABEL_45;
    }
LABEL_70:
    MiExclusiveInsertPfnChainInList(v4, v42);
    goto LABEL_45;
  }
  v50 = v82;
  _InterlockedAdd64((volatile signed __int64 *)(v82 + 19392), v2);
  _InterlockedAdd((volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[2].AvailableCpuState, v2);
  v42 = v50 + 88 * (v35 + 64LL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v42 + 32));
  if ( !(_BYTE)v94 )
    goto LABEL_70;
LABEL_44:
  MiSharedInsertPfnChainInList(v4, &v94);
LABEL_45:
  _InterlockedAdd64((volatile signed __int64 *)v42, v2);
  v43 = 1;
LABEL_46:
  v44 = v84;
  if ( v84 != 3 )
  {
    v45 = *(_QWORD *)(v4 + 16);
    v46 = v88;
    while ( 1 )
    {
      v47 = 48 * v45 - 0x220000000000LL;
      v45 = *(_QWORD *)v47 & 0xFFFFFFFFFFLL;
      if ( !v46 && v2 == 1 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !--v2 )
        goto LABEL_51;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
LABEL_51:
  if ( v43 )
  {
    if ( (_BYTE)v94 )
    {
      if ( BYTE8(v95) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v95 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        BYTE8(v95) = 0;
      }
      if ( (_BYTE)v97 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v96 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v97) = 0;
      }
      if ( BYTE8(v98) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v98 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        BYTE8(v98) = 0;
      }
      if ( (_BYTE)v100 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v99 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v100) = 0;
      }
      v48 = (volatile signed __int32 *)(v42 + 32);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd(v48, 0xBFFFFFFF);
        _InterlockedDecrement(v48);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v48, retaddr);
      }
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v42 + 32));
      if ( v44 != 3 )
      {
        v64 = v82;
        if ( !(unsigned int)MiSufficientAvailablePages(v82, 1056LL) )
        {
          v65 = *(_QWORD *)(v64 + 19616);
          if ( v65 >= 0x10 )
            MiWakeModifiedPageWriter(v64, -1LL);
          v66 = *(_QWORD *)(v64 + 19392);
          if ( v66 > v65 && v66 - v65 >= 0x10 )
            KeSetEvent((PRKEVENT)(v64 + 840), 0, 0);
        }
      }
    }
  }
  result = *(unsigned int *)(v4 + 96);
  v49 = *(_QWORD *)(v4 + 88);
  *(_QWORD *)v4 = 0LL;
  *(_DWORD *)(v4 + 12) = 0;
  *(_QWORD *)(v4 + 16) = 0x3FFFFFFFFFLL;
  *(_QWORD *)(v4 + 24) = 0x3FFFFFFFFFLL;
  *(_DWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 96) = result;
  *(_QWORD *)(v4 + 88) = v49;
  return result;
}
