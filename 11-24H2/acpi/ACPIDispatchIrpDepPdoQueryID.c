/*
 * XREFs of ACPIDispatchIrpDepPdoQueryID @ 0x14003C120
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     AMLIIsNamedChildPresent @ 0x140029050 (AMLIIsNamedChildPresent.c)
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x14003C4B8 (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     ACPIDevicePowerFlushQueue @ 0x14003DF5C (ACPIDevicePowerFlushQueue.c)
 *     AcpiArblibInitializeArbiter @ 0x140055D9C (AcpiArblibInitializeArbiter.c)
 *     AcpiEvaluateBiosMethodsOnPciRootBus @ 0x14005610C (AcpiEvaluateBiosMethodsOnPciRootBus.c)
 *     AcpiArblibFreeArbiterInstance @ 0x14005806C (AcpiArblibFreeArbiterInstance.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     ACPIBuildFlushQueue @ 0x1400B67FC (ACPIBuildFlushQueue.c)
 */

__int64 __fastcall ACPIDispatchIrpDepPdoQueryID(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rdi
  KIRQL v5; // bl
  __int64 v6; // rdx
  KIRQL v7; // r15
  __int64 v8; // rcx
  _UNKNOWN **v9; // rax
  _UNKNOWN **v10; // rax
  __int64 i; // rbx
  int v12; // ebp
  PVOID *v13; // rdi
  unsigned int j; // esi
  const char *v16; // rdx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  ACPIBuildProcessDelayedDependencyExternalTrigger(DeviceExtension);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  LOBYTE(v6) = 1;
  ACPIBuildFlushQueue(DeviceExtension, v6);
  ACPIDevicePowerFlushQueue(DeviceExtension);
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( _bittest64((const signed __int64 *)(DeviceExtension + 8), 0x25u) )
  {
    if ( AMLIIsNamedChildPresent(*(__int64 **)(DeviceExtension + 760), 1397900127) )
    {
      *(_BYTE *)(DeviceExtension + 184) = 1;
      for ( i = 0LL; (unsigned int)i < 3; i = (unsigned int)(i + 1) )
      {
        v12 = AcpiArblibInitializeArbiter(
                DeviceExtension,
                (unsigned int)AcpiArbiterResourceTypes[i],
                DeviceExtension + 192 + 8 * i);
        if ( v12 < 0 )
        {
          if ( (_DWORD)i )
          {
            v13 = (PVOID *)(DeviceExtension + 8 * i + 192);
            do
            {
              AcpiArblibFreeArbiterInstance(*--v13);
              LODWORD(i) = i - 1;
            }
            while ( (_DWORD)i );
          }
          KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
          return (unsigned int)v12;
        }
      }
    }
    else
    {
      *(_BYTE *)(DeviceExtension + 184) = 0;
    }
  }
  v8 = *(_QWORD *)(DeviceExtension + 8);
  v9 = &AcpiBusFilterIrpDispatch;
  if ( (v8 & 0x40) == 0 )
    v9 = &AcpiPdoIrpDispatch;
  *(_QWORD *)(DeviceExtension + 24) = v9;
  if ( (v8 & 0x1000000000LL) != 0 )
  {
    v10 = &AcpiProcessorIrpDispatch;
  }
  else if ( (v8 & 0x8000000) != 0 )
  {
    v10 = &AcpiThermalZoneIrpDispatch;
  }
  else
  {
    if ( !_bittest64((const signed __int64 *)(DeviceExtension + 1120), 0x28u) )
    {
      if ( (v8 & 0x200000000000LL) != 0 && *(_QWORD *)(DeviceExtension + 608) )
      {
        for ( j = 0; ; ++j )
        {
          v16 = (&AcpiInternalDeviceTable)[2 * j];
          if ( !v16 )
            break;
          if ( strstr(*(const char **)(DeviceExtension + 608), v16) )
          {
            v10 = (_UNKNOWN **)*(&off_140074E08 + 2 * j);
            goto LABEL_27;
          }
        }
      }
      goto LABEL_28;
    }
    v10 = &AcpiPepIrpDispatch;
  }
LABEL_27:
  *(_QWORD *)(DeviceExtension + 24) = v10;
LABEL_28:
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x8000000040000LL) == 0x8000000040000LL )
    FixedButtonDeviceObject = a1;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  AcpiEvaluateBiosMethodsOnPciRootBus(DeviceExtension);
  return (*(__int64 (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)(*(_QWORD *)(DeviceExtension + 24) + 24LL) + 152LL))(
           a1,
           a2);
}
