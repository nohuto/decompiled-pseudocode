/*
 * XREFs of ndisWmiGuidIsAdapterSpecific @ 0x14008C3F0
 * Callers:
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x14002F700 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisWmiGuidIsAdapterSpecific(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx

  v1 = *a1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1;
  if ( *a1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1 )
    v1 = a1[1] - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTER.Data4;
  if ( !v1 )
    return 1;
  v2 = *a1 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
  if ( *a1 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
    v2 = a1[1] - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
  if ( !v2 )
    return 1;
  v3 = *a1 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
  if ( *a1 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
    v3 = a1[1] - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
  if ( !v3 )
    return 1;
  v4 = *a1 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
  if ( *a1 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
    v4 = a1[1] - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
  if ( !v4 )
    return 1;
  v5 = *a1 - *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1;
  if ( *a1 == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1 )
    v5 = a1[1] - *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4;
  if ( !v5 )
    return 1;
  v6 = *a1 - *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1;
  if ( *a1 == *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1 )
    v6 = a1[1] - *(_QWORD *)GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data4;
  if ( !v6 )
    return 1;
  v7 = *a1 - *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1;
  if ( *a1 == *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1 )
    v7 = a1[1] - *(_QWORD *)GUID_NDIS_RSS_ENABLED.Data4;
  if ( !v7 )
    return 1;
  v8 = *a1 - *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1;
  if ( *a1 == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1 )
    v8 = a1[1] - *(_QWORD *)GUID_NDIS_NDK_STATE.Data4;
  if ( !v8 )
    return 1;
  v9 = *a1 - *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1;
  if ( *a1 == *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1 )
    v9 = a1[1] - *(_QWORD *)GUID_NDIS_NDK_CAPABILITIES.Data4;
  if ( !v9 )
    return 1;
  v10 = *a1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1;
  if ( *a1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1 )
    v10 = a1[1] - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data4;
  return !v10;
}
