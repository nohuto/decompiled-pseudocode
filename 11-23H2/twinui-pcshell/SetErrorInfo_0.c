/*
 * XREFs of SetErrorInfo_0 @ 0x1801CEF83
 * Callers:
 *     ??$get_runtime_activation_factory_impl@$00@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B3F98 (--$get_runtime_activation_factory_impl@$00@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUgu.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B4384 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?fallback_RoOriginateLanguageException@hresult_error@winrt@@CAHHPEAX0@Z @ 0x1803901A0 (-fallback_RoOriginateLanguageException@hresult_error@winrt@@CAHHPEAX0@Z.c)
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x18039048C (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall SetErrorInfo_0(ULONG dwReserved, IErrorInfo *perrinfo)
{
  return SetErrorInfo(dwReserved, perrinfo);
}
