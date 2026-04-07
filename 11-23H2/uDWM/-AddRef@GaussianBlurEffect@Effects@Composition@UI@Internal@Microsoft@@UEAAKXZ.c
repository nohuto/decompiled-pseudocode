/*
 * XREFs of ?AddRef@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAKXZ @ 0x180021C70
 * Callers:
 *     ?AddRef@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@W7EAAKXZ @ 0x180066BC0 (-AddRef@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@W7EAAKXZ.c)
 *     ?AddRef@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WBA@EAAKXZ @ 0x180066BE0 (-AddRef@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WBA@EAAKXZ.c)
 *     ?AddRef@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WBI@EAAKXZ @ 0x180066C00 (-AddRef@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WBI@EAAKXZ.c)
 *     ?AddRef@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WCA@EAAKXZ @ 0x180066C20 (-AddRef@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WCA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800A5AFC (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::AddRef(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 6);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 6, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return Microsoft::WRL::Details::SafeUnknownIncrementReference(
           (Microsoft::WRL::Details *)(2 * v1 + 16),
           (volatile int *)((unsigned __int64)v1 >> 63));
}
