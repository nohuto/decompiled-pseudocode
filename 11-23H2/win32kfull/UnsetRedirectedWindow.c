/*
 * XREFs of UnsetRedirectedWindow @ 0x1C0026E50
 * Callers:
 *     UnsetLayeredWindow @ 0x1C00264A8 (UnsetLayeredWindow.c)
 *     xxxSetWindowStyle @ 0x1C00EF138 (xxxSetWindowStyle.c)
 *     CleanupWindowRedirection @ 0x1C00F4CF8 (CleanupWindowRedirection.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01BC6F0 (UserRecreateRedirectionBitmap.c)
 *     xxxPrintWindow @ 0x1C01BC7E4 (xxxPrintWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BCF20 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     DeleteOrSetRedirectionBitmap @ 0x1C002433C (DeleteOrSetRedirectionBitmap.c)
 *     HintSpriteShape @ 0x1C00B2ED8 (HintSpriteShape.c)
 *     UnredirectDCEs @ 0x1C00B300C (UnredirectDCEs.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00B51AC (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00B5428 (DeleteOldRedirectionBitmap.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     GetRedirectionBitmap @ 0x1C011E440 (GetRedirectionBitmap.c)
 */

__int64 __fastcall UnsetRedirectedWindow(struct tagWND *a1, int a2)
{
  unsigned int v3; // esi
  __int64 Prop; // rbp
  HSURF RedirectionBitmap; // rbx

  v3 = 1;
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  *(_DWORD *)(Prop + 32) &= ~a2;
  if ( (a2 & 1) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x20) == 0 )
    v3 = HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), a1, 0LL, 0LL);
  if ( !*(_DWORD *)(Prop + 32) )
  {
    SetOrClrWF(0LL, a1, 2848LL, 1LL);
    DeleteOldRedirectionBitmap(a1);
    RedirectionBitmap = (HSURF)GetRedirectionBitmap(a1);
    UnredirectDCEs(a1);
    if ( RedirectionBitmap )
    {
      v3 = SetRedirectionBitmap(a1, 0LL, 1);
      DeleteOrSetRedirectionBitmap((__int64)a1, RedirectionBitmap, 0);
    }
  }
  return v3;
}
