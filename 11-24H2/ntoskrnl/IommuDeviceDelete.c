/*
 * XREFs of IommuDeviceDelete @ 0x1407039C0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline @ 0x14054D414 (Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpIommuDeleteDevice @ 0x14054DC10 (HalpIommuDeleteDevice.c)
 *     IommupDeviceGetPasidDevice @ 0x14054DFCC (IommupDeviceGetPasidDevice.c)
 */

__int64 __fastcall IommuDeviceDelete(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rdx
  _QWORD *v4; // rax
  _QWORD *v5; // r15
  __int64 v6; // r15
  bool v7; // zf
  _QWORD *v8; // rax
  _QWORD *v9; // r15
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 **v12; // rcx
  __int64 *v13; // rax
  __int64 *v15; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v15 = 0LL;
  if ( *(_QWORD *)(a1 + 24) )
    return 3221227272LL;
  if ( (unsigned int)Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline() )
  {
    v4 = KeAbPreAcquire(a1 + 416, 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 416), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 416), (__int64)v4, a1 + 416);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    v6 = *(_QWORD *)(a1 + 80);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 416), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 416));
    KeAbPostRelease(a1 + 416);
    v7 = v6 == 0;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 80) == 0LL;
  }
  if ( !v7 )
    return 3221227272LL;
  if ( *(_BYTE *)(a1 + 274) )
  {
    IommupDeviceGetPasidDevice(a1, v3, 1, &v15);
    v8 = KeAbPreAcquire(a1 + 376, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 376), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 376), (__int64)v8, a1 + 376);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    v10 = a1 + 360;
    v11 = *(_QWORD *)(a1 + 360);
    v12 = *(__int64 ***)(a1 + 368);
    if ( *v12 != (__int64 *)(a1 + 360) )
      __fastfail(3u);
    v13 = v15;
    *v15 = v10;
    v13[1] = (__int64)v12;
    *v12 = v13;
    *(_QWORD *)(a1 + 368) = v13;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 376), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 376));
    KeAbPostRelease(a1 + 376);
    v1 = a1 + 360 != v11 ? 0xC0000708 : 0;
    if ( v11 != v10 )
      return a1 + 360 != v11 ? 0xC0000708 : 0;
  }
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 16), 1) != 2 )
    return (unsigned int)HalpIommuDeleteDevice((__int64 *)a1);
  return v1;
}
