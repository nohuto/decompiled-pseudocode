/*
 * XREFs of ?FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400241B0
 * Callers:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400235C0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140058120 (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140072EB0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1401893D0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140189A40 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline @ 0x14009F4E0 (Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall FILTER_CLEAR_FLAG(struct _NDIS_FILTER_BLOCK *a1, int a2)
{
  int v3; // ebx

  v3 = ~a2;
  if ( (unsigned int)Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline() )
    a1->Flags &= v3;
  else
    a1->Flags &= v3;
}
