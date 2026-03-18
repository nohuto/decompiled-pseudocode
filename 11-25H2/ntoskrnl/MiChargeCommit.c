/*
 * XREFs of MiChargeCommit @ 0x14022E7B0
 * Callers:
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14020C270 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     MiReferenceActiveSubsection @ 0x1402140B0 (MiReferenceActiveSubsection.c)
 *     MiObtainSystemCharges @ 0x14022A218 (MiObtainSystemCharges.c)
 *     MiObtainFaultCharges @ 0x14022B950 (MiObtainFaultCharges.c)
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MiCreateUltraThreadContext @ 0x14022CB40 (MiCreateUltraThreadContext.c)
 *     MmChargeResources @ 0x14022E140 (MmChargeResources.c)
 *     MiChargeForLockedPage @ 0x14022E1E0 (MiChargeForLockedPage.c)
 *     SmAcquireReleaseCharges @ 0x14022E380 (SmAcquireReleaseCharges.c)
 *     MiAcquireNonPagedResources @ 0x14022E560 (MiAcquireNonPagedResources.c)
 *     MiChargeForWriteInProgressPage @ 0x14022E660 (MiChargeForWriteInProgressPage.c)
 *     MiLockProtoPoolPageForce @ 0x140231620 (MiLockProtoPoolPageForce.c)
 *     MiHardFaultPageRelease @ 0x14023EBE8 (MiHardFaultPageRelease.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiInsertInSystemSpace @ 0x1402A4B54 (MiInsertInSystemSpace.c)
 *     MiProbeLockFrame @ 0x1402ACAF0 (MiProbeLockFrame.c)
 *     RtlpHpEnvAllocVA @ 0x1402C26C0 (RtlpHpEnvAllocVA.c)
 *     MiGetCloneCharges @ 0x1402CF39C (MiGetCloneCharges.c)
 *     MiCheckProtoPtePageState @ 0x14033E110 (MiCheckProtoPtePageState.c)
 *     MiPurgeSubsection @ 0x1403400A0 (MiPurgeSubsection.c)
 *     MiDecommitSharedPageTail @ 0x140340E30 (MiDecommitSharedPageTail.c)
 *     MiObtainPoolCharges @ 0x1403790F8 (MiObtainPoolCharges.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiCreateLargePfnList @ 0x140405A3C (MiCreateLargePfnList.c)
 *     MiCreateUltraThreadContextHelper @ 0x140436B50 (MiCreateUltraThreadContextHelper.c)
 *     MiReplenishUltraPageTables @ 0x140436CB8 (MiReplenishUltraPageTables.c)
 *     MiAttemptPageFileReductionApc @ 0x14045A0D0 (MiAttemptPageFileReductionApc.c)
 *     MiGetSubsectionCharges @ 0x1404873D0 (MiGetSubsectionCharges.c)
 *     MiMakePartitionActive @ 0x14048C0A0 (MiMakePartitionActive.c)
 *     MiSetPagesModified @ 0x140493EB0 (MiSetPagesModified.c)
 *     MiDecommitPrivatePageTail @ 0x1404EE270 (MiDecommitPrivatePageTail.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14065E768 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiInitializeCommitment @ 0x14067AAA8 (MiInitializeCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1409020A0 (MiChargeFullProcessCommitment.c)
 *     MiCreatePagingFileMap @ 0x14093E008 (MiCreatePagingFileMap.c)
 *     MiCreateImageFileMap @ 0x14093F578 (MiCreateImageFileMap.c)
 *     MiChargeSegmentCommit @ 0x1409FC7C8 (MiChargeSegmentCommit.c)
 *     MiRotateToFrameBuffer @ 0x140A28F1C (MiRotateToFrameBuffer.c)
 *     MmCreateProcessAddressSpace @ 0x140A47B88 (MmCreateProcessAddressSpace.c)
 *     MiAllocatePerSessionProtos @ 0x140A58B44 (MiAllocatePerSessionProtos.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140AB4254 (MiCreateFileOnlyImageFixupList.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140323610 (MiReleaseSpinLockShared.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     MiFreeExcessSegments @ 0x1403BE140 (MiFreeExcessSegments.c)
 *     MiReplenishLocalCommit @ 0x140438C88 (MiReplenishLocalCommit.c)
 *     MiExtendPageFilesIfNecessary @ 0x14046DBD4 (MiExtendPageFilesIfNecessary.c)
 *     MiIssuePageExtendRequest @ 0x14046DC64 (MiIssuePageExtendRequest.c)
 *     MiCauseOverCommitPopup @ 0x14047F518 (MiCauseOverCommitPopup.c)
 *     MiConsumeOverCommit @ 0x1404A9058 (MiConsumeOverCommit.c)
 *     MiPulseCommitSignal @ 0x1404D5688 (MiPulseCommitSignal.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
              ++dword_140E2FEFC;
LABEL_73:
            if ( !a2 )
              goto LABEL_22;
            if ( (unsigned int)MiConsumeOverCommit(a1, a2, v11) )
              return 1LL;
            goto LABEL_1;
          }
          if ( v11 + v13 < v13 )
          {
            v32 = v10 & 4;
            goto LABEL_57;
          }
          v14 = *(_QWORD *)(a1 + 19608);
          if ( v11 + v13 <= v14 )
          {
            if ( !v48 && v13 >= *(_QWORD *)(a1 + 16872) )
            {
              Timeout.QuadPart = 0LL;
              if ( (v10 & 4) == 0 )
              {
                if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0
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
                v11 = v46;
              }
              v48 = 1;
            }
            goto LABEL_22;
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
              ++dword_140E2FEF8;
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
        v11 = v46;
LABEL_22:
        v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 19264), v13, v12);
        if ( v12 != v15 )
          continue;
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
            goto LABEL_107;
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
              goto LABEL_107;
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
              goto LABEL_107;
          }
        }
        KeResetEvent(v37);
LABEL_107:
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
              if ( v25 > v24 && v25 + v46 <= v22 && v25 + v46 > v24 )
                MiReplenishLocalCommit(a1, CurrentPrcb);
            }
          }
        }
        return 1LL;
      }
      break;
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
