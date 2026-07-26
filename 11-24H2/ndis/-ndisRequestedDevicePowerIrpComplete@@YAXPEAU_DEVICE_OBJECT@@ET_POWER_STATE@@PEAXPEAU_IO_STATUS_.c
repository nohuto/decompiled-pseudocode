/*
 * XREFs of ?ndisRequestedDevicePowerIrpComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140060D90
 * Callers:
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140081520 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140038860 (McTemplateK0qq_EtwWriteTransfer.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140092FAC (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1401543D0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 */

void __fastcall ndisRequestedDevicePowerIrpComplete(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _IO_STATUS_BLOCK *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int v6; // ebp
  unsigned __int64 Information; // rdi
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  int v10; // ecx
  struct _GUID *v11; // [rsp+20h] [rbp-38h]
  char v12[4]; // [rsp+30h] [rbp-28h]

  v6 = DeviceObject;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      56,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      DeviceObject);
  Information = Context[11].Information;
  v8 = *(_QWORD *)(*(_QWORD *)(Information + 40) + 64LL);
  Context[3] = *IoStatus;
  if ( IoStatus->Status < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2,
        14,
        58,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        v6);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(v8 + 5240);
    if ( (byte_14011B102 & 0x40) != 0 )
      McTemplateK0qqq_EtwWriteTransfer(
        v10,
        (unsigned int)&IrpSetPowerFailed,
        (unsigned int)&NDIS_PROVIDER_ID,
        IoStatus->Status,
        1,
        v6);
    IofCompleteRequest((PIRP)Context, 0);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v12 = *(_DWORD *)(Information + 24);
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x39u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        v6,
        *(_DWORD *)v12);
    }
    if ( (byte_14011B101 & 8) != 0 )
    {
      LODWORD(v11) = *(_DWORD *)(Information + 24);
      McTemplateK0qq_EtwWriteTransfer(DeviceObject, (__int64)"L'", (__int64)&NDIS_PROVIDER_ID, v6, (__int64)v11);
    }
    PoSetPowerState(*(PDEVICE_OBJECT *)(Information + 40), SystemPowerState, *(POWER_STATE *)(Information + 24));
    v9 = Context[11].Information;
    *(_OWORD *)(v9 - 72) = *(_OWORD *)v9;
    *(_OWORD *)(v9 - 56) = *(_OWORD *)(v9 + 16);
    *(_OWORD *)(v9 - 40) = *(_OWORD *)(v9 + 32);
    *(_QWORD *)(v9 - 24) = *(_QWORD *)(v9 + 48);
    *(_BYTE *)(v9 - 69) = 0;
    IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 3840), (PIRP)Context);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      59,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      v6);
}
