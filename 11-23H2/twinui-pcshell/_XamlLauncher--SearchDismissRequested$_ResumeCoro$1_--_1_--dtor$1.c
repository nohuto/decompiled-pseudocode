/*
 * XREFs of _XamlLauncher::SearchDismissRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x180200C9A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VXamlLauncher@@@winrt@@QEAA@XZ @ 0x18006DF94 (--1-$com_ptr@VXamlLauncher@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall XamlLauncher::SearchDismissRequested__ResumeCoro_1_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 40) + 24LL;
  return winrt::com_ptr<XamlLauncher>::~com_ptr<XamlLauncher>(*(_QWORD **)(a2 + 56));
}
