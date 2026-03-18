/*
 * XREFs of PspRemoveEnclaveThreadWait @ 0x14077B880
 * Callers:
 *     PsCallEnclave @ 0x140AD1D10 (PsCallEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall PspRemoveEnclaveThreadWait(__int64 a1, __int64 *a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v4; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rbp
  __int64 v9; // rax
  __int64 **v10; // rcx

  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned __int64 *)(a1 + 112);
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire(a1 + 112, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, (__int64)v7, (__int64)v4);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  v9 = *a2;
  if ( *a2 )
  {
    if ( *(__int64 **)(v9 + 8) != a2 || (v10 = (__int64 **)a2[1], *v10 != a2) )
      __fastfail(3u);
    *v10 = (__int64 *)v9;
    *(_QWORD *)(v9 + 8) = v10;
  }
  else
  {
    a3 = *((_DWORD *)a2 + 10);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegion();
  return a3;
}
