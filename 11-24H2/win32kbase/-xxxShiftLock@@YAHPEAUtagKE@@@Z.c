/*
 * XREFs of ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x14014BCDC
 * Callers:
 *     xxxKELocaleProcs @ 0x14010E8AC (xxxKELocaleProcs.c)
 * Callees:
 *     xxxKeyEventEx @ 0x14014BF54 (xxxKeyEventEx.c)
 */

__int64 __fastcall xxxShiftLock(struct tagKE *a1)
{
  __int16 v2; // dx
  __int64 UserSessionState; // rax

  if ( *((__int16 *)a1 + 1) < 0 )
    return 1LL;
  v2 = (unsigned __int8)*((_WORD *)a1 + 1);
  if ( v2 == 20 )
  {
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(UserSessionState) = ~*(_BYTE *)(UserSessionState + 14341);
    return ((unsigned int)UserSessionState >> 1) & 1;
  }
  if ( (unsigned __int16)(v2 - 160) > 1u && v2 != 16 || (*(_BYTE *)(W32GetUserSessionState(160LL) + 14341) & 2) == 0 )
    return 1LL;
  xxxKeyEventEx(*((unsigned __int16 *)a1 + 1), *(unsigned __int8 *)a1, *((_DWORD *)a1 + 1), 0, 0LL, 0LL, 0, 0, 0LL, 0LL);
  xxxKeyEventEx(20, 570, *((_DWORD *)a1 + 1), 0, 0LL, 0LL, 0, 0, 0LL, 0LL);
  xxxKeyEventEx(32788, 570, *((_DWORD *)a1 + 1), 0, 0LL, 0LL, 0, 0, 0LL, 0LL);
  return 0LL;
}
