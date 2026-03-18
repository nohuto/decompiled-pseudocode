/*
 * XREFs of ACPIBusIrpStartDevice @ 0x14009B960
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 *     ACPIInitStartDevice @ 0x140044BF4 (ACPIInitStartDevice.c)
 *     ACPIModuleFilterStartResources @ 0x14005B438 (ACPIModuleFilterStartResources.c)
 *     ACPIQueryGedDeviceInterface @ 0x1400617C8 (ACPIQueryGedDeviceInterface.c)
 *     AcpiArblibCommitResources @ 0x14009AE70 (AcpiArblibCommitResources.c)
 *     PcisuppAcquirePciInterfaces @ 0x1400A9094 (PcisuppAcquirePciInterfaces.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1400AAEC0 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1400AB0E8 (ArbAddMmConfigRangeAsBootReserved.c)
 */

int __fastcall ACPIBusIrpStartDevice(ULONG_PTR DeviceObject, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  struct _DEVICE_OBJECT *v4; // rsi
  __int64 DeviceExtension; // rbx
  __int64 v6; // rcx
  int result; // eax
  _QWORD *Pool2; // rcx
  void *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // r13
  unsigned int i; // edi
  __int64 v15; // rsi
  __int64 v16; // rax
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-50h]
  PVOID StartContext; // [rsp+30h] [rbp-48h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+58h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+60h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  memset(&ObjectAttributes, 0, 44);
  Handle = 0LL;
  v3 = a2;
  v4 = (struct _DEVICE_OBJECT *)DeviceObject;
  DeviceExtension = ACPIInternalGetDeviceExtension(DeviceObject);
  v6 = *(unsigned int *)(DeviceExtension + 8);
  if ( (v6 & 0x2000000) == 0 )
    goto LABEL_10;
  result = PcisuppAcquirePciInterfaces(v4);
  if ( result < 0 )
    return result;
  if ( *(_QWORD *)(DeviceExtension + 296) )
    goto LABEL_10;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 248), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 272), SynchronizationEvent, 0);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  if ( AcpiDriverProxyExtension )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 64LL, 1399874369LL);
    if ( !Pool2 )
      return -1073741670;
    AcpiGetDriverProxyEndpoint(Pool2, (__int64)PciRootBusBiosMethodDispatcherOnResumeWorker);
    StartContext = v9;
    v10 = AcpiDriverProxyExtension;
    *(_QWORD *)(v11 + 8) = DeviceExtension;
    *(_DWORD *)(v11 + 40) = 2;
    *(_QWORD *)(v11 + 16) = 1LL;
    *(_BYTE *)(v11 + 24) = 0;
    *(_QWORD *)(v11 + 48) = DeviceExtension + 272;
    *(_QWORD *)(v11 + 56) = DeviceExtension + 248;
    result = IoDriverProxyCreateHotSwappableWorkerThread(v10, &Handle, 0LL, &ObjectAttributes, 0LL, 0LL, StartContext);
  }
  else
  {
    result = PsCreateSystemThread(
               &Handle,
               0,
               &ObjectAttributes,
               0LL,
               0LL,
               (PKSTART_ROUTINE)PciRootBusBiosMethodDispatcherOnResume,
               (PVOID)DeviceExtension);
  }
  if ( result >= 0 )
  {
    Object = 0LL;
    ObReferenceObjectByHandle(Handle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
    *(_QWORD *)(DeviceExtension + 296) = Object;
    ZwClose(Handle);
    v4 = (struct _DEVICE_OBJECT *)DeviceObject;
LABEL_10:
    if ( _bittest64((const signed __int64 *)(DeviceExtension + 1120), 0x26u) )
    {
      v12 = ACPIQueryGedDeviceInterface((_QWORD *)DeviceExtension);
      if ( v12 < 0 )
      {
        v6 = (__int64)&WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(HandleInformation) = v12;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            8u,
            0x3Cu,
            (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
            HandleInformation);
        }
      }
    }
    if ( _bittest64((const signed __int64 *)(DeviceExtension + 8), 0x25u) && *(_BYTE *)(DeviceExtension + 184) )
    {
      ACPIModuleFilterStartResources(v6, *(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16));
      v13 = *(_QWORD *)(v2 + 8);
      for ( i = 0; i < 3; ++i )
      {
        v15 = *(_QWORD *)(DeviceExtension + 8LL * i + 192);
        result = AcpiArblibCommitResources(v15, v13);
        if ( result < 0 )
          return result;
        if ( *(_DWORD *)(v15 + 168) == 3 )
        {
          result = ArbAddInaccessibleAllocationRange(v15 + 136, *(_QWORD *)(v15 + 176));
          if ( result < 0 )
            return result;
          result = ArbAddMmConfigRangeAsBootReserved(v15 + 136, *(_QWORD *)(v15 + 176));
          if ( result < 0 )
            return result;
        }
        v16 = *(_QWORD *)(DeviceExtension + 8LL * i + 192);
        *(_BYTE *)(v16 + 130) = 1;
      }
      v4 = (struct _DEVICE_OBJECT *)DeviceObject;
      v3 = a2;
    }
    result = ACPIInitStartDevice(
               (ULONG_PTR)v4,
               v2,
               (void (__fastcall *)(__int64, __int64, _QWORD))ACPIBusIrpStartDeviceCompletion,
               v3,
               v3);
    if ( result >= 0 )
      return 259;
  }
  return result;
}
