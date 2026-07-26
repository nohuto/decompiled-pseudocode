/*
 * XREFs of ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1400469F0
 * Callers:
 *     ndisConvertIdentifierIsCompartmentVisibile @ 0x1400955EC (ndisConvertIdentifierIsCompartmentVisibile.c)
 *     ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1400CB280 (-ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1400CBD70 (-ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1400CD9F0 (-ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400CDC80 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400CDFA0 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1400CE530 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisEnumerateInterfaces32 @ 0x140171CB0 (ndisEnumerateInterfaces32.c)
 *     ndisEnumerateInterfaces @ 0x140175F50 (ndisEnumerateInterfaces.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsCompartmentAccessibleByClient(
        const struct _NDIS_IF_COMPARTMENT_BLOCK *a1,
        const struct _NDIS_NSI_CLIENT_INFO *a2,
        char a3)
{
  int v3; // r9d
  __int64 v5; // r8

  v3 = *((_DWORD *)a2 + 1);
  if ( v3 == *((_DWORD *)a1 + 4) )
    return 1;
  if ( a3 || *(_DWORD *)a2 == -1 )
  {
    v5 = *((_QWORD *)a2 + 1) - *(_QWORD *)((char *)a1 + 1684);
    if ( !v5 )
      v5 = *((_QWORD *)a2 + 2) - *(_QWORD *)((char *)a1 + 1692);
    if ( !v5 )
      return 1;
  }
  if ( (*((_DWORD *)a1 + 420) & 2) != 0 )
    return 0;
  return v3 == 1;
}
