/*
 * XREFs of ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14004E610
 * Callers:
 *     ?ndisStartDeviceWorkItem@@YAXPEAX@Z @ 0x14004DE60 (-ndisStartDeviceWorkItem@@YAXPEAX@Z.c)
 *     NdisLWMStartNetworkInterface @ 0x14004E090 (NdisLWMStartNetworkInterface.c)
 *     ?ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14004E200 (-ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     NdisWdfPnpPowerEventHandler @ 0x14004E5A0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14004E810 (-ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140085AD0 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z @ 0x14009A200 (-ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z.c)
 *     ?ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1400A25EC (-ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x14015D7E0 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisStartDeviceSynchronous(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  struct _IRP *v2; // rsi
  unsigned int v4; // ebx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rcx
  unsigned __int16 Flags; // ax
  __int64 MediaType; // rcx
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  void *v10; // [rsp+70h] [rbp+8h] BYREF

  v2 = a2;
  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      61,
      (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
      (char)a1);
  }
  DriverHandle = a1->DriverHandle;
  Flags = DriverHandle->Flags;
  if ( (Flags & 1) == 0 || (Flags & 0x20) != 0 )
  {
    v4 = ndisPnPStartDevice(a1, v2);
    if ( v4 )
    {
      v4 = -1073741823;
    }
    else
    {
      if ( (a1->Flags & 0x20000) != 0 )
      {
        MediaType = a1->MediaType;
        if ( !ndisMediaTypeCl[MediaType] && (_DWORD)MediaType != 3 )
        {
          DestinationString = 0LL;
          RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\NDProxy");
          ZwLoadDriver(&DestinationString);
        }
      }
      ndisMSetMiniportReadyForBinding(a1, 1, Reason_RemovingMiniport|Reason_DriverNotReady, RunSynchronous);
      if ( (a1->Flags & 0x80u) == 0 && a1->SelectiveSuspend )
        ndisSelectiveSuspendClearStop(a1, 9LL);
    }
  }
  else
  {
    a1->Flags |= 0x8000u;
    v10 = 0LL;
    if ( ndisIMCheckDeviceInstance(DriverHandle, &a1->MiniportName, &v10) )
    {
      ndisWaitForKernelObject(&a1->DriverHandle->IMStartRemoveMutex);
      a1->DriverHandle->IMStartRemoveMutexOwnerThread = KeGetCurrentThread();
      v4 = ndisIMInitializeDeviceInstanceInternal(a1, v10);
      a1->DriverHandle->IMStartRemoveMutexOwnerThread = 0LL;
      KeReleaseMutex(&a1->DriverHandle->IMStartRemoveMutex, 0);
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Eu,
      (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
      (char)a1,
      v4);
  return v4;
}
