/*
 * XREFs of ?ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x140090310
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1400C0320 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_Z @ 0x14006CDE0 (WPP_RECORDER_SF_Z.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x140096310 (McTemplateK0zq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ZL @ 0x14009A720 (WPP_RECORDER_SF_ZL.c)
 */

__int64 __fastcall ndisValidate60Protocol(struct _NDIS_PROTOCOL_DRIVER_CHARACTERISTICS *a1, int a2, int a3)
{
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-28h]

  v4 = -1073676283;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0x48u,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      &a1->Name.Length);
  if ( a1->BindAdapterHandlerEx
    && a1->UnbindAdapterHandlerEx
    && a1->OpenAdapterCompleteHandlerEx
    && a1->CloseAdapterCompleteHandlerEx
    && a1->NetPnPEventHandler )
  {
    if ( a1->SendNetBufferListsCompleteHandler )
    {
      if ( a1->ReceiveNetBufferListsHandler )
      {
        if ( a1->OidRequestCompleteHandler )
        {
          v4 = 0;
        }
        else
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Z(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              5u,
              0x4Bu,
              (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
              &a1->Name.Length);
          if ( (byte_140125104 & 0x10) != 0 )
            McTemplateK0zq_EtwWriteTransfer((_DWORD)a1, (unsigned int)&Validate60ProtocolFailed, a3, a1->Name.Buffer, 2);
        }
      }
      else
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Z(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            5u,
            0x4Au,
            (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
            &a1->Name.Length);
        if ( (byte_140125104 & 0x10) != 0 )
          McTemplateK0zq_EtwWriteTransfer((_DWORD)a1, (unsigned int)&Validate60ProtocolFailed, a3, a1->Name.Buffer, 1);
      }
    }
    else
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Z(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          5u,
          0x49u,
          (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
          &a1->Name.Length);
      if ( (byte_140125104 & 0x10) != 0 )
        McTemplateK0zq_EtwWriteTransfer((_DWORD)a1, (unsigned int)&Validate60ProtocolFailed, a3, a1->Name.Buffer, 0);
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ZL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 76, v6, (__int64)&a1->Name, v4);
  return v4;
}
