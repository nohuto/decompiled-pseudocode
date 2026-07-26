/*
 * XREFs of ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14004E810
 * Callers:
 *     ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14004E610 (-ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1400A25EC (-ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qZ @ 0x1400291D0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x14004EA00 (-ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRI.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     ?ndisReinitializeMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14017B6D0 (-ndisReinitializeMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPnPStartDevice(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _IRP *a2,
        const struct _UNICODE_STRING *a3)
{
  _CM_RESOURCE_LIST *v4; // rsi
  unsigned int v6; // r14d
  void *DeviceContext; // r9
  struct _NDIS_M_DRIVER_BLOCK *DriverHandle; // rcx
  int v9; // edx
  unsigned int v10; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  _IO_SECURITY_CONTEXT *SecurityContext; // rbp
  unsigned int DesiredAccess; // eax
  _CM_RESOURCE_LIST *Pool2; // rax
  __int64 i; // rdx
  _DEVICE_OBJECT *DeviceObject; // rcx
  int v18; // eax
  _DEVICE_OBJECT *PhysicalDeviceObject; // rax
  char v20[8]; // [rsp+30h] [rbp-58h]
  _QWORD InputBuffer[4]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v22; // [rsp+90h] [rbp+8h] BYREF

  v4 = 0LL;
  v6 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      0xDu,
      0x41u,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)a1,
      &a1->pAdapterInstanceName->Length);
  if ( a1->PnPDeviceState == NdisPnPDeviceStopped )
  {
    ndisReinitializeMiniportBlock(a1);
    a1->PnPFlags |= 0x10000u;
  }
  if ( a2 )
  {
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( SecurityContext )
    {
      a1->PnPFlags |= 0x200000u;
      DesiredAccess = SecurityContext->DesiredAccess;
      if ( DesiredAccess )
        v6 = 20 * (DesiredAccess + 1);
      else
        v6 = 40;
      Pool2 = (_CM_RESOURCE_LIST *)ExAllocatePool2(64LL, 2 * v6, 1918977102);
      v4 = Pool2;
      if ( !Pool2 )
      {
        v10 = -1073741670;
        goto LABEL_7;
      }
      memmove(Pool2, SecurityContext, v6);
      memmove((char *)v4 + v6, CurrentStackLocation->Parameters.QueryDirectory.FileName, v6);
      for ( i = 0LL; (unsigned int)i < SecurityContext->DesiredAccess; i = (unsigned int)(i + 1) )
      {
        if ( *((_BYTE *)&SecurityContext->FullCreateOptions + 20 * i) == 2
          && (*((_BYTE *)&SecurityContext->FullCreateOptions + 20 * i + 2) & 2) != 0 )
        {
          a1->MsiIntCount += *((unsigned __int16 *)&SecurityContext[1].SecurityQos + 10 * i + 1);
        }
      }
    }
  }
  DeviceContext = a1->DeviceContext;
  DriverHandle = a1->DriverHandle;
  a1->AllocatedResources = v4;
  a1->AllocatedResourcesTranslated = (_CM_RESOURCE_LIST *)((char *)v4 + v6);
  v10 = ndisInitializeAdapter(DriverHandle, a1, a3, DeviceContext);
  if ( v10 )
    goto LABEL_7;
  if ( a1->PnPDeviceState == NdisPnPDeviceStopped
    || ((a1->PnPFlags & 0x200000) == 0 || !ndisAoAcCapable) && (a1->FilterPnPFlags & 0x200) == 0
    || a1->PoFxDStateReportingEnabled
    || (a1->Flags & 0x80u) != 0 )
  {
LABEL_13:
    a1->PnPDeviceState = NdisPnPDeviceStarted;
    KeSetEvent(&a1->OpenReadyEvent.Event, 0, 0);
    a1->StartTicks.QuadPart = MEMORY[0xFFFFF78000000320];
    goto LABEL_7;
  }
  DeviceObject = a1->DeviceObject;
  v22 = 0LL;
  v18 = PoFxEnableDStateReporting(DeviceObject, &v22);
  if ( !v18 )
  {
    PhysicalDeviceObject = a1->PhysicalDeviceObject;
    InputBuffer[0] = 58LL;
    InputBuffer[2] = 6LL;
    InputBuffer[1] = PhysicalDeviceObject;
    ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x18u, 0LL, 0);
    a1->PoFxDStateReportingEnabled = 1;
    goto LABEL_13;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v20 = v18;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      0x42u,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)a1,
      *(_QWORD *)v20);
  }
  v10 = -1073741823;
LABEL_7:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      13,
      67,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)a1);
  }
  return v10;
}
