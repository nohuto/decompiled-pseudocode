/*
 * XREFs of sub_1408A95DC @ 0x1408A95DC
 * Callers:
 *     PspProcessDelete @ 0x1408A99B0 (PspProcessDelete.c)
 *     sub_1408FC220 @ 0x1408FC220 (sub_1408FC220.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     sub_1408F9528 @ 0x1408F9528 (sub_1408F9528.c)
 *     sub_1408FC48C @ 0x1408FC48C (sub_1408FC48C.c)
 *     sub_1408FCFE0 @ 0x1408FCFE0 (sub_1408FCFE0.c)
 */

__int64 __fastcall sub_1408A95DC(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rdi
  int v4; // edi
  struct _KTHREAD *v5; // rax
  _QWORD *v6; // rax
  signed __int8 v7; // cf
  _QWORD *v8; // rdi
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140E3E968, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E3E968, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E3E968, 0, v3, (__int64)&qword_140E3E968);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  v4 = sub_1408FC48C(a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E3E968, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140E3E968);
  KeAbPostRelease((ULONG_PTR)&qword_140E3E968);
  KeLeaveGuardedRegion();
  if ( v4 >= 0 )
  {
    v5 = KeGetCurrentThread();
    --v5->SpecialApcDisable;
    v6 = KeAbPreAcquire((__int64)&qword_140E3E968, 0LL);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E3E968, 0LL);
    v8 = v6;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&qword_140E3E968, (__int64)v6, (__int64)&qword_140E3E968);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
    v4 = sub_1408F9528((unsigned int)&qword_140E3E940, a1, 8, -1, (__int64)&v10);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E3E968, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E3E968);
    KeAbPostRelease((ULONG_PTR)&qword_140E3E968);
    KeLeaveGuardedRegion();
    sub_1408FCFE0(v10);
  }
  return (unsigned int)v4;
}
