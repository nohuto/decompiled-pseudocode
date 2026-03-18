/*
 * XREFs of IommuDeviceDelete @ 0x1406F7B60
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     HalpIommuDeleteDevice @ 0x14054B2F8 (HalpIommuDeleteDevice.c)
 *     IommupDeviceGetPasidDevice @ 0x14054B6BC (IommupDeviceGetPasidDevice.c)
 */

__int64 __fastcall IommuDeviceDelete(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 *v4; // rax
  __int64 *v5; // r14
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 **v8; // rcx
  __int64 *v9; // rax
  __int64 *v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v11 = 0LL;
  if ( *(_QWORD *)(a1 + 24) || *(_QWORD *)(a1 + 80) )
    return 3221227272LL;
  if ( *(_BYTE *)(a1 + 274) )
  {
    IommupDeviceGetPasidDevice(a1, a2, 1, &v11);
    v4 = KeAbPreAcquire(a1 + 376, 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 376), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 376), v4, a1 + 376);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    v6 = a1 + 360;
    v7 = *(_QWORD *)(a1 + 360);
    v8 = *(__int64 ***)(a1 + 368);
    if ( *v8 != (__int64 *)(a1 + 360) )
      __fastfail(3u);
    v9 = v11;
    *v11 = v6;
    v9[1] = (__int64)v8;
    *v8 = v9;
    *(_QWORD *)(a1 + 368) = v9;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 376), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 376));
    KeAbPostRelease(a1 + 376);
    v2 = a1 + 360 != v7 ? 0xC0000708 : 0;
    if ( v7 != v6 )
      return a1 + 360 != v7 ? 0xC0000708 : 0;
  }
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 16), 1) != 2 )
    return (unsigned int)HalpIommuDeleteDevice((__int64 *)a1);
  return v2;
}
