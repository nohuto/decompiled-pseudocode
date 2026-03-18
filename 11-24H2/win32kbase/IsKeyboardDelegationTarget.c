/*
 * XREFs of IsKeyboardDelegationTarget @ 0x140212F60
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x140096CA0 (xxxInternalActivateKeyboardLayout.c)
 *     UpdateDelegationTargetForMouseInput @ 0x1402137A0 (UpdateDelegationTargetForMouseInput.c)
 * Callees:
 *     ?GetTID@tagTHREADINFO@@QEBAKXZ @ 0x1400F2110 (-GetTID@tagTHREADINFO@@QEBAKXZ.c)
 */

char __fastcall IsKeyboardDelegationTarget(tagTHREADINFO *this)
{
  char v2; // bl
  __int64 v3; // rsi

  v2 = 1;
  v3 = *(_QWORD *)(W32GetUserSessionState(this) + 19656);
  if ( (*(_DWORD *)(v3 + 8) & 1) == 0
    || !*((_QWORD *)this + 59)
    || (unsigned int)tagTHREADINFO::GetTID((PETHREAD *)this) != *(_DWORD *)(v3 + 4) )
  {
    return 0;
  }
  return v2;
}
