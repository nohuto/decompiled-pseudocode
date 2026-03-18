/*
 * XREFs of PspSetProcessDefaultHardErrorMode @ 0x1408BA774
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspSetProcessDefaultHardErrorMode(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 *v3; // rsi
  __int64 *v7; // rax
  __int64 *v8; // rbp

  v3 = (unsigned __int64 *)(a1 + 456);
  --*(_WORD *)(a2 + 484);
  v7 = KeAbPreAcquire(a1 + 456, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (__int64)v3);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
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
  return KeLeaveCriticalRegionThread(a2);
}
