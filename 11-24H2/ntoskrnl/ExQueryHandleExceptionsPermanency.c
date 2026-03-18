/*
 * XREFs of ExQueryHandleExceptionsPermanency @ 0x1404528F4
 * Callers:
 *     ObpCloseHandle @ 0x14084A770 (ObpCloseHandle.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall ExQueryHandleExceptionsPermanency(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 *v4; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rbp
  __int64 v10; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned __int64 *)(a1 + 56);
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire(a1 + 56, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, (__int64)v8, (__int64)v4);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  v10 = *(_QWORD *)(a1 + 96);
  if ( v10 )
  {
    *a2 = 1;
    LOBYTE(v10) = (*(_DWORD *)(v10 + 8) & 8) != 0;
  }
  else if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
  {
    *a2 = 1;
    LOBYTE(v10) = 1;
  }
  else
  {
    *a2 = 0;
  }
  *a3 = v10;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return KeLeaveCriticalRegionThread();
}
