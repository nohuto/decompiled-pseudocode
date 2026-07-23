/*
 * XREFs of MiChargeCommit @ 0x14033A7B0
 * Callers:
 *     MiPurgeSubsection @ 0x140204780 (MiPurgeSubsection.c)
 *     MiDecommitSharedPageTail @ 0x140206290 (MiDecommitSharedPageTail.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiObtainSystemCharges @ 0x14021D05C (MiObtainSystemCharges.c)
 *     MiProbeLockFrame @ 0x140238050 (MiProbeLockFrame.c)
 *     MiHardFaultPageRelease @ 0x140258B7C (MiHardFaultPageRelease.c)
 *     MiGetSubsectionCharges @ 0x1402699F8 (MiGetSubsectionCharges.c)
 *     MiGetCloneCharges @ 0x140269B50 (MiGetCloneCharges.c)
 *     MiCreateLargePfnList @ 0x14026A8C0 (MiCreateLargePfnList.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402F8C30 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiLockProtoPoolPageForce @ 0x140333E20 (MiLockProtoPoolPageForce.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 *     MiReferenceActiveSubsection @ 0x1403374A0 (MiReferenceActiveSubsection.c)
 *     SmAcquireReleaseCharges @ 0x14033A050 (SmAcquireReleaseCharges.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiChargeForWriteInProgressPage @ 0x14033A660 (MiChargeForWriteInProgressPage.c)
 *     MiChargeForLockedPage @ 0x14033AE90 (MiChargeForLockedPage.c)
 *     MmChargeResources @ 0x14033BB60 (MmChargeResources.c)
 *     MiCreateUltraThreadContext @ 0x14033BC80 (MiCreateUltraThreadContext.c)
 *     MiObtainFaultCharges @ 0x14033EB80 (MiObtainFaultCharges.c)
 *     MiAddLockedPageCharge @ 0x14033F050 (MiAddLockedPageCharge.c)
 *     MiCheckProtoPtePageState @ 0x140345BB0 (MiCheckProtoPtePageState.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     RtlpHpEnvAllocVA @ 0x14034C090 (RtlpHpEnvAllocVA.c)
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     MiSetPagesModified @ 0x1403DA5EC (MiSetPagesModified.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     MiAttemptPageFileReductionApc @ 0x1403EF420 (MiAttemptPageFileReductionApc.c)
 *     MiCreateUltraThreadContextHelper @ 0x140412880 (MiCreateUltraThreadContextHelper.c)
 *     MiReplenishUltraPageTables @ 0x1404129EC (MiReplenishUltraPageTables.c)
 *     MiObtainPoolCharges @ 0x14044DFCC (MiObtainPoolCharges.c)
 *     MiMakePartitionActive @ 0x140485044 (MiMakePartitionActive.c)
 *     MiDecommitPrivatePageTail @ 0x1404EFCE0 (MiDecommitPrivatePageTail.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14066B458 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiInitializeCommitment @ 0x140687468 (MiInitializeCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x140919BC0 (MiChargeFullProcessCommitment.c)
 *     MiChargeSegmentCommit @ 0x140974EF8 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x14098CB78 (MiCreatePagingFileMap.c)
 *     MiCreateImageFileMap @ 0x14098DFC0 (MiCreateImageFileMap.c)
 *     MiRotateToFrameBuffer @ 0x140A233E4 (MiRotateToFrameBuffer.c)
 *     MiAllocatePerSessionProtos @ 0x140A46D70 (MiAllocatePerSessionProtos.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140AB2AE0 (MiCreateFileOnlyImageFixupList.c)
 *     MmCreateProcessAddressSpace @ 0x140AE7AA8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiFreeExcessSegments @ 0x14034B7B0 (MiFreeExcessSegments.c)
 *     MiReplenishLocalCommit @ 0x140427BF0 (MiReplenishLocalCommit.c)
 *     MiExtendPageFilesIfNecessary @ 0x140463FA8 (MiExtendPageFilesIfNecessary.c)
 *     MiIssuePageExtendRequest @ 0x140464038 (MiIssuePageExtendRequest.c)
 *     MiCauseOverCommitPopup @ 0x14047AF98 (MiCauseOverCommitPopup.c)
 *     MiConsumeOverCommit @ 0x1404A43FC (MiConsumeOverCommit.c)
 *     MiPulseCommitSignal @ 0x1404CE238 (MiPulseCommitSignal.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
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
  __int64 v28; // r8
  __int64 v29; // r9
  KIRQL v30; // dl
  unsigned __int64 v31; // rcx
  bool v32; // zf
  volatile signed __int32 *v33; // rcx
  int v34; // eax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  struct _KEVENT *v37; // rcx
  struct _KEVENT *v38; // rcx
  struct _KEVENT *v39; // rcx
  struct _KEVENT *v40; // rcx
  KIRQL v41; // r12
  volatile LONG *v42; // rcx
  KIRQL v43; // al
  int v44; // edx
  int v45; // edx
  KIRQL v46; // al
  __int64 v47; // [rsp+30h] [rbp-48h]
  LARGE_INTEGER Timeout; // [rsp+38h] [rbp-40h] BYREF
  int v49; // [rsp+80h] [rbp+8h]
  unsigned __int8 v50; // [rsp+90h] [rbp+18h]
  int v51; // [rsp+98h] [rbp+20h]

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
  v49 = 0;
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
    v47 = v11;
    goto LABEL_14;
  }
  v11 = 64LL;
  v47 = 64LL;
  if ( (ULONG *)a1 != &MiSystemPartition && *(_QWORD *)(a1 + 18512) >> 6 < 0x40uLL )
  {
    v11 = *(_QWORD *)(a1 + 18512) >> 6;
    v47 = v11;
  }
LABEL_14:
  while ( 2 )
  {
    while ( 2 )
    {
      v51 = v10 & 4;
      while ( 1 )
      {
        v12 = *(_QWORD *)(a1 + 19264);
        v13 = a2 + v12;
        if ( a2 + v12 <= v12 )
        {
          v34 = v51;
          goto LABEL_57;
        }
        if ( v11 + v13 < v13 )
        {
          v34 = v10 & 4;
LABEL_57:
          if ( !v34 )
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
            ++dword_140E30284;
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
          if ( !v49 && v13 >= *(_QWORD *)(a1 + 16872) )
          {
            Timeout.QuadPart = 0LL;
            if ( (v10 & 4) == 0
              && (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0
              && KeGetCurrentIrql() < 2u
              && v14 != *(_QWORD *)(a1 + 16840)
              && *(_DWORD *)(a1 + 2444) )
            {
              v43 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
              v44 = *(_DWORD *)(a1 + 2440);
              if ( v44 )
              {
                v45 = v44 + 1;
              }
              else
              {
                *(_WORD *)(a1 + 2448) = 0;
                *(_DWORD *)(a1 + 2452) = 0;
                v45 = 1;
                *(_BYTE *)(a1 + 2450) = 6;
                *(_QWORD *)(a1 + 2464) = a1 + 2456;
                *(_QWORD *)(a1 + 2456) = a1 + 2456;
              }
              *(_DWORD *)(a1 + 2440) = v45;
              MiReleaseSpinLockExclusive((_DWORD *)(a1 + 1728), v43);
              Timeout = Mi10Milliseconds;
              KeWaitForSingleObject((PVOID)(a1 + 2448), Executive, 0, 0, &Timeout);
              v46 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
              --*(_DWORD *)(a1 + 2440);
              MiReleaseSpinLockExclusive((_DWORD *)(a1 + 1728), v46);
            }
            v49 = 1;
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
            v42 = (volatile LONG *)(a1 + 16888);
            if ( KeGetCurrentIrql() == 2 )
            {
              v41 = 17;
              ExAcquireSpinLockExclusiveAtDpcLevel(v42);
            }
            else
            {
              v41 = ExAcquireSpinLockExclusive(v42);
            }
            v36 = *(_QWORD *)(a1 + 19264);
            if ( v36 < *(_QWORD *)(a1 + 16856) )
            {
              v39 = *(struct _KEVENT **)(a1 + 296);
              if ( !v39->Header.SignalState )
                KeSetEvent(v39, 0, 0);
              v40 = *(struct _KEVENT **)(a1 + 304);
              if ( v40->Header.SignalState != 1 )
                goto LABEL_108;
              KeResetEvent(v40);
              v38 = *(struct _KEVENT **)(a1 + 312);
            }
            else
            {
              v37 = *(struct _KEVENT **)(a1 + 304);
              if ( v36 >= *(_QWORD *)(a1 + 16864) )
              {
                if ( !v37->Header.SignalState )
                  KeSetEvent(v37, 0, 0);
                if ( *(_QWORD *)(a1 + 19608) == *(_QWORD *)(a1 + 16840) )
                  KeSetEvent(*(PRKEVENT *)(a1 + 312), 0, 0);
                v38 = *(struct _KEVENT **)(a1 + 296);
                if ( v38->Header.SignalState != 1 )
                  goto LABEL_108;
              }
              else
              {
                if ( v37->Header.SignalState == 1 )
                {
                  KeResetEvent(v37);
                  KeResetEvent(*(PRKEVENT *)(a1 + 312));
                }
                v38 = *(struct _KEVENT **)(a1 + 296);
                if ( v38->Header.SignalState != 1 )
                  goto LABEL_108;
              }
            }
            KeResetEvent(v38);
LABEL_108:
            MiReleaseSpinLockExclusive((_DWORD *)(a1 + 16888), v41);
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
                v35 = v20;
                v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16832), v21, v20);
              }
              while ( v35 != v20 );
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
                  if ( v25 > v24 && v25 + v47 > v24 && v25 + v47 <= v22 )
                    MiReplenishLocalCommit(a1, CurrentPrcb);
                }
              }
            }
            return 1LL;
          }
          v11 = v47;
          goto LABEL_14;
        }
        v26 = *(_QWORD *)(a1 + 16864);
        if ( v13 >= v26 && v12 < v26 )
        {
          MiPulseCommitSignal(a1);
          v11 = v47;
        }
        v51 = v10 & 4;
        if ( (v10 & 4) != 0 )
        {
          if ( !v11 )
            ++dword_140E30280;
          goto LABEL_73;
        }
        v27 = (volatile LONG *)(a1 + 16888);
        if ( KeGetCurrentIrql() == 2 )
        {
          v50 = 17;
          ExAcquireSpinLockSharedAtDpcLevel(v27);
          v30 = 17;
        }
        else
        {
          v30 = ExAcquireSpinLockShared(v27);
          v50 = v30;
        }
        v12 = *(_QWORD *)(a1 + 19264);
        v31 = *(_QWORD *)(a1 + 19608);
        v13 = a2 + v12;
        if ( a2 + v12 > v12 && v13 + v47 >= v13 )
          break;
        MiReleaseSpinLockShared((volatile signed __int32 *)(a1 + 16888), v30, v28, v29);
        v11 = v47;
      }
      if ( v13 + v47 <= v31 )
      {
        MiReleaseSpinLockShared((volatile signed __int32 *)(a1 + 16888), v30, v28, v29);
        v11 = v47;
        continue;
      }
      break;
    }
    if ( (v10 & 2) != 0 )
    {
      MiReleaseSpinLockShared((volatile signed __int32 *)(a1 + 16888), v30, v28, v29);
      return 0LL;
    }
    v32 = v31 == *(_QWORD *)(a1 + 16840);
    v33 = (volatile signed __int32 *)(a1 + 16888);
    if ( v32 )
    {
      MiReleaseSpinLockShared(v33, v30, v28, v29);
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
    ExReleaseSpinLockSharedFromDpcLevel(v33);
    if ( v50 != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v50);
      __writecr8(v50);
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
        v11 = v47;
        continue;
      }
      ++*(_DWORD *)(a1 + 19696);
LABEL_84:
      MiCauseOverCommitPopup(a1);
      return 0LL;
    }
  }
}
