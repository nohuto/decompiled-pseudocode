/*
 * XREFs of IommupDeviceDisableSvm @ 0x1406FCEE8
 * Callers:
 *     IommupDeviceDisablePasidTaggedDma @ 0x1406FCE68 (IommupDeviceDisablePasidTaggedDma.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     IommupDeviceGetPasidDevice @ 0x14054B87C (IommupDeviceGetPasidDevice.c)
 *     IommupPasidDeviceDelete @ 0x14054C01C (IommupPasidDeviceDelete.c)
 *     HalpIommuFreeDomainId @ 0x14054FB58 (HalpIommuFreeDomainId.c)
 *     IommuDisableDevicePasid @ 0x140561480 (IommuDisableDevicePasid.c)
 *     IommupUnmapDeviceInternal @ 0x140562DD8 (IommupUnmapDeviceInternal.c)
 *     IommupHvDetachPasidDevice @ 0x1405637D8 (IommupHvDetachPasidDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupDeviceDisableSvm(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v4; // rdx
  __int64 *v6; // rbp
  __int64 *v7; // rbx
  unsigned int v8; // r14d
  char *v9; // rax
  char *v10; // rbp
  __int64 *v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v11 = 0LL;
  if ( !IommupDeviceGetPasidDevice(a1, a2, 0, &v11) )
    return 3221225473LL;
  if ( (*(_DWORD *)(a1 + 384) & 4) != 0 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 288), a1 + 384);
  v6 = v11;
  if ( HalpHvIommu )
  {
    IommupHvDetachPasidDevice(a1, v4);
  }
  else
  {
    v7 = (__int64 *)v11[7];
    v2 = *(_DWORD *)(*v7 + 16);
    IommuDisableDevicePasid((__int64)v7, a1);
    IommupUnmapDeviceInternal(*v7, a1);
  }
  v8 = IommupPasidDeviceDelete((__int64)v6);
  if ( !HalpHvIommu )
    HalpIommuFreeDomainId(*(_QWORD *)(a1 + 32), v2);
  v9 = (char *)KeAbPreAcquire(a1 + 376, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 376), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 376), v9, a1 + 376);
  if ( v10 )
    v10[10] = 1;
  if ( *(_QWORD *)(a1 + 360) != a1 + 360 )
    v8 = -1073740024;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 376), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 376));
  KeAbPostRelease(a1 + 376);
  *(_DWORD *)(a1 + 384) &= 0xFFFFFF03;
  return v8;
}
