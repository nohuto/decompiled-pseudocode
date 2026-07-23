/*
 * XREFs of ExInitializeDeviceAts @ 0x140656340
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExpPrepareNewAtsDevice @ 0x140656770 (ExpPrepareNewAtsDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IoQueryInterface @ 0x14071E040 (IoQueryInterface.c)
 */

__int64 __fastcall ExInitializeDeviceAts(ULONG_PTR BugCheckParameter1, int a2)
{
  char v4; // r14
  int Interface; // esi
  __int64 v7; // rdx
  char *v8; // rax
  signed __int8 v9; // cf
  char *v10; // rdi
  PVOID *v11; // rax
  PVOID *v12; // rcx
  __int64 v13; // rdx
  _OWORD v14[3]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v15[8]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v16; // [rsp+78h] [rbp-11h]
  PVOID *v17; // [rsp+F0h] [rbp+67h] BYREF

  memset(v14, 0, sizeof(v14));
  memset_0(v15, 0, 0x50uLL);
  v17 = 0LL;
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
                v15);
  if ( Interface >= 0 )
  {
    Interface = IoQueryInterface(
                  BugCheckParameter1,
                  0,
                  (unsigned int)&GUID_PCI_ATS_INTERFACE,
                  48,
                  1,
                  BugCheckParameter1,
                  v14);
    if ( Interface < 0 )
    {
LABEL_18:
      guard_dispatch_icall_no_overrides(v16, v7);
      if ( v4 )
        guard_dispatch_icall_no_overrides(*((_QWORD *)&v14[0] + 1), v13);
      return (unsigned int)Interface;
    }
    v4 = 1;
    v8 = (char *)KeAbPreAcquire((__int64)&ExpAtsSvmDeviceListLock, 0LL);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL);
    v10 = v8;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v8, (__int64)&ExpAtsSvmDeviceListLock);
    if ( v10 )
      v10[10] = 1;
    v11 = (PVOID *)ExpAtsSvmDevices;
    if ( ExpAtsSvmDevices != &ExpAtsSvmDevices )
    {
      do
      {
        v12 = v11;
        v17 = v11;
        if ( v11[3] == (PVOID)BugCheckParameter1 )
          break;
        v11 = (PVOID *)*v11;
      }
      while ( v11 != &ExpAtsSvmDevices );
      if ( v12[3] == (PVOID)BugCheckParameter1 )
      {
        if ( v12 )
        {
          if ( *((_DWORD *)v12 + 9) )
            KeBugCheckEx(0x1E9u, BugCheckParameter1, 0LL, 0LL, 0LL);
          ++*((_DWORD *)v12 + 8);
          goto LABEL_15;
        }
      }
      else
      {
        v17 = 0LL;
      }
    }
    Interface = ExpPrepareNewAtsDevice(BugCheckParameter1, a2, (unsigned int)v15, (unsigned int)v14, (__int64)&v17);
LABEL_15:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
    goto LABEL_18;
  }
  return (unsigned int)Interface;
}
