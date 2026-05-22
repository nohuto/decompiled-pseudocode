/*
 * XREFs of WINRT_IMPL_FreeLibrary @ 0x18009DEE9
 * Callers:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x180080C2C (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall WINRT_IMPL_FreeLibrary(HMODULE hLibModule)
{
  return FreeLibrary(hLibModule);
}
