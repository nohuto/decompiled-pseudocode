/*
 * XREFs of PsIsVsmEnclaveTerminated @ 0x14076B964
 * Callers:
 *     MiCanDeleteEnclave @ 0x140674F34 (MiCanDeleteEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

bool __fastcall PsIsVsmEnclaveTerminated(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  __int64 *v4; // rax
  __int64 *v5; // rbp
  bool v6; // si

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 48);
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire(a1 + 48, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v4, (__int64)v2);
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
