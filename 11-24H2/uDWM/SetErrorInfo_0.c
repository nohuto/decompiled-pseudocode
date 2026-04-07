/*
 * XREFs of SetErrorInfo_0 @ 0x18009D6ED
 * Callers:
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x1800A0C24 (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall SetErrorInfo_0(ULONG dwReserved, IErrorInfo *perrinfo)
{
  return SetErrorInfo(dwReserved, perrinfo);
}
