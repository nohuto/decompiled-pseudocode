/*
 * XREFs of _lambda_4951771febc4dc983c3581d22c2a6e45_::_lambda_4951771febc4dc983c3581d22c2a6e45_ @ 0x1806B0290
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x180254250 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_180254250.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_4951771febc4dc983c3581d22c2a6e45_::_lambda_4951771febc4dc983c3581d22c2a6e45_(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v3; // rax

  v3 = *a2;
  *a2 = 0LL;
  *a1 = v3;
  a1[1] = *a3;
  return a1;
}
