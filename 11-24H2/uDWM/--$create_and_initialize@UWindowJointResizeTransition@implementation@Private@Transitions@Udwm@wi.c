/*
 * XREFs of ??$create_and_initialize@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@impl@winrt@@YAPEAUWindowJointResizeTransition@implementation@Private@Transitions@Udwm@1@XZ @ 0x18004CF48
 * Callers:
 *     ??$make@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18004CF14 (--$make@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@Y.c)
 * Callees:
 *     ??0WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18004CCB0 (--0WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *__fastcall winrt::impl::create_and_initialize<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,>(
        __int64 a1,
        const struct std::nothrow_t *a2)
{
  winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *v2; // rax
  winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *v3; // rbx

  v2 = (winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *)operator new[](0xB8uLL, a2);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  memset_0(v2, 0, 0xB8uLL);
  winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::WindowJointResizeTransition(v3);
  *(_QWORD *)v3 = &winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,std::tuple<winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>>'};
  *((_QWORD *)v3 + 2) = &winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>'};
  return v3;
}
