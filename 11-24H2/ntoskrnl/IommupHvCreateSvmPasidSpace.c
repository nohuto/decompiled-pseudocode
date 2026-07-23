/*
 * XREFs of IommupHvCreateSvmPasidSpace @ 0x1405636C4
 * Callers:
 *     IommupGetSystemContext @ 0x140562910 (IommupGetSystemContext.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvCreateSvmPasidSpace(int a1)
{
  int v1; // ebx
  char *v4; // rax
  signed __int8 v5; // cf
  char *v6; // rsi

  v1 = 0;
  if ( !IommupHvSvmEnabled )
    return 3221225659LL;
  if ( IommupHvSvmPasidSpaceCreated )
    return a1 != IommupHvSvmDomain ? 0xC00000BB : 0;
  v4 = (char *)KeAbPreAcquire((__int64)&IommupHvGlobalPushLock, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&IommupHvGlobalPushLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&IommupHvGlobalPushLock, v4, (__int64)&IommupHvGlobalPushLock);
  if ( v6 )
    v6[10] = 1;
  if ( IommupHvSvmPasidSpaceCreated )
  {
    if ( IommupHvSvmDomain != a1 )
      v1 = -1073741637;
    goto LABEL_15;
  }
  if ( IommupHvPasidSpaceCreated )
    goto LABEL_14;
  v1 = guard_dispatch_icall_no_overrides(0LL, (unsigned int)IommupHvMaximumAsids);
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
