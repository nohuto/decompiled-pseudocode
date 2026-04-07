/*
 * XREFs of ?EndAnimationFrameStats@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4FF8
 * Callers:
 *     ?Cancel@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18002FC0C (-Cancel@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18001FF9C (-reset@-$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031AE8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x1800EEC88 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x1800EF778 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::EndAnimationFrameStats(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rsi
  void (__fastcall *v5)(__int64, __int128 *, _QWORD, _QWORD, const wchar_t *, _QWORD *, int); // r14
  signed int v6; // edx
  _WORD *v7; // rax
  _QWORD *v8; // r8
  __int128 v9; // [rsp+50h] [rbp-59h] BYREF
  __int64 v10; // [rsp+60h] [rbp-49h]
  int v11; // [rsp+68h] [rbp-41h]
  _QWORD v12[4]; // [rsp+70h] [rbp-39h] BYREF
  __int128 v13; // [rsp+90h] [rbp-19h] BYREF
  __int64 v14; // [rsp+A0h] [rbp-9h]
  int v15; // [rsp+A8h] [rbp-1h]
  _WORD v16[3]; // [rsp+DAh] [rbp+31h] BYREF

  v2 = (__int64 *)((char *)this + 96);
  v3 = *((_QWORD *)this + 12);
  if ( v3 )
  {
    if ( (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v3 + 88LL))(v3, &v13) >= 0 )
    {
      v4 = *v2;
      v5 = *(void (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD, const wchar_t *, _QWORD *, int))(*(_QWORD *)*v2 + 216LL);
      v6 = *((_DWORD *)this + 30);
      if ( v6 >= 0 )
      {
        v7 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v16, v6);
      }
      else
      {
        v7 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v16, -v6) - 1;
        *v7 = 45;
      }
      std::wstring::wstring((__int64)v12, v7, v16);
      v8 = v12;
      if ( v12[3] >= 8uLL )
        v8 = (_QWORD *)v12[0];
      v9 = v13;
      v10 = v14;
      v11 = v15;
      v5(v4, &v9, 0LL, 0LL, L"Responsive Screen Rotation", v8, 1100);
      std::wstring::_Tidy_deallocate((__int64)v12);
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v2 + 40LL))(*v2, 0LL);
    wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset(v2);
    *((_DWORD *)this + 30) = 0;
  }
}
