/*
 * XREFs of WINRT_IMPL_CoGetApartmentType @ 0x1801C7C7E
 * Callers:
 *     ?get_apartment_type@impl@winrt@@YA?AU?$pair@HH@std@@XZ @ 0x1800DB6DC (-get_apartment_type@impl@winrt@@YA-AU-$pair@HH@std@@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WINRT_IMPL_CoGetApartmentType(APTTYPE *pAptType, APTTYPEQUALIFIER *pAptQualifier)
{
  return CoGetApartmentType(pAptType, pAptQualifier);
}
