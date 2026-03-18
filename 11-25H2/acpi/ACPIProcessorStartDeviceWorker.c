/*
 * XREFs of ACPIProcessorStartDeviceWorker @ 0x140065D40
 * Callers:
 *     ACPIProcessorStartDevice @ 0x140065CC0 (ACPIProcessorStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Dqss @ 0x14002AD3C (WPP_RECORDER_SF_Dqss.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x140045528 (ACPIThermalAcquireCoolingInterfaces.c)
 *     WPP_RECORDER_SF_ddqss @ 0x1400456DC (WPP_RECORDER_SF_ddqss.c)
 *     ACPIInternalSetDeviceInterface @ 0x1400507B8 (ACPIInternalSetDeviceInterface.c)
 *     ACPIProcessorContainerLinkChildProcessor @ 0x14005371C (ACPIProcessorContainerLinkChildProcessor.c)
 *     ACPICheckModuleStarted @ 0x140055E44 (ACPICheckModuleStarted.c)
 *     ACPIInternalEvaluateOST @ 0x140061980 (ACPIInternalEvaluateOST.c)
 *     ACPIProcessorBuildBootApicIds @ 0x1400A29CC (ACPIProcessorBuildBootApicIds.c)
 *     ACPIProcessorBuildHiddenApicIds @ 0x1400A2AA8 (ACPIProcessorBuildHiddenApicIds.c)
 *     ACPIProcessorGetInitialApicId @ 0x1400A2BB0 (ACPIProcessorGetInitialApicId.c)
 */

void __fastcall ACPIProcessorStartDeviceWorker(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // r14
  __int64 DeviceExtension; // rax
  __int64 v4; // rdi
  IRP *v5; // r15
  NTSTATUS InitialApicId; // ebx
  unsigned int v7; // eax
  __int64 v8; // rcx
  int v9; // edx
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rax
  const char *v14; // rsi
  const char *v15; // rdx
  const char *v16; // rcx
  __int64 v17; // r8
  int started; // ebx
  __int64 v19; // rcx
  const char *v20; // rax
  __int64 v21; // rcx
  USHORT NodeNumber; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int Data; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp+58h] BYREF

  v1 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  Data = 0;
  NodeNumber = 0;
  v24 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)v1);
  v4 = DeviceExtension;
  v5 = *(IRP **)(a1 + 40);
  if ( *((_QWORD *)AcpiInformation + 4) )
  {
    InitialApicId = ACPIProcessorGetInitialApicId(DeviceExtension, &Data);
    if ( InitialApicId < 0 )
      goto LABEL_41;
    *(_DWORD *)(v4 + 192) = Data;
    ExAcquireFastMutex(&AcpiProcessorStartupLock);
    if ( !AcpiBootProcessorApicIds && (InitialApicId = ACPIProcessorBuildBootApicIds(), InitialApicId < 0)
      || !AcpiHiddenProcessorApicIds && (InitialApicId = ACPIProcessorBuildHiddenApicIds(), InitialApicId < 0) )
    {
      ExReleaseFastMutex(&AcpiProcessorStartupLock);
      goto LABEL_41;
    }
    ExReleaseFastMutex(&AcpiProcessorStartupLock);
    v7 = 0;
    v8 = 0LL;
    v9 = 0;
    while ( v7 < AcpiBootProcessorCount )
    {
      if ( *(_DWORD *)(AcpiBootProcessorApicIds + 4 * v8) == Data )
        goto LABEL_33;
      v7 = v9 + 1;
      v24 = v7;
      ++v9;
      v8 = v7;
    }
    v24 = 0;
    v10 = 0;
    v11 = 0LL;
    v12 = 0;
    while ( v10 < AcpiHiddenProcessorCount )
    {
      if ( *(_DWORD *)(AcpiHiddenProcessorApicIds + 4 * v11) == Data )
        goto LABEL_33;
      v10 = v12 + 1;
      v24 = v10;
      ++v12;
      v11 = v10;
    }
    v13 = *(_QWORD *)(v4 + 8);
    if ( (v13 & 0x4000) == 0 )
    {
      v14 = byte_140075488;
      v15 = byte_140075488;
      v16 = byte_140075488;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v15 = *(const char **)(v4 + 608);
        if ( (v13 & 0x400000000000LL) != 0 )
          v16 = *(const char **)(v4 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          1u,
          0xDu,
          (__int64)&WPP_753fe4d36662374399d7f9e30a1e6541_Traceguids,
          *(_DWORD *)(v4 + 196),
          Data,
          v4,
          v15,
          v16);
      if ( IoGetDeviceNumaNode(v1, &NodeNumber) )
      {
        v17 = 0xFFFFLL;
        NodeNumber = -1;
      }
      else
      {
        v17 = NodeNumber;
      }
      started = KeStartDynamicProcessor(*(unsigned int *)(v4 + 196), Data, v17, &v24);
      if ( started < 0 )
      {
        v19 = *(_QWORD *)(v4 + 8);
        v20 = byte_140075488;
        if ( (v19 & 0x200000000000LL) != 0 )
        {
          v14 = *(const char **)(v4 + 608);
          if ( (v19 & 0x400000000000LL) != 0 )
            v20 = *(const char **)(v4 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0xEu,
            (__int64)&WPP_753fe4d36662374399d7f9e30a1e6541_Traceguids,
            started,
            v4,
            v14,
            v20);
      }
      ACPIInternalEvaluateOST(v4, 0, (started >> 31) & 0xA3);
    }
  }
  else
  {
    Data = -1;
  }
LABEL_33:
  ACPIThermalAcquireCoolingInterfaces(v4);
  if ( (*(_DWORD *)(v4 + 8) & 0x4000LL) == 0 )
  {
    InitialApicId = ACPIInternalSetDeviceInterface(v1, &GUID_DEVICE_PROCESSOR);
    if ( InitialApicId < 0 )
      goto LABEL_41;
    goto LABEL_37;
  }
  InitialApicId = IoSetDevicePropertyData(v1, &DEVPKEY_Spare_Processor_Apic_Id, 0, 0, 7u, 4u, &Data);
  if ( InitialApicId >= 0 )
LABEL_37:
    *(_DWORD *)(v4 + 368) = 2;
  v21 = *(_QWORD *)(v4 + 792);
  if ( _bittest64((const signed __int64 *)(v21 + 8), 0x25u) )
    ACPICheckModuleStarted(v21, InitialApicId);
  ACPIProcessorContainerLinkChildProcessor((_QWORD *)v4);
LABEL_41:
  v5->IoStatus.Status = InitialApicId;
  IofCompleteRequest(v5, 0);
}
