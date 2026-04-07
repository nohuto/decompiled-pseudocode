/*
 * XREFs of ?AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnimationCompletedHandler@345@@Z @ 0x1800FAA24
 * Callers:
 *     ?put_AnimationComplete@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEAX@Z @ 0x1800FB4F0 (-put_AnimationComplete@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@J$$V@std@@IEAAXXZ @ 0x18001E9D4 (-_Tidy@-$_Func_class@J$$V@std@@IEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18002044C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180047100 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009E160 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??4?$function@$$A6AJXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800E6F84 (--4-$function@$$A6AJXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$get_weak@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@?$root_implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@45@@impl@winrt@@IEAA?AU?$weak_ref@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@2@XZ @ 0x1800F7000 (--$get_weak@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AnimationComplete(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this,
        const struct winrt::Udwm::Transitions::AnimationCompletedHandler *a2)
{
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD v8[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+70h] [rbp+10h] BYREF
  _QWORD *v10; // [rsp+80h] [rbp+20h]

  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *)((char *)this + 40),
    a2);
  v9 = 0LL;
  v3 = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 5, &v9);
  v5 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    std::_Func_class<long,>::_Tidy(v5 + 552, v4);
  }
  else
  {
    winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::Private::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>::get_weak<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>(
      (volatile signed __int64 *)this + 2,
      &v9);
    v6 = v9;
    v9 = 0LL;
    v8[0] = off_180115618;
    v8[1] = v6;
    v8[7] = v8;
    v10 = v8;
    std::function<long (void)>::operator=(v5 + 552, (__int64)v8);
    std::_Func_class<long,>::_Tidy((__int64)v8, v7);
    if ( v9 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v9);
  }
}
