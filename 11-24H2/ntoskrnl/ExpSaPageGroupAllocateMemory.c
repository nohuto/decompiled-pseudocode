/*
 * XREFs of ExpSaPageGroupAllocateMemory @ 0x14026DBA0
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x14026E250 (ExpSaAllocatorAllocate.c)
 * Callees:
 *     RtlFindClearBitsAndSetEx @ 0x14026DCA0 (RtlFindClearBitsAndSetEx.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall ExpSaPageGroupAllocateMemory(_DWORD *a1, unsigned int a2)
{
  __int64 v3; // rbp
  volatile signed __int32 *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 ClearBitsAndSet; // rax
  __int64 v8; // rdi

  v3 = a2;
  if ( a1[9] < a2 )
    return -1LL;
  v4 = a1 + 6;
  v5 = KeAbPreAcquire(a1 + 6, 0LL, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64(v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, v4);
  if ( v6 )
    *(_BYTE *)(v6 + 10) = 1;
  if ( a1[9] < (unsigned int)v3
    || (ClearBitsAndSet = RtlFindClearBitsAndSetEx(a1 + 12, v3, (unsigned int)a1[11]), ClearBitsAndSet == -1) )
  {
    v8 = -1LL;
  }
  else
  {
    a1[9] -= v3;
    a1[11] = ClearBitsAndSet + v3;
    v8 = 16 * (ClearBitsAndSet & 0x1FF | ((a1[8] & 0x3FFFFu) << 9));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return v8;
}
