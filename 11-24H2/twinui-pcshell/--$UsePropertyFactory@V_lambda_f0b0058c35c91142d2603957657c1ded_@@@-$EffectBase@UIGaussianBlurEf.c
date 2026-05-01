/*
 * XREFs of ??$UsePropertyFactory@V_lambda_f0b0058c35c91142d2603957657c1ded_@@@?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@KAJAEBV_lambda_f0b0058c35c91142d2603957657c1ded_@@@Z @ 0x18055BED0
 * Callers:
 *     ?GetProperty@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJIPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x180560320 (-GetProperty@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJIPEAPEAUIPropert.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801F7930 (--$GetActivationFactory@V-$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Fo.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::UsePropertyFactory<_lambda_f0b0058c35c91142d2603957657c1ded_>(
        __int64 a1)
{
  int v2; // edi
  __int64 v3; // rdx
  int v4; // eax
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v7; // [rsp+28h] [rbp-30h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v6 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v7, L"Windows.Foundation.PropertyValue", 0x21u, 0x20u);
  v2 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>>(
         v8,
         &v6);
  if ( v2 >= 0 )
  {
    if ( *(_DWORD *)a1 )
    {
      if ( *(_DWORD *)a1 == 1 )
      {
        v3 = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 76LL);
      }
      else
      {
        if ( *(_DWORD *)a1 != 2 )
        {
          v2 = -2147024809;
          goto LABEL_11;
        }
        v3 = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 80LL);
      }
      v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v6 + 88LL))(v6, v3, *(_QWORD *)(a1 + 16));
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 112LL))(
             v6,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 16));
    }
    v2 = v4;
  }
LABEL_11:
  v8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  return (unsigned int)v2;
}
