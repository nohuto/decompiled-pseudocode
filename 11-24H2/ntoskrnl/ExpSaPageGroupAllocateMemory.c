/*
 * XREFs of ExpSaPageGroupAllocateMemory @ 0x1403A408C
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x14047B930 (ExpSaAllocatorAllocate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     RtlFindClearBitsAndSetEx @ 0x1403A4180 (RtlFindClearBitsAndSetEx.c)
 */

__int64 __fastcall ExpSaPageGroupAllocateMemory(_DWORD *a1, unsigned int a2)
{
  __int64 v3; // rbp
  unsigned __int64 *v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 ClearBitsAndSet; // rax
  __int64 v8; // rdi

  v3 = a2;
  if ( a1[9] < a2 )
    return -1LL;
  v4 = (unsigned __int64 *)(a1 + 6);
  v5 = KeAbPreAcquire((__int64)(a1 + 6), 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, (__int64)v5, (__int64)v4);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
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
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return v8;
}
