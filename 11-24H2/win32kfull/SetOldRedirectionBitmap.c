/*
 * XREFs of SetOldRedirectionBitmap @ 0x14002D6C0
 * Callers:
 *     DeleteOldRedirectionBitmap @ 0x14002D554 (DeleteOldRedirectionBitmap.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 */

__int64 __fastcall SetOldRedirectionBitmap(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 UserSessionState; // rax
  __int64 Prop; // rax

  v4 = 0;
  UserSessionState = W32GetUserSessionState();
  Prop = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 41422), 1LL);
  if ( Prop )
  {
    *(_QWORD *)(Prop + 8) = a2;
    return 1;
  }
  return v4;
}
