/*
 * XREFs of SmcStoreSlotAbort @ 0x14079E00C
 * Callers:
 *     SmcStoreCreate @ 0x14079D7E4 (SmcStoreCreate.c)
 *     SmcStoreSlotReserve @ 0x14079E1A8 (SmcStoreSlotReserve.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 */

void __fastcall SmcStoreSlotAbort(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // rsi
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  volatile signed __int64 *v9; // rdi
  struct _PRIVILEGE_SET *v10; // rsi

  if ( !a3 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = (unsigned __int64 *)(a1 + 160);
    --CurrentThread->KernelApcDisable;
    v7 = KeAbPreAcquire(a1 + 160, 0LL);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, (__int64)v7, (__int64)v6);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
  }
  *(_DWORD *)(a2 + 4) &= ~4u;
  v9 = (volatile signed __int64 *)(a1 + 160);
  v10 = *(struct _PRIVILEGE_SET **)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 160), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  KeLeaveCriticalRegion();
  CmSiFreeMemory(v10);
}
