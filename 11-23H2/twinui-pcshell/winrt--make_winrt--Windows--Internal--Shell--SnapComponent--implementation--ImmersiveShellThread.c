/*
 * XREFs of winrt::make_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_____lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b___ @ 0x180682488
 * Callers:
 *     ?SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@UI@Windows@winrt@@@7@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1806854F0 (-SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::make_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_____lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b___(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // r9
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *result; // rax

  v4 = operator new(0x38uLL);
  v4[2] = off_1807F0568;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v4[1] = 1LL;
  *v4 = &off_1807F05A0;
  v5 = *a2;
  v6 = a2[2];
  v7 = a2[1];
  a2[2] = 0LL;
  a2[1] = 0LL;
  *a2 = 0LL;
  v4[3] = v5;
  v4[4] = v7;
  v4[5] = v6;
  v8 = a2[3];
  a2[3] = 0LL;
  v4[6] = v8;
  *v4 = &off_1807C8F38;
  result = a1;
  *a1 = v4 + 2;
  return result;
}
