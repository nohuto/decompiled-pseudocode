/*
 * XREFs of ?ndisFindPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1400778E0
 * Callers:
 *     ?ndisOidPreRemovePMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005C2C0 (-ndisOidPreRemovePMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400776A0 (-ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_PACKET_PATTERN_ENTRY *__fastcall ndisFindPatternEntry(struct _SINGLE_LIST_ENTRY *a1, int a2)
{
  struct _NDIS_PACKET_PATTERN_ENTRY *result; // rax

  for ( result = (struct _NDIS_PACKET_PATTERN_ENTRY *)a1->Next;
        result && result->Id != a2;
        result = (struct _NDIS_PACKET_PATTERN_ENTRY *)result->Link.Next )
  {
    ;
  }
  return result;
}
