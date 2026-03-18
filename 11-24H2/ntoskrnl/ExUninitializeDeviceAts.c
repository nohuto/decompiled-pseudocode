/*
 * XREFs of ExUninitializeDeviceAts @ 0x140657E2C
 * Callers:
 *     PiIommuUninitializeDeviceAts @ 0x1404C1094 (PiIommuUninitializeDeviceAts.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExpAtsDereferenceDevice @ 0x140657F9C (ExpAtsDereferenceDevice.c)
 */

__int64 __fastcall ExUninitializeDeviceAts(PVOID a1)
{
  unsigned int v1; // ebx
  _QWORD *v3; // rax
  signed __int8 v4; // cf
  _QWORD *v5; // rdi
  PVOID *i; // rcx

  v1 = 0;
  if ( a1 )
  {
    v3 = KeAbPreAcquire((__int64)&ExpAtsSvmDeviceListLock, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL);
    v5 = v3;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, (__int64)v3, (__int64)&ExpAtsSvmDeviceListLock);
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
