/*
 * XREFs of MiSpecialPurposeMemoryChangePrepare @ 0x1407EED10
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x1407ECF84 (MmManagePartitionInitialAddMemory.c)
 *     MmManagePartitionMoveMemory @ 0x1407ED034 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiFindSpecialPurposeMemoryType @ 0x140682EC8 (MiFindSpecialPurposeMemoryType.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x1407EE544 (MiInitializePartitionSpecialPurposeMemory.c)
 */

__int64 __fastcall MiSpecialPurposeMemoryChangePrepare(__int64 a1, _OWORD *a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 *v4; // rbx
  __int64 *v8; // rax
  __int64 *v9; // rsi
  int v10; // esi
  _QWORD *SpecialPurposeMemoryType; // rax
  bool v12; // zf

  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned __int64 *)(a1 + 17672);
  *a3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 17672, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v8, (__int64)v4);
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
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v10;
}
