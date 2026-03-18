/*
 * XREFs of ?InitAtoms@GroupedProcessForegroundBoost@@YA_NXZ @ 0x14019D488
 * Callers:
 *     Win32UserInitialize @ 0x1402E5DE4 (Win32UserInitialize.c)
 * Callees:
 *     UserAddAtomEx @ 0x1400D8E10 (UserAddAtomEx.c)
 */

bool __fastcall GroupedProcessForegroundBoost::InitAtoms(GroupedProcessForegroundBoost *this)
{
  __int16 v1; // bx
  __int64 v2; // rcx
  __int64 v3; // rcx

  v1 = UserAddAtomEx((__int64)L"AdditionalFGBoostProp", 1, 2u);
  *(_WORD *)(W32GetUserSessionState(v2) + 42316) = v1;
  return *(_WORD *)(W32GetUserSessionState(v3) + 42316) != 0;
}
