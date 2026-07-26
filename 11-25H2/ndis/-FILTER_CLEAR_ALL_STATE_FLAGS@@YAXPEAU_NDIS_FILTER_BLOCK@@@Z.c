/*
 * XREFs of ?FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140092F80
 * Callers:
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140182EC0 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140183290 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1401893D0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140189A40 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline @ 0x14009F4E0 (Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall FILTER_CLEAR_ALL_STATE_FLAGS(struct _NDIS_FILTER_BLOCK *a1)
{
  if ( (unsigned int)Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline() )
    a1->Flags &= 0xFFFFFF00;
  else
    LOBYTE(a1->Flags) = 0;
}
