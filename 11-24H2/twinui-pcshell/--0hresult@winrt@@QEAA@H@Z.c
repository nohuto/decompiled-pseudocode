/*
 * XREFs of ??0hresult@winrt@@QEAA@H@Z @ 0x1801EA3A8
 * Callers:
 *     ?throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z @ 0x1802DFC4C (-throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z.c)
 *     ??$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z @ 0x180361AC4 (--$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z.c)
 *     ?await_resume@awaitable@?1???$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA?A_PAEBUDispatcherQueue@System@Windows@winrt@@W4DispatcherQueuePriority@456@@Z@QEBAXXZ @ 0x1805B4A2C (-await_resume@awaitable@-1---$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA-.c)
 * Callees:
 *     <none>
 */

winrt::hresult *__fastcall winrt::hresult::hresult(winrt::hresult *this, int a2)
{
  *(_DWORD *)this = a2;
  return this;
}
