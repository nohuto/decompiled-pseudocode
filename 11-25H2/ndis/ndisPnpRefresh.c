/*
 * XREFs of ndisPnpRefresh @ 0x1401748B0
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14018C2D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z @ 0x140029710 (-ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140064270 (-ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400848A0 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x14008CAF0 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x14016C8F0 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 */

void __fastcall ndisPnpRefresh(struct _GUID *a1, __int64 a2, unsigned int a3)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rax
  Ndis::BindRegistry *v5; // rbx
  enum Ndis::ReadBindingsOptions::Flags v6; // r8d

  ndisIfCreateOrUpdateInterface(a1, a2, a3);
  v4 = ndisReferenceMiniportByGuid(a1, 0x22u);
  v5 = (Ndis::BindRegistry *)v4;
  if ( v4 )
  {
    ndisPowerSaveStop(v4, 8u);
    Ndis::BindRegistry::Reload(v5, 0LL, v6);
    ndisPowerSaveClearStop((__int64)v5, 8LL);
    ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v5, 0x22u);
  }
}
