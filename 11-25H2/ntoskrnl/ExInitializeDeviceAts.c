/*
 * XREFs of ExInitializeDeviceAts @ 0x14064BCE0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExpPrepareNewAtsDevice @ 0x14064C110 (ExpPrepareNewAtsDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IoQueryInterface @ 0x1407143B0 (IoQueryInterface.c)
 */

__int64 __fastcall ExInitializeDeviceAts(ULONG_PTR BugCheckParameter1, int a2)
{
  char v4; // r14
  int Interface; // esi
  __int64 *v7; // rax
  signed __int8 v8; // cf
  __int64 *v9; // rdi
  PVOID *v10; // rax
  PVOID *v11; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-69h]
  _OWORD v13[3]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v14[8]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v15; // [rsp+78h] [rbp-11h]
  PVOID *v16; // [rsp+F0h] [rbp+67h] BYREF

  memset(v13, 0, sizeof(v13));
  memset_0(v14, 0, 0x50uLL);
  v16 = 0LL;
  v4 = 0;
  if ( !BugCheckParameter1 )
    return 3221225485LL;
  Interface = IoQueryInterface(BugCheckParameter1, 0LL, &GUID_IOMMU_BUS_INTERFACE, 80LL, 1, BugCheckParameter1, v14);
  if ( Interface >= 0 )
  {
    LOWORD(BugCheckParameter4) = 1;
    Interface = IoQueryInterface(
                  BugCheckParameter1,
                  0LL,
                  &GUID_PCI_ATS_INTERFACE,
                  48LL,
                  BugCheckParameter4,
                  BugCheckParameter1,
                  v13);
    if ( Interface < 0 )
    {
LABEL_18:
      guard_dispatch_icall_no_overrides(v15);
      if ( v4 )
        guard_dispatch_icall_no_overrides(*((_QWORD *)&v13[0] + 1));
      return (unsigned int)Interface;
    }
    v4 = 1;
    v7 = KeAbPreAcquire((__int64)&ExpAtsSvmDeviceListLock, 0LL);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v7, (__int64)&ExpAtsSvmDeviceListLock);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    v10 = (PVOID *)ExpAtsSvmDevices;
    if ( ExpAtsSvmDevices != &ExpAtsSvmDevices )
    {
      do
      {
        v11 = v10;
        v16 = v10;
        if ( v10[3] == (PVOID)BugCheckParameter1 )
          break;
        v10 = (PVOID *)*v10;
      }
      while ( v10 != &ExpAtsSvmDevices );
      if ( v11[3] == (PVOID)BugCheckParameter1 )
      {
        if ( v11 )
        {
          if ( *((_DWORD *)v11 + 9) )
            KeBugCheckEx(0x1E9u, BugCheckParameter1, 0LL, 0LL, 0LL);
          ++*((_DWORD *)v11 + 8);
          goto LABEL_15;
        }
      }
      else
      {
        v16 = 0LL;
      }
    }
    Interface = ExpPrepareNewAtsDevice(BugCheckParameter1, a2, (unsigned int)v14, (unsigned int)v13, (__int64)&v16);
LABEL_15:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
    goto LABEL_18;
  }
  return (unsigned int)Interface;
}
