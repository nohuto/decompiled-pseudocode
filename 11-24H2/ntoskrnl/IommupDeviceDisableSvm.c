/*
 * XREFs of IommupDeviceDisableSvm @ 0x1406FF2A8
 * Callers:
 *     IommupDeviceDisablePasidTaggedDma @ 0x1406FF228 (IommupDeviceDisablePasidTaggedDma.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     IommupDeviceGetPasidDevice @ 0x14054DFCC (IommupDeviceGetPasidDevice.c)
 *     IommupPasidDeviceDelete @ 0x14054E6DC (IommupPasidDeviceDelete.c)
 *     HalpIommuFreeDomainId @ 0x140552218 (HalpIommuFreeDomainId.c)
 *     IommuDisableDevicePasid @ 0x140563850 (IommuDisableDevicePasid.c)
 *     IommupUnmapDeviceInternal @ 0x1405651A8 (IommupUnmapDeviceInternal.c)
 *     IommupHvDetachPasidDevice @ 0x140565B20 (IommupHvDetachPasidDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupDeviceDisableSvm(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v8; // rbp
  __int64 *v9; // rbx
  unsigned int v10; // r14d
  _QWORD *v11; // rax
  _QWORD *v12; // rbp
  __int64 *v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v13 = 0LL;
  if ( !IommupDeviceGetPasidDevice(a1, a2, 0, &v13) )
    return 3221225473LL;
  if ( (*(_DWORD *)(a1 + 384) & 4) != 0 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 288), a1 + 384, v5, v6);
  v8 = v13;
  if ( HalpHvIommu )
  {
    IommupHvDetachPasidDevice(a1, v4, v5, v6);
  }
  else
  {
    v9 = (__int64 *)v13[7];
    v2 = *(_DWORD *)(*v9 + 16);
    IommuDisableDevicePasid((__int64)v9, a1);
    IommupUnmapDeviceInternal(*v9, a1);
  }
  v10 = IommupPasidDeviceDelete((__int64)v8);
  if ( !HalpHvIommu )
    HalpIommuFreeDomainId(*(_QWORD *)(a1 + 32), v2);
  v11 = KeAbPreAcquire(a1 + 376, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 376), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 376), (__int64)v11, a1 + 376);
  if ( v12 )
    *((_BYTE *)v12 + 10) = 1;
  if ( *(_QWORD *)(a1 + 360) != a1 + 360 )
    v10 = -1073740024;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 376), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 376));
  KeAbPostRelease(a1 + 376);
  *(_DWORD *)(a1 + 384) &= 0xFFFFFF03;
  return v10;
}
