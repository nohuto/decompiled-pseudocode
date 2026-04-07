/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007C2A0
 * Callers:
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x180039D20 (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 *     ?InternalRelease@?$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x18007C26C (-InternalRelease@-$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@WRL@Mi.c)
 *     ?Release@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAKXZ @ 0x18008AF00 (-Release@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800F60B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGra_ea_1800F60B0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800F60C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGra_ea_1800F60C0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800F60D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGra_ea_1800F60D0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1800F60E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGra_ea_1800F60E0.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009AC7C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 48);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_5;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_5:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 64LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
