/*
 * XREFs of MiCreatePrototypePtes @ 0x1402A6EE0
 * Callers:
 *     MiAddViewsForSection @ 0x140213970 (MiAddViewsForSection.c)
 * Callees:
 *     MiGetCommittedPages @ 0x140215A04 (MiGetCommittedPages.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiControlAreaRequiresCharge @ 0x1402A673C (MiControlAreaRequiresCharge.c)
 *     MiIncrementSubsectionViewCount @ 0x1402A7470 (MiIncrementSubsectionViewCount.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402A87DC (MiUpdateSystemProtoPtesTree.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiDecrementSubsectionViewCount @ 0x14033F740 (MiDecrementSubsectionViewCount.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiGetSubsectionCharges @ 0x1404873D0 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B9590 (MiReturnCrossPartitionSectionCharges.c)
 *     MiChargeLargeProtoSubsection @ 0x1407DFEF4 (MiChargeLargeProtoSubsection.c)
 *     MiInitializePrototypePtes @ 0x14093A344 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x140AA0C34 (MiAllocateFileExtents.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int64 *v22; // rdi
  __int64 *v23; // rax
  __int64 *v24; // rbp
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
  v6 = *(_QWORD *)BugCheckParameter2;
  v39 = 0;
  v47 = 0;
  v44 = CurrentThread;
  Pool = MiAllocatePool(0x112uLL, 8LL * a4);
  v8 = (void *)Pool;
  if ( Pool )
  {
    v9 = *(_BYTE *)(v6 + 62) & 0xC;
    v43 = *(_QWORD *)(v6 + 64);
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
    if ( (*(_BYTE *)(v6 + 62) & 0xC) != 4 )
      v11 = a2;
    v40 = v11;
    MiInitializePrototypePtes(Pool);
    v12 = v43;
    if ( v43 )
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
        v22 = (unsigned __int64 *)(*(_QWORD *)v6 + 40LL);
        v23 = KeAbPreAcquire((__int64)v22, 0LL);
        v24 = v23;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
          ExfAcquirePushLockExclusiveEx(v22, v23, (__int64)v22);
        v12 = v43;
        if ( v24 )
          *((_BYTE *)v24 + 10) = 1;
      }
      v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72));
      v16 = v45;
      v17 = v15;
      if ( v45 != 2 )
        break;
      if ( v12 )
      {
        if ( CommittedPages == *(_DWORD *)(BugCheckParameter2 + 44)
                             - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFF) )
          break;
        v30 = CommittedPages;
        CommittedPages = *(_DWORD *)(BugCheckParameter2 + 44) - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFFu);
      }
      else
      {
        if ( CommittedPages == MiGetCommittedPages((_QWORD *)v6) )
          break;
        v30 = CommittedPages;
        CommittedPages = MiGetCommittedPages((_QWORD *)v6);
      }
      LOBYTE(v16) = v17;
      MiReleaseSpinLockExclusive(v6 + 72, v16);
      if ( v12 )
      {
        CurrentThread = v44;
      }
      else
      {
        v31 = *(_QWORD *)v6;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)v6 + 40LL), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v31 + 40);
        KeAbPostRelease(v31 + 40);
        CurrentThread = v44;
        v28 = v44->SpecialApcDisable++ == -1;
        if ( v28 && ($727077A9B6E167EAE1398C74674DC5A5 *)v44->ApcState.ApcListHead[0].Flink != &v44->152 )
          KiCheckForKernelApcDelivery(v33, v32, v34, v35);
        v12 = v43;
        v47 = 0;
      }
      if ( v30 )
        MiReturnCrossPartitionSectionCharges(
          *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(v6 + 60) & 0x3FF)),
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
    if ( *(_QWORD *)(BugCheckParameter2 + 8) )
    {
      LOBYTE(v16) = v17;
      MiReleaseSpinLockExclusive(v6 + 72, v16);
      SubsectionCharges = -1073741302;
    }
    else
    {
      v18 = MiIncrementSubsectionViewCount(BugCheckParameter2);
      v41 = v18;
      if ( v18 != 1 )
      {
        v20 = 0LL;
        if ( v18 == 3 )
          CommittedPages = 0LL;
        if ( (*(_BYTE *)(v6 + 62) & 0xC) != 0 )
        {
          LOBYTE(v20) = v17;
          MiReleaseSpinLockExclusive(v6 + 72, v20);
          SubsectionCharges = MiAllocateFileExtents(BugCheckParameter2, (v40 & 0x200 | 0x28u) >> 3, -1);
          if ( SubsectionCharges < 0 )
          {
            v8 = (void *)Pool;
            goto LABEL_27;
          }
          if ( (*(_BYTE *)(v6 + 62) & 0xC) == 4 )
            return (unsigned int)SubsectionCharges;
          v29 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72));
          v20 = 1LL;
          SubsectionCharges = 0;
          v17 = v29;
        }
        if ( v43 )
          *(_DWORD *)(BugCheckParameter2 + 32) |= 1u;
        if ( !(_DWORD)v20 && *(_QWORD *)(BugCheckParameter2 + 8) )
        {
          SubsectionCharges = -1073741302;
          v36 = MiDecrementSubsectionViewCount(BugCheckParameter2);
          LOBYTE(v37) = v17;
          v38 = v36;
          MiReleaseSpinLockExclusive(v6 + 72, v37);
          if ( v41 == 3 )
            CommittedPages = v38;
          goto LABEL_36;
        }
        if ( (*(_BYTE *)(v6 + 62) & 0xC) == 0 )
        {
          *(_QWORD *)(BugCheckParameter2 + 8) = Pool;
          MiUpdateSystemProtoPtesTree(BugCheckParameter2 + (v43 != 0 ? 120LL : 56LL), 3LL);
        }
        LOBYTE(v20) = v17;
        MiReleaseSpinLockExclusive(v6 + 72, v20);
        v8 = 0LL;
        v39 = 0;
LABEL_27:
        if ( !v43 && v47 )
        {
          v25 = *(_QWORD *)v6;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)v6 + 40LL), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v25 + 40);
          KeAbPostRelease(v25 + 40);
          v28 = v44->SpecialApcDisable++ == -1;
          if ( v28 && ($727077A9B6E167EAE1398C74674DC5A5 *)v44->ApcState.ApcListHead[0].Flink != &v44->152 )
            KiCheckForKernelApcDelivery(v44, 1LL, v26, v27);
        }
        if ( v39 )
          MiChargeLargeProtoSubsection(BugCheckParameter2, 0LL);
        if ( CommittedPages )
          MiReturnCrossPartitionSectionCharges(
            *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(v6 + 60) & 0x3FF)),
            v43 != 0,
            CommittedPages);
        if ( !v8 )
          return (unsigned int)SubsectionCharges;
        goto LABEL_33;
      }
      LOBYTE(v19) = v17;
      MiReleaseSpinLockExclusive(v6 + 72, v19);
      SubsectionCharges = -1073741670;
    }
LABEL_36:
    v8 = (void *)Pool;
    goto LABEL_27;
  }
  return 3221225626LL;
}
