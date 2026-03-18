/*
 * XREFs of UserRecreateRedirectionBitmap @ 0x140285640
 * Callers:
 *     <none>
 * Callees:
 *     DeleteOldRedirectionBitmap @ 0x14002D554 (DeleteOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x14002D5F8 (DeleteOrSetRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x14002D720 (UnsetRedirectedWindow.c)
 *     HintSpriteShape @ 0x14002D818 (HintSpriteShape.c)
 *     RecreateRedirectionBitmap @ 0x140039394 (RecreateRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x14003A1C4 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     ??1CDisableILCheckAuto@@QEAA@XZ @ 0x140061790 (--1CDisableILCheckAuto@@QEAA@XZ.c)
 *     ??0CDisableILCheckAuto@@QEAA@XZ @ 0x1400617A8 (--0CDisableILCheckAuto@@QEAA@XZ.c)
 *     GetRedirectionBitmap @ 0x140063BA0 (GetRedirectionBitmap.c)
 *     ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x140285424 (-UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z.c)
 */

void __fastcall UserRecreateRedirectionBitmap(__int64 a1, __int64 a2)
{
  const struct tagWND *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  HSURF RedirectionBitmap; // rdi
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF

  CDisableILCheckAuto::CDisableILCheckAuto((CDisableILCheckAuto *)v10, a2);
  v3 = (const struct tagWND *)ValidateHwnd(a1);
  CDisableILCheckAuto::~CDisableILCheckAuto((CDisableILCheckAuto *)v10);
  if ( v3 )
  {
    v5 = *((_QWORD *)v3 + 5);
    if ( (*(_BYTE *)(v5 + 27) & 0x20) != 0 )
    {
      UserSessionState = W32GetUserSessionState(v5, v4);
      HintSpriteShape(*(HDEV *)(*(_QWORD *)(UserSessionState + 57008) + 48LL), v3, 0LL, 0);
      DeleteOldRedirectionBitmap((__int64)v3);
      RedirectionBitmap = (HSURF)GetRedirectionBitmap((__int64)v3, v7);
      if ( RedirectionBitmap )
      {
        UnselectRedirectionBitmapsInDCEs(v3, v8);
        SetRedirectionBitmap((void **)v3, 0LL, 0);
        DeleteOrSetRedirectionBitmap((__int64)v3, RedirectionBitmap, 1);
        if ( (int)RecreateRedirectionBitmap(v3, 0, 0, 0, 0, 0LL) < 0 )
          UnsetRedirectedWindow(v3, 1);
      }
    }
  }
}
