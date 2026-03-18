/*
 * XREFs of UserRecreateRedirectionBitmap @ 0x1C01BC6F0
 * Callers:
 *     <none>
 * Callees:
 *     RecreateRedirectionBitmap @ 0x1C00229DC (RecreateRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C002433C (DeleteOrSetRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x1C0026E50 (UnsetRedirectedWindow.c)
 *     HintSpriteShape @ 0x1C00B2ED8 (HintSpriteShape.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00B51AC (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00B5428 (DeleteOldRedirectionBitmap.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetRedirectionBitmap @ 0x1C011E440 (GetRedirectionBitmap.c)
 *     ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x1C01BC1E4 (-UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z.c)
 */

struct tagWND *__fastcall UserRecreateRedirectionBitmap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagTHREADINFO *v5; // rsi
  int v6; // ebx
  struct tagWND *result; // rax
  struct tagWND *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  HSURF v12; // rbx

  v5 = PtiCurrentShared(a1, a2, a3, a4);
  v6 = *((_DWORD *)v5 + 387);
  *((_DWORD *)v5 + 387) = 0;
  result = (struct tagWND *)ValidateHwnd(a1);
  *((_DWORD *)v5 + 387) = v6;
  v8 = result;
  if ( result )
  {
    if ( (*(_BYTE *)(*((_QWORD *)result + 5) + 27LL) & 0x20) != 0 )
    {
      HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), result, 0LL, 0);
      DeleteOldRedirectionBitmap((__int64)v8);
      result = (struct tagWND *)GetRedirectionBitmap((__int64)v8, v9, v10, v11);
      v12 = (HSURF)result;
      if ( result )
      {
        UnselectRedirectionBitmapsInDCEs(v8);
        SetRedirectionBitmap(v8, 0LL, 0);
        DeleteOrSetRedirectionBitmap((__int64)v8, v12, 1);
        result = (struct tagWND *)RecreateRedirectionBitmap(v8, 0, 0, 0, 0, 0LL);
        if ( (int)result < 0 )
          return (struct tagWND *)UnsetRedirectedWindow(v8, 1);
      }
    }
  }
  return result;
}
