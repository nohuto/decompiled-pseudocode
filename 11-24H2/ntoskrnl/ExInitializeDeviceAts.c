/*
 * XREFs of ExInitializeDeviceAts @ 0x140657C40
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ExpPrepareNewAtsDevice @ 0x140658070 (ExpPrepareNewAtsDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IoQueryInterface @ 0x1407204B0 (IoQueryInterface.c)
 */

__int64 __fastcall ExInitializeDeviceAts(ULONG_PTR BugCheckParameter1, int a2)
{
  char v4; // r14
  int Interface; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  signed __int8 v11; // cf
  _QWORD *v12; // rdi
  PVOID *v13; // rax
  PVOID *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _OWORD v18[3]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v19[8]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v20; // [rsp+78h] [rbp-11h]
  PVOID *v21; // [rsp+F0h] [rbp+67h] BYREF

  memset(v18, 0, sizeof(v18));
  memset_0(v19, 0, 0x50uLL);
  v21 = 0LL;
  v4 = 0;
  if ( !BugCheckParameter1 )
    return 3221225485LL;
  Interface = IoQueryInterface(
                BugCheckParameter1,
                0,
                (unsigned int)&GUID_IOMMU_BUS_INTERFACE,
                80,
                1,
                BugCheckParameter1,
                v19);
  if ( Interface >= 0 )
  {
    Interface = IoQueryInterface(
                  BugCheckParameter1,
                  0,
                  (unsigned int)&GUID_PCI_ATS_INTERFACE,
                  48,
                  1,
                  BugCheckParameter1,
                  v18);
    if ( Interface < 0 )
    {
LABEL_18:
      guard_dispatch_icall_no_overrides(v20, v7, v8, v9);
      if ( v4 )
        guard_dispatch_icall_no_overrides(*((_QWORD *)&v18[0] + 1), v15, v16, v17);
      return (unsigned int)Interface;
    }
    v4 = 1;
    v10 = KeAbPreAcquire((__int64)&ExpAtsSvmDeviceListLock, 0LL);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL);
    v12 = v10;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, (__int64)v10, (__int64)&ExpAtsSvmDeviceListLock);
    if ( v12 )
      *((_BYTE *)v12 + 10) = 1;
    v13 = (PVOID *)ExpAtsSvmDevices;
    if ( ExpAtsSvmDevices != &ExpAtsSvmDevices )
    {
      do
      {
        v14 = v13;
        v21 = v13;
        if ( v13[3] == (PVOID)BugCheckParameter1 )
          break;
        v13 = (PVOID *)*v13;
      }
      while ( v13 != &ExpAtsSvmDevices );
      if ( v14[3] == (PVOID)BugCheckParameter1 )
      {
        if ( v14 )
        {
          if ( *((_DWORD *)v14 + 9) )
            KeBugCheckEx(0x1E9u, BugCheckParameter1, 0LL, 0LL, 0LL);
          ++*((_DWORD *)v14 + 8);
          goto LABEL_15;
        }
      }
      else
      {
        v21 = 0LL;
      }
    }
    Interface = ExpPrepareNewAtsDevice(BugCheckParameter1, a2, (unsigned int)v19, (unsigned int)v18, (__int64)&v21);
LABEL_15:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
    goto LABEL_18;
  }
  return (unsigned int)Interface;
}
