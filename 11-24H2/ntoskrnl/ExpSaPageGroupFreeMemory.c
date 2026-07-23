/*
 * XREFs of ExpSaPageGroupFreeMemory @ 0x140482E84
 * Callers:
 *     ExpSaAllocatorFree @ 0x140360F4C (ExpSaAllocatorFree.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     RtlClearBitsEx @ 0x1402920E0 (RtlClearBitsEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

bool __fastcall ExpSaPageGroupFreeMemory(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 *v3; // rdi
  unsigned __int64 v4; // r14
  char *v7; // rax
  char *v8; // rsi
  bool v9; // bl

  v3 = (unsigned __int64 *)(a1 + 24);
  v4 = a3;
  v7 = (char *)KeAbPreAcquire(a1 + 24, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (__int64)v3);
  if ( v8 )
    v8[10] = 1;
  RtlClearBitsEx(a1 + 48, (a2 >> 4) & 0x1FF, v4);
  *(_DWORD *)(a1 + 36) += v4;
  v9 = *(_DWORD *)(a1 + 36) == 512;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return v9;
}
