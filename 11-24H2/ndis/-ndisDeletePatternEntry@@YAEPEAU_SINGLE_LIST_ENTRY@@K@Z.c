/*
 * XREFs of ?ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x140062FD0
 * Callers:
 *     ?ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140005810 (-ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140062ED0 (-ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400B2A04 (-ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400B2A58 (-ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisDeletePatternEntry(struct _SINGLE_LIST_ENTRY *a1, int a2)
{
  struct _SINGLE_LIST_ENTRY *v2; // rax
  _SINGLE_LIST_ENTRY *i; // rcx

  v2 = a1;
  for ( i = a1->Next; i; i = i->Next )
  {
    if ( LODWORD(i[5].Next) == a2 )
    {
      v2->Next = i->Next;
      ExFreePoolWithTag(i, 0);
      return 1;
    }
    v2 = i;
  }
  return 0;
}
