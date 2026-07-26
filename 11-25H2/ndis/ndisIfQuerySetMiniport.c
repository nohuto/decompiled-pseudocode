/*
 * XREFs of ndisIfQuerySetMiniport @ 0x14015C020
 * Callers:
 *     ndisIfQueryFilterObject @ 0x14015AA30 (ndisIfQueryFilterObject.c)
 *     ndisIfQueryMiniportObject @ 0x14015B230 (ndisIfQueryMiniportObject.c)
 * Callees:
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000EB80 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400130E0 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x14005DD00 (-ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_M.c)
 */

__int64 __fastcall ndisIfQuerySetMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        struct _NDIS_FILTER_BLOCK *a3)
{
  unsigned int SetMiniport; // edi

  if ( !(unsigned __int8)ndisReferenceMiniportByHandleForNsi(a1, 4u, 0x3Du) )
    return 3221225473LL;
  SetMiniport = ndisQuerySetMiniport(a1, 0LL, a2, 0, a3);
  ndisDereferenceMiniportForNsi(a1, 4u, 0x3Du);
  return SetMiniport;
}
