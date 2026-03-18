/*
 * XREFs of IommupHvAttachPasidDevice @ 0x1405654BC
 * Callers:
 *     IommupDeviceEnableSvm @ 0x1406FF544 (IommupDeviceEnableSvm.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053C180 (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvAttachPasidDevice(__int64 a1)
{
  int v1; // edi
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  signed __int8 v8; // cf
  _QWORD *v9; // r14
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // r14
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r9
  __int64 v34; // [rsp+20h] [rbp-50h] BYREF
  __int128 v35; // [rsp+28h] [rbp-48h] BYREF
  __int128 v36; // [rsp+38h] [rbp-38h]
  __int64 v37; // [rsp+48h] [rbp-28h]
  __int64 v38; // [rsp+50h] [rbp-20h] BYREF
  int v39; // [rsp+58h] [rbp-18h]

  v1 = 0;
  v38 = 0LL;
  v39 = 0;
  LODWORD(v37) = 0;
  v34 = (unsigned int)IommupHvPasidInitialDomainId | 0x100000000LL;
  v35 = 0LL;
  v36 = 0LL;
  if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *(_BYTE *)(a1 + 273) && !IommupHvPasidSpaceCreated )
    {
      v5 = KeAbPreAcquire((__int64)&IommupHvGlobalPushLock, 0LL);
      v8 = _interlockedbittestandset64((volatile signed __int32 *)&IommupHvGlobalPushLock, 0LL);
      v9 = v5;
      if ( v8 )
        ExfAcquirePushLockExclusiveEx(&IommupHvGlobalPushLock, (__int64)v5, (__int64)&IommupHvGlobalPushLock);
      if ( v9 )
        *((_BYTE *)v9 + 10) = 1;
      if ( !IommupHvPasidSpaceCreated )
      {
        v1 = guard_dispatch_icall_no_overrides(0LL, (unsigned int)IommupHvMaximumAsids, v6, v7);
        if ( v1 >= 0 )
          IommupHvPasidSpaceCreated = 1;
      }
      goto LABEL_20;
    }
  }
  else if ( !IommupHvPasidSpaceCreated )
  {
    v10 = KeAbPreAcquire((__int64)&IommupHvGlobalPushLock, 0LL);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&IommupHvGlobalPushLock, 0LL);
    v13 = v10;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&IommupHvGlobalPushLock, (__int64)v10, (__int64)&IommupHvGlobalPushLock);
    if ( v13 )
      *((_BYTE *)v13 + 10) = 1;
    if ( !IommupHvPasidSpaceCreated )
    {
      v1 = guard_dispatch_icall_no_overrides(0LL, (unsigned int)IommupHvMaximumAsids, v11, v12);
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
  v14 = KeAbPreAcquire((__int64)&IommupHvGlobalPushLock, 0LL);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&IommupHvGlobalPushLock, 0LL);
  v18 = v14;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&IommupHvGlobalPushLock, (__int64)v14, (__int64)&IommupHvGlobalPushLock);
  if ( v18 )
    *((_BYTE *)v18 + 10) = 1;
  v39 = 0;
  v38 = v34;
  v1 = guard_dispatch_icall_no_overrides(&v38, v15, v16, v17);
  if ( v1 >= 0 )
  {
    v37 = 0LL;
    v35 = 0LL;
    LODWORD(v35) = 1;
    v36 = 0LL;
    LOWORD(v36) = 257;
    v1 = guard_dispatch_icall_no_overrides(&v34, &v35, v19, v20);
    if ( v1 >= 0 )
      IommupHvPasidInitialDomainCreated = 1;
    else
      guard_dispatch_icall_no_overrides(&v34, v21, v22, v23);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IommupHvGlobalPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IommupHvGlobalPushLock);
  KeAbPostRelease((ULONG_PTR)&IommupHvGlobalPushLock);
  if ( v1 >= 0 )
  {
LABEL_46:
    v1 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), &v34, v3, v4);
    if ( v1 >= 0 )
    {
      v1 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), &v34, v24, v25);
      if ( v1 < 0 )
      {
LABEL_42:
        guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), v26, v27, v28);
        return (unsigned int)v1;
      }
      if ( *(_BYTE *)(a1 + 273) )
      {
        v1 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), 42LL, (*(_DWORD *)(a1 + 384) >> 3) & 0x1F, v28);
        if ( v1 < 0 )
        {
LABEL_41:
          guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), v29, v30, v31);
          goto LABEL_42;
        }
        v1 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), 0LL, v30, v31);
        if ( v1 < 0 )
        {
          guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), 33LL, 0LL, v32);
          goto LABEL_41;
        }
      }
    }
  }
  return (unsigned int)v1;
}
