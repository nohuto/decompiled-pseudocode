/*
 * XREFs of ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x18001A7F4
 * Callers:
 *     ?GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18000472C (-GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180034C24 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetCornerRadius@CTopLevelWindow@@QEBAHXZ @ 0x1800E58E8 (-GetCornerRadius@CTopLevelWindow@@QEBAHXZ.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x1800E5C74 (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     IsOpenThemeDataPresent @ 0x18005DB28 (IsOpenThemeDataPresent.c)
 */

struct CTopLevelWindow::WindowFrame *__fastcall CTopLevelWindow::s_ChooseWindowFrameFromStyle(
        char a1,
        char a2,
        char a3)
{
  __int64 v3; // rbx
  int v4; // edi
  char v8; // al
  __int64 v9; // r9

  v3 = 2LL;
  v4 = a1 & 2;
  v8 = IsOpenThemeDataPresent();
  v9 = 0LL;
  if ( v8 && (a1 & 6) != 0 || a2 )
  {
    if ( (a1 & 0x20) != 0 )
    {
      if ( !a3 && (a1 & 0x40) == 0 )
        v3 = 3LL;
    }
    else if ( a3 || (a1 & 0x40) != 0 )
    {
      v3 = v4 != 0 ? 4 : 0;
    }
    else
    {
      v3 = v4 != 0 ? 5LL : 1LL;
    }
    return *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8 * v3);
  }
  return (struct CTopLevelWindow::WindowFrame *)v9;
}
