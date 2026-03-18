/*
 * XREFs of MiInsertPagesInList @ 0x14024F050
 * Callers:
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 *     MiInsertProtectedStandbyPage @ 0x14023C818 (MiInsertProtectedStandbyPage.c)
 *     MmUnmapViewInSystemCache @ 0x14023D300 (MmUnmapViewInSystemCache.c)
 *     MiUnlockMdlWritePages @ 0x14023DBA0 (MiUnlockMdlWritePages.c)
 *     MiAddPageToInsertList @ 0x14023DD30 (MiAddPageToInsertList.c)
 *     MiEnqueuePageList @ 0x14023E310 (MiEnqueuePageList.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiSynchronizeFastPageInsert @ 0x140217140 (MiSynchronizeFastPageInsert.c)
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MiSharedInsertPfnChainInList @ 0x14023EE90 (MiSharedInsertPfnChainInList.c)
 *     MiIsDecayPfn @ 0x140241130 (MiIsDecayPfn.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUpdateLargePageCandidateValue @ 0x14024FD70 (MiUpdateLargePageCandidateValue.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiSignalCommitSignals @ 0x140329790 (MiSignalCommitSignals.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiSufficientAvailablePages @ 0x14037A4B0 (MiSufficientAvailablePages.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1403BEBFC (MiUpdateAvailableEventsAtDpc.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x1403BF540 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiWakeModifiedPageWriter @ 0x1403C1310 (MiWakeModifiedPageWriter.c)
 *     MiExclusiveInsertPfnChainInList @ 0x1403E65C4 (MiExclusiveInsertPfnChainInList.c)
 *     MiRebuildStandbyLookasideList @ 0x1403ED9D0 (MiRebuildStandbyLookasideList.c)
 *     MiRestockOverCommit @ 0x14040ADD4 (MiRestockOverCommit.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
  __int64 v10; // rax
  char v11; // r15
  volatile LONG *v12; // rsi
  char v13; // r15
  int v14; // r14d
  int v15; // r13d
  int v16; // eax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r14
  int v19; // ecx
  _QWORD *v20; // r10
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // r14
  unsigned __int64 v25; // rax
  ULONG_PTR v26; // rcx
  __int64 *v27; // r11
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r12
  __int64 v33; // r14
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // r15
  int v39; // ebx
  __int64 v40; // rax
  int v41; // edx
  __int64 v42; // rcx
  volatile signed __int32 *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // r14
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 i; // r8
  signed __int32 v48; // eax
  unsigned __int64 v49; // r9
  __int64 v50; // r14
  struct _KPRCB *v51; // r8
  signed __int32 CachedResidentAvailable; // edx
  bool v53; // zf
  signed __int32 v54; // eax
  char v55; // r9d^2
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // r8
  __int64 v60; // rsi
  unsigned __int64 v61; // rbx
  unsigned __int64 v62; // rax
  unsigned int PfnPriority; // eax
  __int64 v64; // r10
  __int64 v65; // r13
  volatile LONG *v66; // rcx
  __int64 v67; // rdi
  __int64 v68; // rdi
  __int64 v69; // rdi
  int v70; // edx
  __int64 v71; // rax
  struct _KEVENT *v72; // rdi
  signed __int32 v73[6]; // [rsp+8h] [rbp-100h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  KIRQL v75; // [rsp+38h] [rbp-D0h]
  unsigned int v76; // [rsp+3Ch] [rbp-CCh]
  __int64 v77; // [rsp+40h] [rbp-C8h]
  int v78; // [rsp+48h] [rbp-C0h]
  unsigned int v79; // [rsp+4Ch] [rbp-BCh]
  _QWORD *v80; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v81; // [rsp+58h] [rbp-B0h]
  __int64 v82; // [rsp+60h] [rbp-A8h]
  __int64 v83; // [rsp+68h] [rbp-A0h]
  unsigned __int64 *v84; // [rsp+70h] [rbp-98h]
  __int64 v85; // [rsp+78h] [rbp-90h]
  __int64 v86; // [rsp+80h] [rbp-88h]
  __int64 v87; // [rsp+88h] [rbp-80h]
  unsigned __int64 v88; // [rsp+90h] [rbp-78h]
  __int128 v89; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v90; // [rsp+B8h] [rbp-50h]
  __int128 v91; // [rsp+C8h] [rbp-40h]
  __int128 v92; // [rsp+D8h] [rbp-30h]
  __int128 v93; // [rsp+E8h] [rbp-20h]
  __int128 v94; // [rsp+F8h] [rbp-10h]
  __int64 v95; // [rsp+108h] [rbp+0h]
  void *retaddr; // [rsp+150h] [rbp+48h]

  v2 = *a1;
  result = 0LL;
  LODWORD(v83) = a2;
  v84 = a1;
  v4 = (__int64)a1;
  v95 = 0LL;
  v88 = v2;
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  if ( !v2 )
    return result;
  v86 = a1[11];
  v5 = 48 * a1[2];
  v6 = v5 - 0x220000000000LL;
  v7 = 5;
  v8 = (*(_QWORD *)(v5 - 0x220000000000LL + 40) >> 43) & 0x3FFLL;
  v76 = *(_DWORD *)(v5 - 0x220000000000LL + 32);
  v9 = *((_QWORD *)qword_140E2FD48 + v8);
  LODWORD(v8) = HIBYTE(*(_DWORD *)(v5 - 0x220000000000LL + 32));
  v77 = v9;
  if ( (v8 & 8) != 0
    && (v6 < 0xFFFFDE0000000000uLL
     || v6 >= 48 * qword_140E2D9A0 - 0x21FFFFFFFFD0LL
     || MiIsDecayPfn(0xAAAAAAAAAAAAAAABuLL * (v5 >> 4))
     || (v55 & 7) != 6 && (unsigned int)MiGetPfnSlabType(v6) == 9) )
  {
    v79 = v7;
  }
  else
  {
    v79 = HIBYTE(v76) & 7;
  }
  v10 = v9 + 19392;
  v11 = *(_BYTE *)(v6 + 34);
  v12 = (volatile LONG *)((*(_QWORD *)(v6 + 40) >> 53) & 1LL);
  v82 = (__int64)v12;
  v13 = v11 & 0x10;
  if ( !v13 )
    v10 = v9 + 3136;
  v14 = 4;
  v85 = v10;
  if ( (_DWORD)v12 )
  {
    v16 = 0;
    v76 = 0;
    if ( !v13 )
      v16 = 4;
LABEL_99:
    v19 = *(_DWORD *)(v4 + 96);
    v15 = v16;
    v78 = v19;
    if ( !v13 && (_DWORD)v12 )
      goto LABEL_17;
    goto LABEL_15;
  }
  _InterlockedOr(v73, 0);
  v76 = KiTbFlushTimeStamp;
  v15 = 0;
  if ( !v13 )
    v15 = 4;
  v16 = v15;
  if ( v13 )
    goto LABEL_99;
  if ( v2 == 1 )
  {
    v17 = _InterlockedIncrement64((volatile signed __int64 *)(v9 + 18688));
    if ( v17 > 0x420 )
      goto LABEL_12;
    switch ( v17 )
    {
      case 0xA0uLL:
        v71 = 16232LL;
        break;
      case 0x420uLL:
        v71 = 16264LL;
        break;
      case 0x22uLL:
        v71 = 16200LL;
        break;
      case 0x120uLL:
        MiSlabDemotionLowMemoryConditionUpdate(v9, 1LL);
LABEL_165:
        v9 = v77;
LABEL_12:
        v18 = v17 - 1;
        if ( v18 == *(_QWORD *)(v9 + 16640) || v18 == *(_QWORD *)(v9 + 16648) )
          MiUpdateAvailableEventsAtDpc(v9);
        v19 = *(_DWORD *)(v4 + 96);
        v78 = v19;
        goto LABEL_15;
      default:
        goto LABEL_12;
    }
    v12 = (volatile LONG *)(v9 + 16192);
    v72 = (struct _KEVENT *)(v9 + v71);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 16192));
    KeSetEvent(v72, 0, 0);
    ++v72[1].Header.LockNV;
    ExReleaseSpinLockExclusiveFromDpcLevel(v12);
    v4 = (__int64)v84;
    LODWORD(v12) = v82;
    goto LABEL_165;
  }
  v56 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 18688), v2);
  v81 = v56;
  v57 = v2 + v56;
  v80 = (_QWORD *)(v2 + v56);
  if ( v56 < 0x420 )
  {
    if ( v57 < 0x420 )
      v14 = 0;
    if ( v56 < 0xA0 )
    {
      v70 = v14 | 2;
      if ( v57 < 0xA0 )
        v70 = v14;
      v14 = v70;
      if ( v56 < 0x22 && v57 >= 0x22 )
        v14 = v70 | 1;
    }
    else if ( v56 >= 0x120 )
    {
LABEL_148:
      if ( v14 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 16192));
        if ( (v14 & 1) != 0 )
        {
          v67 = v77;
          KeSetEvent((PRKEVENT)(v77 + 16200), 0, 0);
          ++*(_DWORD *)(v67 + 16224);
        }
        if ( (v14 & 2) != 0 )
        {
          v68 = v77;
          KeSetEvent((PRKEVENT)(v77 + 16232), 0, 0);
          ++*(_DWORD *)(v68 + 16256);
        }
        if ( (v14 & 4) != 0 )
        {
          v69 = v77;
          KeSetEvent((PRKEVENT)(v77 + 16264), 0, 0);
          ++*(_DWORD *)(v69 + 16288);
        }
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v77 + 16192));
        v57 = (unsigned __int64)v80;
        v9 = v77;
        v4 = (__int64)v84;
      }
      goto LABEL_108;
    }
    if ( v57 >= 0x120 )
    {
      MiSlabDemotionLowMemoryConditionUpdate(v9, 1LL);
      v57 = (unsigned __int64)v80;
      v9 = v77;
    }
    goto LABEL_148;
  }
LABEL_108:
  v58 = *(_QWORD *)(v9 + 16648);
  if ( v81 > v58 || v57 <= v58 )
  {
    v59 = *(_QWORD *)(v9 + 16640);
    v16 = v15;
    if ( v81 > v59 || v57 <= v59 )
      goto LABEL_99;
  }
  MiUpdateAvailableEventsAtDpc(v9);
  v19 = *(_DWORD *)(v4 + 96);
  v78 = v19;
LABEL_15:
  v9 = v77;
  if ( *(__int64 *)(v6 + 40) >= 0 )
    _InterlockedAdd64((volatile signed __int64 *)(v77 + 16320), v2);
  else
    _InterlockedAdd64((volatile signed __int64 *)(v77 + 7232), v2);
LABEL_17:
  if ( v15 )
    LODWORD(v81) = 0;
  else
    LODWORD(v81) = *(_DWORD *)(*(_QWORD *)(v9 + 17600) + 24LL);
  if ( !v19 )
  {
    v6 = 48LL * *(_QWORD *)(v4 + 16) - 0x220000000000LL;
    v20 = (_QWORD *)v6;
    v21 = 0LL;
    v22 = 0LL;
    v23 = *(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFLL;
    v87 = *(_QWORD *)(v6 + 16) >> 5;
    v82 = v23;
    while ( 1 )
    {
      v80 = v20;
      if ( v22 >= v2 )
      {
LABEL_30:
        *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
        *(_QWORD *)(((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
        goto LABEL_31;
      }
      v24 = ((unsigned int)v20[1] >> 3) & 0x1FF;
      if ( !v22 || (v20[5] & 0xFFFFFFFFFFLL) == v23 )
      {
        if ( v21 )
          goto LABEL_25;
      }
      else
      {
        *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
        *(_QWORD *)(((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
      }
      v82 = v20[5] & 0xFFFFFFFFFFLL;
      v25 = MiMapPageInHyperSpaceWorker(v82, 0LL, 0x80000000);
      v20 = v80;
      v21 = v25;
LABEL_25:
      v26 = *(_QWORD *)(v21 + 8 * v24);
      v27 = (__int64 *)(v21 + 8 * v24);
      v28 = (v26 >> 12) & 0xFFFFFFFFFFLL;
      if ( (_QWORD *)(48 * v28 - 0x220000000000LL) != v20 )
        KeBugCheckEx(0x4Eu, 6uLL, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v20 + 0x44000000000LL) >> 4), (ULONG_PTR)v27, v26);
      v29 = 32 * ((v28 << 7) | v87 & 0x1F | 0x40);
      if ( qword_140E2D940 )
      {
        if ( (v29 & qword_140E2D940) != 0 )
          v29 |= 0x10uLL;
        else
          v29 |= qword_140E2D940;
      }
      *v27 = v29;
      if ( ++v22 == v2 )
        goto LABEL_30;
      v23 = v82;
      v20 = (_QWORD *)(48 * (*v20 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    }
  }
  if ( v19 != 1 )
    goto LABEL_31;
  v45 = v2;
  if ( !*(_QWORD *)(v9 + 16904) )
    goto LABEL_71;
  v65 = v9 + 16888;
  v66 = (volatile LONG *)(v9 + 16888);
  if ( KeGetCurrentIrql() == 2 )
  {
    v75 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v66);
  }
  else
  {
    v75 = ExAcquireSpinLockExclusive(v66);
  }
  v45 = MiRestockOverCommit(v77, v2);
  MiReleaseSpinLockExclusive(v65, v75);
  if ( v45 )
  {
    v9 = v77;
LABEL_71:
    if ( (ULONG *)v9 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
      for ( i = CurrentPrcb->CachedCommit; (unsigned __int64)(i + v45) <= 0x100; i = v48 )
      {
        v48 = _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedCommit, i + v45, i);
        if ( v48 == i )
        {
          v49 = v2;
          goto LABEL_80;
        }
      }
    }
    _InterlockedAdd64((volatile signed __int64 *)(v9 + 19328), -v45);
    MiSignalCommitSignals(v9, _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 19264), -v45) - v45);
  }
  v9 = v77;
  v49 = v2;
  if ( (ULONG *)v77 != &MiSystemPartition )
  {
LABEL_106:
    _InterlockedAdd64((volatile signed __int64 *)(v9 + 18752), v49);
    goto LABEL_31;
  }
LABEL_80:
  v51 = KeGetCurrentPrcb();
  CachedResidentAvailable = v51->CachedResidentAvailable;
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
      v54 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&v51->CachedResidentAvailable,
              CachedResidentAvailable + v2,
              CachedResidentAvailable);
      v53 = CachedResidentAvailable == v54;
      CachedResidentAvailable = v54;
      if ( v53 )
        goto LABEL_31;
    }
    while ( v54 != -1 );
    if ( CachedResidentAvailable > 192
      && CachedResidentAvailable == _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&v51->CachedResidentAvailable,
                                      192,
                                      CachedResidentAvailable) )
    {
      v49 = v2 + CachedResidentAvailable - 192;
    }
    if ( v49 )
      goto LABEL_106;
  }
LABEL_31:
  v30 = *(_QWORD *)(v4 + 16);
  v31 = 0x3FFFFFFFFFLL;
  if ( v30 != 0x3FFFFFFFFFLL )
  {
    v32 = v77;
    v33 = v76;
    do
    {
      v6 = 48 * v30 - 0x220000000000LL;
      v34 = *(_QWORD *)v6 & 0xFFFFFFFFFFLL;
      if ( !(_DWORD)v12 )
      {
        v35 = *(_QWORD *)(v6 + 24);
        BugCheckParameter4 = 0LL;
        *(_QWORD *)(v6 + 24) = (v33 << 59) ^ (v35 ^ (v33 << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
        MiUpdateLargePageCandidateValue(v32, v30, 3LL);
        v31 = 0x3FFFFFFFFFLL;
      }
      v76 = *(_DWORD *)(v6 + 32);
      if ( v13 )
      {
        BYTE2(v76) = BYTE2(v76) & 0xF8 | 3;
        *(_DWORD *)(v6 + 32) = v76;
        *(_BYTE *)(v6 + 36) ^= (v81 ^ *(_BYTE *)(v6 + 36)) & 0xF;
      }
      else
      {
        BYTE2(v76) = BYTE2(v76) & 0xF8 | 2;
        *(_DWORD *)(v6 + 32) = v76;
      }
      v30 = v34;
    }
    while ( v34 != 0x3FFFFFFFFFLL );
    v2 = v88;
    v4 = (__int64)v84;
  }
  if ( !v13 )
  {
    if ( (_DWORD)v12 )
    {
      v38 = v85;
      LOBYTE(v31) = 0;
      goto LABEL_46;
    }
    v36 = v79;
    v37 = v86;
    if ( v86 )
      v36 = 5LL;
    v38 = 88 * v36 + v77 + 3264;
    MiSynchronizeFastPageInsert(v77, v38, v6, 9, v86, &v89);
    if ( (_BYTE)v89 )
      goto LABEL_44;
    if ( v37 )
    {
      if ( (*(_DWORD *)(v37 + 32) & 0x8000000) == 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v38 + 32));
        *(_QWORD *)(v4 + 88) = 0LL;
        PfnPriority = MiGetPfnPriority(48LL * *(_QWORD *)(v4 + 16) - 0x220000000000LL);
        v77 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v64 + 40) >> 43) & 0x3FFLL));
        v38 = 88LL * PfnPriority + v77 + 3264;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v38 + 32));
        MiExclusiveInsertPfnChainInList(v4, v38);
        goto LABEL_45;
      }
    }
    else if ( BYTE2(v89) != 3 )
    {
      MiRebuildStandbyLookasideList(v6, BYTE2(v89), BYTE1(v89));
    }
LABEL_115:
    MiExclusiveInsertPfnChainInList(v4, v38);
    goto LABEL_45;
  }
  v50 = v77;
  _InterlockedAdd64((volatile signed __int64 *)(v77 + 19392), v2);
  _InterlockedAdd((volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[2].AvailableCpuState, v2);
  v38 = v50 + 88 * ((unsigned int)v81 + 64LL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v38 + 32));
  if ( !(_BYTE)v89 )
    goto LABEL_115;
LABEL_44:
  MiSharedInsertPfnChainInList(v4, &v89);
LABEL_45:
  _InterlockedAdd64((volatile signed __int64 *)v38, v2);
  LOBYTE(v31) = 1;
LABEL_46:
  v39 = v78;
  if ( v78 != 3 )
  {
    v40 = *(_QWORD *)(v4 + 16);
    v41 = v83;
    while ( 1 )
    {
      v42 = 48 * v40 - 0x220000000000LL;
      v40 = *(_QWORD *)v42 & 0xFFFFFFFFFFLL;
      if ( !v41 && v2 == 1 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !--v2 )
        goto LABEL_51;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
LABEL_51:
  if ( (_BYTE)v31 )
  {
    if ( (_BYTE)v89 )
    {
      if ( BYTE8(v90) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v90 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        BYTE8(v90) = 0;
      }
      if ( (_BYTE)v92 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v91 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v92) = 0;
      }
      if ( BYTE8(v93) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v93 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        BYTE8(v93) = 0;
      }
      if ( (_BYTE)v95 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v94 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v95) = 0;
      }
      v43 = (volatile signed __int32 *)(v38 + 32);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd(v43, 0xBFFFFFFF);
        _InterlockedDecrement(v43);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v43, retaddr, v31);
      }
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v38 + 32));
      if ( v39 != 3 )
      {
        v60 = v77;
        if ( !(unsigned int)MiSufficientAvailablePages(v77, 1056LL) )
        {
          v61 = *(_QWORD *)(v60 + 19616);
          if ( v61 >= 0x10 )
            MiWakeModifiedPageWriter(v60, -1LL);
          v62 = *(_QWORD *)(v60 + 19392);
          if ( v62 > v61 && v62 - v61 >= 0x10 )
            KeSetEvent((PRKEVENT)(v60 + 840), 0, 0);
        }
      }
    }
  }
  result = *(unsigned int *)(v4 + 96);
  v44 = *(_QWORD *)(v4 + 88);
  *(_QWORD *)v4 = 0LL;
  *(_DWORD *)(v4 + 12) = 0;
  *(_QWORD *)(v4 + 16) = 0x3FFFFFFFFFLL;
  *(_QWORD *)(v4 + 24) = 0x3FFFFFFFFFLL;
  *(_DWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 96) = result;
  *(_QWORD *)(v4 + 88) = v44;
  return result;
}
