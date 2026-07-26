/*
 * XREFs of ?ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008B560
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140072EB0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1400568E0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 */

unsigned __int8 __fastcall ndisCheckMiniportWakeUpCapable(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _GUID *v3; // [rsp+20h] [rbp-28h]
  __int64 v4; // [rsp+30h] [rbp-18h]
  __int64 v5; // [rsp+38h] [rbp-10h]

  if ( ((unsigned int)(a1->PMHardwareCapabilities.MinLinkChangeWakeUp - 2) <= 2
     || (unsigned int)(a1->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) <= 2
     || (unsigned int)(a1->PMHardwareCapabilities.MinPatternWakeUp - 2) <= 2
     || (a1->PMHardwareCapabilities.Flags & 6) != 0)
    && a1->DeviceCaps.SystemWake
    && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2
    && (*((_DWORD *)&a1->DeviceCaps + 1) & 0x3800) != 0 )
  {
    a1->PnPFlags |= 0x4000000u;
    return 1;
  }
  else
  {
    a1->PnPFlags &= ~0x4000000u;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        121,
        (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
        (char)a1);
    if ( (byte_140125102 & 8) != 0 )
    {
      LODWORD(v5) = 0;
      LODWORD(v4) = 3;
      LODWORD(v3) = a1->IfIndex;
      McTemplateK0jqxqq_EtwWriteTransfer(
        (__int64)a1,
        &InitializeAdapterInfo,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)v3,
        a1->NetLuid.Value,
        v4,
        v5);
    }
    return 0;
  }
}
