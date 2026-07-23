/*
 * XREFs of sub_1409D9A28 @ 0x1409D9A28
 * Callers:
 *     sub_14091EB00 @ 0x14091EB00 (sub_14091EB00.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     sub_1409D9D58 @ 0x1409D9D58 (sub_1409D9D58.c)
 *     sub_1409D9ED4 @ 0x1409D9ED4 (sub_1409D9ED4.c)
 *     sub_1409DA62C @ 0x1409DA62C (sub_1409DA62C.c)
 */

__int64 __fastcall sub_1409D9A28(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // rdi
  __int64 v7; // rcx
  char *v8; // rax
  char *v9; // rsi
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  if ( (unsigned int)a3 < 0x10 )
  {
    v3 = -1073741811;
  }
  else
  {
    v3 = sub_1409D9D58(a1, a2, a3, &v10);
    if ( v3 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v6 = (unsigned __int64 *)(v10 + 8);
      v7 = v10 + 8;
      --CurrentThread->SpecialApcDisable;
      v8 = (char *)KeAbPreAcquire(v7, 0LL);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
        ExfAcquirePushLockExclusiveEx(v6, v8, (__int64)v6);
      if ( v9 )
        v9[10] = 1;
      v3 = sub_1409DA62C(v10);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v6);
      KeAbPostRelease((ULONG_PTR)v6);
      KeLeaveGuardedRegion();
    }
  }
  sub_1409D9ED4(v10);
  return (unsigned int)v3;
}
