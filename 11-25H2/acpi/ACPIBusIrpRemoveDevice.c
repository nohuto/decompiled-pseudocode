/*
 * XREFs of ACPIBusIrpRemoveDevice @ 0x140050130
 * Callers:
 *     ACPIEcRemoveDevice @ 0x14005FA50 (ACPIEcRemoveDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1400307B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInitDeleteChildDeviceList @ 0x14003C9AC (ACPIInitDeleteChildDeviceList.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x14003CA6C (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitResetDeviceExtension @ 0x14003DA70 (ACPIInitResetDeviceExtension.c)
 *     ACPIWakeDisconnectWakeInterrupts @ 0x14003DE58 (ACPIWakeDisconnectWakeInterrupts.c)
 *     ACPIThermalStopZone @ 0x140056244 (ACPIThermalStopZone.c)
 *     ACPIFanStopDevice @ 0x1400603C0 (ACPIFanStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x14009EEB0 (EnableDisableIPMIRegions.c)
 *     ACPIPepCleanupEpmNotificationSupport @ 0x1400A0FF4 (ACPIPepCleanupEpmNotificationSupport.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1400A1050 (ACPIPepCleanupPlatformNotificationSupport.c)
 *     PcisuppReleasePciInterfaces @ 0x1400A9244 (PcisuppReleasePciInterfaces.c)
 *     ACPIInitStopDevice @ 0x1400B439C (ACPIInitStopDevice.c)
 *     IsPciBus @ 0x1400B46A8 (IsPciBus.c)
 *     EnableDisableRegions @ 0x1400B46CC (EnableDisableRegions.c)
 */

__int64 __fastcall ACPIBusIrpRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned int MinorFunction; // r14d
  __int64 DeviceExtension; // rax
  __int64 v5; // rdx
  ULONG_PTR v6; // rbx
  __int64 v7; // rax
  struct _DEVICE_OBJECT *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v13; // rsi
  bool v14; // bp
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  const char *v19; // rcx
  const char *v20; // rdx
  __int64 v21; // rax

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = DeviceExtension;
  if ( (*(_DWORD *)(DeviceExtension + 1120) & 0x20000000) != 0 )
  {
    v7 = *(_QWORD *)(DeviceExtension + 792);
    if ( v7 )
    {
      v8 = *(struct _DEVICE_OBJECT **)(v7 + 784);
      if ( v8 )
        IoInvalidateDeviceRelations(v8, BusRelations);
    }
  }
  if ( (AcpiOverrideAttributes & 0x80000) == 0 && (*(_DWORD *)(v6 + 8) & 0x180) == 0x100LL && !*(_DWORD *)(v6 + 368) )
  {
    *(_DWORD *)(v6 + 368) = 5;
    ACPIBuildSurpriseRemovedExtension((_QWORD *)v6);
  }
  v9 = *(_QWORD *)(v6 + 8);
  if ( (v9 & 0x100) != 0 )
  {
    if ( *(_DWORD *)(v6 + 368) == 4 )
    {
      a2->IoStatus.Status = -1073741810;
      IofCompleteRequest(a2, 0);
      return 3221225486LL;
    }
    if ( (v9 & 0x80u) == 0LL )
    {
      v13 = *(_QWORD *)(v6 + 1120) & 0x8000LL;
      v14 = (*(_QWORD *)(v6 + 1120) & 0x8000) != 0;
      if ( (unsigned __int8)IsPciBus(*(_QWORD *)(v6 + 768), v5) || v13 )
      {
        LOBYTE(v16) = v14;
        EnableDisableRegions(*(_QWORD *)(v6 + 760), 0LL, v16);
      }
      if ( (*(_DWORD *)(v6 + 8) & 0x1000LL) != 0 )
        EnableDisableIPMIRegions(*(_QWORD *)(v6 + 760), 0LL);
      if ( (*(_DWORD *)(v6 + 8) & 0x8000000) != 0 )
      {
        ACPIThermalStopZone(v6);
      }
      else
      {
        v17 = *(_QWORD *)(v6 + 1120);
        if ( (v17 & 0x200000000LL) != 0 )
        {
          ACPIFanStopDevice(v6);
        }
        else if ( (v17 & 0x10000000000LL) != 0 )
        {
          ACPIPepCleanupPlatformNotificationSupport(v6);
          ACPIPepCleanupEpmNotificationSupport(v6);
        }
      }
      LOBYTE(v15) = 1;
      ACPIInitStopDevice(v6, v15);
    }
    if ( (*(_DWORD *)(v6 + 8) & 0x2000000) != 0 )
    {
      if ( _interlockedbittestandreset((volatile signed __int32 *)(v6 + 188), 0) )
      {
        ExFreePoolWithTag(*(PVOID *)(v6 + 192), 0);
        *(_QWORD *)(v6 + 192) = 0LL;
      }
      if ( _interlockedbittestandreset((volatile signed __int32 *)(v6 + 192), 0) )
      {
        ExFreePoolWithTag(*(PVOID *)(v6 + 200), 0);
        *(_QWORD *)(v6 + 200) = 0LL;
      }
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 184), 0, 0) & 1) != 0 )
      {
        KeSetEvent((PRKEVENT)(v6 + 248), 0, 0);
        KeWaitForSingleObject(*(PVOID *)(v6 + 296), Executive, 0, 0, 0LL);
        ObfDereferenceObject(*(PVOID *)(v6 + 296));
      }
    }
    ACPIInitDeleteChildDeviceList(v6);
    ACPIWakeDisconnectWakeInterrupts((struct _EX_RUNDOWN_REF *)v6);
    *(_DWORD *)(v6 + 368) = 4;
    a2->IoStatus.Status = 0;
    a2->IoStatus.Information = 0LL;
    IofCompleteRequest(a2, 0);
    v18 = *(_QWORD *)(v6 + 8);
    v19 = byte_140075488;
    v20 = byte_140075488;
    if ( (v18 & 0x200000000000LL) != 0 )
    {
      v19 = *(const char **)(v6 + 608);
      if ( (v18 & 0x400000000000LL) != 0 )
        v20 = *(const char **)(v6 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = MinorFunction;
      if ( MinorFunction >= 0x1A )
        v21 = 26LL;
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xCu,
        0x39u,
        (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
        (char)a2,
        ACPIDispatchPnpTableNames[v21],
        0,
        v6,
        v19,
        v20);
    }
    ACPIInitResetDeviceExtension(v6);
  }
  else
  {
    if ( (v9 & 0x1000) != 0 )
      EnableDisableIPMIRegions(*(_QWORD *)(v6 + 760), 0LL);
    *(_DWORD *)(v6 + 368) = 0;
    ACPIInitDeleteChildDeviceList(v6);
    if ( (*(_DWORD *)(v6 + 8) & 0x2000000) != 0 )
      PcisuppReleasePciInterfaces(v6);
    if ( (*(_DWORD *)(v6 + 8) & 0x8000000) != 0 )
    {
      ACPIThermalStopZone(v6);
    }
    else
    {
      v10 = *(_QWORD *)(v6 + 1120);
      if ( (v10 & 0x200000000LL) != 0 )
      {
        ACPIFanStopDevice(v6);
      }
      else if ( (v10 & 0x10000000000LL) != 0 )
      {
        ACPIPepCleanupEpmNotificationSupport(v6);
        ACPIPepCleanupPlatformNotificationSupport(v6);
      }
    }
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 0);
    LOBYTE(v11) = 1;
    ACPIInitStopDevice(v6, v11);
  }
  return 0LL;
}
