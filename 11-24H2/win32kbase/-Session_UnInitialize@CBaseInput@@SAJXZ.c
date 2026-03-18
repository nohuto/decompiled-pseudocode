/*
 * XREFs of ?Session_UnInitialize@CBaseInput@@SAJXZ @ 0x14020D978
 * Callers:
 *     InputUnInitialize @ 0x1400D054C (InputUnInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseInput::Session_UnInitialize(__int64 a1)
{
  *(_BYTE *)(W32GetUserSessionState(a1) + 3088) = 0;
  return 0LL;
}
