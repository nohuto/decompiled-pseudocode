/*
 * XREFs of MiTrimSection @ 0x140320A50
 * Callers:
 *     MmTrimSection @ 0x1403598AC (MmTrimSection.c)
 *     MiTrimSharedPage @ 0x14035A2DC (MiTrimSharedPage.c)
 *     MiLocateSharedPageViews @ 0x14066D834 (MiLocateSharedPageViews.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402120E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402121B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x1402158E0 (MiComputeCrossPartitionSectionCharges.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x1402A6600 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiReferenceSubsection @ 0x14031F460 (MiReferenceSubsection.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiViewMayContainPage @ 0x140321440 (MiViewMayContainPage.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MiGetSharedProtos @ 0x140322970 (MiGetSharedProtos.c)
 *     MiInsertUnusedSubsection @ 0x140322E10 (MiInsertUnusedSubsection.c)
 *     MiReleaseSpinLockShared @ 0x140323610 (MiReleaseSpinLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiUnlockControlAreaFileObjectShared @ 0x140441FC0 (MiUnlockControlAreaFileObjectShared.c)
 *     MiAnyProtosAreMapped @ 0x14045BF40 (MiAnyProtosAreMapped.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B9590 (MiReturnCrossPartitionSectionCharges.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F77BC (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiTrimSection(_QWORD *a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // r13
  unsigned __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v8; // r12
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // r14
  int MayContainPage; // esi
  __int64 *v21; // rdi
  _DWORD *v22; // r8
  unsigned __int8 CurrentIrql; // di
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  _QWORD *i; // rdi
  _QWORD *v27; // rcx
  struct _KTHREAD *v28; // rdi
  bool v29; // zf
  unsigned int v30; // eax
  _QWORD *v32; // rax
  _QWORD *j; // rdi
  _QWORD *v34; // rax
  int *v35; // r14
  __int64 v36; // rcx
  unsigned int v37; // edi
  int v38; // edx
  __int64 v39; // rcx
  ULONG_PTR v40; // rdi
  char v41; // r12
  __int64 v42; // r13
  __int64 v43; // rax
  unsigned __int8 v44; // di
  __int64 v45; // r8
  ULONG_PTR v46; // r10
  __int64 v47; // r11
  ULONG *v48; // rax
  __int64 v49; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  int v51; // r9d
  __int64 *v52; // rcx
  int v53; // r9d
  KIRQL v54; // di
  __int64 v55; // [rsp+40h] [rbp-A8h]
  _QWORD *v56; // [rsp+48h] [rbp-A0h]
  __int64 v57; // [rsp+50h] [rbp-98h]
  _QWORD *v58; // [rsp+58h] [rbp-90h] BYREF
  int v59; // [rsp+60h] [rbp-88h]
  __int64 v60; // [rsp+68h] [rbp-80h]
  __int64 v61; // [rsp+70h] [rbp-78h]
  __int64 v62; // [rsp+78h] [rbp-70h]
  unsigned __int64 v63; // [rsp+88h] [rbp-60h]
  __int128 v64; // [rsp+90h] [rbp-58h]
  void *retaddr; // [rsp+E8h] [rbp+0h]
  int v69; // [rsp+108h] [rbp+20h]

  v4 = a1[3];
  v5 = a1[1];
  v64 = 0LL;
  v58 = 0LL;
  v6 = *(_QWORD *)v4;
  v59 = a4 & 1;
  v8 = a2;
  v63 = v5;
  v55 = v4;
  if ( (a4 & 1) != 0 && (!*(_QWORD *)(v6 + 64) || (*(_DWORD *)(v6 + 56) & 0x20) != 0) )
    return 3221225608LL;
  v10 = *(_QWORD *)(v4 + 8);
  if ( (*(_DWORD *)(v6 + 56) & 0x20) != 0 )
  {
    if ( v5 < v10 || v5 >= v10 + 8LL * *(unsigned int *)(v4 + 44) )
      v12 = ((unsigned __int64)*(unsigned int *)(v4 + 36) << 9)
          + (((v5 << 9) - (*(_QWORD *)(MiGetSharedProtos(v6, 0xFFFFFFFFLL, v4) + 72) << 9)) & 0xFFFFFFFFFFFFF000uLL);
    else
      v12 = ((unsigned __int64)*(unsigned int *)(v4 + 36) << 9) + (((v5 << 9) - (v10 << 9)) & 0xFFFFFFFFFFFFF000uLL);
  }
  else
  {
    if ( v10 )
      v11 = (__int64)(v5 - v10) >> 3 << 12;
    else
      v11 = 0LL;
    v12 = v11 + ((*(unsigned int *)(v4 + 36) | ((unsigned __int64)(*(_DWORD *)(v4 + 32) & 0xFFC0) << 26)) << 12);
  }
  v13 = a1[2];
  v14 = a1[4];
  v15 = *(_QWORD *)(v14 + 8);
  if ( (*(_DWORD *)(*(_QWORD *)v14 + 56LL) & 0x20) != 0 )
  {
    if ( v13 < v15 || v13 >= v15 + 8LL * *(unsigned int *)(v14 + 44) )
      v17 = ((unsigned __int64)*(unsigned int *)(v14 + 36) << 9)
          + (((v13 << 9) - (*(_QWORD *)(MiGetSharedProtos(*(_QWORD *)v14, 0xFFFFFFFFLL, v14) + 72) << 9)) & 0xFFFFFFFFFFFFF000uLL);
    else
      v17 = ((unsigned __int64)*(unsigned int *)(v14 + 36) << 9) + (((v13 << 9) - (v15 << 9)) & 0xFFFFFFFFFFFFF000uLL);
  }
  else
  {
    if ( v15 )
      v16 = (__int64)(v13 - v15) >> 3 << 12;
    else
      v16 = 0LL;
    v17 = v16 + ((*(unsigned int *)(v14 + 36) | ((unsigned __int64)(*(_DWORD *)(v14 + 32) & 0xFFC0) << 26)) << 12);
  }
  CurrentThread = KeGetCurrentThread();
  v19 = v17 + 4096;
  v56 = 0LL;
  MayContainPage = 0;
  v61 = v17 + 4096;
  --CurrentThread->SpecialApcDisable;
  v21 = KeAbPreAcquire(v6 + 104, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 104), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v6 + 104), 0, v21, v6 + 104);
  if ( v21 )
    *((_BYTE *)v21 + 10) = 1;
  v22 = (_DWORD *)(v6 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    v22 = (_DWORD *)(v6 + 72);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v22);
    v24 = *v22 & 0x7FFFFFFF;
    while ( 1 )
    {
      v25 = v24;
      v24 = _InterlockedCompareExchange(v22, v24 + 1, v24);
      if ( v25 == v24 )
        break;
      if ( v24 < 0 )
      {
        ExpWaitForSpinLockSharedAndAcquire(v22, CurrentIrql);
        goto LABEL_118;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v22, CurrentIrql);
LABEL_118:
    v22 = (_DWORD *)(v6 + 72);
  }
  if ( !*(_QWORD *)(v6 + 40) )
  {
    MiReleaseSpinLockShared(v22, CurrentIrql);
    MiUnlockControlAreaFileObjectShared(v6);
    return 0LL;
  }
  *(_QWORD *)&v64 = *(_QWORD *)(v6 + 8);
  if ( CurrentIrql == 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(v22);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v22, 0xBFFFFFFF);
      _InterlockedDecrement(v22);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v22, retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( (*(_DWORD *)(v6 + 56) & 0x20) != 0 || !*(_QWORD *)(v6 + 64) )
  {
LABEL_27:
    for ( i = (_QWORD *)v64; i != (_QWORD *)(v6 + 8); i = (_QWORD *)*i )
    {
      MayContainPage = MiViewMayContainPage(v6, v8, a4, (_DWORD)i, v12, v19, (__int64)&v58);
      if ( MayContainPage < 0 )
        break;
      v27 = v58;
      if ( v58 )
      {
        *v58 = v56;
        v56 = v27;
      }
    }
    goto LABEL_32;
  }
  v32 = a1;
  while ( 1 )
  {
    v69 = 1;
    if ( v4 != v32[3] && v4 != v32[4] )
    {
      v54 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72));
      if ( !*(_DWORD *)(v4 + 104) || (int)MiReferenceSubsection(v4, 0) <= 1 )
      {
        MiReleaseSpinLockExclusive(v6 + 72, v54);
        goto LABEL_88;
      }
      v69 = 2;
      MiReleaseSpinLockExclusive(v6 + 72, v54);
      v32 = a1;
    }
    if ( !v59 && (a4 & 0x20) == 0 || (unsigned int)MiAnyProtosAreMapped(v4, v32) )
    {
      for ( j = *(_QWORD **)(v4 + 88); j != (_QWORD *)(v4 + 88); j = (_QWORD *)*j )
      {
        MayContainPage = MiViewMayContainPage(v6, v8, a4, (_DWORD)j, v12, v61, (__int64)&v58);
        if ( MayContainPage < 0 )
        {
          v4 = a1[4];
          v55 = v4;
          break;
        }
        v34 = v58;
        if ( v58 )
        {
          *v58 = v56;
          v56 = v34;
        }
      }
      if ( v69 == 2 )
      {
        v62 = *(_QWORD *)v4;
        v35 = (int *)(v62 + 72);
        v36 = KeGetCurrentIrql();
        v60 = v36;
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          KiRaiseIrqlProcessIrqlFlags(v36);
          LOBYTE(v36) = v60;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v37 = 0;
          if ( _interlockedbittestandset(v35, 0x1Fu) )
            v37 = ExpWaitForSpinLockExclusiveAndAcquire(v35, v36);
          v38 = *v35;
          v39 = (unsigned int)*v35;
          LODWORD(v39) = v39 & 0xBFFFFFFF;
          if ( (_DWORD)v39 != 0x80000000 )
          {
            do
            {
              if ( (v38 & 0x40000000) == 0 )
                _InterlockedOr(v35, 0x40000000u);
              if ( (++v37 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v39) )
              {
                HvlNotifyLongSpinWait(v37);
              }
              else
              {
                _mm_pause();
              }
              v38 = *v35;
            }
            while ( (*v35 & 0xBFFFFFFF) != 0x80000000 );
          }
        }
        else
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v35, v36);
        }
        v40 = v4;
        v57 = 0LL;
        v41 = 0;
        v42 = *(_QWORD *)(*(_QWORD *)v4 + 64LL);
        v43 = v55;
        do
        {
          if ( *(_QWORD *)(v40 + 8) )
          {
            v45 = *(_QWORD *)v40;
            v46 = v40;
            if ( *(_QWORD *)(*(_QWORD *)v40 + 64LL)
              && (*(_DWORD *)(v45 + 56) & 0x20) == 0
              && (*(_DWORD *)(v40 + 32) & 0x10000) == 0
              && !*(_QWORD *)(v40 + 80) )
            {
              KeBugCheckEx(0x1Au, 0x42001uLL, v40, 0LL, 0LL);
            }
            v47 = 0LL;
            if ( (v41 & 0xC) == 8
              && (*(_BYTE *)(v45 + 62) & 0xC) == 0
              && (*(_QWORD *)(v45 + 64) || (*(_DWORD *)(v45 + 92) & 0x10000) == 0) )
            {
              if ( (v41 & 0x10) != 0 )
                v48 = 0LL;
              else
                v48 = v41 < 0
                    ? &MiSystemPartition
                    : (ULONG *)*((_QWORD *)qword_140E2FD48
                               + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
              if ( v48 != *((ULONG **)qword_140E2FD48 + (*(_WORD *)(v45 + 60) & 0x3FF)) )
              {
                SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v40);
                v51 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences)
                                + 48) & 0x3FFFFFFF;
                if ( v51 != 0x3FFFFFFF )
                {
                  MiUpdateSubsectionCrossPartitionRefs(v46, (unsigned int)(v51 - 1));
                  if ( v53 == 1 )
                    v47 = MiComputeCrossPartitionSectionCharges(v52);
                }
              }
            }
            if ( *(_QWORD *)(v45 + 64) && (*(_DWORD *)(v45 + 56) & 0x20) == 0 && (*(_DWORD *)(v46 + 32) & 0x10000) == 0 )
            {
              v49 = *(_QWORD *)(v46 + 80);
              if ( !v49 )
                KeBugCheckEx(0x1Au, 0x42001uLL, v46, 0LL, 0LL);
              *(_QWORD *)(v46 + 80) = v49 - 1;
            }
            v57 += v47;
            if ( v42 && !*(_QWORD *)(v40 + 80) && (*(_DWORD *)(v40 + 32) & 0x10000) == 0 )
              v57 += MiInsertUnusedSubsection(v40);
            v43 = v55;
          }
          if ( v40 == v43 )
            break;
          v40 = *(_QWORD *)(v40 + 16);
          if ( !v42 )
            v41 &= ~8u;
        }
        while ( v40 );
        v44 = v60;
        if ( (_BYTE)v60 == 17 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            *v35 = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v35, retaddr);
        }
        else
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            *v35 = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v35, retaddr);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v44);
          __writecr8(v44);
        }
        if ( v57 )
          MiReturnCrossPartitionSectionCharges(
            *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(v62 + 60) & 0x3FF)),
            *(_QWORD *)(v62 + 64) != 0LL,
            v57);
        v8 = a2;
        v4 = v55;
      }
    }
LABEL_88:
    v32 = a1;
    if ( v4 == a1[4] )
      break;
    v4 = *(_QWORD *)(v4 + 16);
    v55 = v4;
  }
  if ( MayContainPage >= 0 )
  {
    v19 = v61;
    goto LABEL_27;
  }
LABEL_32:
  v28 = KeGetCurrentThread();
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 104), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v6 + 104));
  KeAbPostRelease(v6 + 104);
  v29 = v28->SpecialApcDisable++ == -1;
  if ( v29 && ($727077A9B6E167EAE1398C74674DC5A5 *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
    KiCheckForKernelApcDelivery();
  if ( v8 )
  {
    *(_QWORD *)(v8 + 8) = v56;
  }
  else
  {
    v30 = MiTrimSharedPageFromViews((_DWORD)v56, a3, a4, v6, v63);
    if ( MayContainPage >= 0 )
      return v30;
  }
  return (unsigned int)MayContainPage;
}
