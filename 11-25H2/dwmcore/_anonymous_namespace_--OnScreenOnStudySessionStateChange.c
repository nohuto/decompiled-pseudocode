/*
 * XREFs of _anonymous_namespace_::OnScreenOnStudySessionStateChange @ 0x18022B3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::OnScreenOnStudySessionStateChange(__int128 *a1)
{
  DWORD CurrentThreadId; // eax
  __int128 v3; // xmm0

  AcquireSRWLockExclusive(&SRWLock);
  CurrentThreadId = GetCurrentThreadId();
  byte_180406E72 = 1;
  dword_18040ACB0 = CurrentThreadId;
  v3 = *a1;
  dword_18040ACB0 = 0;
  xmmword_180406E98 = v3;
  ReleaseSRWLockExclusive(&SRWLock);
}
