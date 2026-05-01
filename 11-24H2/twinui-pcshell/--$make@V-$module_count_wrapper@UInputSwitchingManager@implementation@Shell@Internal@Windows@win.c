/*
 * XREFs of ??$make@V?$module_count_wrapper@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x18029F824
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180149A90 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UInputSwitchingManager@implementation@Shell@In.c)
 * Callees:
 *     ??0?$heap_implements@V?$module_count_wrapper@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x18029F888 (--0-$heap_implements@V-$module_count_wrapper@UInputSwitchingManager@implementation@Shell@Interna.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>,>(
        __int64 *a1)
{
  __int64 v2; // rax
  void *v4; // [rsp+40h] [rbp+8h]

  v4 = operator new(0x130uLL);
  memset_0(v4, 0, 0x130uLL);
  v2 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>>(v4);
  *a1 = (v2 + 8) & -(__int64)(v2 != 0);
  return a1;
}
