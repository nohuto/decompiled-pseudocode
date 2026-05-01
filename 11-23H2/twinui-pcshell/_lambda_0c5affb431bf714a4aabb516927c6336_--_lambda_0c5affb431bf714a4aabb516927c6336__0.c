/*
 * XREFs of _lambda_0c5affb431bf714a4aabb516927c6336_::_lambda_0c5affb431bf714a4aabb516927c6336__0 @ 0x180233604
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180242E90 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_0c5affb431bf714a4aabb516927c6336_::_lambda_0c5affb431bf714a4aabb516927c6336__0(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        _QWORD *a4,
        _OWORD *a5,
        __int64 a6,
        __int64 a7,
        _BYTE *a8,
        _QWORD *a9,
        _BYTE *a10,
        _QWORD *a11,
        _QWORD *a12)
{
  *(_QWORD *)a1 = a2;
  *(_OWORD *)(a1 + 8) = *a3;
  *(_QWORD *)(a1 + 24) = *a4;
  *(_OWORD *)(a1 + 32) = *a5;
  std::wstring::wstring((_QWORD *)(a1 + 48), a6);
  std::wstring::wstring((_QWORD *)(a1 + 80), a7);
  *(_BYTE *)(a1 + 112) = *a8;
  *(_QWORD *)(a1 + 120) = *a9;
  *(_BYTE *)(a1 + 128) = *a10;
  *(_QWORD *)(a1 + 132) = *a11;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
    (winrt::Windows::Foundation::IUnknown *)(a1 + 144),
    a12);
  return a1;
}
