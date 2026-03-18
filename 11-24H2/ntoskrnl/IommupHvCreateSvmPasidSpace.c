/*
 * XREFs of IommupHvCreateSvmPasidSpace @ 0x140565A0C
 * Callers:
 *     IommupGetSystemContext @ 0x140564CE0 (IommupGetSystemContext.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvCreateSvmPasidSpace(int a1)
{
  int v1; // ebx
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  signed __int8 v7; // cf
  _QWORD *v8; // rsi

  v1 = 0;
  if ( !IommupHvSvmEnabled )
    return 3221225659LL;
  if ( IommupHvSvmPasidSpaceCreated )
    return a1 != IommupHvSvmDomain ? 0xC00000BB : 0;
  v4 = KeAbPreAcquire((__int64)&IommupHvGlobalPushLock, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&IommupHvGlobalPushLock, 0LL);
  v8 = v4;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&IommupHvGlobalPushLock, (__int64)v4, (__int64)&IommupHvGlobalPushLock);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  if ( IommupHvSvmPasidSpaceCreated )
  {
    if ( IommupHvSvmDomain != a1 )
      v1 = -1073741637;
    goto LABEL_15;
  }
  if ( IommupHvPasidSpaceCreated )
    goto LABEL_14;
  v1 = guard_dispatch_icall_no_overrides(0LL, (unsigned int)IommupHvMaximumAsids, v5, v6);
  if ( v1 >= 0 )
  {
    IommupHvPasidSpaceCreated = 1;
LABEL_14:
    IommupHvSvmDomain = a1;
    IommupHvSvmPasidSpaceCreated = 1;
  }
LABEL_15:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IommupHvGlobalPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IommupHvGlobalPushLock);
  KeAbPostRelease((ULONG_PTR)&IommupHvGlobalPushLock);
  return (unsigned int)v1;
}
