/*
 * XREFs of CreateBindCtx_0 @ 0x1802D7F2A
 * Callers:
 *     BindCtx_RegisterObjectParam @ 0x1806C8D0C (BindCtx_RegisterObjectParam.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CreateBindCtx_0(DWORD reserved, LPBC *ppbc)
{
  return CreateBindCtx(reserved, ppbc);
}
