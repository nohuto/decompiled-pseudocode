/*
 * XREFs of MiInsertPagesInList @ 0x140226A90
 * Callers:
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     MiInsertProtectedStandbyPage @ 0x1402567C0 (MiInsertProtectedStandbyPage.c)
 *     MmUnmapViewInSystemCache @ 0x1402572A0 (MmUnmapViewInSystemCache.c)
 *     MiUnlockMdlWritePages @ 0x140257B30 (MiUnlockMdlWritePages.c)
 *     MiAddPageToInsertList @ 0x140257CC0 (MiAddPageToInsertList.c)
 *     MiEnqueuePageList @ 0x1402582B0 (MiEnqueuePageList.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiSharedInsertPfnChainInList @ 0x140225270 (MiSharedInsertPfnChainInList.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402277A0 (MiUpdateLargePageCandidateValue.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiWakeModifiedPageWriter @ 0x140261468 (MiWakeModifiedPageWriter.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x140261770 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x140261834 (MiUpdateAvailableEventsAtDpc.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiSignalCommitSignals @ 0x14029EE00 (MiSignalCommitSignals.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiSynchronizeFastPageInsert @ 0x140301300 (MiSynchronizeFastPageInsert.c)
 *     MiIsDecayPfn @ 0x1403028E0 (MiIsDecayPfn.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSufficientAvailablePages @ 0x1403526D0 (MiSufficientAvailablePages.c)
 *     MiExclusiveInsertPfnChainInList @ 0x1403E2124 (MiExclusiveInsertPfnChainInList.c)
 *     MiRebuildStandbyLookasideList @ 0x1403E73E0 (MiRebuildStandbyLookasideList.c)
 *     MiRestockOverCommit @ 0x14042CEF4 (MiRestockOverCommit.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiInsertPagesInList(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v2; // r12
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // r8
  unsigned __int64 v6; // rbx
  int v7; // r11d
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r10
  char v11; // r15
  __int64 v12; // rax
  int v13; // ecx
  char v14; // r15
  int v15; // esi
  int v16; // r13d
  int v17; // eax
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r14
  int v20; // edx
  _QWORD *v21; // r13
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r14
  __int64 v24; // r11
  __int64 v25; // r11
  __int64 v26; // rsi
  __int64 v27; // rax
  ULONG_PTR v28; // rcx
  __int64 *v29; // r10
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // esi
  unsigned int v34; // r13d
  __int64 v35; // r12
  __int64 v36; // r14
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // r15
  char v42; // r8
  int v43; // ebx
  __int64 v44; // rax
  int v45; // edx
  __int64 v46; // rcx
  volatile signed __int32 *v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // r14
  __int64 v50; // rsi
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 i; // r8
  signed __int32 v53; // eax
  unsigned __int64 v54; // r9
  struct _KPRCB *v55; // r8
  signed __int32 CachedResidentAvailable; // edx
  bool v57; // zf
  signed __int32 v58; // eax
  unsigned __int64 v59; // rdx
  char v60; // r9d^2
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // r14
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rdx
  __int64 v65; // rsi
  unsigned __int64 v66; // rbx
  unsigned __int64 v67; // rax
  unsigned int PfnPriority; // eax
  __int64 v69; // r10
  __int64 v70; // r14
  volatile LONG *v71; // rcx
  KIRQL v72; // r13
  __int64 v73; // rdi
  __int64 v74; // rdi
  __int64 v75; // rdi
  int v76; // ecx
  __int64 v77; // rax
  volatile LONG *v78; // rsi
  struct _KEVENT *v79; // rdi
  signed __int32 v80[6]; // [rsp+8h] [rbp-100h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  __int64 v82; // [rsp+38h] [rbp-D0h]
  __int64 v83; // [rsp+40h] [rbp-C8h]
  int v84; // [rsp+48h] [rbp-C0h]
  int v85; // [rsp+4Ch] [rbp-BCh]
  unsigned int v86; // [rsp+50h] [rbp-B8h]
  unsigned int v87; // [rsp+54h] [rbp-B4h]
  unsigned __int64 v88; // [rsp+58h] [rbp-B0h]
  __int64 v89; // [rsp+60h] [rbp-A8h]
  unsigned __int64 *v90; // [rsp+68h] [rbp-A0h]
  __int64 v91; // [rsp+70h] [rbp-98h]
  __int64 v92; // [rsp+78h] [rbp-90h]
  __int64 v93; // [rsp+80h] [rbp-88h]
  unsigned __int64 v94; // [rsp+88h] [rbp-80h]
  __int128 v95; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v96; // [rsp+B8h] [rbp-50h]
  __int128 v97; // [rsp+C8h] [rbp-40h]
  __int128 v98; // [rsp+D8h] [rbp-30h]
  __int128 v99; // [rsp+E8h] [rbp-20h]
  __int128 v100; // [rsp+F8h] [rbp-10h]
  __int64 v101; // [rsp+108h] [rbp+0h]
  __int64 retaddr; // [rsp+150h] [rbp+48h]

  v2 = *a1;
  result = 0LL;
  LODWORD(v89) = a2;
  v90 = a1;
  v4 = (__int64)a1;
  v101 = 0LL;
  v94 = v2;
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  v100 = 0LL;
  if ( !v2 )
    return result;
  v92 = a1[11];
  v5 = 48 * a1[2];
  v6 = v5 - 0x220000000000LL;
  v7 = 5;
  v8 = *(unsigned int *)(v5 - 0x220000000000LL + 32);
  v9 = (*(_QWORD *)(v5 - 0x220000000000LL + 40) >> 43) & 0x3FFLL;
  LODWORD(v82) = *(_DWORD *)(v5 - 0x220000000000LL + 32);
  v10 = *((_QWORD *)qword_140E300C8 + v9);
  LODWORD(v9) = HIBYTE(*(_DWORD *)(v5 - 0x220000000000LL + 32));
  v83 = v10;
  if ( (v9 & 8) != 0
    && (v6 < 0xFFFFDE0000000000uLL
     || (v59 = 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL, v6 >= v59)
     || (unsigned int)MiIsDecayPfn(0xAAAAAAAAAAAAAAABuLL * (v5 >> 4), v59, v5 >> 4, v8)
     || (v60 & 7) != 6 && (unsigned int)MiGetPfnSlabType(v6) == 9) )
  {
    v87 = v7;
  }
  else
  {
    v87 = BYTE3(v82) & 7;
  }
  v11 = *(_BYTE *)(v6 + 34);
  v12 = v10 + 19392;
  v13 = _bittest64((const signed __int64 *)(v6 + 40), 0x35u);
  v84 = v13;
  v14 = v11 & 0x10;
  if ( !v14 )
    v12 = v10 + 3136;
  v15 = 4;
  v91 = v12;
  if ( v13 )
  {
    LODWORD(v82) = 0;
    v17 = 0;
    if ( !v14 )
      v17 = 4;
LABEL_99:
    v20 = *(_DWORD *)(v4 + 96);
    v16 = v17;
    v85 = v20;
    if ( !v14 && v13 )
      goto LABEL_17;
    goto LABEL_15;
  }
  _InterlockedOr(v80, 0);
  v16 = 0;
  LODWORD(v82) = KiTbFlushTimeStamp;
  if ( !v14 )
    v16 = 4;
  v17 = v16;
  if ( v14 )
    goto LABEL_99;
  if ( v2 == 1 )
  {
    v18 = _InterlockedIncrement64((volatile signed __int64 *)(v10 + 18688));
    if ( v18 > 0x420 )
      goto LABEL_12;
    switch ( v18 )
    {
      case 0xA0uLL:
        v77 = 16232LL;
        break;
      case 0x420uLL:
        v77 = 16264LL;
        break;
      case 0x22uLL:
        v77 = 16200LL;
        break;
      case 0x120uLL:
        MiSlabDemotionLowMemoryConditionUpdate(v10, 1LL);
LABEL_164:
        v10 = v83;
LABEL_12:
        v19 = v18 - 1;
        if ( v19 == *(_QWORD *)(v10 + 16640) || v19 == *(_QWORD *)(v10 + 16648) )
          MiUpdateAvailableEventsAtDpc(v10);
        v20 = *(_DWORD *)(v4 + 96);
        v85 = v20;
        goto LABEL_15;
      default:
        goto LABEL_12;
    }
    v78 = (volatile LONG *)(v10 + 16192);
    v79 = (struct _KEVENT *)(v10 + v77);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v10 + 16192));
    KeSetEvent(v79, 0, 0);
    ++v79[1].Header.LockNV;
    ExReleaseSpinLockExclusiveFromDpcLevel(v78);
    v4 = (__int64)v90;
    goto LABEL_164;
  }
  v61 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 18688), v2);
  v62 = v2 + v61;
  v88 = v61;
  if ( v61 < 0x420 )
  {
    if ( v62 < 0x420 )
      v15 = 0;
    if ( v61 < 0xA0 )
    {
      v76 = v15 | 2;
      if ( v62 < 0xA0 )
        v76 = v15;
      v15 = v76;
      if ( v61 < 0x22 && v62 >= 0x22 )
        v15 = v76 | 1;
    }
    else if ( v61 >= 0x120 )
    {
LABEL_147:
      if ( v15 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v10 + 16192));
        if ( (v15 & 1) != 0 )
        {
          v73 = v83;
          KeSetEvent((PRKEVENT)(v83 + 16200), 0, 0);
          ++*(_DWORD *)(v73 + 16224);
        }
        if ( (v15 & 2) != 0 )
        {
          v74 = v83;
          KeSetEvent((PRKEVENT)(v83 + 16232), 0, 0);
          ++*(_DWORD *)(v74 + 16256);
        }
        if ( (v15 & 4) != 0 )
        {
          v75 = v83;
          KeSetEvent((PRKEVENT)(v83 + 16264), 0, 0);
          ++*(_DWORD *)(v75 + 16288);
        }
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v83 + 16192));
        v10 = v83;
        v4 = (__int64)v90;
      }
      goto LABEL_103;
    }
    if ( v62 >= 0x120 )
    {
      MiSlabDemotionLowMemoryConditionUpdate(v10, 1LL);
      v10 = v83;
    }
    goto LABEL_147;
  }
LABEL_103:
  v63 = *(_QWORD *)(v10 + 16648);
  if ( v88 > v63 || v62 <= v63 )
  {
    v64 = *(_QWORD *)(v10 + 16640);
    v17 = v16;
    if ( v88 > v64 || v62 <= v64 )
    {
      v13 = v84;
      goto LABEL_99;
    }
  }
  MiUpdateAvailableEventsAtDpc(v10);
  v20 = *(_DWORD *)(v4 + 96);
  v85 = v20;
LABEL_15:
  v10 = v83;
  if ( *(__int64 *)(v6 + 40) >= 0 )
    _InterlockedAdd64((volatile signed __int64 *)(v83 + 16320), v2);
  else
    _InterlockedAdd64((volatile signed __int64 *)(v83 + 7232), v2);
LABEL_17:
  if ( v16 )
    v86 = 0;
  else
    v86 = *(_DWORD *)(*(_QWORD *)(v10 + 17600) + 24LL);
  if ( !v20 )
  {
    v6 = 48LL * *(_QWORD *)(v4 + 16) - 0x220000000000LL;
    v21 = (_QWORD *)v6;
    v22 = 0LL;
    v23 = 0LL;
    v24 = *(_QWORD *)(v6 + 40);
    v93 = *(_QWORD *)(v6 + 16) >> 5;
    v25 = v24 & 0xFFFFFFFFFFLL;
    while ( 1 )
    {
      if ( v23 >= v2 )
      {
LABEL_30:
        *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
        *(_QWORD *)(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
        goto LABEL_31;
      }
      v26 = ((unsigned int)v21[1] >> 3) & 0x1FF;
      if ( !v23 || (v21[5] & 0xFFFFFFFFFFLL) == v25 )
      {
        if ( v22 )
          goto LABEL_25;
      }
      else
      {
        *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
        *(_QWORD *)(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
      }
      v88 = v21[5] & 0xFFFFFFFFFFLL;
      v27 = MiMapPageInHyperSpaceWorker(v88, 0LL, 0x80000000LL);
      v25 = v88;
      v22 = v27;
LABEL_25:
      v28 = *(_QWORD *)(v22 + 8 * v26);
      v29 = (__int64 *)(v22 + 8 * v26);
      v30 = (v28 >> 12) & 0xFFFFFFFFFFLL;
      if ( (_QWORD *)(48 * v30 - 0x220000000000LL) != v21 )
        KeBugCheckEx(0x4Eu, 6uLL, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v21 + 0x44000000000LL) >> 4), (ULONG_PTR)v29, v28);
      v31 = 32 * ((v30 << 7) | v93 & 0x1F | 0x40);
      if ( qword_140E2DCC0 )
      {
        if ( (v31 & qword_140E2DCC0) != 0 )
          v31 |= 0x10uLL;
        else
          v31 |= qword_140E2DCC0;
      }
      *v29 = v31;
      if ( ++v23 == v2 )
        goto LABEL_30;
      v21 = (_QWORD *)(48 * (*v21 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    }
  }
  if ( v20 != 1 )
    goto LABEL_31;
  v50 = v2;
  if ( !*(_QWORD *)(v10 + 16904) )
    goto LABEL_73;
  v70 = v10 + 16888;
  v71 = (volatile LONG *)(v10 + 16888);
  if ( KeGetCurrentIrql() == 2 )
  {
    v72 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v71);
  }
  else
  {
    v72 = ExAcquireSpinLockExclusive(v71);
  }
  v50 = MiRestockOverCommit(v83, v2);
  MiReleaseSpinLockExclusive(v70, v72);
  if ( v50 )
  {
    v10 = v83;
LABEL_73:
    if ( (ULONG *)v10 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
      for ( i = CurrentPrcb->CachedCommit; (unsigned __int64)(i + v50) <= 0x100; i = v53 )
      {
        v53 = _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedCommit, i + v50, i);
        if ( v53 == i )
        {
          v54 = v2;
          goto LABEL_80;
        }
      }
    }
    _InterlockedAdd64((volatile signed __int64 *)(v10 + 19328), -v50);
    MiSignalCommitSignals(v10, _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 19264), -v50) - v50);
  }
  v10 = v83;
  v54 = v2;
  if ( (ULONG *)v83 != &MiSystemPartition )
  {
LABEL_110:
    _InterlockedAdd64((volatile signed __int64 *)(v10 + 18752), v54);
    goto LABEL_31;
  }
LABEL_80:
  v55 = KeGetCurrentPrcb();
  CachedResidentAvailable = v55->CachedResidentAvailable;
  if ( CachedResidentAvailable == -1 )
  {
    _InterlockedAdd64((volatile signed __int64 *)(v10 + 18752), v2);
  }
  else
  {
    do
    {
      if ( v2 + CachedResidentAvailable > 0x100 || v2 >= 0x80000 )
        break;
      v58 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&v55->CachedResidentAvailable,
              CachedResidentAvailable + v2,
              CachedResidentAvailable);
      v57 = CachedResidentAvailable == v58;
      CachedResidentAvailable = v58;
      if ( v57 )
        goto LABEL_31;
    }
    while ( v58 != -1 );
    if ( CachedResidentAvailable > 192
      && CachedResidentAvailable == _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&v55->CachedResidentAvailable,
                                      192,
                                      CachedResidentAvailable) )
    {
      v54 = v2 + CachedResidentAvailable - 192;
    }
    if ( v54 )
      goto LABEL_110;
  }
LABEL_31:
  v32 = *(_QWORD *)(v4 + 16);
  v33 = v84;
  v34 = v86;
  if ( v32 != 0x3FFFFFFFFFLL )
  {
    v35 = v83;
    v36 = (unsigned int)v82;
    do
    {
      v6 = 48 * v32 - 0x220000000000LL;
      v37 = *(_QWORD *)v6 & 0xFFFFFFFFFFLL;
      if ( !v33 )
      {
        v38 = (v36 << 59) ^ *(_QWORD *)(v6 + 24);
        BugCheckParameter4 = 0LL;
        *(_QWORD *)(v6 + 24) = (v36 << 59) ^ v38 & 0xC7FFFFFFFFFFFFFFuLL;
        MiUpdateLargePageCandidateValue(v35, v32, 3LL, 3LL, BugCheckParameter4);
      }
      LODWORD(v82) = *(_DWORD *)(v6 + 32);
      if ( v14 )
      {
        BYTE2(v82) = BYTE2(v82) & 0xF8 | 3;
        *(_DWORD *)(v6 + 32) = v82;
        *(_BYTE *)(v6 + 36) ^= (v34 ^ *(_BYTE *)(v6 + 36)) & 0xF;
      }
      else
      {
        BYTE2(v82) = BYTE2(v82) & 0xF8 | 2;
        *(_DWORD *)(v6 + 32) = v82;
      }
      v32 = v37;
    }
    while ( v37 != 0x3FFFFFFFFFLL );
    v2 = v94;
    v4 = (__int64)v90;
  }
  if ( !v14 )
  {
    if ( v33 )
    {
      v41 = v91;
      v42 = 0;
      goto LABEL_46;
    }
    v39 = v87;
    v40 = v92;
    if ( v92 )
      v39 = 5LL;
    v41 = 88 * v39 + v83 + 3264;
    MiSynchronizeFastPageInsert(v83, 88 * v39 + v83 + 3264, v6, 9, v92, (__int64)&v95);
    if ( (_BYTE)v95 )
      goto LABEL_44;
    if ( v40 )
    {
      if ( (*(_DWORD *)(v40 + 32) & 0x8000000) == 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v41 + 32));
        *(_QWORD *)(v4 + 88) = 0LL;
        PfnPriority = MiGetPfnPriority(48LL * *(_QWORD *)(v4 + 16) - 0x220000000000LL);
        v83 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v69 + 40) >> 43) & 0x3FFLL));
        v41 = 88LL * PfnPriority + v83 + 3264;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v41 + 32));
        MiExclusiveInsertPfnChainInList(v4, v41);
        goto LABEL_45;
      }
    }
    else if ( BYTE2(v95) != 3 )
    {
      MiRebuildStandbyLookasideList(v6, BYTE2(v95), BYTE1(v95));
      MiExclusiveInsertPfnChainInList(v4, v41);
      goto LABEL_45;
    }
LABEL_70:
    MiExclusiveInsertPfnChainInList(v4, v41);
    goto LABEL_45;
  }
  v49 = v83;
  _InterlockedAdd64((volatile signed __int64 *)(v83 + 19392), v2);
  _InterlockedAdd((volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[2].AvailableCpuState, v2);
  v41 = v49 + 88 * (v34 + 64LL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v41 + 32));
  if ( !(_BYTE)v95 )
    goto LABEL_70;
LABEL_44:
  MiSharedInsertPfnChainInList(v4, &v95);
LABEL_45:
  _InterlockedAdd64((volatile signed __int64 *)v41, v2);
  v42 = 1;
LABEL_46:
  v43 = v85;
  if ( v85 != 3 )
  {
    v44 = *(_QWORD *)(v4 + 16);
    v45 = v89;
    while ( 1 )
    {
      v46 = 48 * v44 - 0x220000000000LL;
      v44 = *(_QWORD *)v46 & 0xFFFFFFFFFFLL;
      if ( !v45 && v2 == 1 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !--v2 )
        goto LABEL_51;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
LABEL_51:
  if ( v42 )
  {
    if ( (_BYTE)v95 )
    {
      if ( BYTE8(v96) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v96 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        BYTE8(v96) = 0;
      }
      if ( (_BYTE)v98 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v97 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v98) = 0;
      }
      if ( BYTE8(v99) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v99 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        BYTE8(v99) = 0;
      }
      if ( (_BYTE)v101 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v100 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v101) = 0;
      }
      v47 = (volatile signed __int32 *)(v41 + 32);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd(v47, 0xBFFFFFFF);
        _InterlockedDecrement(v47);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v47, retaddr);
      }
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v41 + 32));
      if ( v43 != 3 )
      {
        v65 = v83;
        if ( !(unsigned int)MiSufficientAvailablePages(v83, 1056LL) )
        {
          v66 = *(_QWORD *)(v65 + 19616);
          if ( v66 >= 0x10 )
            MiWakeModifiedPageWriter(v65, -1LL);
          v67 = *(_QWORD *)(v65 + 19392);
          if ( v67 > v66 && v67 - v66 >= 0x10 )
            KeSetEvent((PRKEVENT)(v65 + 840), 0, 0);
        }
      }
    }
  }
  result = *(unsigned int *)(v4 + 96);
  v48 = *(_QWORD *)(v4 + 88);
  *(_QWORD *)v4 = 0LL;
  *(_DWORD *)(v4 + 12) = 0;
  *(_QWORD *)(v4 + 16) = 0x3FFFFFFFFFLL;
  *(_QWORD *)(v4 + 24) = 0x3FFFFFFFFFLL;
  *(_DWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 96) = result;
  *(_QWORD *)(v4 + 88) = v48;
  return result;
}
