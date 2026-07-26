/*
 * XREFs of ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x14008F770
 * Callers:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x140013110 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x14002B200 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x14002C670 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     ?ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z @ 0x14002EDC0 (-ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z.c)
 *     NdisClCloseCall @ 0x1400D6E60 (NdisClCloseCall.c)
 *     NdisClMakeCall @ 0x1400D70F0 (NdisClMakeCall.c)
 *     NdisCmMakeCallComplete @ 0x1400D75B0 (NdisCmMakeCallComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_qDDLq @ 0x1400D9658 (WPP_RECORDER_SF_qDDLq.c)
 */

__int64 __fastcall ndisReferenceVcPtr(struct _NDIS_CO_VC_PTR_BLOCK *a1, int a2, int a3)
{
  unsigned __int8 v4; // bp
  KIRQL v5; // al
  int v6; // r8d

  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDDLq(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 28);
  v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  if ( (a1->CallFlags & 0x80000000) == 0 )
  {
    ++a1->References;
    v4 = 1;
  }
  KeReleaseSpinLock(&a1->Lock, v5);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDDLq(*((_QWORD *)WPP_GLOBAL_Control + 8), a1->pVcFlags, v6, 29);
  return v4;
}
