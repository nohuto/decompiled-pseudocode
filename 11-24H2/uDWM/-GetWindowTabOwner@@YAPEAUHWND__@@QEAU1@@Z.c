/*
 * XREFs of ?GetWindowTabOwner@@YAPEAUHWND__@@QEAU1@@Z @ 0x18008A580
 * Callers:
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EF7D0 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

HANDLE __fastcall GetWindowTabOwner(HWND a1)
{
  return GetPropW(a1, (LPCWSTR)0xA920);
}
