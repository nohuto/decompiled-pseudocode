/*
 * XREFs of ?ndisValidateConnectionOffload@@YAEPEAU_NDIS_TCP_CONNECTION_OFFLOAD@@@Z @ 0x1400B9A24
 * Callers:
 *     ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x14007F760 (-ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNE.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisValidateConnectionOffload(struct _NDIS_TCP_CONNECTION_OFFLOAD *a1)
{
  unsigned __int8 result; // al

  if ( a1->Header.Type != 0x80 )
    return 0;
  result = 1;
  if ( !a1->Header.Revision || a1->Header.Size < 0x14u )
    return 0;
  return result;
}
