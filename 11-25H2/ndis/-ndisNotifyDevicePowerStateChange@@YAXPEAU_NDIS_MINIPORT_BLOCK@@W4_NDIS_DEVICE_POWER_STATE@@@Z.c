/*
 * XREFs of ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140054F10
 * Callers:
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140054A90 (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisWdfDevicePowerOn @ 0x140063BC0 (ndisWdfDevicePowerOn.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x14017E5D0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1401812C0 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x140055140 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x14009CBC8 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

void __fastcall ndisNotifyDevicePowerStateChange(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_DEVICE_POWER_STATE a2)
{
  GUID *v4; // r9
  PVOID v5; // rdi
  NTSTATUS v6; // eax
  int v7; // ecx
  NTSTATUS v8; // ebp
  GUID *v9; // r9
  PVOID v10; // rdi
  unsigned __int16 *v11; // rcx
  NTSTATUS v12; // eax
  int v13; // ecx
  NTSTATUS v14; // ebp
  char v15[8]; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h]
  PVOID WnodeEventItem; // [rsp+60h] [rbp+8h] BYREF

  WnodeEventItem = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x3Fu,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1,
      a2);
  v4 = &GUID_NDIS_NOTIFY_DEVICE_POWER_ON;
  if ( a2 != NdisDeviceStateD0 )
    v4 = &GUID_NDIS_NOTIFY_DEVICE_POWER_OFF;
  ndisSetupWmiNode(
    a1,
    a1->pAdapterInstanceName,
    a1->MiniportName.Length + 2,
    v4,
    (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
  v5 = WnodeEventItem;
  if ( WnodeEventItem )
  {
    memmove(
      (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14),
      a1->MiniportName.Buffer,
      a1->MiniportName.Length);
    v6 = IoWMIWriteEvent(v5);
    v8 = v6;
    if ( v6 < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v15 = v6;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x40u,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          *(_QWORD *)v15);
      }
      if ( (byte_140125101 & 0x10) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(v7, (unsigned int)&IoWMIWriteEventFailed, (_DWORD)a1 + 4008, v8, 5, 0);
      ExFreePoolWithTag(v5, 0);
    }
  }
  v9 = &GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX;
  if ( a2 != NdisDeviceStateD0 )
    v9 = &GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX;
  ndisSetupWmiNode(
    a1,
    a1->pAdapterInstanceName,
    a1->MiniportName.Length + 2,
    v9,
    (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
  v10 = WnodeEventItem;
  if ( WnodeEventItem )
  {
    v11 = (unsigned __int16 *)((char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14));
    *v11 = a1->MiniportName.Length;
    memmove(v11 + 1, a1->MiniportName.Buffer, a1->MiniportName.Length);
    v12 = IoWMIWriteEvent(v10);
    v14 = v12;
    if ( v12 < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v15 = v12;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x41u,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          *(_QWORD *)v15);
      }
      if ( (byte_140125101 & 0x10) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(v13, (unsigned int)&IoWMIWriteEventFailed, (_DWORD)a1 + 4008, v14, 6, 0);
      ExFreePoolWithTag(v10, 0);
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v16) = a2;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x42u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1,
      v16);
  }
}
