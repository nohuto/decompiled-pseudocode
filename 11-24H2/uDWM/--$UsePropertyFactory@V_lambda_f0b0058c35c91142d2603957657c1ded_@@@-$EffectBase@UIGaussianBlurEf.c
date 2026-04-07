/*
 * XREFs of ??$UsePropertyFactory@V_lambda_f0b0058c35c91142d2603957657c1ded_@@@?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@KAJAEBV_lambda_f0b0058c35c91142d2603957657c1ded_@@@Z @ 0x18004E54C
 * Callers:
 *     ?GetProperty@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJIPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x18004E520 (-GetProperty@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJIPEAPEAUIPropert.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??R_lambda_f0b0058c35c91142d2603957657c1ded_@@QEBA@PEAUIPropertyValueStatics@Foundation@Windows@@@Z @ 0x18004E4A8 (--R_lambda_f0b0058c35c91142d2603957657c1ded_@@QEBA@PEAUIPropertyValueStatics@Foundation@Windows@.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::UsePropertyFactory<_lambda_f0b0058c35c91142d2603957657c1ded_>(
        __int64 a1)
{
  HRESULT v2; // eax
  HSTRING v3; // rbx
  int ActivationFactory; // ebx
  __int64 *v6; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v7; // [rsp+28h] [rbp-30h] BYREF
  HSTRING v8; // [rsp+40h] [rbp-18h] BYREF

  v6 = 0LL;
  v8 = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &v7, &v8);
  if ( v2 < 0 )
  {
    RaiseException(v2, 1u, 0, 0LL);
    __debugbreak();
    JUMPOUT(0x18004E61BLL);
  }
  v3 = v8;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  ActivationFactory = RoGetActivationFactory(v3, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v6);
  if ( ActivationFactory >= 0 )
    ActivationFactory = _lambda_f0b0058c35c91142d2603957657c1ded_::operator()(a1, v6);
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  return (unsigned int)ActivationFactory;
}
