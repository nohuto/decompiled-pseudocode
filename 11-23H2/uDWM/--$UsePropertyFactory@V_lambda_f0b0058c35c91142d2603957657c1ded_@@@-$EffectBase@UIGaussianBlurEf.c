/*
 * XREFs of ??$UsePropertyFactory@V_lambda_f0b0058c35c91142d2603957657c1ded_@@@?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@KAJAEBV_lambda_f0b0058c35c91142d2603957657c1ded_@@@Z @ 0x1800204FC
 * Callers:
 *     ?GetProperty@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJIPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x1800204D0 (-GetProperty@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJIPEAPEAUIPropert.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001FCEC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??I?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800205C8 (--I-$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$Com.c)
 *     ??R_lambda_f0b0058c35c91142d2603957657c1ded_@@QEBA@PEAUIPropertyValueStatics@Foundation@Windows@@@Z @ 0x1800205D8 (--R_lambda_f0b0058c35c91142d2603957657c1ded_@@QEBA@PEAUIPropertyValueStatics@Foundation@Windows@.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 */

__int64 __fastcall Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::UsePropertyFactory<_lambda_f0b0058c35c91142d2603957657c1ded_>(
        __int64 a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  int ActivationFactory; // ebx
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[8]; // [rsp+28h] [rbp-40h] BYREF
  HSTRING_HEADER v8; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h]

  v6 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v8, L"Windows.Foundation.PropertyValue", 0x21u, 0x20u);
  v2 = v9;
  v3 = *(__int64 **)Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>::operator&(&v6, v7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3);
  ActivationFactory = RoGetActivationFactory(v2, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, v3);
  if ( ActivationFactory >= 0 )
    ActivationFactory = _lambda_f0b0058c35c91142d2603957657c1ded_::operator()(a1, v6);
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  return (unsigned int)ActivationFactory;
}
