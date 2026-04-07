/*
 * XREFs of ??$make@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@_N@winrt@@YA?A_PAEAPEAVCTopLevelWindow3D@@$$QEA_N@Z @ 0x180100890
 * Callers:
 *     ?TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@5@XZ @ 0x1801027B4 (-TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AU-$IVec.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z @ 0x180103EA4 (--0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 *__fastcall winrt::make<winrt::Udwm::Transitions::implementation::UserResizeVisual,CTopLevelWindow3D * &,bool>(
        unsigned __int64 *a1,
        struct CTopLevelWindow3D **a2,
        bool *a3)
{
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v6; // rax
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v7; // rbx

  v6 = (winrt::Udwm::Transitions::implementation::UserResizeVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                                       WPF::g_pProcessHeap,
                                                                       176LL);
  v7 = v6;
  if ( v6 )
  {
    winrt::Udwm::Transitions::implementation::UserResizeVisual::UserResizeVisual(v6, *a2, *a3);
    *(_QWORD *)v7 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::UserResizeVisual,std::tuple<winrt::Udwm::Transitions::UserResizeVisual,Udwm::Transitions::IUserResizeVisualNative>>'};
    *((_QWORD *)v7 + 2) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual>::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,Udwm::Transitions::IUserResizeVisualNative>'};
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = ((unsigned __int64)v7 + 8) & -(__int64)(v7 != 0LL);
  return a1;
}
