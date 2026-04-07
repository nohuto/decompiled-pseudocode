/*
 * XREFs of ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x18002B800
 * Callers:
 *     ?ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z @ 0x18002BF44 (-ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z.c)
 * Callees:
 *     ?HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18002B898 (-HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18002B8B0 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 */

struct CTopLevelWindow::WindowFrame *__fastcall CTopLevelWindow::s_ChooseWindowFrameFromStyle(
        unsigned int a1,
        char a2,
        char a3)
{
  _BOOL8 HasThinRenderedBorder; // rbp
  __int64 v7; // rcx

  HasThinRenderedBorder = CTopLevelWindow::HasThinRenderedBorder(a1);
  if ( !CTopLevelWindow::HasRenderedBorder(a1) && !a2 )
    return 0LL;
  if ( (a1 & 0x20) != 0 )
  {
    if ( a3 || (a1 & 0x40) != 0 )
      v7 = 2LL;
    else
      v7 = 3LL;
  }
  else if ( a3 || (a1 & 0x40) != 0 )
  {
    v7 = 4 * HasThinRenderedBorder;
  }
  else
  {
    v7 = 4 * HasThinRenderedBorder + 1;
  }
  return *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8 * v7);
}
