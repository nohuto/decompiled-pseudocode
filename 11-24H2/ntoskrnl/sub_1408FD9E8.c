/*
 * XREFs of sub_1408FD9E8 @ 0x1408FD9E8
 * Callers:
 *     sub_1408FBE0C @ 0x1408FBE0C (sub_1408FBE0C.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

void __fastcall sub_1408FD9E8(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rbp
  __int64 *v8; // rax
  __int64 **v9; // rcx
  __int64 **v10; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 80);
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire(a1 + 80, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, (__int64)v6, (__int64)v3);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  if ( (a2[2] & 1) != 0 )
  {
    v8 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2
      || (v9 = (__int64 **)a2[1], *v9 != a2)
      || (*v9 = v8, v8[1] = (__int64)v9, v10 = *(__int64 ***)(a1 + 72), *v10 != (__int64 *)(a1 + 64)) )
    {
      __fastfail(3u);
    }
    *a2 = a1 + 64;
    a2[1] = (__int64)v10;
    *v10 = a2;
    *(_QWORD *)(a1 + 72) = a2;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveGuardedRegion();
}
