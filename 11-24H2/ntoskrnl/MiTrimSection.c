/*
 * XREFs of MiTrimSection @ 0x1403612B0
 * Callers:
 *     MiTrimSharedPage @ 0x14025A33C (MiTrimSharedPage.c)
 *     MmTrimSection @ 0x1404724C4 (MmTrimSection.c)
 *     MiLocateSharedPageViews @ 0x14067A2C0 (MiLocateSharedPageViews.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiInsertUnusedSubsection @ 0x140259F70 (MiInsertUnusedSubsection.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14026B278 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiGetSharedProtos @ 0x14030CC0C (MiGetSharedProtos.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiReferenceSubsection @ 0x140338AB0 (MiReferenceSubsection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiViewMayContainPage @ 0x140361C90 (MiViewMayContainPage.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     MiUnlockControlAreaFileObjectShared @ 0x1404386CC (MiUnlockControlAreaFileObjectShared.c)
 *     MiAnyProtosAreMapped @ 0x1404506B8 (MiAnyProtosAreMapped.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x1404C8FF8 (MiComputeCrossPartitionSectionCharges.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F781C (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiTrimSection(_QWORD *a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // r12
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
  char *v21; // rdi
  __int64 v22; // r9
  _DWORD *v23; // r8
  unsigned __int8 CurrentIrql; // di
  _QWORD *i; // rdi
  _QWORD *v26; // rcx
  struct _KTHREAD *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  bool v32; // zf
  unsigned int v33; // eax
  signed __int32 v35; // eax
  signed __int32 v36; // ett
  _QWORD *v37; // rax
  _QWORD *j; // rdi
  _QWORD *v39; // rax
  int *v40; // r15
  __int64 v41; // rcx
  unsigned int v42; // edi
  int k; // edx
  ULONG_PTR v44; // rdi
  char v45; // r12
  __int64 v46; // r13
  ULONG_PTR v47; // rax
  unsigned __int8 v48; // di
  __int64 v49; // rdx
  __int64 v50; // r8
  ULONG_PTR v51; // r10
  __int64 v52; // r11
  ULONG *v53; // rax
  __int64 v54; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  int v56; // r9d
  __int64 v57; // rcx
  int v58; // r9d
  KIRQL v59; // di
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-A8h]
  __int64 v61; // [rsp+48h] [rbp-A0h]
  _QWORD *v62; // [rsp+50h] [rbp-98h] BYREF
  int v63; // [rsp+58h] [rbp-90h]
  __int64 v64; // [rsp+60h] [rbp-88h]
  __int64 v65; // [rsp+68h] [rbp-80h]
  __int64 v66; // [rsp+70h] [rbp-78h]
  __int64 v67; // [rsp+78h] [rbp-70h]
  unsigned __int64 v68; // [rsp+88h] [rbp-60h]
  __int128 v69; // [rsp+90h] [rbp-58h]
  __int64 retaddr; // [rsp+E8h] [rbp+0h]
  int v74; // [rsp+108h] [rbp+20h]

  v4 = a1[3];
  v5 = a1[1];
  v69 = 0LL;
  v62 = 0LL;
  v6 = *(_QWORD *)v4;
  v65 = *(_QWORD *)v4;
  v63 = a4 & 1;
  v8 = a2;
  v68 = v5;
  BugCheckParameter2 = v4;
  if ( (a4 & 1) != 0 && (!*(_QWORD *)(v6 + 64) || (*(_DWORD *)(v6 + 56) & 0x20) != 0) )
    return 3221225608LL;
  v10 = *(_QWORD *)(v4 + 8);
  if ( (*(_DWORD *)(v6 + 56) & 0x20) != 0 )
  {
    if ( v5 < v10 || v5 >= v10 + 8LL * *(unsigned int *)(v4 + 44) )
      v12 = ((unsigned __int64)*(unsigned int *)(v4 + 36) << 9)
          + (((v5 << 9) - (*(_QWORD *)(MiGetSharedProtos(v6, 0xFFFFFFFF, v4) + 72) << 9)) & 0xFFFFFFFFFFFFF000uLL);
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
          + (((v13 << 9) - (*(_QWORD *)(MiGetSharedProtos(*(_QWORD *)v14, 0xFFFFFFFF, v14) + 72) << 9)) & 0xFFFFFFFFFFFFF000uLL);
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
  v66 = v17 + 4096;
  CurrentThread = KeGetCurrentThread();
  MayContainPage = 0;
  --CurrentThread->SpecialApcDisable;
  v21 = (char *)KeAbPreAcquire(v6 + 104, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 104), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v6 + 104), 0, v21, v6 + 104);
  if ( v21 )
    v21[10] = 1;
  v23 = (_DWORD *)(v6 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    v23 = (_DWORD *)(v6 + 72);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v23);
    v35 = *v23 & 0x7FFFFFFF;
    while ( 1 )
    {
      v36 = v35;
      v35 = _InterlockedCompareExchange(v23, v35 + 1, v35);
      if ( v36 == v35 )
        break;
      if ( v35 < 0 )
      {
        ExpWaitForSpinLockSharedAndAcquire(v23, CurrentIrql, (__int64)v23, v22);
        goto LABEL_19;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v23, CurrentIrql);
LABEL_19:
    v23 = (_DWORD *)(v6 + 72);
  }
  if ( !*(_QWORD *)(v6 + 40) )
  {
    MiReleaseSpinLockShared(v23, CurrentIrql, (__int64)v23, v22);
    MiUnlockControlAreaFileObjectShared(v6);
    return 0LL;
  }
  *(_QWORD *)&v69 = *(_QWORD *)(v6 + 8);
  if ( CurrentIrql == 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(v23);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v23, 0xBFFFFFFF);
      _InterlockedDecrement(v23);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v23, retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( (*(_DWORD *)(v6 + 56) & 0x20) != 0 || !*(_QWORD *)(v6 + 64) )
  {
LABEL_28:
    for ( i = (_QWORD *)v69; i != (_QWORD *)(v6 + 8); i = (_QWORD *)*i )
    {
      MayContainPage = MiViewMayContainPage(v6, v8, a4, (_DWORD)i, v12, v66, (__int64)&v62);
      if ( MayContainPage < 0 )
        break;
      v26 = v62;
      if ( v62 )
      {
        *v62 = v18;
        v18 = v26;
      }
    }
    goto LABEL_33;
  }
  v37 = a1;
  while ( 1 )
  {
    v74 = 1;
    if ( v4 != v37[3] && v4 != v37[4] )
    {
      v59 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72));
      if ( !*(_DWORD *)(v4 + 104) || (int)MiReferenceSubsection(v4, 0) <= 1 )
      {
        MiReleaseSpinLockExclusive((_DWORD *)(v6 + 72), v59);
        goto LABEL_92;
      }
      v74 = 2;
      MiReleaseSpinLockExclusive((_DWORD *)(v6 + 72), v59);
      v37 = a1;
    }
    if ( !v63 && (a4 & 0x20) == 0 || (unsigned int)MiAnyProtosAreMapped(v4, v37) )
    {
      for ( j = *(_QWORD **)(v4 + 88); j != (_QWORD *)(v4 + 88); j = (_QWORD *)*j )
      {
        MayContainPage = MiViewMayContainPage(v6, a2, a4, (_DWORD)j, v12, v66, (__int64)&v62);
        if ( MayContainPage < 0 )
        {
          v4 = a1[4];
          BugCheckParameter2 = v4;
          break;
        }
        v39 = v62;
        if ( v62 )
        {
          *v62 = v18;
          v18 = v39;
        }
      }
      if ( v74 == 2 )
      {
        v67 = *(_QWORD *)v4;
        v40 = (int *)(v67 + 72);
        v41 = KeGetCurrentIrql();
        v64 = v41;
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          KiRaiseIrqlProcessIrqlFlags(v41, 2LL);
          LOBYTE(v41) = v64;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v42 = 0;
          if ( _interlockedbittestandset(v40, 0x1Fu) )
            v42 = ExpWaitForSpinLockExclusiveAndAcquire(v40, v41);
          for ( k = *v40; (*v40 & 0xBFFFFFFF) != 0x80000000; k = *v40 )
          {
            if ( (k & 0x40000000) == 0 )
              _InterlockedOr(v40, 0x40000000u);
            if ( (++v42 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v42);
            }
            else
            {
              _mm_pause();
            }
          }
        }
        else
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v40, v41);
        }
        v44 = BugCheckParameter2;
        v61 = 0LL;
        v45 = 0;
        v46 = *(_QWORD *)(*(_QWORD *)BugCheckParameter2 + 64LL);
        v47 = BugCheckParameter2;
        do
        {
          if ( *(_QWORD *)(v44 + 8) )
          {
            v50 = *(_QWORD *)v44;
            v51 = v44;
            if ( *(_QWORD *)(*(_QWORD *)v44 + 64LL)
              && (*(_DWORD *)(v50 + 56) & 0x20) == 0
              && (*(_DWORD *)(v44 + 32) & 0x10000) == 0
              && !*(_QWORD *)(v44 + 80) )
            {
              KeBugCheckEx(0x1Au, 0x42001uLL, v44, 0LL, 0LL);
            }
            v52 = 0LL;
            if ( (v45 & 0xC) == 8
              && (*(_BYTE *)(v50 + 62) & 0xC) == 0
              && (*(_QWORD *)(v50 + 64) || (*(_DWORD *)(v50 + 92) & 0x10000) == 0) )
            {
              if ( (v45 & 0x10) != 0 )
                v53 = 0LL;
              else
                v53 = v45 < 0
                    ? &MiSystemPartition
                    : (ULONG *)*((_QWORD *)qword_140E300C8
                               + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
              if ( v53 != *((ULONG **)qword_140E300C8 + (*(_WORD *)(v50 + 60) & 0x3FF)) )
              {
                SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v44);
                v56 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences)
                                + 48) & 0x3FFFFFFF;
                if ( v56 != 0x3FFFFFFF )
                {
                  MiUpdateSubsectionCrossPartitionRefs(v51, (unsigned int)(v56 - 1));
                  if ( v58 == 1 )
                    v52 = MiComputeCrossPartitionSectionCharges(v57);
                }
              }
            }
            if ( *(_QWORD *)(v50 + 64) && (*(_DWORD *)(v50 + 56) & 0x20) == 0 && (*(_DWORD *)(v51 + 32) & 0x10000) == 0 )
            {
              v54 = *(_QWORD *)(v51 + 80);
              if ( !v54 )
                KeBugCheckEx(0x1Au, 0x42001uLL, v51, 0LL, 0LL);
              *(_QWORD *)(v51 + 80) = v54 - 1;
            }
            v61 += v52;
            if ( v46 && !*(_QWORD *)(v44 + 80) && (*(_DWORD *)(v44 + 32) & 0x10000) == 0 )
              v61 += MiInsertUnusedSubsection(v44);
            v47 = BugCheckParameter2;
          }
          if ( v44 == v47 )
            break;
          v44 = *(_QWORD *)(v44 + 16);
          if ( !v46 )
            v45 &= ~8u;
        }
        while ( v44 );
        v48 = v64;
        if ( (_BYTE)v64 == 17 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            v49 = 0LL;
            *v40 = 0;
            goto LABEL_89;
          }
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v40, retaddr);
        }
        else
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            *v40 = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v40, retaddr);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v48);
          __writecr8(v48);
        }
        v49 = 0LL;
LABEL_89:
        if ( v61 )
        {
          LOBYTE(v49) = *(_QWORD *)(v67 + 64) != 0LL;
          MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E300C8 + (*(_WORD *)(v67 + 60) & 0x3FF)), v49, v61);
        }
        v4 = BugCheckParameter2;
        v6 = v65;
      }
    }
LABEL_92:
    v37 = a1;
    if ( v4 == a1[4] )
      break;
    v4 = *(_QWORD *)(v4 + 16);
    BugCheckParameter2 = v4;
  }
  v8 = a2;
  if ( MayContainPage >= 0 )
    goto LABEL_28;
LABEL_33:
  v27 = KeGetCurrentThread();
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 104), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v6 + 104));
  KeAbPostRelease(v6 + 104);
  v32 = v27->SpecialApcDisable++ == -1;
  if ( v32 && ($727077A9B6E167EAE1398C74674DC5A5 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
    KiCheckForKernelApcDelivery(v29, v28, v30, v31);
  if ( v8 )
  {
    *(_QWORD *)(v8 + 8) = v18;
  }
  else
  {
    v33 = MiTrimSharedPageFromViews((_DWORD)v18, a3, a4, v6, v68);
    if ( MayContainPage >= 0 )
      return v33;
  }
  return (unsigned int)MayContainPage;
}
