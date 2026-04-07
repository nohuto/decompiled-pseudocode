/*
 * XREFs of _lambda_65776acf8dfa6fe29cb3050938b98b74_::operator() @ 0x1800FA850
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_65776acf8dfa6fe29cb3050938b98b74__long_::_Do_call @ 0x1800FB210 (std--_Func_impl_no_alloc__lambda_65776acf8dfa6fe29cb3050938b98b74__long_--_Do_call.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D84DC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x1800E7620 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_65776acf8dfa6fe29cb3050938b98b74_::operator()(
        _QWORD ***a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _QWORD **v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  signed int v8; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v4 = *a1;
  if ( v4 )
  {
    v11 = 0LL;
    ((void (__fastcall *)(_QWORD **, __int64 *, __int64 *))(*v4)[3])(
      v4,
      &winrt::impl::guid_v<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>,
      &v11);
    v5 = v11;
    if ( v11 )
      v5 = v11 - 8;
    v4 = (_QWORD **)v5;
    v11 = 0LL;
    v12 = v5;
    v6 = v5;
    v7 = v5;
  }
  else
  {
    v12 = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
  }
  try
  {
    if ( v5 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD *))(*v4[5] + 24LL))(v4[5]);
      v7 = v6;
      if ( v8 < 0 )
        winrt::throw_hresult(v8);
    }
    if ( v7 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>::unconditional_release_ref(&v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x68,
                           (int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.toplevelwindow3dwrapper.cpp",
                           a4);
  }
  return result;
}
