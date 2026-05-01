/*
 * XREFs of ??$make@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1802C1A6C
 * Callers:
 *     ?RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ @ 0x18020E764 (-RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ.c)
 * Callees:
 *     ??0?$heap_implements@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802C1ABC (--0-$heap_implements@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

__int64 *__fastcall winrt::make<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,>(
        __int64 *a1)
{
  __int64 v2; // rax
  _OWORD *v4; // [rsp+40h] [rbp+8h]

  v4 = operator new(0x30uLL);
  *v4 = 0LL;
  v4[1] = 0LL;
  v4[2] = 0LL;
  v2 = winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher>::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher>(v4);
  *a1 = (v2 + 16) & -(__int64)(v2 != 0);
  return a1;
}
