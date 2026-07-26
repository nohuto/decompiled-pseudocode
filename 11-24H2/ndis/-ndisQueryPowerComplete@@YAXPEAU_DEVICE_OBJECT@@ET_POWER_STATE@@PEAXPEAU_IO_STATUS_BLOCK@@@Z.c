/*
 * XREFs of ?ndisQueryPowerComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140062930
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 */

void __fastcall ndisQueryPowerComplete(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // ebx
  _IRP *v7; // rdi
  int v8; // edx
  struct _GUID *v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+30h] [rbp-18h]

  Status = IoStatus->Status;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = IoStatus->Status;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x1Fu,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)Context,
      v11);
  }
  if ( Status < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v10) = IoStatus->Status;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x20u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)Context,
        v10);
    }
    if ( (byte_14011B101 & 8) != 0 )
    {
      LODWORD(v10) = IoStatus->Status;
      LODWORD(v9) = *((_DWORD *)Context + 1014);
      McTemplateK0jqxd_EtwWriteTransfer(
        DeviceObject,
        (__int64)&QueryPowerComplete,
        (__int64)(Context + 4008),
        (__int64)(Context + 4008),
        (__int64)v9,
        *((_QWORD *)Context + 503),
        v10);
    }
  }
  v7 = (_IRP *)*((_QWORD *)Context + 97);
  v7->IoStatus.Status = Status;
  IofCompleteRequest(v7, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(Context + 4120), v7, 0x20u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      14,
      33,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)Context);
  }
}
