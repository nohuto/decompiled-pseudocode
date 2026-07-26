/*
 * XREFs of ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140076E70
 * Callers:
 *     ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14005F1F0 (-ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x140098EC4 (-ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qZ @ 0x14002C3B0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x140036410 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisRecordEvent@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@GPEAX@Z @ 0x1400373C0 (-ndisRecordEvent@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@GPEAX@Z.c)
 *     McTemplateK0jqxzq_EtwWriteTransfer @ 0x1400377D0 (McTemplateK0jqxzq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qZddD @ 0x1400627C0 (WPP_RECORDER_SF_qZddD.c)
 *     ?ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400638B0 (-ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     ?ndisReinitializeMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401706D0 (-ndisReinitializeMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 */

__int64 __fastcall ndisPnPStartDevice(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  struct _IRP *v2; // rbx
  _CM_RESOURCE_LIST *v4; // rbp
  unsigned int v5; // esi
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  _IO_SECURITY_CONTEXT *SecurityContext; // r14
  unsigned int DesiredAccess; // eax
  _CM_RESOURCE_LIST *Pool2; // rax
  int v10; // edx
  unsigned int v11; // esi
  __int64 v12; // rax
  void *DeviceContext; // rsi
  _CM_RESOURCE_LIST *v14; // rax
  struct _NDIS_M_DRIVER_BLOCK *DriverHandle; // rbp
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdx
  KIRQL v21; // al
  _DEVICE_OBJECT *DeviceObject; // rcx
  int v23; // eax
  _DEVICE_OBJECT *PhysicalDeviceObject; // rax
  int OutputBufferLength; // [rsp+20h] [rbp-78h]
  _UNICODE_STRING *pAdapterInstanceName; // [rsp+30h] [rbp-68h]
  _QWORD InputBuffer[4]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+8h] BYREF

  v2 = a2;
  v4 = 0LL;
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      0xDu,
      0x41u,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)a1,
      &a1->pAdapterInstanceName->Length);
  if ( a1->PnPDeviceState == NdisPnPDeviceStopped )
  {
    ndisReinitializeMiniportBlock(a1);
    a1->PnPFlags |= 0x10000u;
  }
  if ( v2 )
  {
    CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( SecurityContext )
    {
      a1->PnPFlags |= 0x200000u;
      DesiredAccess = SecurityContext->DesiredAccess;
      if ( DesiredAccess )
        v5 = 20 * (DesiredAccess + 1);
      else
        v5 = 40;
      Pool2 = (_CM_RESOURCE_LIST *)ExAllocatePool2(64LL, 2 * v5, 1918977102LL);
      v4 = Pool2;
      if ( !Pool2 )
      {
        v11 = -1073741670;
        goto LABEL_47;
      }
      memmove(Pool2, SecurityContext, v5);
      memmove((char *)v4 + v5, CurrentStackLocation->Parameters.QueryDirectory.FileName, v5);
      LODWORD(a2) = 0;
      if ( SecurityContext->DesiredAccess )
      {
        do
        {
          if ( *((_BYTE *)&SecurityContext->FullCreateOptions + 20 * (unsigned int)a2) == 2
            && (*((_BYTE *)&SecurityContext->FullCreateOptions + 20 * (unsigned int)a2 + 2) & 2) != 0 )
          {
            a1->MsiIntCount += *((unsigned __int16 *)&SecurityContext[1].SecurityQos + 10 * (unsigned int)a2 + 1);
          }
          LODWORD(a2) = (_DWORD)a2 + 1;
        }
        while ( (unsigned int)a2 < SecurityContext->DesiredAccess );
      }
    }
  }
  v12 = v5;
  DeviceContext = a1->DeviceContext;
  v14 = (_CM_RESOURCE_LIST *)((char *)v4 + v12);
  a1->AllocatedResources = v4;
  DriverHandle = a1->DriverHandle;
  a1->AllocatedResourcesTranslated = v14;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      35,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1);
  }
  ndisReferencePackage((struct _PKG_REF *)&dword_14011A018);
  v16 = MEMORY[0xFFFFF78000000014];
  v11 = ndisMInitializeAdapter(
          DriverHandle,
          a1,
          (struct _NDIS_WRAPPER_CONFIGURATION_HANDLE *)a1->ConfigurationHandle,
          &a1->ExportName.__ptr_.__value_->_UNICODE_STRING,
          DeviceContext);
  v19 = MEMORY[0xFFFFF78000000014] - v16;
  v20 = (MEMORY[0xFFFFF78000000014] - v16) / 10000;
  a1->InitTimeMs = v20;
  if ( (ndisFlags & 1) != 0 )
    DbgPrint("NDIS: Init time (%wZ) %ld ms\n", a1->pAdapterInstanceName, (unsigned int)v20);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    pAdapterInstanceName = a1->pAdapterInstanceName;
    WPP_RECORDER_SF_qZddD(*((_QWORD *)WPP_GLOBAL_Control + 8), v20, v17, v18, OutputBufferLength);
  }
  if ( v11 )
  {
    v21 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
    if ( !a1->Ref.Closing )
      a1->Ref.Closing = 1;
    KeReleaseSpinLock(&a1->Ref.SpinLock, v21);
    ndisMCleanupMiniportBlockOnStop(a1);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x98u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        51,
        a1);
    if ( (byte_14011B105 & 4) != 0 )
      McTemplateK0jqxzq_EtwWriteTransfer(
        v19,
        (__int64)&MiniportEvent,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        a1->pAdapterInstanceName->Buffer,
        51);
    ndisRecordEvent((struct _NDIS_EVENT_LOG *)a1->PnpEventLog, 0x33u, 0LL);
  }
  MmUnlockPagableImageSection(qword_14011A028);
  _InterlockedDecrement((volatile signed __int32 *)&dword_14011A018);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      13,
      37,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1);
  }
  if ( !v11 )
  {
    if ( a1->PnPDeviceState != NdisPnPDeviceStopped
      && ((a1->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a1->FilterPnPFlags & 0x200) != 0)
      && !a1->PoFxDStateReportingEnabled
      && (a1->Flags & 0x80u) == 0 )
    {
      DeviceObject = a1->DeviceObject;
      v29 = 0LL;
      v23 = PoFxEnableDStateReporting(DeviceObject, &v29);
      if ( v23 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(pAdapterInstanceName) = v23;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0x42u,
            (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
            (char)a1,
            pAdapterInstanceName);
        }
        v11 = -1073741823;
        goto LABEL_47;
      }
      PhysicalDeviceObject = a1->PhysicalDeviceObject;
      InputBuffer[0] = 58LL;
      InputBuffer[2] = 6LL;
      InputBuffer[1] = PhysicalDeviceObject;
      ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x18u, 0LL, 0);
      a1->PoFxDStateReportingEnabled = 1;
    }
    a1->PnPDeviceState = NdisPnPDeviceStarted;
    KeSetEvent(&a1->OpenReadyEvent.Event, 0, 0);
    a1->StartTicks.QuadPart = MEMORY[0xFFFFF78000000320];
  }
LABEL_47:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      13,
      67,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)a1);
  }
  return v11;
}
