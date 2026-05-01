/*
 * XREFs of ?QueryInterface@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UINonDelegatingInspectable@impl@7@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805B9F80
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801C73E0 (-query_interface@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::impl::INonDelegatingInspectable,void>::QueryInterface(
        unsigned __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rbx
  __int64 (__fastcall ***v4)(_QWORD); // rcx
  __int64 result; // rax

  v3 = (a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64);
  v4 = *(__int64 (__fastcall ****)(_QWORD))(v3 + 0x18);
  if ( v4 )
    return (**v4)(v4);
  result = winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::query_interface(
             v3,
             a2,
             a3);
  if ( (_DWORD)result == -2147467262 )
  {
    v4 = *(__int64 (__fastcall ****)(_QWORD))(v3 + 8);
    if ( v4 )
      return (**v4)(v4);
  }
  return result;
}
