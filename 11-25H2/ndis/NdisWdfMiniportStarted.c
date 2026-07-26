/*
 * XREFs of NdisWdfMiniportStarted @ 0x14009E830
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x14015D7E0 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 */

void __fastcall NdisWdfMiniportStarted(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( (a1->Flags & 0x80u) == 0 )
    NT_ASSERT("((((miniport)->Flags & (0x00000080)) != 0))");
  ndisMSetMiniportReadyForBinding(a1, 1, Reason_MiniportDeviceNotStarted, RunAsynchronous);
}
