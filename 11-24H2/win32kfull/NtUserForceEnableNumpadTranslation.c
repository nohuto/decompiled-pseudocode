/*
 * XREFs of NtUserForceEnableNumpadTranslation @ 0x14021D910
 * Callers:
 *     <none>
 * Callees:
 *     _ForceEnableNumpadTranslation @ 0x14021D950 (_ForceEnableNumpadTranslation.c)
 */

__int64 __fastcall NtUserForceEnableNumpadTranslation(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = ForceEnableNumpadTranslation(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
