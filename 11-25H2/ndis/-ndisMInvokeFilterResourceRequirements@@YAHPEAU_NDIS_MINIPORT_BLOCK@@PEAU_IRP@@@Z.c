/*
 * XREFs of ?ndisMInvokeFilterResourceRequirements@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400A620C
 * Callers:
 *     ?ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x140096050 (-ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ??$?0H$0A@$0A@@?$DriverCallbackBase@U_NDIS_MINIPORT_BLOCK@@H@Details@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@AEBH@Z @ 0x1400A5010 (--$-0H$0A@$0A@@-$DriverCallbackBase@U_NDIS_MINIPORT_BLOCK@@H@Details@AzTelemetry@@QEAA@PEBU_NDIS.c)
 *     ??1MiniportFilterResourceRequirements@AzTelemetry@@UEAA@XZ @ 0x1400E44E4 (--1MiniportFilterResourceRequirements@AzTelemetry@@UEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMInvokeFilterResourceRequirements(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  _IRP *v3; // rbp
  void *AddDeviceContext; // rcx
  char v7[4]; // [rsp+30h] [rbp-58h]
  _QWORD v8[8]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+90h] [rbp+8h] BYREF

  DriverHandle = a1->DriverHandle;
  v3 = a2;
  v9 = 0;
  if ( DriverHandle->FilterResourceRequirementsHandler )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        1,
        216,
        (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
        (char)a1);
    }
    AzTelemetry::Details::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,int>::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,int>(
      (__int64)v8,
      (__int64)a1,
      (__int64)&v9);
    AddDeviceContext = a1->AddDeviceContext;
    v8[0] = &AzTelemetry::MiniportFilterResourceRequirements::`vftable';
    v9 = a1->DriverHandle->FilterResourceRequirementsHandler(AddDeviceContext, v3);
    AzTelemetry::MiniportFilterResourceRequirements::~MiniportFilterResourceRequirements((AzTelemetry::MiniportFilterResourceRequirements *)v8);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v7 = v9;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xD9u,
        (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
        (char)a1,
        *(_DWORD *)v7);
    }
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      218,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1);
  }
  return v9;
}
