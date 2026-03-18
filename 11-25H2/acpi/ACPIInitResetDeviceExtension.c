/*
 * XREFs of ACPIInitResetDeviceExtension @ 0x14003DA70
 * Callers:
 *     ACPIFilterFastIoDetachCallback @ 0x14003C550 (ACPIFilterFastIoDetachCallback.c)
 *     ACPIInitDeleteChildDeviceList @ 0x14003C9AC (ACPIInitDeleteChildDeviceList.c)
 *     ACPIBusIrpRemoveDevice @ 0x140050130 (ACPIBusIrpRemoveDevice.c)
 *     ACPIDispatchIrpDepRemoveDevice @ 0x14005B3F0 (ACPIDispatchIrpDepRemoveDevice.c)
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x140017568 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIInternalInterruptPolarityCacheCleanup @ 0x14003DD4C (ACPIInternalInterruptPolarityCacheCleanup.c)
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x14003DD9C (ACPIBuildProcessNotifyPepDeleteDevice.c)
 *     PnpiCleanupForceActiveBothInterrupts @ 0x14003DE14 (PnpiCleanupForceActiveBothInterrupts.c)
 *     AcpiArblibFreeArbiterInstance @ 0x14005806C (AcpiArblibFreeArbiterInstance.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

void __fastcall ACPIInitResetDeviceExtension(ULONG_PTR BugCheckParameter4)
{
  struct _DEVICE_OBJECT *v2; // r12
  KIRQL v3; // r13
  __int64 v4; // rcx
  void *v5; // r14
  void *v6; // rsi
  void *v7; // rdi
  struct _DEVICE_OBJECT *v8; // rbp
  __int64 v9; // r15
  PVOID *v10; // rbx
  unsigned __int8 v11; // cf
  void *v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]

  v15 = 0LL;
  v16 = 0LL;
  v2 = 0LL;
  ACPIBuildProcessNotifyPepDeleteDevice(BugCheckParameter4, 0LL);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v4 = *(_QWORD *)(BugCheckParameter4 + 8);
  if ( (v4 & 0x40) != 0 )
  {
    if ( (v4 & 0x20) != 0 )
    {
      v12 = *(void **)(BugCheckParameter4 + 776);
      if ( v12 )
        ObfDereferenceObject(v12);
    }
    else
    {
      v2 = *(struct _DEVICE_OBJECT **)(BugCheckParameter4 + 776);
    }
  }
  PnpiCleanupForceActiveBothInterrupts(BugCheckParameter4);
  ACPIInternalInterruptPolarityCacheCleanup(BugCheckParameter4);
  v5 = *(void **)(BugCheckParameter4 + 688);
  if ( v5 )
    *(_QWORD *)(BugCheckParameter4 + 688) = 0LL;
  v6 = *(void **)(BugCheckParameter4 + 672);
  if ( v6 )
    *(_QWORD *)(BugCheckParameter4 + 672) = 0LL;
  v7 = *(void **)(BugCheckParameter4 + 680);
  if ( v7 )
    *(_QWORD *)(BugCheckParameter4 + 680) = 0LL;
  v8 = *(struct _DEVICE_OBJECT **)(BugCheckParameter4 + 768);
  v9 = 3LL;
  if ( !v8 )
    goto LABEL_9;
  v8->DeviceExtension = 0LL;
  v11 = _bittest64((const signed __int64 *)(BugCheckParameter4 + 8), 0x25u);
  *(_QWORD *)(BugCheckParameter4 + 768) = 0LL;
  if ( v11 && *(_BYTE *)(BugCheckParameter4 + 184) )
  {
    v13 = 3LL;
    v14 = (_QWORD *)(BugCheckParameter4 + 192);
    do
    {
      *(_QWORD *)((char *)v14 + (_QWORD)&v15 - BugCheckParameter4 - 192) = *v14;
      *v14++ = 0LL;
      --v13;
    }
    while ( v13 );
  }
  if ( ACPIInitDereferenceDeviceExtensionLocked(BugCheckParameter4) )
  {
    v6 = 0LL;
    v7 = 0LL;
    v5 = 0LL;
  }
  else
  {
LABEL_9:
    *(_QWORD *)(BugCheckParameter4 + 776) = 0LL;
    *(_QWORD *)(BugCheckParameter4 + 784) = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 1120), 0xFFFFFFFFFFFFFFBFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 1120), 0xFFFFFFFFDFFFFFFFuLL);
    if ( (*(_BYTE *)(BugCheckParameter4 + 8) & 1) == 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 8), 0xFFFFFFFFFFFFFC00uLL);
      _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter4 + 8), 8uLL);
      _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter4 + 8), 4uLL);
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v3);
  v10 = (PVOID *)&v15;
  do
  {
    if ( *v10 )
      AcpiArblibFreeArbiterInstance(*v10);
    ++v10;
    --v9;
  }
  while ( v9 );
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v2 )
    IoDetachDevice(v2);
  if ( v8 )
    IoDeleteDevice(v8);
}
