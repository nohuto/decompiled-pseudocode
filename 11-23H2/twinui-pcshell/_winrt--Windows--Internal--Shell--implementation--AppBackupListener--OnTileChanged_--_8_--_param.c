/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged_::_8_::_parameters_::_parameters_ @ 0x1806F057C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged$_InitCoro$2 @ 0x18025B2D0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileChanged$_InitCoro$2.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged_::_8_::_parameters_::_parameters_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v4; // rax
  __int64 v5; // rax

  *a1 = a2;
  v4 = *a3;
  *a3 = 0LL;
  a1[1] = v4;
  v5 = *a4;
  *a4 = 0LL;
  a1[2] = v5;
  return a1;
}
