/*
 * XREFs of PspSetProcessDefaultHardErrorMode @ 0x14094741C
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall PspSetProcessDefaultHardErrorMode(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 *v3; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rbp

  v3 = (unsigned __int64 *)(a1 + 456);
  --*(_WORD *)(a2 + 484);
  v6 = KeAbPreAcquire(a1 + 456, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, (__int64)v6, (__int64)v3);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  if ( *(_DWORD *)(a1 + 904) != a3 )
  {
    *(_DWORD *)(a1 + 904) = a3;
    if ( *(_QWORD *)(a1 + 784) || (a3 & 4) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 0);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 136), 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return KeLeaveCriticalRegionThread();
}
