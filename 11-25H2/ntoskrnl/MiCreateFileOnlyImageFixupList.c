/*
 * XREFs of MiCreateFileOnlyImageFixupList @ 0x140AB4254
 * Callers:
 *     MiRelocateImage @ 0x140941BE8 (MiRelocateImage.c)
 * Callees:
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402A6504 (MiUpdateControlAreaCommitCount.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiGetSubsectionFromPte @ 0x14041E1A0 (MiGetSubsectionFromPte.c)
 *     MiGetControlAreaPartition @ 0x14043B7F0 (MiGetControlAreaPartition.c)
 *     MiPageHasRelocations @ 0x140946FF0 (MiPageHasRelocations.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 *v22; // rax
  __int64 *v23; // rbp
  bool v24; // zf
  __int64 ControlAreaPartition; // [rsp+20h] [rbp-48h]
  __int64 v26; // [rsp+78h] [rbp+10h]
  __int64 v28; // [rsp+88h] [rbp+20h]

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
      v28 = *(_QWORD *)a1;
      v15 = 0;
      v26 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
      while ( v15 < v6 )
      {
        if ( (unsigned int)MiPageHasRelocations((__int64 *)a2, v15, 1) )
        {
          v16 = (unsigned __int64 *)(v26 + 8LL * v15);
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
            if ( qword_140E2D940 )
            {
              if ( (v17 & 0x10) != 0 )
                v17 &= ~0x10uLL;
              else
                v17 &= ~qword_140E2D940;
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
      v21 = (unsigned __int64 *)(v28 + 40);
      --CurrentThread->SpecialApcDisable;
      v22 = KeAbPreAcquire(v28 + 40, 0LL);
      v23 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx(v21, v22, (__int64)v21);
      if ( v23 )
        *((_BYTE *)v23 + 10) = 1;
      MiUpdateControlAreaCommitCount(a1, v13);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v21);
      KeAbPostRelease((ULONG_PTR)v21);
      v24 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v24
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      *a3 = Pool;
    }
  }
  return 0LL;
}
