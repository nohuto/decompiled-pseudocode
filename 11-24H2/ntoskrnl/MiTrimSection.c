/*
 * XREFs of MiTrimSection @ 0x1402B9B70
 * Callers:
 *     MmTrimSection @ 0x140370AB4 (MmTrimSection.c)
 *     MiTrimSharedPage @ 0x140370B4C (MiTrimSharedPage.c)
 *     MiLocateSharedPageViews @ 0x1406790E0 (MiLocateSharedPageViews.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiReferenceSubsection @ 0x14020F750 (MiReferenceSubsection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiViewMayContainPage @ 0x1402BA550 (MiViewMayContainPage.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiGetSharedProtos @ 0x1403025FC (MiGetSharedProtos.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14036F2F8 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x14036F3BC (MiComputeCrossPartitionSectionCharges.c)
 *     MiInsertUnusedSubsection @ 0x140371BB0 (MiInsertUnusedSubsection.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiUnlockControlAreaFileObjectShared @ 0x140441C4C (MiUnlockControlAreaFileObjectShared.c)
 *     MiAnyProtosAreMapped @ 0x14045B2B8 (MiAnyProtosAreMapped.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F9F3C (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiTrimSection(_QWORD *a1, __int64 a2, int a3, int a4)
{
  ULONG_PTR v4; // r12
  unsigned __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v8; // r15
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  _QWORD *v18; // r14
  struct _KTHREAD *CurrentThread; // rax
  int MayContainPage; // esi
  __int64 v21; // rdi
  _DWORD *v22; // r8
  unsigned __int8 CurrentIrql; // di
  _QWORD *i; // rdi
  _QWORD *v25; // rcx
  struct _KTHREAD *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  bool v31; // zf
  unsigned int v32; // eax
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  _QWORD *v36; // rax
  _QWORD *j; // rdi
  _QWORD *v38; // rax
  int *v39; // r15
  __int64 v40; // rcx
  unsigned int v41; // edi
  int k; // edx
  ULONG_PTR v43; // rdi
  char v44; // r12
  __int64 v45; // r13
  ULONG_PTR v46; // rax
  unsigned __int8 v47; // di
  __int64 v48; // rdx
  ULONG_PTR v49; // r10
  __int64 v50; // r11
  ULONG *v51; // rax
  __int64 v52; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  int v54; // r9d
  __int64 v55; // rcx
  int v56; // r9d
  KIRQL v57; // di
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-A8h]
  __int64 v59; // [rsp+48h] [rbp-A0h]
  _QWORD *v60; // [rsp+50h] [rbp-98h] BYREF
  int v61; // [rsp+58h] [rbp-90h]
  __int64 v62; // [rsp+60h] [rbp-88h]
  __int64 v63; // [rsp+68h] [rbp-80h]
  __int64 v64; // [rsp+70h] [rbp-78h]
  __int64 v65; // [rsp+78h] [rbp-70h]
  unsigned __int64 v66; // [rsp+88h] [rbp-60h]
  __int128 v67; // [rsp+90h] [rbp-58h]
  __int64 retaddr; // [rsp+E8h] [rbp+0h]
  int v72; // [rsp+108h] [rbp+20h]

  v4 = a1[3];
  v5 = a1[1];
  v67 = 0LL;
  v60 = 0LL;
  v6 = *(_QWORD *)v4;
  v63 = *(_QWORD *)v4;
  v61 = a4 & 1;
  v8 = a2;
  v66 = v5;
  BugCheckParameter2 = v4;
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
  v18 = 0LL;
  v64 = v17 + 4096;
  CurrentThread = KeGetCurrentThread();
  MayContainPage = 0;
  --CurrentThread->SpecialApcDisable;
  v21 = KeAbPreAcquire(v6 + 104, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 104), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v6 + 104, 0LL, v21, v6 + 104);
  if ( v21 )
    *(_BYTE *)(v21 + 10) = 1;
  v22 = (_DWORD *)(v6 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    v22 = (_DWORD *)(v6 + 72);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v22);
    v34 = *v22 & 0x7FFFFFFF;
    while ( 1 )
    {
      v35 = v34;
      v34 = _InterlockedCompareExchange(v22, v34 + 1, v34);
      if ( v35 == v34 )
        break;
      if ( v34 < 0 )
      {
        ExpWaitForSpinLockSharedAndAcquire(v22, CurrentIrql);
        goto LABEL_19;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v22, CurrentIrql);
LABEL_19:
    v22 = (_DWORD *)(v6 + 72);
  }
  if ( !*(_QWORD *)(v6 + 40) )
  {
    MiReleaseSpinLockShared(v22, CurrentIrql);
    MiUnlockControlAreaFileObjectShared(v6);
    return 0LL;
  }
  *(_QWORD *)&v67 = *(_QWORD *)(v6 + 8);
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
LABEL_28:
    for ( i = (_QWORD *)v67; i != (_QWORD *)(v6 + 8); i = (_QWORD *)*i )
    {
      MayContainPage = MiViewMayContainPage(v6, v8, a4, (_DWORD)i, v12, v64, (__int64)&v60);
      if ( MayContainPage < 0 )
        break;
      v25 = v60;
      if ( v60 )
      {
        *v60 = v18;
        v18 = v25;
      }
    }
    goto LABEL_33;
  }
  v36 = a1;
  while ( 1 )
  {
    v72 = 1;
    if ( v4 != v36[3] && v4 != v36[4] )
    {
      v57 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72));
      if ( !*(_DWORD *)(v4 + 104) || (int)MiReferenceSubsection((__int64 *)v4, 0) <= 1 )
      {
        MiReleaseSpinLockExclusive((_DWORD *)(v6 + 72), v57);
        goto LABEL_92;
      }
      v72 = 2;
      MiReleaseSpinLockExclusive((_DWORD *)(v6 + 72), v57);
      v36 = a1;
    }
    if ( !v61 && (a4 & 0x20) == 0 || (unsigned int)MiAnyProtosAreMapped(v4, v36) )
    {
      for ( j = *(_QWORD **)(v4 + 88); j != (_QWORD *)(v4 + 88); j = (_QWORD *)*j )
      {
        MayContainPage = MiViewMayContainPage(v6, a2, a4, (_DWORD)j, v12, v64, (__int64)&v60);
        if ( MayContainPage < 0 )
        {
          v4 = a1[4];
          BugCheckParameter2 = v4;
          break;
        }
        v38 = v60;
        if ( v60 )
        {
          *v60 = v18;
          v18 = v38;
        }
      }
      if ( v72 == 2 )
      {
        v65 = *(_QWORD *)v4;
        v39 = (int *)(v65 + 72);
        v40 = KeGetCurrentIrql();
        v62 = v40;
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          KiRaiseIrqlProcessIrqlFlags(v40, 2LL);
          LOBYTE(v40) = v62;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v41 = 0;
          if ( _interlockedbittestandset(v39, 0x1Fu) )
            v41 = ExpWaitForSpinLockExclusiveAndAcquire(v39, v40, (__int64)v22);
          for ( k = *v39; (*v39 & 0xBFFFFFFF) != 0x80000000; k = *v39 )
          {
            if ( (k & 0x40000000) == 0 )
              _InterlockedOr(v39, 0x40000000u);
            if ( (++v41 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v41);
            }
            else
            {
              _mm_pause();
            }
          }
        }
        else
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v39, v40);
        }
        v43 = BugCheckParameter2;
        v59 = 0LL;
        v44 = 0;
        v45 = *(_QWORD *)(*(_QWORD *)BugCheckParameter2 + 64LL);
        v46 = BugCheckParameter2;
        do
        {
          if ( *(_QWORD *)(v43 + 8) )
          {
            v22 = *(_DWORD **)v43;
            v49 = v43;
            if ( *(_QWORD *)(*(_QWORD *)v43 + 64LL)
              && (v22[14] & 0x20) == 0
              && (*(_DWORD *)(v43 + 32) & 0x10000) == 0
              && !*(_QWORD *)(v43 + 80) )
            {
              KeBugCheckEx(0x1Au, 0x42001uLL, v43, 0LL, 0LL);
            }
            v50 = 0LL;
            if ( (v44 & 0xC) == 8
              && (*((_BYTE *)v22 + 62) & 0xC) == 0
              && (*((_QWORD *)v22 + 8) || (v22[23] & 0x10000) == 0) )
            {
              if ( (v44 & 0x10) != 0 )
                v51 = 0LL;
              else
                v51 = v44 < 0
                    ? &MiSystemPartition
                    : (ULONG *)*((_QWORD *)qword_140E2FF88
                               + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
              if ( v51 != *((ULONG **)qword_140E2FF88 + (v22[15] & 0x3FF)) )
              {
                SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v43);
                v54 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences)
                                + 48) & 0x3FFFFFFF;
                if ( v54 != 0x3FFFFFFF )
                {
                  MiUpdateSubsectionCrossPartitionRefs(v49, (unsigned int)(v54 - 1));
                  if ( v56 == 1 )
                    v50 = MiComputeCrossPartitionSectionCharges(v55);
                }
              }
            }
            if ( *((_QWORD *)v22 + 8) && (v22[14] & 0x20) == 0 && (*(_DWORD *)(v49 + 32) & 0x10000) == 0 )
            {
              v52 = *(_QWORD *)(v49 + 80);
              if ( !v52 )
                KeBugCheckEx(0x1Au, 0x42001uLL, v49, 0LL, 0LL);
              *(_QWORD *)(v49 + 80) = v52 - 1;
            }
            v59 += v50;
            if ( v45 && !*(_QWORD *)(v43 + 80) && (*(_DWORD *)(v43 + 32) & 0x10000) == 0 )
              v59 += MiInsertUnusedSubsection(v43);
            v46 = BugCheckParameter2;
          }
          if ( v43 == v46 )
            break;
          v43 = *(_QWORD *)(v43 + 16);
          if ( !v45 )
            v44 &= ~8u;
        }
        while ( v43 );
        v47 = v62;
        if ( (_BYTE)v62 == 17 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            v48 = 0LL;
            *v39 = 0;
            goto LABEL_89;
          }
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v39, retaddr);
        }
        else
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            *v39 = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v39, retaddr);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v47);
          __writecr8(v47);
        }
        v48 = 0LL;
LABEL_89:
        if ( v59 )
        {
          LOBYTE(v48) = *(_QWORD *)(v65 + 64) != 0LL;
          MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E2FF88 + (*(_WORD *)(v65 + 60) & 0x3FF)), v48, v59);
        }
        v4 = BugCheckParameter2;
        v6 = v63;
      }
    }
LABEL_92:
    v36 = a1;
    if ( v4 == a1[4] )
      break;
    v4 = *(_QWORD *)(v4 + 16);
    BugCheckParameter2 = v4;
  }
  v8 = a2;
  if ( MayContainPage >= 0 )
    goto LABEL_28;
LABEL_33:
  v26 = KeGetCurrentThread();
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 104), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v6 + 104));
  KeAbPostRelease(v6 + 104);
  v31 = v26->SpecialApcDisable++ == -1;
  if ( v31 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
    KiCheckForKernelApcDelivery(v28, v27, v29, v30);
  if ( v8 )
  {
    *(_QWORD *)(v8 + 8) = v18;
  }
  else
  {
    v32 = MiTrimSharedPageFromViews((_DWORD)v18, a3, a4, v6, v66);
    if ( MayContainPage >= 0 )
      return v32;
  }
  return (unsigned int)MayContainPage;
}
