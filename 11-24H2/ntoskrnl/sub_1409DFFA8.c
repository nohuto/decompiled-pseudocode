/*
 * XREFs of sub_1409DFFA8 @ 0x1409DFFA8
 * Callers:
 *     sub_1409DFC78 @ 0x1409DFC78 (sub_1409DFC78.c)
 *     sub_1409DFD58 @ 0x1409DFD58 (sub_1409DFD58.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     SddlpFree @ 0x140863910 (SddlpFree.c)
 *     sub_1409DFE38 @ 0x1409DFE38 (sub_1409DFE38.c)
 *     sub_1409E0124 @ 0x1409E0124 (sub_1409E0124.c)
 *     WbValidateEncryptionSegmentArguments @ 0x1409E0158 (WbValidateEncryptionSegmentArguments.c)
 *     sub_1409E17B4 @ 0x1409E17B4 (sub_1409E17B4.c)
 */

__int64 __fastcall sub_1409DFFA8(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 v7; // rdi
  int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v11; // r14
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // r15
  __int64 v15; // [rsp+20h] [rbp-50h] BYREF
  __int128 v16; // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF

  v7 = 0LL;
  v15 = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  v8 = WbValidateEncryptionSegmentArguments(a2, a3, &v16, &v18);
  if ( v8 < 0 )
    goto LABEL_7;
  v8 = sub_1409DFE38(a1, (__int64)&v18, &v15);
  if ( v8 < 0 )
    goto LABEL_17;
  v7 = v15;
  if ( !*(_DWORD *)(v15 + 16) )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = (unsigned __int64 *)(v15 + 8);
    v12 = v15 + 8;
    --CurrentThread->SpecialApcDisable;
    v13 = KeAbPreAcquire(v12, 0LL);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, (__int64)v13, (__int64)v11);
    if ( v14 )
      *((_BYTE *)v14 + 10) = 1;
    if ( !*(_DWORD *)(v7 + 16) )
    {
      v17 = v16;
      v8 = sub_1409E17B4(&v17, a2, v15);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v11);
    KeAbPostRelease((ULONG_PTR)v11);
    KeLeaveGuardedRegion();
    if ( v8 >= 0 )
    {
      v7 = v15;
      goto LABEL_4;
    }
LABEL_17:
    v7 = v15;
    goto LABEL_7;
  }
LABEL_4:
  v8 = *(_DWORD *)(v7 + 20);
  if ( v8 >= 0 && a4 )
  {
    *a4 = v7;
    v7 = 0LL;
  }
LABEL_7:
  sub_1409E0124(v7);
  SddlpFree(*((void **)&v16 + 1));
  return (unsigned int)v8;
}
