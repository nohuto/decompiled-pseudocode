/*
 * XREFs of ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14003A8D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x140036BD0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14003A230 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 */

__int64 __fastcall ndisSetSystemPowerOnComplete(
        PDEVICE_OBJECT DeviceObject,
        struct _IRP *a2,
        struct _NDIS_MINIPORT_BLOCK *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  struct _IRP *v5; // rbx
  int v7; // edx
  __int64 v8; // rcx
  struct _GUID *v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      14,
      60,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a3);
  }
  if ( v5->IoStatus.Status >= 0 )
  {
    ndisRequestDevicePowerD0(a3, NdisMEventD0_SystemResume);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        61,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a3);
    }
    if ( (byte_14011B101 & 8) != 0 )
    {
      LODWORD(v12) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      LODWORD(v11) = CurrentStackLocation->Parameters.Create.Options;
      LODWORD(v10) = a3->IfIndex;
      McTemplateK0jqxqq_EtwWriteTransfer(
        v8,
        (__int64)&SystemPowerOnComplete,
        (__int64)&a3->InterfaceGuid,
        (__int64)&a3->InterfaceGuid,
        (__int64)v10,
        a3->NetLuid.Value,
        v11,
        v12);
    }
    PoSetPowerState(DeviceObject, SystemPowerState, CurrentStackLocation->Parameters.Power.State);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      14,
      62,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a3);
  }
  return 0LL;
}
