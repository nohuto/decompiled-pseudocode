/*
 * XREFs of ??$make_self@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?AU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x18029377C
 * Callers:
 *     ??0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802933BC (--0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$producers_base@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIInputSwitchExperienceManager@@@std@@@impl@winrt@@QEAA@XZ @ 0x180293810 (--0-$producers_base@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@V-$tuple.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

_QWORD *__fastcall winrt::make_self<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,>(
        _QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *result; // rax

  v2 = operator new(0x58uLL);
  memset_0(v2, 0, 0x58uLL);
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager,std::tuple<IInputSwitchExperienceManager>>::producers_base<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager,std::tuple<IInputSwitchExperienceManager>>(v2);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  v2[2] = 1LL;
  v2[3] = 0LL;
  v2[4] = 0LL;
  v2[5] = 0LL;
  v2[6] = 0LL;
  v2[7] = 0LL;
  v2[8] = 0LL;
  v2[9] = 0LL;
  v2[10] = 0LL;
  *v2 = &winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,std::tuple<Windows::Internal::Shell::ITabProxyWindowFactoryInternal>>'};
  v2[1] = &winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal>'};
  result = a1;
  *a1 = v2;
  return result;
}
