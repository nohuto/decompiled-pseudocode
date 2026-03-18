/*
 * XREFs of SmcStoreSlotCommit @ 0x14079E0D8
 * Callers:
 *     SmcStoreCreate @ 0x14079D7E4 (SmcStoreCreate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

void __fastcall SmcStoreSlotCommit(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rsi

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 160);
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire(a1 + 160, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, (__int64)v9, (__int64)v5);
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  *(_DWORD *)(a2 + 4) &= ~4u;
  *(_DWORD *)a2 = a3;
  _InterlockedExchange64((volatile __int64 *)(a2 + 16), 0LL);
  *(_DWORD *)(a2 + 4) ^= (a4 ^ (unsigned __int8)*(_DWORD *)(a2 + 4)) & 3;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegion();
}
