/*
 * XREFs of ACPIBuildPdo @ 0x140046840
 * Callers:
 *     ACPIDetectPdoDevices @ 0x140016B58 (ACPIDetectPdoDevices.c)
 *     ACPIDetectDockDevices @ 0x14003D250 (ACPIDetectDockDevices.c)
 * Callees:
 *     AMLIIsNamedChildPresent @ 0x140029050 (AMLIIsNamedChildPresent.c)
 *     ACPIAddInitializationDependencies @ 0x140046D58 (ACPIAddInitializationDependencies.c)
 *     AcpiArblibInitializeArbiter @ 0x140055D9C (AcpiArblibInitializeArbiter.c)
 *     AcpiEvaluateBiosMethodsOnPciRootBus @ 0x14005610C (AcpiEvaluateBiosMethodsOnPciRootBus.c)
 *     AcpiArblibFreeArbiterInstance @ 0x14005806C (AcpiArblibFreeArbiterInstance.c)
 *     ACPIIsDebuggingDevice @ 0x1400C0B9C (ACPIIsDebuggingDevice.c)
 */

NTSTATUS __fastcall ACPIBuildPdo(struct _DRIVER_OBJECT *a1, __int64 a2, struct _DEVICE_OBJECT *a3, char a4)
{
  __int64 *v4; // r14
  PDEVICE_OBJECT AttachedDeviceReference; // rsi
  NTSTATUS result; // eax
  int v10; // r14d
  __int64 i; // rdi
  PVOID *v12; // rbx
  KIRQL v13; // r14
  PDEVICE_OBJECT v14; // rcx
  __int64 v15; // rcx
  _UNKNOWN **v16; // rax
  unsigned int j; // esi
  const char *v18; // rdx
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp+38h] BYREF

  v4 = *(__int64 **)(a2 + 760);
  AttachedDeviceReference = 0LL;
  DeviceObject = 0LL;
  result = IoCreateDevice(a1, 0, 0LL, 0x32u, 0x180u, 0, &DeviceObject);
  if ( result < 0 )
    return result;
  if ( !a4 )
  {
LABEL_7:
    if ( _bittest64((const signed __int64 *)(a2 + 8), 0x25u) )
    {
      if ( AMLIIsNamedChildPresent(v4, 1397900127) )
      {
        *(_BYTE *)(a2 + 184) = 1;
        for ( i = 0LL; (unsigned int)i < 3; i = (unsigned int)(i + 1) )
        {
          v10 = AcpiArblibInitializeArbiter(a2, (unsigned int)AcpiArbiterResourceTypes[i], a2 + 192 + 8 * i);
          if ( v10 < 0 )
          {
            if ( (_DWORD)i )
            {
              v12 = (PVOID *)(a2 + 8 * i + 192);
              do
              {
                AcpiArblibFreeArbiterInstance(*--v12);
                LODWORD(i) = i - 1;
              }
              while ( (_DWORD)i );
            }
            goto LABEL_17;
          }
        }
      }
      else
      {
        *(_BYTE *)(a2 + 184) = 0;
      }
    }
    v13 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    DeviceObject->DeviceExtension = (void *)a2;
    v14 = DeviceObject;
    *(_QWORD *)(a2 + 768) = DeviceObject;
    *(_QWORD *)(a2 + 784) = v14;
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 732));
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFC00uLL);
    _InterlockedOr64((volatile signed __int64 *)(a2 + 8), 0x20uLL);
    LODWORD(v14) = *(_DWORD *)(a2 + 368);
    *(_DWORD *)(a2 + 368) = 0;
    *(_DWORD *)(a2 + 372) = (_DWORD)v14;
    *(_QWORD *)(a2 + 8) |= 0x800uLL;
    *(_QWORD *)(a2 + 1120) |= 0x800uLL;
    *(_QWORD *)(a2 + 24) = &AcpiPdoIrpDispatch;
    if ( a4 )
    {
      *(_QWORD *)(a2 + 776) = AttachedDeviceReference;
      _InterlockedOr64((volatile signed __int64 *)(a2 + 8), 0x40uLL);
      *(_QWORD *)(a2 + 24) = &AcpiBusFilterIrpDispatch;
      DeviceObject->StackSize = AttachedDeviceReference->StackSize + 1;
      DeviceObject->AlignmentRequirement = AttachedDeviceReference->AlignmentRequirement;
      if ( (AttachedDeviceReference->Flags & 0x2000) != 0 )
        DeviceObject->Flags |= 0x2000u;
    }
    v15 = *(_QWORD *)(a2 + 8);
    if ( (v15 & 0x1000000000LL) != 0 )
    {
      v16 = &AcpiProcessorIrpDispatch;
    }
    else if ( (v15 & 0x8000000) != 0 )
    {
      v16 = &AcpiThermalZoneIrpDispatch;
    }
    else
    {
      if ( !_bittest64((const signed __int64 *)(a2 + 1120), 0x28u) )
      {
        if ( (v15 & 0x200000000000LL) != 0 && *(_QWORD *)(a2 + 608) )
        {
          for ( j = 0; ; ++j )
          {
            v18 = (&AcpiInternalDeviceTable)[2 * j];
            if ( !v18 )
              break;
            if ( strstr(*(const char **)(a2 + 608), v18) )
            {
              v16 = (_UNKNOWN **)*(&off_140074E08 + 2 * j);
              goto LABEL_34;
            }
          }
        }
        goto LABEL_35;
      }
      v16 = &AcpiPepIrpDispatch;
    }
LABEL_34:
    *(_QWORD *)(a2 + 24) = v16;
LABEL_35:
    if ( (*(_QWORD *)(a2 + 8) & 0x8000000040000LL) == 0x8000000040000LL )
      FixedButtonDeviceObject = (__int64)DeviceObject;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v13);
    ACPIAddInitializationDependencies(a2);
    if ( (*(_BYTE *)(a2 + 1120) & 0x40) != 0 )
      *(_QWORD *)(a2 + 24) = &AcpiDepPdoIrpDispatch;
    AcpiEvaluateBiosMethodsOnPciRootBus(a2);
    if ( !_bittest64((const signed __int64 *)(a2 + 8), 0x33u) && (int)ACPIIsDebuggingDevice(DeviceObject) >= 0 )
      DeviceObject->Flags |= 0x2000000u;
    DeviceObject->Flags &= ~0x80u;
    if ( _bittest64((const signed __int64 *)(a2 + 8), 0x34u) )
      DeviceObject->Flags |= 8u;
    return 0;
  }
  if ( (*(_DWORD *)(a2 + 8) & 0x100000) != 0 )
  {
    a4 = 0;
    goto LABEL_7;
  }
  AttachedDeviceReference = IoGetAttachedDeviceReference(a3);
  if ( AttachedDeviceReference )
    goto LABEL_7;
  v10 = -1073741810;
LABEL_17:
  IoDeleteDevice(DeviceObject);
  return v10;
}
