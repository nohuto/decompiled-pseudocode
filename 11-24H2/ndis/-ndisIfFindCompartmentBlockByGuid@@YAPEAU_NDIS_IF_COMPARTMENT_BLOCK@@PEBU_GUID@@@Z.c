/*
 * XREFs of ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x140057D20
 * Callers:
 *     ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x140029D10 (-ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z.c)
 *     ?ndisNsiGetCompartmentIdForGuid@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x140057BB0 (-ndisNsiGetCompartmentIdForGuid@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisConvertIdentifierForCompartment @ 0x1400953E0 (ndisConvertIdentifierForCompartment.c)
 *     NdisMSetInterfaceCompartment @ 0x1400C9030 (NdisMSetInterfaceCompartment.c)
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1400C939C (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 *     ndisIfCreateCompartment @ 0x1400CA194 (ndisIfCreateCompartment.c)
 * Callees:
 *     <none>
 */

struct _NDIS_IF_COMPARTMENT_BLOCK *__fastcall ndisIfFindCompartmentBlockByGuid(const struct _GUID *a1)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *i; // rdx
  __int64 v2; // rax

  for ( i = qword_14011CAA0;
        i != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011CAA0;
        i = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)i )
  {
    v2 = *((_QWORD *)i + 143) - *(_QWORD *)&a1->Data1;
    if ( !v2 )
      v2 = *((_QWORD *)i + 144) - *(_QWORD *)a1->Data4;
    if ( !v2 )
      return i;
  }
  return 0LL;
}
