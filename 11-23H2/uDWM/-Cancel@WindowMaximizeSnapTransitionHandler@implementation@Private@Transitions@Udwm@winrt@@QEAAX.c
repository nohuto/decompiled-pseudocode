/*
 * XREFs of ?Cancel@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F7538
 * Callers:
 *     ??1WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F7128 (--1WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?Cancel@?$produce@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x1800F74E0 (-Cancel@-$produce@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@w.c)
 *     ?PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F7C18 (-PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180047100 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D84DC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::Cancel(
        winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *this)
{
  char v1; // r14
  __int64 v3; // rax
  signed int v4; // eax
  signed int v5; // eax
  __int64 v6; // rbx
  char v7; // bp
  signed int v8; // eax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v9 = 0LL;
  if ( !winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 4, &v9) )
  {
    v3 = **((_QWORD **)this + 4);
    if ( *((_BYTE *)this + 72) )
    {
      v4 = (*(__int64 (**)(void))(v3 + 112))();
      if ( v4 < 0 )
        winrt::throw_hresult(v4);
    }
    else
    {
      v5 = (*(__int64 (**)(void))(v3 + 120))();
      if ( v5 < 0 )
        winrt::throw_hresult(v5);
    }
  }
  if ( !*((_BYTE *)this + 72) )
  {
    v6 = v9;
    goto LABEL_10;
  }
  v6 = 0LL;
  v9 = 0LL;
  v1 = 1;
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 5, &v9) )
  {
LABEL_10:
    v7 = 0;
    goto LABEL_11;
  }
  v7 = 1;
LABEL_11:
  if ( (v1 & 1) != 0 && v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 120LL))(*((_QWORD *)this + 5));
    if ( v8 < 0 )
      winrt::throw_hresult(v8);
  }
  *((_BYTE *)this + 72) = 0;
  winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::OnPositionAnimationComplete(this);
}
