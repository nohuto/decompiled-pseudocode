/*
 * XREFs of ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1400729C0
 * Callers:
 *     ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x14004D510 (-ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z.c)
 *     ?ndisNsiGetCompartmentIdForGuid@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x140072850 (-ndisNsiGetCompartmentIdForGuid@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisConvertIdentifierForCompartment @ 0x14009EF40 (ndisConvertIdentifierForCompartment.c)
 *     NdisMSetInterfaceCompartment @ 0x1400D0140 (NdisMSetInterfaceCompartment.c)
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1400D04AC (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 *     ndisIfCreateCompartment @ 0x1400D136C (ndisIfCreateCompartment.c)
 * Callees:
 *     <none>
 */

struct _NDIS_IF_COMPARTMENT_BLOCK *__fastcall ndisIfFindCompartmentBlockByGuid(const struct _GUID *a1)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *i; // rdx
  __int64 v2; // rax

  for ( i = qword_140126AF0;
        i != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_140126AF0;
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
