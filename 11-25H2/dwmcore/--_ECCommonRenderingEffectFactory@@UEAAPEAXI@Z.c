/*
 * XREFs of ??_ECCommonRenderingEffectFactory@@UEAAPEAXI@Z @ 0x180290CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

CCommonRenderingEffectFactory *__fastcall CCommonRenderingEffectFactory::`vector deleting destructor'(
        CCommonRenderingEffectFactory *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
