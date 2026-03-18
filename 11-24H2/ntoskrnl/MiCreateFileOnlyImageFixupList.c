/*
 * XREFs of MiCreateFileOnlyImageFixupList @ 0x140AB861C
 * Callers:
 *     MiRelocateImage @ 0x1408F5784 (MiRelocateImage.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiUpdateControlAreaCommitCount @ 0x14036F1FC (MiUpdateControlAreaCommitCount.c)
 *     MiGetSubsectionFromPte @ 0x14041B6A0 (MiGetSubsectionFromPte.c)
 *     MiGetControlAreaPartition @ 0x1404378D0 (MiGetControlAreaPartition.c)
 *     MiPageHasRelocations @ 0x140957920 (MiPageHasRelocations.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateFileOnlyImageFixupList(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // ebp
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int HasRelocations; // eax
  unsigned int v10; // ecx
  void *Pool; // r14
  unsigned __int64 v13; // r12
  unsigned int v14; // esi
  unsigned int v15; // edi
  unsigned __int64 *v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v21; // rdi
  _QWORD *v22; // rax
  _QWORD *v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rcx
  bool v26; // zf
  __int64 ControlAreaPartition; // [rsp+20h] [rbp-48h]
  __int64 v28; // [rsp+78h] [rbp+10h]
  __int64 v30; // [rsp+88h] [rbp+20h]

  v3 = 0;
  *a3 = 0LL;
  v6 = *(_DWORD *)(a2 + 56);
  LODWORD(v7) = 0;
  v8 = 0;
  if ( v6 )
  {
    do
    {
      HasRelocations = MiPageHasRelocations((__int64 *)a2, v8, 1);
      v10 = v7 + 1;
      if ( !HasRelocations )
        v10 = v7;
      ++v8;
      v7 = v10;
    }
    while ( v8 < v6 );
    if ( v10 )
    {
      Pool = (void *)MiAllocatePool(0x40uLL, 8LL * (v10 + 1), 1884449101);
      if ( !Pool )
        return 3221225626LL;
      ControlAreaPartition = MiGetControlAreaPartition(a1);
      v13 = v7;
      if ( !(unsigned int)MiChargeCommit(ControlAreaPartition, v7, 0) )
      {
        ExFreePoolWithTag(Pool, 0);
        return 3221225626LL;
      }
      v14 = 0;
      v30 = *(_QWORD *)a1;
      v15 = 0;
      v28 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
      while ( v15 < v6 )
      {
        if ( (unsigned int)MiPageHasRelocations((__int64 *)a2, v15, 1) )
        {
          v16 = (unsigned __int64 *)(v28 + 8LL * v15);
          v17 = *v16;
          if ( (*v16 & 0x400) != 0 )
          {
            v3 = -1073740023;
LABEL_24:
            MiReturnCommit(ControlAreaPartition, v13, 0);
            ExFreePoolWithTag(Pool, 0);
            return v3;
          }
          if ( (v17 & 0x800) != 0 )
          {
            if ( qword_140E2DB80 )
            {
              if ( (v17 & 0x10) != 0 )
                v17 &= ~0x10uLL;
              else
                v17 &= ~qword_140E2DB80;
            }
            v18 = 48 * ((v17 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            if ( (*(_DWORD *)(v18 + 16) & 0x400LL) == 0
              || (*(_DWORD *)(MiGetSubsectionFromPte(*(_QWORD *)(v18 + 16)) + 32) & 0x20000) == 0 )
            {
              v19 = v14++;
              *((_QWORD *)Pool + v19) = v16;
            }
          }
        }
        ++v15;
      }
      if ( !v14 )
        goto LABEL_24;
      CurrentThread = KeGetCurrentThread();
      v21 = (unsigned __int64 *)(v30 + 40);
      --CurrentThread->SpecialApcDisable;
      v22 = KeAbPreAcquire(v30 + 40, 0LL);
      v23 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx(v21, (__int64)v22, (__int64)v21);
      if ( v23 )
        *((_BYTE *)v23 + 10) = 1;
      MiUpdateControlAreaCommitCount(a1, v13);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v21);
      KeAbPostRelease((ULONG_PTR)v21);
      v26 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v26
        && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v25, v24);
      }
      *a3 = Pool;
    }
  }
  return 0LL;
}
