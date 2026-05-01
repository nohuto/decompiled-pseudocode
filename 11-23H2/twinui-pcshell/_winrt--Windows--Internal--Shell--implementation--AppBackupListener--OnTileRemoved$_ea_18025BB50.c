/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved$_ResumeCoro$1_::_1_::dtor$6 @ 0x18025BB50
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved__ResumeCoro_1_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 72) = *(_QWORD *)(a2 + 160) + 88LL;
  *(_QWORD *)(a2 + 80) = **(_QWORD **)(a2 + 72);
  winrt::hstring::~hstring(*(void ***)(a2 + 80));
}
