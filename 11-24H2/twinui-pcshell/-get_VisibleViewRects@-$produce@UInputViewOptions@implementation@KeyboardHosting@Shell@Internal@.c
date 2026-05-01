/*
 * XREFs of ?get_VisibleViewRects@?$produce@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@UIViewOptions@Text@4567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1801F21C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions,winrt::Windows::Internal::Shell::Text::IViewOptions>::get_VisibleViewRects(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbx

  *a2 = 0LL;
  v3 = a1 + 40;
  if ( !a1 )
    v3 = 64LL;
  v4 = *(_QWORD *)v3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a2 = v4;
  return 0LL;
}
