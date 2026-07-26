/*
 * XREFs of ?ndisEnableRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C1BA0
 * Callers:
 *     ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1401541F0 (-ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisEnableRsc(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax

  Offload = a1->Offload;
  if ( Offload )
    Offload->RSCDisallowed = 0;
}
