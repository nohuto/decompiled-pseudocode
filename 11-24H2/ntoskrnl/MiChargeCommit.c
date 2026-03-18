/*
 * XREFs of MiChargeCommit @ 0x140211450
 * Callers:
 *     MiReferenceActiveSubsection @ 0x14020E140 (MiReferenceActiveSubsection.c)
 *     SmAcquireReleaseCharges @ 0x140210CF0 (SmAcquireReleaseCharges.c)
 *     MiAcquireNonPagedResources @ 0x140211200 (MiAcquireNonPagedResources.c)
 *     MiChargeForWriteInProgressPage @ 0x140211300 (MiChargeForWriteInProgressPage.c)
 *     MiChargeForLockedPage @ 0x140211B30 (MiChargeForLockedPage.c)
 *     MmChargeResources @ 0x140212800 (MmChargeResources.c)
 *     MiResolveProtoPteFault @ 0x140214BB0 (MiResolveProtoPteFault.c)
 *     MiLockProtoPoolPageForce @ 0x140215A80 (MiLockProtoPoolPageForce.c)
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiCheckProtoPtePageState @ 0x14023BE50 (MiCheckProtoPtePageState.c)
 *     MiPurgeSubsection @ 0x14023C9F0 (MiPurgeSubsection.c)
 *     MiDecommitSharedPageTail @ 0x14023E140 (MiDecommitSharedPageTail.c)
 *     MiProbeLockFrame @ 0x140282AC0 (MiProbeLockFrame.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     RtlpHpEnvAllocVA @ 0x1402EAA50 (RtlpHpEnvAllocVA.c)
 *     MiHardFaultPageRelease @ 0x1402F303C (MiHardFaultPageRelease.c)
 *     MiCreateUltraThreadContext @ 0x1402F3EF0 (MiCreateUltraThreadContext.c)
 *     MiObtainFaultCharges @ 0x1402F6A70 (MiObtainFaultCharges.c)
 *     MiAddLockedPageCharge @ 0x1402F6F40 (MiAddLockedPageCharge.c)
 *     MiObtainSystemCharges @ 0x1402F779C (MiObtainSystemCharges.c)
 *     MiGetSubsectionCharges @ 0x14036DF10 (MiGetSubsectionCharges.c)
 *     MiGetCloneCharges @ 0x14036E068 (MiGetCloneCharges.c)
 *     MiCreateLargePfnList @ 0x14036E934 (MiCreateLargePfnList.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14039B930 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     MiCreateUltraThreadContextHelper @ 0x1403C6C4C (MiCreateUltraThreadContextHelper.c)
 *     MiReplenishUltraPageTables @ 0x1403C6DB8 (MiReplenishUltraPageTables.c)
 *     MiAttemptPageFileReductionApc @ 0x1403F9310 (MiAttemptPageFileReductionApc.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 *     MiObtainPoolCharges @ 0x140458B1C (MiObtainPoolCharges.c)
 *     MiMakePartitionActive @ 0x14048A21C (MiMakePartitionActive.c)
 *     MiSetPagesModified @ 0x140492C90 (MiSetPagesModified.c)
 *     MiDecommitPrivatePageTail @ 0x1404F2240 (MiDecommitPrivatePageTail.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14066A288 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiInitializeCommitment @ 0x140686338 (MiInitializeCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1408E3010 (MiChargeFullProcessCommitment.c)
 *     MiChargeSegmentCommit @ 0x1408F7C78 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x140942908 (MiCreatePagingFileMap.c)
 *     MiCreateImageFileMap @ 0x140944150 (MiCreateImageFileMap.c)
 *     MiRotateToFrameBuffer @ 0x140A2E9A4 (MiRotateToFrameBuffer.c)
 *     MiAllocatePerSessionProtos @ 0x140A4FFC0 (MiAllocatePerSessionProtos.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140AB861C (MiCreateFileOnlyImageFixupList.c)
 *     MmCreateProcessAddressSpace @ 0x140AE61C8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiFreeExcessSegments @ 0x1402EA170 (MiFreeExcessSegments.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     MiReplenishLocalCommit @ 0x140434C90 (MiReplenishLocalCommit.c)
 *     MiExtendPageFilesIfNecessary @ 0x14046B3A8 (MiExtendPageFilesIfNecessary.c)
 *     MiIssuePageExtendRequest @ 0x14046B438 (MiIssuePageExtendRequest.c)
 *     MiCauseOverCommitPopup @ 0x140480358 (MiCauseOverCommitPopup.c)
 *     MiConsumeOverCommit @ 0x1404AA12C (MiConsumeOverCommit.c)
 *     MiPulseCommitSignal @ 0x1404D4F60 (MiPulseCommitSignal.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiChargeCommit(__int64 a1, unsigned __int64 a2, char a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 i; // rcx
  signed __int32 v8; // eax
  char v10; // r14
  __int64 v11; // rcx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rcx
  signed __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  unsigned __int64 CachedCommit; // rax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // rax
  volatile LONG *v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  bool v30; // zf
  volatile LONG *v31; // rcx
  int v32; // eax
  KIRQL v33; // al
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  struct _KEVENT *v36; // rcx
  struct _KEVENT *v37; // rcx
  struct _KEVENT *v38; // rcx
  struct _KEVENT *v39; // rcx
  KIRQL v40; // r12
  volatile LONG *v41; // rcx
  KIRQL v42; // al
  int v43; // edx
  int v44; // edx
  KIRQL v45; // al
  __int64 v46; // [rsp+30h] [rbp-48h]
  LARGE_INTEGER Timeout; // [rsp+38h] [rbp-40h] BYREF
  int v48; // [rsp+80h] [rbp+8h]
  unsigned __int8 v49; // [rsp+90h] [rbp+18h]
  int v50; // [rsp+98h] [rbp+20h]

LABEL_1:
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (ULONG *)a1 == &MiSystemPartition && (a3 & 0x10) == 0 )
  {
    _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
    for ( i = CurrentPrcb->CachedCommit; a2 <= i; i = v8 )
    {
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedCommit, i - a2, i);
      if ( v8 == i )
        return 1LL;
    }
  }
  v48 = 0;
  v10 = a3 | 2;
  if ( (a3 & 4) == 0 )
    v10 = a3;
  if ( (v10 & 8) == 0 )
  {
    if ( (v10 & 7) != 0 )
      v11 = 0LL;
    else
      v11 = *(_QWORD *)(a1 + 16896);
    goto LABEL_13;
  }
  v10 |= 2u;
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0
    && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    v10 |= 4u;
    v11 = 0LL;
LABEL_13:
    v46 = v11;
    goto LABEL_14;
  }
  v11 = 64LL;
  v46 = 64LL;
  if ( (ULONG *)a1 != &MiSystemPartition && *(_QWORD *)(a1 + 18512) >> 6 < 0x40uLL )
  {
    v11 = *(_QWORD *)(a1 + 18512) >> 6;
    v46 = v11;
  }
LABEL_14:
  while ( 2 )
  {
    while ( 2 )
    {
      v50 = v10 & 4;
      while ( 1 )
      {
        v12 = *(_QWORD *)(a1 + 19264);
        v13 = a2 + v12;
        if ( a2 + v12 <= v12 )
        {
          v32 = v50;
          goto LABEL_57;
        }
        if ( v11 + v13 < v13 )
        {
          v32 = v10 & 4;
LABEL_57:
          if ( !v32 )
          {
            if ( (v10 & 2) == 0 )
            {
              ++*(_DWORD *)(a1 + 19708);
              if ( (v10 & 1) == 0 )
                MiCauseOverCommitPopup(a1);
              MiPulseCommitSignal(a1);
            }
            return 0LL;
          }
          if ( !v11 )
            ++dword_140E30144;
LABEL_73:
          if ( a2 )
          {
            if ( !(unsigned int)MiConsumeOverCommit(a1, a2, v11) )
              goto LABEL_1;
            return 1LL;
          }
          goto LABEL_22;
        }
        v14 = *(_QWORD *)(a1 + 19608);
        if ( v11 + v13 <= v14 )
        {
          if ( !v48 && v13 >= *(_QWORD *)(a1 + 16872) )
          {
            Timeout.QuadPart = 0LL;
            if ( (v10 & 4) == 0
              && (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0
              && KeGetCurrentIrql() < 2u
              && v14 != *(_QWORD *)(a1 + 16840)
              && *(_DWORD *)(a1 + 2444) )
            {
              v42 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
              v43 = *(_DWORD *)(a1 + 2440);
              if ( v43 )
              {
                v44 = v43 + 1;
              }
              else
              {
                *(_WORD *)(a1 + 2448) = 0;
                *(_DWORD *)(a1 + 2452) = 0;
                v44 = 1;
                *(_BYTE *)(a1 + 2450) = 6;
                *(_QWORD *)(a1 + 2464) = a1 + 2456;
                *(_QWORD *)(a1 + 2456) = a1 + 2456;
              }
              *(_DWORD *)(a1 + 2440) = v44;
              MiReleaseSpinLockExclusive(a1 + 1728, v42);
              Timeout = Mi10Milliseconds;
              KeWaitForSingleObject((PVOID)(a1 + 2448), Executive, 0, 0, &Timeout);
              v45 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
              --*(_DWORD *)(a1 + 2440);
              MiReleaseSpinLockExclusive(a1 + 1728, v45);
            }
            v48 = 1;
          }
LABEL_22:
          v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 19264), v13, v12);
          if ( v12 == v15 )
          {
            v16 = *(_QWORD *)(a1 + 16864);
            v17 = v15 + a2;
            v18 = *(_QWORD *)(a1 + 16856);
            if ( v15 + a2 > v15 )
            {
              if ( (v17 < v16 || v15 >= v16) && (v17 < v18 || v15 >= v18) )
                goto LABEL_26;
            }
            else if ( (v15 < v16 || v17 >= v16) && (v15 < v18 || v17 >= v18) )
            {
              goto LABEL_26;
            }
            v41 = (volatile LONG *)(a1 + 16888);
            if ( KeGetCurrentIrql() == 2 )
            {
              v40 = 17;
              ExAcquireSpinLockExclusiveAtDpcLevel(v41);
            }
            else
            {
              v40 = ExAcquireSpinLockExclusive(v41);
            }
            v35 = *(_QWORD *)(a1 + 19264);
            if ( v35 < *(_QWORD *)(a1 + 16856) )
            {
              v38 = *(struct _KEVENT **)(a1 + 296);
              if ( !v38->Header.SignalState )
                KeSetEvent(v38, 0, 0);
              v39 = *(struct _KEVENT **)(a1 + 304);
              if ( v39->Header.SignalState != 1 )
                goto LABEL_108;
              KeResetEvent(v39);
              v37 = *(struct _KEVENT **)(a1 + 312);
            }
            else
            {
              v36 = *(struct _KEVENT **)(a1 + 304);
              if ( v35 >= *(_QWORD *)(a1 + 16864) )
              {
                if ( !v36->Header.SignalState )
                  KeSetEvent(v36, 0, 0);
                if ( *(_QWORD *)(a1 + 19608) == *(_QWORD *)(a1 + 16840) )
                  KeSetEvent(*(PRKEVENT *)(a1 + 312), 0, 0);
                v37 = *(struct _KEVENT **)(a1 + 296);
                if ( v37->Header.SignalState != 1 )
                  goto LABEL_108;
              }
              else
              {
                if ( v36->Header.SignalState == 1 )
                {
                  KeResetEvent(v36);
                  KeResetEvent(*(PRKEVENT *)(a1 + 312));
                }
                v37 = *(struct _KEVENT **)(a1 + 296);
                if ( v37->Header.SignalState != 1 )
                  goto LABEL_108;
              }
            }
            KeResetEvent(v37);
LABEL_108:
            MiReleaseSpinLockExclusive(a1 + 16888, v40);
LABEL_26:
            if ( (v10 & 0x10) == 0 )
            {
              v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 19328), a2);
              v20 = *(_QWORD *)(a1 + 16832);
              v21 = a2 + v19;
              do
              {
                if ( v21 <= v20 )
                  break;
                v34 = v20;
                v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16832), v21, v20);
              }
              while ( v34 != v20 );
            }
            if ( (v10 & 2) == 0 )
            {
              v22 = *(_QWORD *)(a1 + 19608);
              MiExtendPageFilesIfNecessary(a1, v17, v22);
              if ( (v10 & 1) == 0 && v17 >= *(_QWORD *)(a1 + 16864) && v22 == *(_QWORD *)(a1 + 16840) )
                MiFreeExcessSegments(a1);
              if ( (ULONG *)a1 == &MiSystemPartition )
              {
                CachedCommit = CurrentPrcb->CachedCommit;
                if ( CachedCommit < 0x80 )
                {
                  v24 = v17;
                  v25 = 256 - CachedCommit + v17;
                  if ( v25 > v24 && v25 + v46 > v24 && v25 + v46 <= v22 )
                    MiReplenishLocalCommit(a1, CurrentPrcb);
                }
              }
            }
            return 1LL;
          }
          v11 = v46;
          goto LABEL_14;
        }
        v26 = *(_QWORD *)(a1 + 16864);
        if ( v13 >= v26 && v12 < v26 )
        {
          MiPulseCommitSignal(a1);
          v11 = v46;
        }
        v50 = v10 & 4;
        if ( (v10 & 4) != 0 )
        {
          if ( !v11 )
            ++dword_140E30140;
          goto LABEL_73;
        }
        v27 = (volatile LONG *)(a1 + 16888);
        if ( KeGetCurrentIrql() == 2 )
        {
          v49 = 17;
          ExAcquireSpinLockSharedAtDpcLevel(v27);
          LOBYTE(v28) = 17;
        }
        else
        {
          v33 = ExAcquireSpinLockShared(v27);
          v28 = v33;
          v49 = v33;
        }
        v12 = *(_QWORD *)(a1 + 19264);
        v29 = *(_QWORD *)(a1 + 19608);
        v13 = a2 + v12;
        if ( a2 + v12 > v12 && v13 + v46 >= v13 )
          break;
        MiReleaseSpinLockShared(a1 + 16888, v28);
        v11 = v46;
      }
      if ( v13 + v46 <= v29 )
      {
        MiReleaseSpinLockShared(a1 + 16888, v28);
        v11 = v46;
        continue;
      }
      break;
    }
    if ( (v10 & 2) != 0 )
    {
      MiReleaseSpinLockShared(a1 + 16888, v28);
      return 0LL;
    }
    v30 = v29 == *(_QWORD *)(a1 + 16840);
    v31 = (volatile LONG *)(a1 + 16888);
    if ( v30 )
    {
      MiReleaseSpinLockShared(v31, v28);
      ++*(_DWORD *)(a1 + 19700);
      if ( (ULONG *)a1 != &MiSystemPartition )
        return 0LL;
      if ( (v10 & 1) != 0 )
      {
        MiIssuePageExtendRequest(a1, a2, 10LL, 0LL);
        return 0LL;
      }
      if ( !(unsigned int)MiIssuePageExtendRequest(a1, a2, 8LL, 0LL) )
        goto LABEL_84;
      goto LABEL_22;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v31);
    if ( v49 != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v49);
      __writecr8(v49);
    }
    if ( (v10 & 1) != 0 )
    {
      ++*(_DWORD *)(a1 + 19704);
      MiIssuePageExtendRequest(a1, 4096LL, 2LL, 0LL);
      return 0LL;
    }
    else
    {
      if ( (unsigned int)MiIssuePageExtendRequest(a1, a2, 0LL, 255LL) )
      {
        v11 = v46;
        continue;
      }
      ++*(_DWORD *)(a1 + 19696);
LABEL_84:
      MiCauseOverCommitPopup(a1);
      return 0LL;
    }
  }
}
