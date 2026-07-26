/*
 * XREFs of ?ndisPnPRemoveDeviceEx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055710
 * Callers:
 *     NdisLWMUninitializeNetworkInterface @ 0x14009D0A0 (NdisLWMUninitializeNetworkInterface.c)
 *     ?ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140149ABC (-ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140171C40 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x140171EF0 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140056B60 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140183D40 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall ndisPnPRemoveDeviceEx(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // eax
  _DEVICE_OBJECT *PhysicalDeviceObject; // rax
  bool v4; // zf
  unsigned int v5; // eax
  _DEVICE_OBJECT *InputBuffer; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+38h] [rbp-10h]
  char v8; // [rsp+3Ch] [rbp-Ch]
  char v9; // [rsp+3Dh] [rbp-Bh]
  __int16 v10; // [rsp+3Eh] [rbp-Ah]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      29,
      (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
      (char)a1);
  v2 = a1->PnPFlags & 0xFFFEFFFF;
  a1->PnPDeviceState = NdisPnPDeviceRemoved;
  a1->PnPFlags = v2 | 0x10;
  if ( ndisIsMiniportStarted(a1)
    && ((a1->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a1->FilterPnPFlags & 0x200) != 0)
    && a1->PhysicalMediumType == NdisPhysicalMedium802_3 )
  {
    PhysicalDeviceObject = a1->PhysicalDeviceObject;
    v4 = a1->PMHardwareCapabilities.Header.Revision == 2;
    v10 = 0;
    InputBuffer = PhysicalDeviceObject;
    v7 = 4;
    v8 = 0;
    if ( !v4
      || (a1->PMHardwareCapabilities.SupportedWoLPacketPatterns & 1) == 0
      || a1->PMHardwareCapabilities.NumTotalWoLPatterns < 0x10
      || a1->PMHardwareCapabilities.MaxWoLPatternSize < 0x4A
      || (unsigned int)(a1->PMHardwareCapabilities.MinPatternWakeUp - 3) > 1
      || (a1->PMHardwareCapabilities.SupportedWakeUpEvents & 1) == 0
      || (v5 = a1->PMHardwareCapabilities.SupportedProtocolOffloads & 3, v9 = 1, (_BYTE)v5 != 3) )
    {
      v9 = 0;
    }
    ZwPowerInformation(CsDeviceNotification, &InputBuffer, 0x10u, 0LL, 0);
  }
  ndisPnPRemoveDevice(a1, 1u);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      30,
      (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
      (char)a1);
}
