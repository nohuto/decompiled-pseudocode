/*
 * XREFs of ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14005F1F0
 * Callers:
 *     ?ndisStartDeviceWorkItem@@YAXPEAX@Z @ 0x14005ED50 (-ndisStartDeviceWorkItem@@YAXPEAX@Z.c)
 *     ?ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14005EDE0 (-ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     NdisWdfPnpPowerEventHandler @ 0x14005F180 (NdisWdfPnpPowerEventHandler.c)
 *     NdisLWMStartNetworkInterface @ 0x1400773B0 (NdisLWMStartNetworkInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140038840 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140076E70 (-ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z @ 0x14008E6C0 (-ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z.c)
 *     ?ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x140098EC4 (-ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     ?ndisSetIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C3580 (-ndisSetIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x140161630 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 */

__int64 __fastcall ndisStartDeviceSynchronous(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  struct _IRP *v3; // rbx
  unsigned int v4; // esi
  __int64 MediaType; // rcx
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  unsigned int v7; // ebp
  KIRQL v8; // r14
  int v9; // eax
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  __int64 v12; // [rsp+30h] [rbp-48h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  void *v14; // [rsp+80h] [rbp+8h] BYREF

  v3 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      61,
      (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
      (char)a1);
  }
  if ( (a1->DriverHandle->Flags & 0x21) == 1 )
  {
    v14 = 0LL;
    _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x8000u);
    if ( ndisIMCheckDeviceInstance(a1->DriverHandle, &a1->MiniportName, &v14) )
    {
      ndisWaitForKernelObject(&a1->DriverHandle->IMStartRemoveMutex);
      a1->DriverHandle->IMStartRemoveMutexOwnerThread = KeGetCurrentThread();
      v4 = ndisIMInitializeDeviceInstanceInternal(a1, v14);
      a1->DriverHandle->IMStartRemoveMutexOwnerThread = 0LL;
      KeReleaseMutex(&a1->DriverHandle->IMStartRemoveMutex, 0);
    }
  }
  else
  {
    v4 = ndisPnPStartDevice(a1, v3);
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
      if ( (a1->Flags & 0x80u) == 0 )
      {
        SelectiveSuspend = a1->SelectiveSuspend;
        if ( SelectiveSuspend )
        {
          v7 = a1->Flags & 0x80;
          v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1->SelectiveSuspend);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xFu,
              0x24u,
              (struct _GUID *)&WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids,
              (char)a1,
              9);
          *((_DWORD *)SelectiveSuspend + 127) &= ~0x100u;
          v9 = *((_DWORD *)SelectiveSuspend + 127);
          if ( v7 )
          {
            if ( !*((_DWORD *)SelectiveSuspend + 128)
              && !*((_DWORD *)SelectiveSuspend + 129)
              && !*((_DWORD *)SelectiveSuspend + 132)
              && !*((_DWORD *)SelectiveSuspend + 133)
              && !*((_DWORD *)SelectiveSuspend + 130)
              && !*((_DWORD *)SelectiveSuspend + 131)
              && !*((_DWORD *)SelectiveSuspend + 144)
              && !v9 )
            {
              CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(a1);
              CxBlockFromMiniport->Chars.EvtCxPowerDereference(a1->MiniportAdapterContext);
            }
          }
          else if ( !v9 )
          {
            *((_DWORD *)SelectiveSuspend + 126) &= ~0x200u;
            KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v8);
            ndisSetIdleTimer(a1);
            goto LABEL_29;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v8);
        }
      }
    }
  }
LABEL_29:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = v4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Eu,
      (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
      (char)a1,
      v12);
  }
  return v4;
}
