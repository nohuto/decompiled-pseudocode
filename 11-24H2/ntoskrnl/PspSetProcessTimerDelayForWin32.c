/*
 * XREFs of PspSetProcessTimerDelayForWin32 @ 0x1405E33F8
 * Callers:
 *     PspApplyTimerDelayProcess @ 0x1405E2DC8 (PspApplyTimerDelayProcess.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsInvokeWin32Callout @ 0x1409A1420 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PspSetProcessTimerDelayForWin32(__int64 a1)
{
  signed __int64 *v1; // rbx
  char *v3; // rdi
  unsigned __int64 v5; // rbx
  _QWORD v6[3]; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]
  int SessionId; // [rsp+60h] [rbp+8h] BYREF

  v1 = (signed __int64 *)(a1 + 456);
  v6[0] = 0LL;
  v6[1] = 0LL;
  v3 = (char *)KeAbPreAcquire(a1 + 456, 0LL);
  if ( _InterlockedCompareExchange64(v1, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v1, 0, v3, (__int64)v1);
  if ( v3 )
    v3[10] = 1;
  if ( *(_QWORD *)(a1 + 664) )
  {
    if ( _InterlockedCompareExchange64(v1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    v5 = *(_QWORD *)(a1 + 1776);
    SessionId = PsGetSessionIdEx(a1);
    v6[2] = a1;
    v7 = v5 & 0x3FFFFFFF;
    v8 = (v5 >> 30) & 0x3FFFFFFF;
    return PsInvokeWin32Callout(41LL, v6, 1LL, &SessionId);
  }
  else
  {
    if ( _InterlockedCompareExchange64(v1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    return 0LL;
  }
}
