/*
 * XREFs of IommupHvAttachPasidDevice @ 0x140562CAC
 * Callers:
 *     IommupDeviceEnableSvm @ 0x1406F3754 (IommupDeviceEnableSvm.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053997C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvAttachPasidDevice(__int64 a1)
{
  int v1; // edi
  __int64 *v3; // rax
  signed __int8 v4; // cf
  __int64 *v5; // r14
  __int64 *v6; // rax
  __int64 *v7; // r14
  __int64 *v8; // rax
  __int64 *v9; // rdi
  __int64 v11; // [rsp+20h] [rbp-50h] BYREF
  __int128 v12; // [rsp+28h] [rbp-48h]
  __int128 v13; // [rsp+38h] [rbp-38h]
  __int64 v14; // [rsp+48h] [rbp-28h]
  __int64 v15; // [rsp+50h] [rbp-20h] BYREF
  int v16; // [rsp+58h] [rbp-18h]

  v1 = 0;
  v15 = 0LL;
  v16 = 0;
  LODWORD(v14) = 0;
  v11 = (unsigned int)IommupHvPasidInitialDomainId | 0x100000000LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *(_BYTE *)(a1 + 273) && !IommupHvPasidSpaceCreated )
    {
      v3 = KeAbPreAcquire((__int64)&IommupHvGlobalPushLock, 0LL);
      v4 = _interlockedbittestandset64((volatile signed __int32 *)&IommupHvGlobalPushLock, 0LL);
      v5 = v3;
      if ( v4 )
        ExfAcquirePushLockExclusiveEx(&IommupHvGlobalPushLock, v3, (__int64)&IommupHvGlobalPushLock);
      if ( v5 )
        *((_BYTE *)v5 + 10) = 1;
      if ( !IommupHvPasidSpaceCreated )
      {
        v1 = guard_dispatch_icall_no_overrides(0LL);
        if ( v1 >= 0 )
          IommupHvPasidSpaceCreated = 1;
      }
      goto LABEL_20;
    }
  }
  else if ( !IommupHvPasidSpaceCreated )
  {
    v6 = KeAbPreAcquire((__int64)&IommupHvGlobalPushLock, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&IommupHvGlobalPushLock, 0LL);
    v7 = v6;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&IommupHvGlobalPushLock, v6, (__int64)&IommupHvGlobalPushLock);
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    if ( !IommupHvPasidSpaceCreated )
    {
      v1 = guard_dispatch_icall_no_overrides(0LL);
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
  v8 = KeAbPreAcquire((__int64)&IommupHvGlobalPushLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&IommupHvGlobalPushLock, 0LL);
  v9 = v8;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&IommupHvGlobalPushLock, v8, (__int64)&IommupHvGlobalPushLock);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  v16 = 0;
  v15 = v11;
  v1 = guard_dispatch_icall_no_overrides(&v15);
  if ( v1 >= 0 )
  {
    v14 = 0LL;
    v12 = 0LL;
    LODWORD(v12) = 1;
    v13 = 0LL;
    LOWORD(v13) = 257;
    v1 = guard_dispatch_icall_no_overrides(&v11);
    if ( v1 >= 0 )
      IommupHvPasidInitialDomainCreated = 1;
    else
      guard_dispatch_icall_no_overrides(&v11);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IommupHvGlobalPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IommupHvGlobalPushLock);
  KeAbPostRelease((ULONG_PTR)&IommupHvGlobalPushLock);
  if ( v1 >= 0 )
  {
LABEL_46:
    v1 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32));
    if ( v1 >= 0 )
    {
      v1 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32));
      if ( v1 < 0 )
      {
LABEL_42:
        guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32));
        return (unsigned int)v1;
      }
      if ( *(_BYTE *)(a1 + 273) )
      {
        v1 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32));
        if ( v1 < 0 )
        {
LABEL_41:
          guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32));
          goto LABEL_42;
        }
        v1 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32));
        if ( v1 < 0 )
        {
          guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32));
          goto LABEL_41;
        }
      }
    }
  }
  return (unsigned int)v1;
}
