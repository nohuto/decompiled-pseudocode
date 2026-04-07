/*
 * XREFs of WINRT_IMPL_SysAllocString @ 0x18005E84D
 * Callers:
 *     ?GetDescription@error_info_fallback@impl@winrt@@UEAAHPEAPEAG@Z @ 0x1800D70C0 (-GetDescription@error_info_fallback@impl@winrt@@UEAAHPEAPEAG@Z.c)
 *     ?GetErrorDetails@error_info_fallback@impl@winrt@@UEAAHPEAPEAGPEAH00@Z @ 0x1800D7100 (-GetErrorDetails@error_info_fallback@impl@winrt@@UEAAHPEAPEAGPEAH00@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BSTR __stdcall WINRT_IMPL_SysAllocString(const OLECHAR *psz)
{
  return SysAllocString(psz);
}
