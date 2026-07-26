/*
 * XREFs of ?ndisNsiSetThreadInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1400709E0
 * Callers:
 *     <none>
 * Callees:
 *     NdisSetThreadObjectCompartmentScope @ 0x14016D7B0 (NdisSetThreadObjectCompartmentScope.c)
 *     NdisSetThreadObjectCompartmentId @ 0x140173530 (NdisSetThreadObjectCompartmentId.c)
 */

__int64 __fastcall ndisNsiSetThreadInformation(struct _NM_REQUEST_SET_PARAMETER *a1)
{
  int v1; // eax

  if ( *((_DWORD *)a1 + 15) )
    return 3221225474LL;
  if ( *((_DWORD *)a1 + 14) )
    return 3221225485LL;
  v1 = *((_DWORD *)a1 + 13);
  if ( v1 )
  {
    if ( v1 == 4 )
      return NdisSetThreadObjectCompartmentScope(KeGetCurrentThread(), **((unsigned int **)a1 + 5));
    return 3221225485LL;
  }
  return NdisSetThreadObjectCompartmentId(KeGetCurrentThread(), **((unsigned int **)a1 + 5));
}
