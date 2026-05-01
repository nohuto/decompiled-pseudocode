/*
 * XREFs of WINRT_IMPL_CoGetApartmentType @ 0x1802D2E09
 * Callers:
 *     ?get_apartment_type@impl@winrt@@YA?AU?$pair@HH@std@@XZ @ 0x1801C5AF0 (-get_apartment_type@impl@winrt@@YA-AU-$pair@HH@std@@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WINRT_IMPL_CoGetApartmentType(APTTYPE *pAptType, APTTYPEQUALIFIER *pAptQualifier)
{
  return CoGetApartmentType(pAptType, pAptQualifier);
}
