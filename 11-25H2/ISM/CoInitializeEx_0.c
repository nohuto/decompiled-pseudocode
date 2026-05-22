/*
 * XREFs of CoInitializeEx_0 @ 0x18009F031
 * Callers:
 *     ?init_apartment@winrt@@YAXW4apartment_type@1@@Z @ 0x1800A9188 (-init_apartment@winrt@@YAXW4apartment_type@1@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CoInitializeEx_0(LPVOID pvReserved, DWORD dwCoInit)
{
  return CoInitializeEx(pvReserved, dwCoInit);
}
