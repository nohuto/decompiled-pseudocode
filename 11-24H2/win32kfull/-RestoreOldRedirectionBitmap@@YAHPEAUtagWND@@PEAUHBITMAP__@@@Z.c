/*
 * XREFs of ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1402852E4
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x140035DCC (zzzUpdateLayeredWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x14008B5E8 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     HintSpriteShape @ 0x14002D818 (HintSpriteShape.c)
 *     ChangeRedirectionParentInDCEs @ 0x14002D8C0 (ChangeRedirectionParentInDCEs.c)
 *     GetRedirectionFlags @ 0x140036778 (GetRedirectionFlags.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x14003A1C4 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 */

__int64 __fastcall RestoreOldRedirectionBitmap(void **a1, Gre::Base *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax

  v5 = SetRedirectionBitmap(a1, a2, 0);
  if ( v5 )
  {
    if ( (GetRedirectionFlags((__int64)a1, v4) & 1) != 0 )
    {
      UserSessionState = W32GetUserSessionState(v7, v6);
      HintSpriteShape(
        *(HDEV *)(*(_QWORD *)(UserSessionState + 57008) + 48LL),
        (const struct tagWND *)a1,
        (HBITMAP)a2,
        1);
    }
    ChangeRedirectionParentInDCEs((__int64)a1);
  }
  return v5;
}
