/*
 * XREFs of MiCreatePrototypePtes @ 0x140261F58
 * Callers:
 *     MiAddViewsForSection @ 0x14020DA70 (MiAddViewsForSection.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14026047C (MiUpdateSystemProtoPtesTree.c)
 *     MiIncrementSubsectionViewCount @ 0x1402624F0 (MiIncrementSubsectionViewCount.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiGetSubsectionCharges @ 0x14036DF10 (MiGetSubsectionCharges.c)
 *     MiGetCommittedPages @ 0x140370A88 (MiGetCommittedPages.c)
 *     MiDecrementSubsectionViewCount @ 0x140371EA0 (MiDecrementSubsectionViewCount.c)
 *     MiControlAreaRequiresCharge @ 0x1404166A4 (MiControlAreaRequiresCharge.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 *     MiChargeLargeProtoSubsection @ 0x1407EFD94 (MiChargeLargeProtoSubsection.c)
 *     MiInitializePrototypePtes @ 0x140946874 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x140AA5B84 (MiAllocateFileExtents.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePrototypePtes(__int64 *BugCheckParameter2, __int16 a2, unsigned int a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 *v6; // r14
  void *v8; // r12
  char v9; // dl
  int SubsectionCharges; // edi
  __int16 v11; // bp
  __int64 v12; // rdi
  __int64 CommittedPages; // rsi
  int v14; // eax
  KIRQL v15; // al
  __int64 v16; // rdx
  KIRQL v17; // r13
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdx
  volatile signed __int32 *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rbp
  __int64 v26; // r8
  __int64 v27; // r9
  bool v28; // zf
  KIRQL v29; // al
  unsigned int v30; // ebp
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rbp
  int v39; // [rsp+30h] [rbp-68h]
  __int16 v40; // [rsp+38h] [rbp-60h]
  int v41; // [rsp+3Ch] [rbp-5Ch]
  ULONG_PTR Pool; // [rsp+40h] [rbp-58h]
  __int64 v43; // [rsp+48h] [rbp-50h]
  struct _KTHREAD *v44; // [rsp+50h] [rbp-48h]
  unsigned int v45; // [rsp+A0h] [rbp+8h]
  int v47; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v6 = (__int64 *)*BugCheckParameter2;
  v39 = 0;
  v47 = 0;
  v44 = CurrentThread;
  Pool = MiAllocatePool(0x112uLL, 8LL * a4);
  v8 = (void *)Pool;
  if ( Pool )
  {
    v9 = *((_BYTE *)v6 + 62) & 0xC;
    v43 = v6[8];
    if ( v9 != 0 && (a2 & 0x200) != 0 )
    {
      if ( v9 == 8 )
      {
        SubsectionCharges = -1073741811;
LABEL_33:
        ExFreePoolWithTag(v8, 0);
        return (unsigned int)SubsectionCharges;
      }
      if ( !(unsigned int)MiChargeLargeProtoSubsection(BugCheckParameter2, 1LL) )
      {
        SubsectionCharges = -1073741670;
        goto LABEL_33;
      }
      v39 = 1;
    }
    v11 = a2 | 4;
    if ( (*((_BYTE *)v6 + 62) & 0xC) != 4 )
      v11 = a2;
    v40 = v11;
    MiInitializePrototypePtes(Pool);
    v12 = v43;
    if ( v43 )
    {
      CommittedPages = a3;
    }
    else if ( v6[8] )
    {
      CommittedPages = *(_QWORD *)(*v6 + 16);
    }
    else
    {
      CommittedPages = v6[15] & 0xFFFFFFFFFLL;
    }
    if ( (v11 & 4) != 0 )
    {
      v14 = 1;
      v45 = 1;
    }
    else
    {
      v14 = MiControlAreaRequiresCharge(v6, (v11 & 0x80) != 0 ? 2 : 0);
      v45 = v14;
      if ( !v14 )
      {
        CommittedPages = 0LL;
        SubsectionCharges = -1073740277;
        goto LABEL_27;
      }
    }
    v47 = 0;
    if ( v14 == 2 )
      goto LABEL_64;
    CommittedPages = 0LL;
    v47 = 0;
    while ( 1 )
    {
      if ( !v12 )
      {
        --CurrentThread->SpecialApcDisable;
        v47 = 1;
        v22 = (volatile signed __int32 *)(*v6 + 40);
        v23 = KeAbPreAcquire(v22, 0LL, 0LL);
        v24 = v23;
        if ( _interlockedbittestandset64(v22, 0LL) )
          ExfAcquirePushLockExclusiveEx(v22, v23, v22);
        v12 = v43;
        if ( v24 )
          *(_BYTE *)(v24 + 10) = 1;
      }
      v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v6 + 18);
      v16 = v45;
      v17 = v15;
      if ( v45 != 2 )
        break;
      if ( v12 )
      {
        if ( CommittedPages == *((_DWORD *)BugCheckParameter2 + 11)
                             - (*((_DWORD *)BugCheckParameter2 + 13) & 0x3FFFFFFF) )
          break;
        v30 = CommittedPages;
        CommittedPages = *((_DWORD *)BugCheckParameter2 + 11) - (*((_DWORD *)BugCheckParameter2 + 13) & 0x3FFFFFFFu);
      }
      else
      {
        if ( CommittedPages == MiGetCommittedPages(v6) )
          break;
        v30 = CommittedPages;
        CommittedPages = MiGetCommittedPages(v6);
      }
      LOBYTE(v16) = v17;
      MiReleaseSpinLockExclusive(v6 + 9, v16);
      if ( v12 )
      {
        CurrentThread = v44;
      }
      else
      {
        v31 = *v6;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(*v6 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v31 + 40));
        KeAbPostRelease(v31 + 40);
        CurrentThread = v44;
        v28 = v44->SpecialApcDisable++ == -1;
        if ( v28 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v44->ApcState.ApcListHead[0].Flink != &v44->152 )
          KiCheckForKernelApcDelivery(v33, v32, v34, v35);
        v12 = v43;
        v47 = 0;
      }
      if ( v30 )
        MiReturnCrossPartitionSectionCharges(
          *((_QWORD *)qword_140E2FF88 + (*((_WORD *)v6 + 30) & 0x3FF)),
          v12 != 0,
          v30);
LABEL_64:
      if ( CommittedPages )
      {
        SubsectionCharges = MiGetSubsectionCharges(BugCheckParameter2, CommittedPages);
        if ( SubsectionCharges < 0 )
        {
          CommittedPages = 0LL;
          goto LABEL_36;
        }
        v12 = v43;
      }
    }
    SubsectionCharges = 0;
    if ( BugCheckParameter2[1] )
    {
      LOBYTE(v16) = v17;
      MiReleaseSpinLockExclusive(v6 + 9, v16);
      SubsectionCharges = -1073741302;
    }
    else
    {
      v18 = MiIncrementSubsectionViewCount((ULONG_PTR)BugCheckParameter2);
      v41 = v18;
      if ( v18 != 1 )
      {
        v20 = 0LL;
        if ( v18 == 3 )
          CommittedPages = 0LL;
        if ( (*((_BYTE *)v6 + 62) & 0xC) != 0 )
        {
          LOBYTE(v20) = v17;
          MiReleaseSpinLockExclusive(v6 + 9, v20);
          SubsectionCharges = MiAllocateFileExtents((ULONG_PTR)BugCheckParameter2, (v40 & 0x200 | 0x28u) >> 3, -1);
          if ( SubsectionCharges < 0 )
          {
            v8 = (void *)Pool;
            goto LABEL_27;
          }
          if ( (*((_BYTE *)v6 + 62) & 0xC) == 4 )
            return (unsigned int)SubsectionCharges;
          v29 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v6 + 18);
          v20 = 1LL;
          SubsectionCharges = 0;
          v17 = v29;
        }
        if ( v43 )
          *((_DWORD *)BugCheckParameter2 + 8) |= 1u;
        if ( !(_DWORD)v20 && BugCheckParameter2[1] )
        {
          SubsectionCharges = -1073741302;
          v36 = MiDecrementSubsectionViewCount((ULONG_PTR)BugCheckParameter2);
          LOBYTE(v37) = v17;
          v38 = v36;
          MiReleaseSpinLockExclusive(v6 + 9, v37);
          if ( v41 == 3 )
            CommittedPages = v38;
          goto LABEL_36;
        }
        if ( (*((_BYTE *)v6 + 62) & 0xC) == 0 )
        {
          BugCheckParameter2[1] = Pool;
          MiUpdateSystemProtoPtesTree((__int64)BugCheckParameter2 + (v43 != 0 ? 120LL : 56LL), 3);
        }
        LOBYTE(v20) = v17;
        MiReleaseSpinLockExclusive(v6 + 9, v20);
        v8 = 0LL;
        v39 = 0;
LABEL_27:
        if ( !v43 && v47 )
        {
          v25 = *v6;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(*v6 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v25 + 40));
          KeAbPostRelease(v25 + 40);
          v28 = v44->SpecialApcDisable++ == -1;
          if ( v28 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v44->ApcState.ApcListHead[0].Flink != &v44->152 )
            KiCheckForKernelApcDelivery(v44, 1LL, v26, v27);
        }
        if ( v39 )
          MiChargeLargeProtoSubsection(BugCheckParameter2, 0LL);
        if ( CommittedPages )
          MiReturnCrossPartitionSectionCharges(
            *((_QWORD *)qword_140E2FF88 + (*((_WORD *)v6 + 30) & 0x3FF)),
            v43 != 0,
            CommittedPages);
        if ( !v8 )
          return (unsigned int)SubsectionCharges;
        goto LABEL_33;
      }
      LOBYTE(v19) = v17;
      MiReleaseSpinLockExclusive(v6 + 9, v19);
      SubsectionCharges = -1073741670;
    }
LABEL_36:
    v8 = (void *)Pool;
    goto LABEL_27;
  }
  return 3221225626LL;
}
