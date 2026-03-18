/*
 * XREFs of NtUserSoundSentry @ 0x1401030F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSoundSentry @ 0x14010312C (xxxSoundSentry.c)
 */

__int64 NtUserSoundSentry()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)xxxSoundSentry();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
