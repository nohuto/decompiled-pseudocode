/*
 * XREFs of ?AddRef@ComboButtonProcessor@@UEAAKXZ @ 0x1800729A0
 * Callers:
 *     ?AddRef@DragNDropProcessor@@W7EAAKXZ @ 0x1800A3840 (-AddRef@DragNDropProcessor@@W7EAAKXZ.c)
 *     ?AddRef@MPCFocusTarget@@WFA@EAAKXZ @ 0x1800FF4A0 (-AddRef@MPCFocusTarget@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComboButtonProcessor::AddRef(ComboButtonProcessor *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
