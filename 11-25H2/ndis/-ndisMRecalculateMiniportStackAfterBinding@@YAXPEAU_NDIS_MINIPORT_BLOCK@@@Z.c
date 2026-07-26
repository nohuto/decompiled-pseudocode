/*
 * XREFs of ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140160A30
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140161320 (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     ?ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400170C0 (-ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x140160A60 (-ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 */

void __fastcall ndisMRecalculateMiniportStackAfterBinding(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ndisUpdateMinimumStackVersion(a1, 0, 0);
  ndisUpdateNoPauseOnSuspend(a1);
}
