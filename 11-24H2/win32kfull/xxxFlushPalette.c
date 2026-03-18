/*
 * XREFs of xxxFlushPalette @ 0x1402BCC90
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024F6E8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     GreRealizeDefaultPalette @ 0x1401E60CC (GreRealizeDefaultPalette.c)
 *     xxxBroadcastPaletteChanged @ 0x1402BCC24 (xxxBroadcastPaletteChanged.c)
 */

__int64 __fastcall xxxFlushPalette(unsigned __int64 *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  GreRealizeDefaultPalette(*(Gre::Base **)(*(_QWORD *)(UserSessionState + 57008) + 64LL));
  return xxxBroadcastPaletteChanged(a1);
}
