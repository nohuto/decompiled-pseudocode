/*
 * XREFs of _lambda_7e3c35272eede790d9e76bfd6c5eee9b_::operator() @ 0x1805CC2D8
 * Callers:
 *     wistd::__function::__func__lambda_7e3c35272eede790d9e76bfd6c5eee9b__long___cdecl(void)_::operator() @ 0x1805CCF60 (wistd--__function--__func__lambda_7e3c35272eede790d9e76bfd6c5eee9b__long___cdecl(void)_--operato.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??R?$_Func_class@XUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1801EDE74 (--R-$_Func_class@XUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXUDashboard.c)
 *     ?EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@AEAUguid@6@@Z @ 0x1805CED1C (-EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@A.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_7e3c35272eede790d9e76bfd6c5eee9b_::operator()(__int64 a1)
{
  __m128i v2; // xmm0
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rdi
  const char *v6; // r9
  __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int8 v9; // [rsp+28h] [rbp-20h]
  __int8 v10; // [rsp+29h] [rbp-1Fh]
  __int8 v11; // [rsp+2Ah] [rbp-1Eh]
  __int8 v12; // [rsp+2Bh] [rbp-1Dh]
  __int8 v13; // [rsp+2Ch] [rbp-1Ch]
  __int8 v14; // [rsp+2Dh] [rbp-1Bh]
  __int8 v15; // [rsp+2Eh] [rbp-1Ah]
  __int8 v16; // [rsp+2Fh] [rbp-19h]
  __int64 v17[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(__m128i *)(*(_QWORD *)(*(_QWORD *)a1 + 56LL) + 152LL);
  v3 = HIWORD(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 56LL) + 152LL));
  v4 = HIDWORD(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 56LL) + 152LL));
  LODWORD(v8) = _mm_cvtsi128_si32(v2);
  WORD2(v8) = v4;
  HIWORD(v8) = v3;
  v2.m128i_i64[0] = _mm_srli_si128(v2, 8).m128i_u64[0];
  v9 = v2.m128i_i8[0];
  v10 = v2.m128i_i8[1];
  v11 = v2.m128i_i8[2];
  v12 = v2.m128i_i8[3];
  v13 = v2.m128i_i8[4];
  v14 = v2.m128i_i8[5];
  v15 = v2.m128i_i8[6];
  v16 = v2.m128i_i8[7];
  try
  {
    winrt::Windows::Internal::Shell::implementation::DashboardManager::EnsureDashboardExtensionCreated();
    if ( v17[0] && (v5 = *(_QWORD *)(a1 + 16), *(_QWORD *)(v5 + 56)) )
    {
      v8 = v17[0];
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v8);
      std::_Func_class<void,winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::operator()(
        v5,
        (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
    }
    else
    {
      **(_DWORD **)(a1 + 24) = -2147023728;
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v17);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBB0,
                           (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                           v6);
  }
  return result;
}
