/*
 * XREFs of _lambda_bdc0369aff36f5007facc09437a0c890_::operator() @ 0x1802373BC
 * Callers:
 *     wistd::__function::__func__lambda_bdc0369aff36f5007facc09437a0c890__long___cdecl(void)_::operator() @ 0x180237B10 (wistd--__function--__func__lambda_bdc0369aff36f5007facc09437a0c890__long___cdecl(void)_--operato.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     ?EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@AEAUguid@6@@Z @ 0x180239044 (-EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@A.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ @ 0x18024877C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash@@@details@wil@@QEAA_NXZ @ 0x180248A18 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExte.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_bdc0369aff36f5007facc09437a0c890_::operator()(RTL_SRWLOCK **a1)
{
  char IsEnabled; // al
  winrt::Windows::Foundation::IUnknown *v3; // rdi
  RTL_SRWLOCK *v4; // r9
  __m128i v5; // xmm0
  __int64 v6; // rdx
  __int64 v7; // rax
  RTL_SRWLOCK *v8; // rdi
  winrt::Windows::Foundation::IUnknown *v9; // rbx
  PVOID Ptr; // rcx
  const char *v11; // r9
  __int64 result; // rax
  RTL_SRWLOCK *v13; // [rsp+20h] [rbp-28h] BYREF
  __int8 v14; // [rsp+28h] [rbp-20h]
  __int8 v15; // [rsp+29h] [rbp-1Fh]
  __int8 v16; // [rsp+2Ah] [rbp-1Eh]
  __int8 v17; // [rsp+2Bh] [rbp-1Dh]
  __int8 v18; // [rsp+2Ch] [rbp-1Ch]
  __int8 v19; // [rsp+2Dh] [rbp-1Bh]
  __int8 v20; // [rsp+2Eh] [rbp-1Ah]
  __int8 v21; // [rsp+2Fh] [rbp-19h]
  winrt::Windows::Foundation::IUnknown *v22; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v23[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
    {
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash>::GetImpl'::`2'::impl);
      v3 = (winrt::Windows::Foundation::IUnknown *)&(*a1)[18];
      if ( IsEnabled )
      {
        wil::srwlock::lock_exclusive(*a1 + 16, &v13);
        v22 = 0LL;
        winrt::Windows::Foundation::IUnknown::operator=(v3, (winrt::Windows::Foundation::IUnknown *)&v22);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v22);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
      }
      else
      {
        v22 = 0LL;
        winrt::Windows::Foundation::IUnknown::operator=(v3, (winrt::Windows::Foundation::IUnknown *)&v22);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v22);
      }
    }
    v4 = *a1;
    BYTE4(v4[26].Ptr) = 1;
    v5 = *(__m128i *)((char *)a1[1][6].Ptr + 152);
    v6 = HIWORD(*((_QWORD *)a1[1][6].Ptr + 19));
    v7 = HIDWORD(*((_QWORD *)a1[1][6].Ptr + 19));
    LODWORD(v13) = _mm_cvtsi128_si32(v5);
    WORD2(v13) = v7;
    HIWORD(v13) = v6;
    v5.m128i_i64[0] = _mm_srli_si128(v5, 8).m128i_u64[0];
    v14 = v5.m128i_i8[0];
    v15 = v5.m128i_i8[1];
    v16 = v5.m128i_i8[2];
    v17 = v5.m128i_i8[3];
    v18 = v5.m128i_i8[4];
    v19 = v5.m128i_i8[5];
    v20 = v5.m128i_i8[6];
    v21 = v5.m128i_i8[7];
    winrt::Windows::Internal::Shell::implementation::DashboardManager::EnsureDashboardExtensionCreated(v4, v23);
    if ( v23[0] && (v8 = a1[2], v8[7].Ptr) )
    {
      v9 = winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
             (winrt::Windows::Foundation::IUnknown *)&v13,
             v23);
      v22 = v9;
      Ptr = v8[7].Ptr;
      if ( !Ptr )
        std::_Xbad_function_call();
      (*(void (__fastcall **)(PVOID, winrt::Windows::Foundation::IUnknown *))(*(_QWORD *)Ptr + 16LL))(Ptr, v9);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(v9);
    }
    else
    {
      LODWORD(a1[3]->Ptr) = -2147023728;
    }
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v23);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA60,
                           (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                           v11);
  }
  return result;
}
