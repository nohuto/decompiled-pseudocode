/*
 * XREFs of UpdateRedirectedDCE @ 0x14002F480
 * Callers:
 *     ChangeRedirectionParentInDCEs @ 0x14002D8C0 (ChangeRedirectionParentInDCEs.c)
 *     UnredirectDCEs @ 0x14002DEE0 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x14002F358 (RedirectDCEs.c)
 * Callees:
 *     ?SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x14002DAFC (-SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x14002DE6C (-SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     GetStyleWindow @ 0x14002F5E0 (GetStyleWindow.c)
 *     RevalidateDCE @ 0x14002F640 (RevalidateDCE.c)
 *     GetRedirectionBitmap @ 0x140063BA0 (GetRedirectionBitmap.c)
 *     GreSelectRedirectionBitmap @ 0x1400CD670 (GreSelectRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x1400CDA90 (GreHintDCWnd.c)
 */

void __fastcall UpdateRedirectedDCE(tagDCE *this, int a2)
{
  HSURF RedirectionBitmap; // rsi
  __int64 StyleWindow; // rax
  struct tagWND *v6; // rdi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  struct tagWND *v14; // rdx

  RedirectionBitmap = 0LL;
  StyleWindow = GetStyleWindow(*((_QWORD *)this + 10), 2848LL);
  v6 = (struct tagWND *)StyleWindow;
  if ( StyleWindow )
    RedirectionBitmap = (HSURF)GetRedirectionBitmap(StyleWindow);
  v7 = GreSelectRedirectionBitmap(*((HDC *)this + 2), RedirectionBitmap);
  v8 = 1;
  if ( !v7 )
    GreSelectVisRgn(*((_QWORD *)this + 2), 0LL, 1LL);
  v9 = *((_DWORD *)this + 12);
  v10 = *((_QWORD *)this + 2);
  if ( v6 )
  {
    v11 = v9 | 0x4000;
    v12 = 5LL;
  }
  else
  {
    v11 = v9 & 0xFFFFBFFF;
    v12 = 6LL;
  }
  *((_DWORD *)this + 12) = v11;
  GreGetBounds(v10, 0LL, v12);
  if ( *((struct tagWND **)this + 12) == v6 )
  {
    v8 = a2;
    if ( !v6 )
      goto LABEL_14;
    goto LABEL_12;
  }
  tagDCE::SetPwndRedirect(this, v6);
  GreHintDCWnd(*((HDC *)this + 2), 0);
  if ( v6 )
  {
    v13 = *((_QWORD *)v6 + 5);
    if ( (*(_BYTE *)(v13 + 26) & 8) != 0 )
      GreHintDCWnd(*((HDC *)this + 2), (*(_WORD *)(v13 + 42) & 0x2FFF) == 669);
LABEL_12:
    v14 = (struct tagWND *)*((_QWORD *)this + 10);
    if ( v14 == v6 )
      tagDCE::SetPwndClip(this, v14);
LABEL_14:
    if ( !v8 )
      return;
  }
  RevalidateDCE(this);
}
