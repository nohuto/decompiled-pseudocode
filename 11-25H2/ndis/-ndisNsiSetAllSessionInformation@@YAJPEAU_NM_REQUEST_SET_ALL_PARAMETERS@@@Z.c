/*
 * XREFs of ?ndisNsiSetAllSessionInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400CF510
 * Callers:
 *     <none>
 * Callees:
 *     NdisSetSessionCompartmentId @ 0x1400CF560 (NdisSetSessionCompartmentId.c)
 */

__int64 __fastcall ndisNsiSetAllSessionInformation(struct _NM_REQUEST_SET_ALL_PARAMETERS *a1)
{
  if ( *((_DWORD *)a1 + 13) )
    return 3221225474LL;
  if ( *((_DWORD *)a1 + 12) )
    return 3221225485LL;
  return NdisSetSessionCompartmentId(**((unsigned int **)a1 + 2));
}
