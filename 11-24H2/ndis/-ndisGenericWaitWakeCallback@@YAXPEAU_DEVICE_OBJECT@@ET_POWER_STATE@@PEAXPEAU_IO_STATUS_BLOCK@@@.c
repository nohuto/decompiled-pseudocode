/*
 * XREFs of ?ndisGenericWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1400A8250
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14003A230 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140061560 (-ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140073380 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 */

void __fastcall ndisGenericWaitWakeCallback(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _NDIS_MINIPORT_BLOCK *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // esi
  __int64 *p_NetLuid; // r14
  _GUID *p_InterfaceGuid; // rsi
  _NET_LUID_LH *v9; // rbp
  struct _GUID *v10; // [rsp+20h] [rbp-48h]
  __int64 v11; // [rsp+30h] [rbp-38h]
  int v12; // [rsp+38h] [rbp-30h]

  Status = IoStatus->Status;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = IoStatus->Status;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x1Au,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)Context,
      (char)Context->WaitWakeIrp,
      v12);
  }
  if ( Status < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = Status;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x1Eu,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)Context,
        v11);
    }
    if ( (byte_14011B102 & 0x40) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        DeviceObject,
        &WaitWakeIrpFailed,
        &Context->InterfaceGuid,
        (__int64)&Context->InterfaceGuid,
        Context->IfIndex,
        Context->NetLuid.Value,
        Status,
        1,
        0);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        27,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)Context);
    p_NetLuid = (__int64 *)&Context->NetLuid;
    p_InterfaceGuid = &Context->InterfaceGuid;
    if ( (byte_14011B101 & 8) != 0 )
    {
      LODWORD(v11) = 65537;
      LODWORD(v10) = Context->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        DeviceObject,
        (__int64)&WaitWakeComplete,
        (__int64)&Context->InterfaceGuid,
        (__int64)&Context->InterfaceGuid,
        (__int64)v10,
        *p_NetLuid,
        v11);
    }
    v9 = &Context->NetLuid;
    if ( (Context->PnPFlags & 0x800) == 0 )
    {
      if ( (unsigned int)(Context->CurrentDevicePowerState - 2) <= 2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4,
            14,
            28,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            (char)Context);
        if ( (byte_14011B101 & 8) != 0 )
        {
          LODWORD(v11) = 65537;
          LODWORD(v10) = Context->IfIndex;
          McTemplateK0jqxd_EtwWriteTransfer(
            DeviceObject,
            (__int64)&MiniportPoweringUp,
            (__int64)&Context->InterfaceGuid,
            (__int64)&Context->InterfaceGuid,
            (__int64)v10,
            Context->NetLuid.Value,
            v11);
        }
        ndisRequestDevicePowerD0(Context, NdisMEventD0_D3DWake);
        goto LABEL_24;
      }
      v9 = &Context->NetLuid;
      p_InterfaceGuid = &Context->InterfaceGuid;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        29,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)Context);
      p_NetLuid = (__int64 *)v9;
    }
    if ( byte_14011B103 < 0 )
    {
      LODWORD(v11) = 65537;
      LODWORD(v10) = Context->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        DeviceObject,
        (__int64)&WakeByMiniport,
        (__int64)p_InterfaceGuid,
        (__int64)p_InterfaceGuid,
        (__int64)v10,
        *p_NetLuid,
        v11);
    }
  }
LABEL_24:
  ndisCompleteWaitWake(Context);
}
