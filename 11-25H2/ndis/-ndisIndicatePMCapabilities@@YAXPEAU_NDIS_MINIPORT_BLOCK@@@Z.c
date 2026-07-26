/*
 * XREFs of ?ndisIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400BA8F8
 * Callers:
 *     ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x140174390 (-ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     NdisMIndicateStatusEx @ 0x140069730 (NdisMIndicateStatusEx.c)
 *     ?ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400BC834 (-ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400BCA88 (-ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

void __fastcall ndisIndicatePMCapabilities(struct _NDIS_MINIPORT_BLOCK *MiniportAdapterHandle)
{
  _NDIS_PM_CAPABILITIES *p_PMAdvertisedCapabilities; // rbx
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+20h] [rbp-88h] BYREF

  p_PMAdvertisedCapabilities = &MiniportAdapterHandle->PMAdvertisedCapabilities;
  MiniportAdapterHandle->PMAdvertisedCapabilities.Header.Revision = 2;
  MiniportAdapterHandle->PMAdvertisedCapabilities.Header.Type = 0x80;
  MiniportAdapterHandle->PMAdvertisedCapabilities.Header.Size = 60;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.SourceHandle = MiniportAdapterHandle;
  StatusIndication.StatusCode = 1073938515;
  StatusIndication.StatusBuffer = p_PMAdvertisedCapabilities;
  StatusIndication.StatusBufferSize = 60;
  NdisMIndicateStatusEx(MiniportAdapterHandle, &StatusIndication);
  ndisRejectUnsupportedPMOffloads(MiniportAdapterHandle);
  ndisRejectUnsupportedWoLPatterns(MiniportAdapterHandle);
}
