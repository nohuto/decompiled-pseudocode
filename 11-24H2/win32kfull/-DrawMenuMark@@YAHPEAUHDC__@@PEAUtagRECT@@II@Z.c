/*
 * XREFs of ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x140039270
 * Callers:
 *     DrawFrameControl @ 0x1400373A4 (DrawFrameControl.c)
 * Callees:
 *     FillRect @ 0x140038250 (FillRect.c)
 *     ?GetCaptionChar@@YAGI@Z @ 0x140038A84 (-GetCaptionChar@@YAGI@Z.c)
 *     GreSetTextColor @ 0x14007A278 (GreSetTextColor.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x14007A904 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 */

__int64 __fastcall DrawMenuMark(HDC a1, LPCRECT a2, int a3, char a4)
{
  LONG left; // ebx
  LONG top; // edi
  int v8; // r10d
  int v9; // r11d
  int v10; // r9d
  _BOOL8 v13; // rcx
  int v14; // r11d
  __int64 v15; // rdx
  int v16; // r12d
  int v17; // ebx
  __int64 UserSessionState; // rax
  unsigned __int16 CaptionChar; // ax
  int v21; // [rsp+20h] [rbp-38h]
  unsigned __int16 v22; // [rsp+70h] [rbp+18h] BYREF

  left = a2->left;
  top = a2->top;
  v8 = a2->right - a2->left;
  v9 = a2->bottom - top;
  v10 = v8;
  if ( v8 >= v9 )
    v10 = a2->bottom - top;
  v13 = v8 > 11;
  v14 = v9 - v10;
  v15 = (unsigned int)(v14 >> 31);
  v16 = left + (v8 - v10) / 2 - v13;
  LODWORD(v15) = v14 % 2;
  v17 = top + v14 / 2;
  UserSessionState = W32GetUserSessionState(v13, v15);
  FillRect(a1, a2, *(HBRUSH *)(UserSessionState + 43088));
  GreSetTextColor(a1);
  if ( a3 == 2 )
  {
    if ( (a4 & 1) != 0 )
    {
      CaptionChar = 97;
    }
    else if ( (a4 & 2) != 0 )
    {
      CaptionChar = 104;
    }
    else if ( (a4 & 4) != 0 )
    {
      CaptionChar = 119;
    }
    else
    {
      CaptionChar = 56;
    }
  }
  else
  {
    CaptionChar = GetCaptionChar(a4);
  }
  v22 = CaptionChar;
  FlipUserTextOutW(a1, v16, v17, &v22, v21);
  GreSetTextColor(a1);
  return 1LL;
}
