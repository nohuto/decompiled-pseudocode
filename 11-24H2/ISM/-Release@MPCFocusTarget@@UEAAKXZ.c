/*
 * XREFs of ?Release@MPCFocusTarget@@UEAAKXZ @ 0x180080410
 * Callers:
 *     ?Release@ComboButtonProcessor@@W7EAAKXZ @ 0x1800A3920 (-Release@ComboButtonProcessor@@W7EAAKXZ.c)
 *     ?Release@MPCFocusTarget@@WFA@EAAKXZ @ 0x1800FF8D0 (-Release@MPCFocusTarget@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCFocusTarget::Release(MPCFocusTarget *this)
{
  return InputContext::Release((MPCFocusTarget *)((char *)this + 8));
}
