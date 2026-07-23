/*
 * XREFs of SmcStoreSlotAbort @ 0x14079E11C
 * Callers:
 *     SmcStoreCreate @ 0x14079D8F4 (SmcStoreCreate.c)
 *     SmcStoreSlotReserve @ 0x14079E2B8 (SmcStoreSlotReserve.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 */

void __fastcall SmcStoreSlotAbort(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // rsi
  char *v7; // rax
  char *v8; // rdi
  volatile signed __int64 *v9; // rdi
  struct _PRIVILEGE_SET *v10; // rsi

  if ( !a3 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = (unsigned __int64 *)(a1 + 160);
    --CurrentThread->KernelApcDisable;
    v7 = (char *)KeAbPreAcquire(a1 + 160, 0LL);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
    if ( v8 )
      v8[10] = 1;
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
