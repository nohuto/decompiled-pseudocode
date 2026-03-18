/*
 * XREFs of ACPIInternalFindDeviceExtensionNoLock @ 0x14003C8BC
 * Callers:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x14003BCB4 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x14003C8BC (ACPIInternalFindDeviceExtensionNoLock.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x1400172C4 (ACPIExtListEnumNext.c)
 *     ACPIInitReferenceDeviceExtension @ 0x140017C58 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x14003C8BC (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIExtListStartEnum @ 0x14003D65C (ACPIExtListStartEnum.c)
 *     ACPIExtListExitEnumEarly @ 0x140056580 (ACPIExtListExitEnumEarly.c)
 */

__int64 __fastcall ACPIInternalFindDeviceExtensionNoLock(__int64 a1, __int64 a2)
{
  char *i; // rax
  __int64 DeviceExtensionNoLock; // rbx
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock[2]; // [rsp+28h] [rbp-38h]
  KIRQL NewIrql[16]; // [rsp+38h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-18h]
  int v10; // [rsp+50h] [rbp-10h]
  int v11; // [rsp+54h] [rbp-Ch]

  v11 = 0;
  v10 = 0;
  v6 = a2 + 800;
  v9 = 816LL;
  *(_OWORD *)NewIrql = 0LL;
  *(_OWORD *)SpinLock = 0LL;
  for ( i = (char *)ACPIExtListStartEnum(&v6); ; i = ACPIExtListEnumNext((__int64)&v6) )
  {
    DeviceExtensionNoLock = (__int64)i;
    if ( *(_QWORD *)&NewIrql[8] + v9 == v6 )
      break;
    if ( v10 == 1 )
    {
      ACPIInitReferenceDeviceExtension(*(__int64 *)&NewIrql[8]);
      KeReleaseSpinLock(SpinLock[1], NewIrql[0]);
    }
    if ( !DeviceExtensionNoLock )
    {
      ACPIExtListExitEnumEarly(&v6);
      return 0LL;
    }
    if ( *(_QWORD *)(DeviceExtensionNoLock + 784) != a1 )
    {
      DeviceExtensionNoLock = ACPIInternalFindDeviceExtensionNoLock(a1, DeviceExtensionNoLock);
      if ( !DeviceExtensionNoLock )
        continue;
    }
    ACPIExtListExitEnumEarly(&v6);
    return DeviceExtensionNoLock;
  }
  if ( v10 )
    KeReleaseSpinLock(SpinLock[1], NewIrql[0]);
  return 0LL;
}
