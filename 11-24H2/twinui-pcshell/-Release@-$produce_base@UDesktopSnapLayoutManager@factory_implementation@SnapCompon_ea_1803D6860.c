/*
 * XREFs of ?Release@?$produce_base@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerStatics2@34567@X@impl@winrt@@UEAAIXZ @ 0x1803D6860
 * Callers:
 *     <none>
 * Callees:
 *     ?subtract_final_reference@?$root_implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@impl@winrt@@IEAAIXZ @ 0x180102400 (-subtract_final_reference@-$root_implements@UTabProxyWindow@implementation@Shell@Internal@Window.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics2,void>::Release(
        unsigned __int64 a1)
{
  _QWORD *v1; // rbx
  unsigned int v2; // edi

  v1 = (_QWORD *)((a1 - 40) & ((unsigned __int128)-(__int128)a1 >> 64));
  v2 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::subtract_final_reference((__int64)v1);
  if ( !v2 )
  {
    v1[1] = 1LL;
    if ( v1 )
      (*(void (__fastcall **)(_QWORD *))(*v1 + 8LL))(v1);
  }
  return v2;
}
