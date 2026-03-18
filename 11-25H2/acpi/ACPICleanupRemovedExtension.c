/*
 * XREFs of ACPICleanupRemovedExtension @ 0x14005A794
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x14003D09C (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPICleanupRemovedExtension @ 0x14005A794 (ACPICleanupRemovedExtension.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x1400172C4 (ACPIExtListEnumNext.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x140017568 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIExtListTestElement @ 0x140017BF0 (ACPIExtListTestElement.c)
 *     ACPIInitRemoveDeviceExtension @ 0x14003C358 (ACPIInitRemoveDeviceExtension.c)
 *     ACPIExtListStartEnum @ 0x14003D65C (ACPIExtListStartEnum.c)
 *     AcpiCleanupDeviceExtensionEarly @ 0x140054B00 (AcpiCleanupDeviceExtensionEarly.c)
 *     ACPICleanupRemovedExtension @ 0x14005A794 (ACPICleanupRemovedExtension.c)
 */

__int64 __fastcall ACPICleanupRemovedExtension(_QWORD *a1)
{
  char *i; // rax
  char *v3; // rdi
  KIRQL v4; // di
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+38h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]

  v11 = 0;
  v8 = 0LL;
  v7[1] = 0LL;
  v7[0] = a1 + 100;
  v7[2] = &AcpiDeviceTreeLock;
  v9 = 816LL;
  v10 = 1;
  for ( i = ACPIExtListStartEnum((__int64)v7); ; i = ACPIExtListEnumNext((__int64)v7) )
  {
    v3 = i;
    if ( !ACPIExtListTestElement((__int64)v7, 1) )
      break;
    ACPICleanupRemovedExtension(v3);
  }
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v5 = a1[99];
  if ( v5 )
    _InterlockedOr64((volatile signed __int64 *)(v5 + 8), 0x20000000000uLL);
  AcpiCleanupDeviceExtensionEarly((__int64)a1);
  ACPIInitRemoveDeviceExtension(a1);
  if ( a1[95] )
    ACPIInitDereferenceDeviceExtensionLocked((ULONG_PTR)a1);
  *(_QWORD *)(*(_QWORD *)a1[95] + 104LL) = 0LL;
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v4);
  return 0LL;
}
