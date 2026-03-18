/*
 * XREFs of ?Release@CRadialGradientEffect@@UEAAKXZ @ 0x1802280E0
 * Callers:
 *     ?Release@CPassthroughEffect@@WBA@EAAKXZ @ 0x1802DBF20 (-Release@CPassthroughEffect@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CRadialGradientEffect::Release(__int64 this)
{
  return CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>::InternalRelease(this);
}
