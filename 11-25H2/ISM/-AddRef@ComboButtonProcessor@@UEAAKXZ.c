/*
 * XREFs of ?AddRef@ComboButtonProcessor@@UEAAKXZ @ 0x180072C70
 * Callers:
 *     ?AddRef@DragNDropProcessor@@W7EAAKXZ @ 0x1800A3470 (-AddRef@DragNDropProcessor@@W7EAAKXZ.c)
 *     ?AddRef@MPCFocusTarget@@WFA@EAAKXZ @ 0x1800FD7D0 (-AddRef@MPCFocusTarget@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComboButtonProcessor::AddRef(ComboButtonProcessor *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
