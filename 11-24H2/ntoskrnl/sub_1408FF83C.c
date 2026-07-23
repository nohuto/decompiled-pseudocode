/*
 * XREFs of sub_1408FF83C @ 0x1408FF83C
 * Callers:
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 *     sub_14091EB00 @ 0x14091EB00 (sub_14091EB00.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     sub_14091BE04 @ 0x14091BE04 (sub_14091BE04.c)
 *     sub_14091ED6C @ 0x14091ED6C (sub_14091ED6C.c)
 *     sub_14091F8C0 @ 0x14091F8C0 (sub_14091F8C0.c)
 */

__int64 __fastcall sub_1408FF83C(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v3; // rdi
  int v4; // edi
  struct _KTHREAD *v5; // rax
  char *v6; // rax
  signed __int8 v7; // cf
  char *v8; // rdi
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v3 = (char *)KeAbPreAcquire((__int64)&qword_140E3EAA8, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E3EAA8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E3EAA8, 0, v3, (__int64)&qword_140E3EAA8);
  if ( v3 )
    v3[10] = 1;
  v4 = sub_14091ED6C(a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E3EAA8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140E3EAA8);
  KeAbPostRelease((ULONG_PTR)&qword_140E3EAA8);
  KeLeaveGuardedRegion();
  if ( v4 >= 0 )
  {
    v5 = KeGetCurrentThread();
    --v5->SpecialApcDisable;
    v6 = (char *)KeAbPreAcquire((__int64)&qword_140E3EAA8, 0LL);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E3EAA8, 0LL);
    v8 = v6;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&qword_140E3EAA8, v6, (__int64)&qword_140E3EAA8);
    if ( v8 )
      v8[10] = 1;
    v4 = sub_14091BE04((unsigned int)&qword_140E3EA80, a1, 8, -1, (__int64)&v10);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E3EAA8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E3EAA8);
    KeAbPostRelease((ULONG_PTR)&qword_140E3EAA8);
    KeLeaveGuardedRegion();
    sub_14091F8C0(v10);
  }
  return (unsigned int)v4;
}
