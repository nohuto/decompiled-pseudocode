/*
 * XREFs of PsIsVsmEnclaveTerminated @ 0x14077B504
 * Callers:
 *     MiCanDeleteEnclave @ 0x140680754 (MiCanDeleteEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

bool __fastcall PsIsVsmEnclaveTerminated(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rbp
  bool v6; // si

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 48);
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire(a1 + 48, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, (__int64)v4, (__int64)v2);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  if ( !*(_DWORD *)(a1 + 44) )
  {
    *(_DWORD *)(a1 + 44) = 2;
    KeSetEvent((PRKEVENT)(a1 + 80), 0, 0);
  }
  v6 = *(_DWORD *)(a1 + 44) == 2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegion();
  return v6;
}
