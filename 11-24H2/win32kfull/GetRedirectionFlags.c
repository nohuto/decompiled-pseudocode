/*
 * XREFs of GetRedirectionFlags @ 0x140036778
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x140035DCC (zzzUpdateLayeredWindow.c)
 *     NtUserGetLayeredWindowAttributes @ 0x140036B20 (NtUserGetLayeredWindowAttributes.c)
 *     RecreateRedirectionBitmap @ 0x140039394 (RecreateRedirectionBitmap.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1400949E4 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     _SetLayeredWindowAttributes @ 0x14015DCB4 (_SetLayeredWindowAttributes.c)
 *     zzzUpdateShadowAlpha @ 0x14015DFA4 (zzzUpdateShadowAlpha.c)
 *     xxxPrintWindow @ 0x14023A30C (xxxPrintWindow.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1402852E4 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 */

__int64 __fastcall GetRedirectionFlags(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 UserSessionState; // rax
  __int64 Prop; // rax

  v3 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 41422), 1LL);
  if ( Prop )
    return *(unsigned int *)(Prop + 32);
  return v3;
}
