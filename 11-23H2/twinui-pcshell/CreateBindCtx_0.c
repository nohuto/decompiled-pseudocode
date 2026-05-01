/*
 * XREFs of CreateBindCtx_0 @ 0x1801CC092
 * Callers:
 *     BindCtx_RegisterObjectParam @ 0x18079A8AC (BindCtx_RegisterObjectParam.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CreateBindCtx_0(DWORD reserved, LPBC *ppbc)
{
  return CreateBindCtx(reserved, ppbc);
}
