/*
 * XREFs of ExUninitializeDeviceAts @ 0x14064BECC
 * Callers:
 *     PiIommuUninitializeDeviceAts @ 0x1404C2898 (PiIommuUninitializeDeviceAts.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExpAtsDereferenceDevice @ 0x14064C03C (ExpAtsDereferenceDevice.c)
 */

__int64 __fastcall ExUninitializeDeviceAts(PVOID a1)
{
  unsigned int v1; // ebx
  __int64 *v3; // rax
  signed __int8 v4; // cf
  __int64 *v5; // rdi
  PVOID *i; // rcx

  v1 = 0;
  if ( a1 )
  {
    v3 = KeAbPreAcquire((__int64)&ExpAtsSvmDeviceListLock, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL);
    v5 = v3;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v3, (__int64)&ExpAtsSvmDeviceListLock);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    for ( i = (PVOID *)ExpAtsSvmDevices; i != &ExpAtsSvmDevices; i = (PVOID *)*i )
    {
      if ( i[3] == a1 )
      {
        if ( *((_DWORD *)i + 8) > *((_DWORD *)i + 9) )
          v1 = ExpAtsDereferenceDevice(i);
        break;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
