/*
 * XREFs of ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140183D40
 * Callers:
 *     ?ndisPnPRemoveDeviceEx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055710 (-ndisPnPRemoveDeviceEx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x14005BAF0 (NdisIMDeInitializeDeviceInstance.c)
 *     ?ndisPnPStopDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009CB30 (-ndisPnPStopDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisReferenceDriver@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@W4_NDIS_MDRV_REFTAG@@@Z @ 0x14000E620 (-ndisReferenceDriver@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@W4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x14000F5C0 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140018100 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400246C0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004EC40 (-ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x140055140 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x140068440 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     NdisResetEvent @ 0x14006A940 (NdisResetEvent.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140090610 (-ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140098510 (-ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A5448 (-ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovTeardownVf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400E64B4 (-ndisIovTeardownVf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014EAFC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x14015D7E0 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x14015D9B0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162770 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x14016BBB0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x14016D7D0 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401765A0 (-ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisPnPRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  char v3; // bp
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  int v6; // edx
  KIRQL v7; // al
  struct _NDIS_MINIPORT_BLOCK *i; // r14
  _UNICODE_STRING *pAdapterInstanceName; // rdx
  unsigned int v10; // r8d
  PVOID v11; // r14
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  unsigned __int16 *v13; // rcx
  int v14; // edx
  __int64 v15; // rcx
  NTSTATUS v16; // r15d
  int v17; // edx
  struct tagWNODE_SINGLE_INSTANCE **v18; // [rsp+20h] [rbp-178h]
  __int64 v19; // [rsp+30h] [rbp-168h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-158h] BYREF
  PVOID WnodeEventItem; // [rsp+50h] [rbp-148h] BYREF
  char v22[256]; // [rsp+60h] [rbp-138h] BYREF

  v3 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x5Cu,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)a1,
      a2);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  DriverHandle = a1->DriverHandle;
  if ( DriverHandle )
  {
    if ( (DriverHandle->Flags & 1) != 0 )
    {
      ndisWaitForKernelObject(&DriverHandle->IMStartRemoveMutex);
      v3 = 1;
      DriverHandle->IMStartRemoveMutexOwnerThread = KeGetCurrentThread();
    }
    ndisCancelWaitWake(a1);
    v7 = KeAcquireSpinLockRaiseToDpc(&DriverHandle->Ref.SpinLock);
    for ( i = DriverHandle->MiniportQueue; i; i = i->NextMiniport )
    {
      if ( i == a1 )
        break;
    }
    KeReleaseSpinLock(&DriverHandle->Ref.SpinLock, v7);
    if ( i != a1 || a1->Ref.Closing == 1 )
    {
      a1->Ref.Closing = 1;
    }
    else
    {
      ndisReferenceDriver(DriverHandle, 1u);
      NdisResetEvent(&a1->OpenReadyEvent);
      pAdapterInstanceName = a1->pAdapterInstanceName;
      if ( pAdapterInstanceName )
      {
        v10 = a1->MiniportName.Length + 2;
        WnodeEventItem = 0LL;
        ndisSetupWmiNode(
          a1,
          pAdapterInstanceName,
          v10,
          (__int128 *)&GUID_NDIS_NOTIFY_ADAPTER_REMOVAL,
          (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
        v11 = WnodeEventItem;
        if ( WnodeEventItem )
        {
          v13 = (unsigned __int16 *)((char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14));
          *v13 = a1->MiniportName.Length;
          memmove(v13 + 1, a1->MiniportName.Buffer, a1->MiniportName.Length);
          v16 = IoWMIWriteEvent(v11);
          if ( v16 < 0 )
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v14) = 2;
              WPP_RECORDER_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v14,
                18,
                93,
                (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids);
            }
            if ( (byte_140125101 & 0x10) != 0 )
            {
              LODWORD(v19) = v16;
              LODWORD(v18) = a1->IfIndex;
              McTemplateK0jqxd_EtwWriteTransfer(
                v15,
                &IndicateAdapterRemovalFailed,
                &a1->InterfaceGuid,
                (__int64)&a1->InterfaceGuid,
                (__int64)v18,
                a1->NetLuid.Value,
                v19);
            }
            ExFreePoolWithTag(v11, 0);
          }
        }
      }
      Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
      if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathPaused, PauseReason_RemovingMiniport) )
      {
        memset(v22, 0, 0xA0uLL);
        if ( (unsigned __int8)byte_140126C63 >= 4u )
        {
          ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v22);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v17,
              0x1Cu,
              0x5Eu,
              (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
              *(unsigned __int16 **)&v22[8],
              *(_QWORD *)v22);
        }
      }
      Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
      Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, 0);
      SriovCurrentCapabilities = a1->SriovCurrentCapabilities;
      if ( SriovCurrentCapabilities && (SriovCurrentCapabilities->SriovCapabilities & 5) == 5 )
        ndisIovTeardownVf(a1);
      ndisMSetMiniportReadyForBinding(a1, 0, Reason_RemovingMiniport, RunSynchronous);
      if ( (a1->PnPFlags & 0x8000000) != 0 )
        ndisIMDeleteIfStackEntry(a1);
      ndisIovDeleteDefaultNicSwitch(a1);
      ndisMHaltMiniport(a1);
      ndisMCleanupMiniportBlockOnStop(a1);
      ndisDereferenceDriver(DriverHandle, 0, 1u);
      *(_QWORD *)&DestinationString.Length = 0x1000000LL;
      DestinationString.Buffer = (wchar_t *)v22;
      RtlCopyUnicodeString(&DestinationString, &ndisDosDevicesStr);
      if ( RtlAppendUnicodeStringToString(&DestinationString, &a1->BaseName) >= 0 )
        IoDeleteSymbolicLink(&DestinationString);
    }
    if ( v3 == 1 )
    {
      DriverHandle->IMStartRemoveMutexOwnerThread = 0LL;
      KeReleaseMutex(&DriverHandle->IMStartRemoveMutex, 0);
    }
  }
  if ( a2 )
    ndisPnPCompleteRemoveDevice(a1);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      13,
      95,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)a1);
  }
}
