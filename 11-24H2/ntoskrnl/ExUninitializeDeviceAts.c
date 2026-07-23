/*
 * XREFs of ExUninitializeDeviceAts @ 0x14065652C
 * Callers:
 *     PiIommuUninitializeDeviceAts @ 0x1404BC67C (PiIommuUninitializeDeviceAts.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExpAtsDereferenceDevice @ 0x14065669C (ExpAtsDereferenceDevice.c)
 */

__int64 __fastcall ExUninitializeDeviceAts(PVOID a1)
{
  unsigned int v1; // ebx
  char *v3; // rax
  signed __int8 v4; // cf
  char *v5; // rdi
  PVOID *i; // rcx

  v1 = 0;
  if ( a1 )
  {
    v3 = (char *)KeAbPreAcquire((__int64)&ExpAtsSvmDeviceListLock, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL);
    v5 = v3;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v3, (__int64)&ExpAtsSvmDeviceListLock);
    if ( v5 )
      v5[10] = 1;
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
