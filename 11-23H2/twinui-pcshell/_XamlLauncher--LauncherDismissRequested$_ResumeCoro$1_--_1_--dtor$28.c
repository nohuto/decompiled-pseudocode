/*
 * XREFs of _XamlLauncher::LauncherDismissRequested$_ResumeCoro$1_::_1_::dtor$28 @ 0x1801FFEA6
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall XamlLauncher::LauncherDismissRequested__ResumeCoro_1_::_1_::dtor_28(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 264) = *(_QWORD *)(a2 + 64) + 176LL;
  winrt::hstring::~hstring(*(void ***)(a2 + 264));
}
