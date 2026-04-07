/*
 * XREFs of ?GetDesktopCompositor@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCCompositor@@@Z @ 0x1801016C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B064 (--1-$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionState::GetDesktopCompositor(
        winrt::Udwm::Transitions::implementation::TransitionState *this,
        struct CCompositor **a2)
{
  struct CCompositor *v3; // rbx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v3 = (struct CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6));
  v5 = 0LL;
  *a2 = v3;
  wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v5);
  return 0LL;
}
