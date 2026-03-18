/*
 * XREFs of ACPIBusIrpSurpriseRemoval @ 0x140050500
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1400307B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x14003CA6C (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIWakeDisconnectWakeInterrupts @ 0x14003DE58 (ACPIWakeDisconnectWakeInterrupts.c)
 *     ACPIInternalIsReportedMissing @ 0x1400529F4 (ACPIInternalIsReportedMissing.c)
 *     ACPIThermalStopZone @ 0x140056244 (ACPIThermalStopZone.c)
 *     ACPIFanStopDevice @ 0x1400603C0 (ACPIFanStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x14009EEB0 (EnableDisableIPMIRegions.c)
 *     ACPIPepCleanupEpmNotificationSupport @ 0x1400A0FF4 (ACPIPepCleanupEpmNotificationSupport.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1400A1050 (ACPIPepCleanupPlatformNotificationSupport.c)
 *     ACPIInitStopDevice @ 0x1400B439C (ACPIInitStopDevice.c)
 *     IsPciBus @ 0x1400B46A8 (IsPciBus.c)
 *     EnableDisableRegions @ 0x1400B46CC (EnableDisableRegions.c)
 */

__int64 __fastcall ACPIBusIrpSurpriseRemoval(ULONG_PTR a1, IRP *a2)
{
  unsigned int MinorFunction; // r14d
  __int64 DeviceExtension; // rax
  __int64 v5; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  struct _DEVICE_OBJECT *v11; // rcx
  __int64 v12; // rsi
  bool v13; // bp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  const char *v19; // rcx
  const char *v20; // rdx
  __int64 v21; // rax

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = DeviceExtension;
  if ( *(_DWORD *)(DeviceExtension + 368) == 4 )
  {
    a2->IoStatus.Status = -1073741810;
    IofCompleteRequest(a2, 0);
    return 3221225486LL;
  }
  else
  {
    if ( (unsigned __int8)ACPIInternalIsReportedMissing(DeviceExtension) )
    {
      if ( (*(_DWORD *)(v5 + 1120) & 0x20000000) != 0 )
      {
        v10 = *(_QWORD *)(v5 + 792);
        if ( v10 )
        {
          v11 = *(struct _DEVICE_OBJECT **)(v10 + 784);
          if ( v11 )
            IoInvalidateDeviceRelations(v11, BusRelations);
        }
      }
      v12 = *(_QWORD *)(v5 + 1120) & 0x8000LL;
      v13 = (*(_QWORD *)(v5 + 1120) & 0x8000) != 0;
      if ( (unsigned __int8)IsPciBus(*(_QWORD *)(v5 + 768), v7) || v12 )
      {
        LOBYTE(v15) = v13;
        EnableDisableRegions(*(_QWORD *)(v5 + 760), 0LL, v15);
      }
      if ( (*(_DWORD *)(v5 + 8) & 0x1000LL) != 0 )
        EnableDisableIPMIRegions(*(_QWORD *)(v5 + 760), 0LL);
      if ( (*(_DWORD *)(v5 + 8) & 0x8000000) != 0 )
      {
        ACPIThermalStopZone(v5);
      }
      else
      {
        v16 = *(_QWORD *)(v5 + 1120);
        if ( (v16 & 0x200000000LL) != 0 )
        {
          ACPIFanStopDevice(v5);
        }
        else if ( (v16 & 0x10000000000LL) != 0 )
        {
          ACPIPepCleanupPlatformNotificationSupport(v5);
          ACPIPepCleanupEpmNotificationSupport(v5);
        }
      }
      v17 = *(_DWORD *)(v5 + 1120);
      *(_DWORD *)(v5 + 368) = 5;
      if ( (*(_QWORD *)&v17 & 0x800000LL) != 0 )
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 8), 0xFFFFFFFFFFFFF7FFuLL);
      else
        _InterlockedOr64((volatile signed __int64 *)(v5 + 8), 0x800uLL);
      LOBYTE(v14) = 1;
      ACPIInitStopDevice(v5, v14);
      ACPIWakeDisconnectWakeInterrupts((struct _EX_RUNDOWN_REF *)v5);
      ACPIBuildSurpriseRemovedExtension((_QWORD *)v5);
      a2->IoStatus.Status = 0;
      a2->IoStatus.Information = 0LL;
      IofCompleteRequest(a2, 0);
      v18 = *(_QWORD *)(v5 + 8);
      v19 = byte_140075488;
      v20 = byte_140075488;
      if ( (v18 & 0x200000000000LL) != 0 )
      {
        v19 = *(const char **)(v5 + 608);
        if ( (v18 & 0x400000000000LL) != 0 )
          v20 = *(const char **)(v5 + 616);
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
          0x40u,
          (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
          (char)a2,
          ACPIDispatchPnpTableNames[v21],
          0,
          v5,
          v19,
          v20);
      }
    }
    else
    {
      if ( (*(_DWORD *)(v5 + 8) & 0x8000000) != 0 )
      {
        ACPIThermalStopZone(v5);
      }
      else
      {
        v8 = *(_QWORD *)(v5 + 1120);
        if ( (v8 & 0x200000000LL) != 0 )
        {
          ACPIFanStopDevice(v5);
        }
        else if ( (v8 & 0x10000000000LL) != 0 )
        {
          ACPIPepCleanupPlatformNotificationSupport(v5);
          ACPIPepCleanupEpmNotificationSupport(v5);
        }
      }
      *(_DWORD *)(v5 + 368) = 0;
      a2->IoStatus.Status = 0;
      IofCompleteRequest(a2, 0);
      LOBYTE(v9) = 1;
      ACPIInitStopDevice(v5, v9);
    }
    return 0LL;
  }
}
