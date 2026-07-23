/*
 * XREFs of IommupHvAttachPasidDevice @ 0x1405630EC
 * Callers:
 *     IommupDeviceEnableSvm @ 0x1406FD184 (IommupDeviceEnableSvm.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x140539A0C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvAttachPasidDevice(__int64 a1)
{
  int v1; // edi
  char *v3; // rax
  signed __int8 v4; // cf
  char *v5; // r14
  char *v6; // rax
  char *v7; // r14
  char *v8; // rax
  __int64 v9; // rdx
  char *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v15; // [rsp+20h] [rbp-50h] BYREF
  __int128 v16; // [rsp+28h] [rbp-48h] BYREF
  __int128 v17; // [rsp+38h] [rbp-38h]
  __int64 v18; // [rsp+48h] [rbp-28h]
  __int64 v19; // [rsp+50h] [rbp-20h] BYREF
  int v20; // [rsp+58h] [rbp-18h]

  v1 = 0;
  v19 = 0LL;
  v20 = 0;
  LODWORD(v18) = 0;
  v15 = (unsigned int)IommupHvPasidInitialDomainId | 0x100000000LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *(_BYTE *)(a1 + 273) && !IommupHvPasidSpaceCreated )
    {
      v3 = (char *)KeAbPreAcquire((__int64)&IommupHvGlobalPushLock, 0LL);
      v4 = _interlockedbittestandset64((volatile signed __int32 *)&IommupHvGlobalPushLock, 0LL);
      v5 = v3;
      if ( v4 )
        ExfAcquirePushLockExclusiveEx(&IommupHvGlobalPushLock, v3, (__int64)&IommupHvGlobalPushLock);
      if ( v5 )
        v5[10] = 1;
      if ( !IommupHvPasidSpaceCreated )
      {
        v1 = guard_dispatch_icall_no_overrides(0LL, (unsigned int)IommupHvMaximumAsids);
        if ( v1 >= 0 )
          IommupHvPasidSpaceCreated = 1;
      }
      goto LABEL_20;
    }
  }
  else if ( !IommupHvPasidSpaceCreated )
  {
    v6 = (char *)KeAbPreAcquire((__int64)&IommupHvGlobalPushLock, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&IommupHvGlobalPushLock, 0LL);
    v7 = v6;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&IommupHvGlobalPushLock, v6, (__int64)&IommupHvGlobalPushLock);
    if ( v7 )
      v7[10] = 1;
    if ( !IommupHvPasidSpaceCreated )
    {
      v1 = guard_dispatch_icall_no_overrides(0LL, (unsigned int)IommupHvMaximumAsids);
      if ( v1 >= 0 )
        IommupHvPasidSpaceCreated = 1;
    }
LABEL_20:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IommupHvGlobalPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&IommupHvGlobalPushLock);
    KeAbPostRelease((ULONG_PTR)&IommupHvGlobalPushLock);
    if ( v1 < 0 )
      return (unsigned int)v1;
  }
  if ( IommupHvPasidInitialDomainCreated )
    goto LABEL_46;
  v8 = (char *)KeAbPreAcquire((__int64)&IommupHvGlobalPushLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&IommupHvGlobalPushLock, 0LL);
  v10 = v8;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&IommupHvGlobalPushLock, v8, (__int64)&IommupHvGlobalPushLock);
  if ( v10 )
    v10[10] = 1;
  v20 = 0;
  v19 = v15;
  v1 = guard_dispatch_icall_no_overrides(&v19, v9);
  if ( v1 >= 0 )
  {
    v18 = 0LL;
    v16 = 0LL;
    LODWORD(v16) = 1;
    v17 = 0LL;
    LOWORD(v17) = 257;
    v1 = guard_dispatch_icall_no_overrides(&v15, &v16);
    if ( v1 >= 0 )
      IommupHvPasidInitialDomainCreated = 1;
    else
      guard_dispatch_icall_no_overrides(&v15, v11);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IommupHvGlobalPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IommupHvGlobalPushLock);
  KeAbPostRelease((ULONG_PTR)&IommupHvGlobalPushLock);
  if ( v1 >= 0 )
  {
LABEL_46:
    v1 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), &v15);
    if ( v1 >= 0 )
    {
      v1 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), &v15);
      if ( v1 < 0 )
      {
LABEL_42:
        guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), v12);
        return (unsigned int)v1;
      }
      if ( *(_BYTE *)(a1 + 273) )
      {
        v1 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), 42LL);
        if ( v1 < 0 )
        {
LABEL_41:
          guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), v13);
          goto LABEL_42;
        }
        v1 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), 0LL);
        if ( v1 < 0 )
        {
          guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), 33LL);
          goto LABEL_41;
        }
      }
    }
  }
  return (unsigned int)v1;
}
