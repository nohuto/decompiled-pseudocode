/*
 * XREFs of ?PutTransitionVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCTopLevelWindow3D@@@Z @ 0x180102140
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$heap_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x180100A38 (--0-$heap_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::TransitionState::PutTransitionVisual(
        winrt::Udwm::Transitions::implementation::TransitionState *this,
        struct CTopLevelWindow3D *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  __int64 *v6; // rbx
  __int64 v7; // rdi
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   48LL);
  v8 = v4;
  if ( v4 )
    v5 = winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::heap_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(
           v4,
           (__int64)a2);
  else
    v5 = 0LL;
  v6 = (__int64 *)((char *)this + 96);
  v7 = (unsigned __int64)(v5 + 1) & -(__int64)(v5 != 0LL);
  v8 = (_QWORD *)v7;
  if ( (_QWORD **)((char *)this + 96) == &v8 )
  {
    if ( v7 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  }
  else
  {
    if ( *v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::implementation::TransitionState *)((char *)this + 96));
    *v6 = v7;
  }
}
