/*
 * XREFs of IommupDeviceDisableSvm @ 0x1406F34B8
 * Callers:
 *     IommupDeviceDisablePasidTaggedDma @ 0x1406F3438 (IommupDeviceDisablePasidTaggedDma.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     IommupDeviceGetPasidDevice @ 0x14054B6BC (IommupDeviceGetPasidDevice.c)
 *     IommupPasidDeviceDelete @ 0x14054BDCC (IommupPasidDeviceDelete.c)
 *     HalpIommuFreeDomainId @ 0x14054F918 (HalpIommuFreeDomainId.c)
 *     IommuDisableDevicePasid @ 0x140560FB0 (IommuDisableDevicePasid.c)
 *     IommupUnmapDeviceInternal @ 0x140562918 (IommupUnmapDeviceInternal.c)
 *     IommupHvDetachPasidDevice @ 0x140563310 (IommupHvDetachPasidDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupDeviceDisableSvm(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 *v5; // rbp
  __int64 *v6; // rbx
  unsigned int v7; // r14d
  __int64 *v8; // rax
  __int64 *v9; // rbp
  __int64 *v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v10 = 0LL;
  if ( !IommupDeviceGetPasidDevice(a1, a2, 0, &v10) )
    return 3221225473LL;
  if ( (*(_DWORD *)(a1 + 384) & 4) != 0 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 288));
  v5 = v10;
  if ( HalpHvIommu )
  {
    IommupHvDetachPasidDevice(a1);
  }
  else
  {
    v6 = (__int64 *)v10[7];
    v2 = *(_DWORD *)(*v6 + 16);
    IommuDisableDevicePasid((__int64)v6, a1);
    IommupUnmapDeviceInternal(*v6, a1);
  }
  v7 = IommupPasidDeviceDelete((__int64)v5);
  if ( !HalpHvIommu )
    HalpIommuFreeDomainId(*(_QWORD *)(a1 + 32), v2);
  v8 = KeAbPreAcquire(a1 + 376, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 376), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 376), v8, a1 + 376);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  if ( *(_QWORD *)(a1 + 360) != a1 + 360 )
    v7 = -1073740024;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 376), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 376));
  KeAbPostRelease(a1 + 376);
  *(_DWORD *)(a1 + 384) &= 0xFFFFFF03;
  return v7;
}
