/*
 * XREFs of _XamlLauncher::SearchShowRequested$_ResumeCoro$1_::_1_::dtor$5 @ 0x180201376
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall XamlLauncher::SearchShowRequested__ResumeCoro_1_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 144) = *(_QWORD *)(a2 + 40) + 176LL;
  winrt::hstring::~hstring(*(void ***)(a2 + 144));
}
