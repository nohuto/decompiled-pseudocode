/*
 * XREFs of MiSpecialPurposeMemoryChangePrepare @ 0x1407FEBA0
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x1407FCE14 (MmManagePartitionInitialAddMemory.c)
 *     MmManagePartitionMoveMemory @ 0x1407FCEC4 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiFindSpecialPurposeMemoryType @ 0x14068E758 (MiFindSpecialPurposeMemoryType.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x1407FE3D4 (MiInitializePartitionSpecialPurposeMemory.c)
 */

__int64 __fastcall MiSpecialPurposeMemoryChangePrepare(__int64 a1, _OWORD *a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 *v4; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  int v10; // esi
  _QWORD *SpecialPurposeMemoryType; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf

  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned __int64 *)(a1 + 17672);
  *a3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 17672, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, (__int64)v8, (__int64)v4);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  v10 = MiInitializePartitionSpecialPurposeMemory(a1, a2);
  if ( v10 >= 0 )
  {
    SpecialPurposeMemoryType = MiFindSpecialPurposeMemoryType(a1, a2);
    *a3 = SpecialPurposeMemoryType;
    ++SpecialPurposeMemoryType[11];
    v10 = 0;
  }
  if ( v4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease((ULONG_PTR)v4);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v13, v12);
  }
  return (unsigned int)v10;
}
