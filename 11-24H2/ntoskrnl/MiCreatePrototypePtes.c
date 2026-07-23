/*
 * XREFs of MiCreatePrototypePtes @ 0x1402751A4
 * Callers:
 *     MiAddViewsForSection @ 0x140336DD0 (MiAddViewsForSection.c)
 * Callees:
 *     MiGetCommittedPages @ 0x140204018 (MiGetCommittedPages.c)
 *     MiDecrementSubsectionViewCount @ 0x14025A760 (MiDecrementSubsectionViewCount.c)
 *     MiGetSubsectionCharges @ 0x1402699F8 (MiGetSubsectionCharges.c)
 *     MiIncrementSubsectionViewCount @ 0x1402743B0 (MiIncrementSubsectionViewCount.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140290A8C (MiUpdateSystemProtoPtesTree.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiControlAreaRequiresCharge @ 0x140394370 (MiControlAreaRequiresCharge.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiChargeLargeProtoSubsection @ 0x1407F0364 (MiChargeLargeProtoSubsection.c)
 *     MiInitializePrototypePtes @ 0x140989EA4 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x140AA0BF4 (MiAllocateFileExtents.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePrototypePtes(ULONG_PTR BugCheckParameter2, __int16 a2, unsigned int a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v6; // r14
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
  unsigned int v18; // ebp
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdx
  volatile signed __int32 *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rbp
  bool v27; // zf
  KIRQL v28; // al
  unsigned int v29; // ebp
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rbp
  int v34; // [rsp+30h] [rbp-68h]
  int v35; // [rsp+34h] [rbp-64h]
  __int16 v36; // [rsp+38h] [rbp-60h]
  int v37; // [rsp+3Ch] [rbp-5Ch]
  ULONG_PTR Pool; // [rsp+40h] [rbp-58h]
  __int64 v39; // [rsp+48h] [rbp-50h]
  struct _KTHREAD *v40; // [rsp+50h] [rbp-48h]
  unsigned int v41; // [rsp+A0h] [rbp+8h]
  int v43; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)BugCheckParameter2;
  v34 = 0;
  v43 = 0;
  v40 = CurrentThread;
  Pool = MiAllocatePool(0x112uLL, 8LL * a4);
  v8 = (void *)Pool;
  if ( Pool )
  {
    v9 = *(_BYTE *)(v6 + 62) & 0xC;
    v39 = *(_QWORD *)(v6 + 64);
    if ( v9 != 0 && (a2 & 0x200) != 0 )
    {
      if ( v9 == 8 )
      {
        SubsectionCharges = -1073741811;
LABEL_35:
        ExFreePoolWithTag(v8, 0);
        return (unsigned int)SubsectionCharges;
      }
      if ( !(unsigned int)MiChargeLargeProtoSubsection(BugCheckParameter2, 1LL) )
      {
        SubsectionCharges = -1073741670;
        goto LABEL_35;
      }
      v34 = 1;
    }
    v11 = a2 | 4;
    if ( (*(_BYTE *)(v6 + 62) & 0xC) != 4 )
      v11 = a2;
    v36 = v11;
    MiInitializePrototypePtes(Pool);
    v12 = v39;
    if ( v39 )
    {
      CommittedPages = a3;
    }
    else if ( *(_QWORD *)(v6 + 64) )
    {
      CommittedPages = *(_QWORD *)(*(_QWORD *)v6 + 16LL);
    }
    else
    {
      CommittedPages = *(_QWORD *)(v6 + 120) & 0xFFFFFFFFFLL;
    }
    v35 = v11 & 0x80;
    if ( (v11 & 4) != 0 )
    {
      v14 = 1;
      v41 = 1;
    }
    else
    {
      v14 = MiControlAreaRequiresCharge(v6, (v11 & 0x80) != 0 ? 2 : 0);
      v41 = v14;
      if ( !v14 )
      {
        CommittedPages = 0LL;
        SubsectionCharges = -1073740277;
        goto LABEL_29;
      }
    }
    v43 = 0;
    if ( v14 == 2 )
      goto LABEL_66;
    CommittedPages = 0LL;
    v43 = 0;
    while ( 1 )
    {
      if ( !v12 )
      {
        --CurrentThread->SpecialApcDisable;
        v43 = 1;
        v23 = (volatile signed __int32 *)(*(_QWORD *)v6 + 40LL);
        v24 = KeAbPreAcquire(v23, 0LL, 0LL);
        v25 = v24;
        if ( _interlockedbittestandset64(v23, 0LL) )
          ExfAcquirePushLockExclusiveEx(v23, v24, v23);
        v12 = v39;
        if ( v25 )
          *(_BYTE *)(v25 + 10) = 1;
      }
      v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72));
      v16 = v41;
      v17 = v15;
      if ( v41 != 2 )
        break;
      if ( v12 )
      {
        if ( CommittedPages == *(_DWORD *)(BugCheckParameter2 + 44)
                             - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFF) )
          break;
        v29 = CommittedPages;
        CommittedPages = *(_DWORD *)(BugCheckParameter2 + 44) - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFFu);
      }
      else
      {
        if ( CommittedPages == MiGetCommittedPages((_QWORD *)v6) )
          break;
        v29 = CommittedPages;
        CommittedPages = MiGetCommittedPages((_QWORD *)v6);
      }
      LOBYTE(v16) = v17;
      MiReleaseSpinLockExclusive(v6 + 72, v16);
      if ( v12 )
      {
        CurrentThread = v40;
      }
      else
      {
        v30 = *(_QWORD *)v6;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)v6 + 40LL), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v30 + 40);
        KeAbPostRelease(v30 + 40);
        CurrentThread = v40;
        v27 = v40->SpecialApcDisable++ == -1;
        if ( v27 && ($727077A9B6E167EAE1398C74674DC5A5 *)v40->ApcState.ApcListHead[0].Flink != &v40->152 )
          KiCheckForKernelApcDelivery();
        v12 = v39;
        v43 = 0;
      }
      if ( v29 )
        MiReturnCrossPartitionSectionCharges(
          *((_QWORD *)qword_140E300C8 + (*(_WORD *)(v6 + 60) & 0x3FF)),
          v12 != 0,
          v29);
LABEL_66:
      if ( CommittedPages )
      {
        SubsectionCharges = MiGetSubsectionCharges(BugCheckParameter2, CommittedPages);
        if ( SubsectionCharges < 0 )
        {
          CommittedPages = 0LL;
          goto LABEL_38;
        }
        v12 = v39;
      }
    }
    v18 = v35 | 0x20;
    if ( (_DWORD)v16 == 2 )
      v18 = v35 | 0x28;
    SubsectionCharges = 0;
    if ( *(_QWORD *)(BugCheckParameter2 + 8) )
    {
      LOBYTE(v16) = v17;
      MiReleaseSpinLockExclusive(v6 + 72, v16);
      SubsectionCharges = -1073741302;
    }
    else
    {
      v19 = MiIncrementSubsectionViewCount((__int64 *)BugCheckParameter2, v18);
      v37 = v19;
      if ( v19 != 1 )
      {
        v21 = 0LL;
        if ( v19 == 3 )
          CommittedPages = 0LL;
        if ( (*(_BYTE *)(v6 + 62) & 0xC) != 0 )
        {
          LOBYTE(v21) = v17;
          MiReleaseSpinLockExclusive(v6 + 72, v21);
          SubsectionCharges = MiAllocateFileExtents(BugCheckParameter2, (v36 & 0x200 | 0x28u) >> 3, -1);
          if ( SubsectionCharges < 0 )
          {
            v8 = (void *)Pool;
            goto LABEL_29;
          }
          if ( (*(_BYTE *)(v6 + 62) & 0xC) == 4 )
            return (unsigned int)SubsectionCharges;
          v28 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72));
          v21 = 1LL;
          SubsectionCharges = 0;
          v17 = v28;
        }
        if ( v39 )
          *(_DWORD *)(BugCheckParameter2 + 32) |= 1u;
        if ( !(_DWORD)v21 && *(_QWORD *)(BugCheckParameter2 + 8) )
        {
          SubsectionCharges = -1073741302;
          if ( v41 == 2 )
            LOBYTE(v18) = v18 | 0x10;
          v31 = MiDecrementSubsectionViewCount((__int64 *)BugCheckParameter2, v18);
          LOBYTE(v32) = v17;
          v33 = v31;
          MiReleaseSpinLockExclusive(v6 + 72, v32);
          if ( v37 == 3 )
            CommittedPages = v33;
          goto LABEL_38;
        }
        if ( (*(_BYTE *)(v6 + 62) & 0xC) == 0 )
        {
          *(_QWORD *)(BugCheckParameter2 + 8) = Pool;
          MiUpdateSystemProtoPtesTree(BugCheckParameter2 + (v39 != 0 ? 120LL : 56LL), 3LL);
        }
        LOBYTE(v21) = v17;
        MiReleaseSpinLockExclusive(v6 + 72, v21);
        v8 = 0LL;
        v34 = 0;
LABEL_29:
        if ( !v39 && v43 )
        {
          v26 = *(_QWORD *)v6;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)v6 + 40LL), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v26 + 40);
          KeAbPostRelease(v26 + 40);
          v27 = v40->SpecialApcDisable++ == -1;
          if ( v27 && ($727077A9B6E167EAE1398C74674DC5A5 *)v40->ApcState.ApcListHead[0].Flink != &v40->152 )
            KiCheckForKernelApcDelivery();
        }
        if ( v34 )
          MiChargeLargeProtoSubsection(BugCheckParameter2, 0LL);
        if ( CommittedPages )
          MiReturnCrossPartitionSectionCharges(
            *((_QWORD *)qword_140E300C8 + (*(_WORD *)(v6 + 60) & 0x3FF)),
            v39 != 0,
            CommittedPages);
        if ( !v8 )
          return (unsigned int)SubsectionCharges;
        goto LABEL_35;
      }
      LOBYTE(v20) = v17;
      MiReleaseSpinLockExclusive(v6 + 72, v20);
      SubsectionCharges = -1073741670;
    }
LABEL_38:
    v8 = (void *)Pool;
    goto LABEL_29;
  }
  return 3221225626LL;
}
