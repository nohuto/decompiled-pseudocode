/*
 * XREFs of UserGetMiniWinInfo @ 0x140219148
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x140169AB8 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1400CB71C (-InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 */

__int64 __fastcall UserGetMiniWinInfo(__int64 a1, __int64 a2, _DWORD *a3)
{
  struct tagMINIWINDOWINFO *v3; // rbp
  unsigned int v5; // ebx
  const struct tagWND *v6; // rax
  const struct tagWND *v7; // rdi

  v3 = (struct tagMINIWINDOWINFO *)a2;
  LOBYTE(a2) = 1;
  v5 = 0;
  v6 = (const struct tagWND *)HMValidateHandleNoSecure(a1, a2);
  v7 = v6;
  if ( v6 )
  {
    InitializeMiniWinInfo(v6, v3);
    v5 = 1;
    *a3 = *((_DWORD *)v7 + 64);
  }
  return v5;
}
