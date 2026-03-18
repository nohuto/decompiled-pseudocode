/*
 * XREFs of sub_1409DFD58 @ 0x1409DFD58
 * Callers:
 *     sub_1408FC220 @ 0x1408FC220 (sub_1408FC220.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     sub_1409DFFA8 @ 0x1409DFFA8 (sub_1409DFFA8.c)
 *     sub_1409E0124 @ 0x1409E0124 (sub_1409E0124.c)
 *     sub_1409E0BD4 @ 0x1409E0BD4 (sub_1409E0BD4.c)
 */

__int64 __fastcall sub_1409DFD58(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  if ( (unsigned int)a3 < 0x10 )
  {
    v3 = -1073741811;
  }
  else
  {
    v3 = sub_1409DFFA8(a1, a2, a3, &v10);
    if ( v3 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v6 = (unsigned __int64 *)(v10 + 8);
      v7 = v10 + 8;
      --CurrentThread->SpecialApcDisable;
      v8 = KeAbPreAcquire(v7, 0LL);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
        ExfAcquirePushLockExclusiveEx(v6, (__int64)v8, (__int64)v6);
      if ( v9 )
        *((_BYTE *)v9 + 10) = 1;
      v3 = sub_1409E0BD4(v10);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v6);
      KeAbPostRelease((ULONG_PTR)v6);
      KeLeaveGuardedRegion();
    }
  }
  sub_1409E0124(v10);
  return (unsigned int)v3;
}
