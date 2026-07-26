/*
 * XREFs of ??_GNDIS_PD_ASSOCIATION@@QEAAPEAXI@Z @ 0x1401445B8
 * Callers:
 *     ?ndisOidPrePDCloseProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140147A30 (-ndisOidPrePDCloseProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140147DD0 (-ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

NDIS_PD_ASSOCIATION *__fastcall NDIS_PD_ASSOCIATION::`scalar deleting destructor'(NDIS_PD_ASSOCIATION *this)
{
  if ( this )
    ExFreePoolWithTag(this, 0x6141444Eu);
  return this;
}
