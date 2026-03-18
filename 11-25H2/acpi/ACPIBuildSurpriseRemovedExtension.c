/*
 * XREFs of ACPIBuildSurpriseRemovedExtension @ 0x14003CA6C
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x14003CA6C (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x14003D09C (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusIrpRemoveDevice @ 0x140050130 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x140050500 (ACPIBusIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x1400172C4 (ACPIExtListEnumNext.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x140017568 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x140017C58 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIDockIsDockDevice @ 0x1400284D4 (ACPIDockIsDockDevice.c)
 *     ACPIInitRemoveDeviceExtension @ 0x14003C358 (ACPIInitRemoveDeviceExtension.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x14003CA6C (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIExtListStartEnum @ 0x14003D65C (ACPIExtListStartEnum.c)
 *     ACPIDockFindCorrespondingDock @ 0x14003D958 (ACPIDockFindCorrespondingDock.c)
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x14003DD9C (ACPIBuildProcessNotifyPepDeleteDevice.c)
 *     ACPIDevicePowerFlushQueue @ 0x14003DF5C (ACPIDevicePowerFlushQueue.c)
 *     AcpiCleanupDeviceExtensionEarly @ 0x140054B00 (AcpiCleanupDeviceExtensionEarly.c)
 */

__int64 __fastcall ACPIBuildSurpriseRemovedExtension(_QWORD *a1)
{
  __int64 CorrespondingDock; // rax
  char *i; // rax
  char *v4; // rdi
  KIRQL v5; // r14
  volatile signed __int64 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  const signed __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v12; // rdi
  _QWORD v13[2]; // [rsp+20h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-30h]
  KIRQL NewIrql[16]; // [rsp+38h] [rbp-28h]
  __int64 v16; // [rsp+48h] [rbp-18h]
  int v17; // [rsp+50h] [rbp-10h]
  int v18; // [rsp+54h] [rbp-Ch]

  v18 = 0;
  *(_OWORD *)NewIrql = 0LL;
  CorrespondingDock = ACPIDockFindCorrespondingDock();
  if ( CorrespondingDock )
  {
    *(_DWORD *)(CorrespondingDock + 368) = 5;
    ACPIBuildSurpriseRemovedExtension(CorrespondingDock);
  }
  v13[1] = 0LL;
  v13[0] = a1 + 100;
  SpinLock = &AcpiDeviceTreeLock;
  v16 = 816LL;
  v17 = 1;
  for ( i = (char *)ACPIExtListStartEnum(v13); ; i = ACPIExtListEnumNext((__int64)v13) )
  {
    v4 = i;
    if ( *(_QWORD *)&NewIrql[8] + v16 == v13[0] )
      break;
    if ( v17 == 1 )
    {
      ACPIInitReferenceDeviceExtension(*(__int64 *)&NewIrql[8]);
      KeReleaseSpinLock(SpinLock, NewIrql[0]);
    }
    ACPIBuildSurpriseRemovedExtension(v4);
  }
  if ( v17 )
    KeReleaseSpinLock(SpinLock, NewIrql[0]);
  ACPIDevicePowerFlushQueue(a1);
  ACPIBuildProcessNotifyPepDeleteDevice(a1, 0LL);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v6 = a1 + 1;
  v7 = a1[1] & 0x20LL;
  v8 = a1[1] & 0x40LL;
  if ( v8 || (v9 = a1 + 1, v7) )
  {
    _InterlockedAnd64(v6, 0xFFFFFFFFFFFFFC00uLL);
    _InterlockedOr64(v6, 0x8000000000100uLL);
    if ( v8 )
    {
      _InterlockedOr64(v6, 0x40uLL);
      a1[3] = AcpiSurpriseRemovedFilterIrpDispatch;
    }
    v9 = a1 + 1;
    if ( v7 )
    {
      _InterlockedOr64(v6, 0x20uLL);
      v9 = a1 + 1;
      a1[3] = &AcpiSurpriseRemovedPdoIrpDispatch;
    }
  }
  _InterlockedOr64(v6, 0x80uLL);
  if ( !_bittest64(v9, 0x2Bu) )
  {
    v12 = a1[99];
    if ( v12 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v12 + 8), 0x20000000000uLL);
      if ( a1[95] )
      {
        if ( ACPIDockIsDockDevice() )
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v12 + 784), SingleBusRelations);
      }
    }
  }
  AcpiCleanupDeviceExtensionEarly(a1);
  ACPIInitRemoveDeviceExtension(a1);
  if ( a1[95] )
  {
    if ( !_bittest64(v9, 0x2Bu) )
    {
      v10 = a1[98];
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 48) & 0x4000000) != 0 )
          ACPIInitDereferenceDeviceExtensionLocked((ULONG_PTR)a1);
      }
    }
    *(_QWORD *)(*(_QWORD *)a1[95] + 104LL) = 0LL;
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v5);
  return 0LL;
}
