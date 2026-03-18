/*
 * XREFs of sub_1409E127C @ 0x1409E127C
 * Callers:
 *     sub_1409E11D8 @ 0x1409E11D8 (sub_1409E11D8.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     sub_1409E1444 @ 0x1409E1444 (sub_1409E1444.c)
 */

__int64 __fastcall sub_1409E127C(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  signed __int64 *v4; // rdi
  __int64 v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v11; // r14
  signed __int64 v12; // r11
  unsigned int v13; // r10d
  struct _KTHREAD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // r14
  int v18; // eax

  v4 = (signed __int64 *)(a1 + 1072);
  v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v11 = KeAbPreAcquire(a1 + 1072, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v11, (__int64)v4);
  v12 = 0LL;
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  v13 = a3 + 1;
  while ( a2 < v13 )
  {
    if ( *(_BYTE *)(a2 + a1 + 44) == (_BYTE)v12 )
    {
      if ( a2 == -1 )
        goto LABEL_10;
      v18 = sub_1409E1444(a1, a2 + 1, a4 - 1);
      if ( v18 == -1 )
        goto LABEL_10;
      a2 = v18 + 1;
    }
    else
    {
      ++a2;
    }
  }
  a2 = -1;
LABEL_10:
  if ( _InterlockedCompareExchange64(v4, v12, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveGuardedRegion();
  if ( a2 != -1 )
  {
    v14 = KeGetCurrentThread();
    --v14->SpecialApcDisable;
    v15 = KeAbPreAcquire((__int64)v4, 0LL);
    v16 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, (__int64)v15, (__int64)v4);
    if ( v16 )
      *((_BYTE *)v16 + 10) = 1;
    if ( (unsigned int)sub_1409E1444(a1, a2, a4) == -1 )
    {
      v5 = *(_QWORD *)(a1 + 32) + (a2 << 6);
      if ( a4 )
        memset_0((void *)(a1 + a2 + 44LL), 2, a4 - 1);
      *(_BYTE *)(a2 + a4 - 1 + a1 + 44) = 1;
    }
    if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4);
    KeAbPostRelease((ULONG_PTR)v4);
    KeLeaveGuardedRegion();
  }
  return v5;
}
