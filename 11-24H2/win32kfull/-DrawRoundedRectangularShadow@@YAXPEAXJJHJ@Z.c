/*
 * XREFs of ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x1402C87B8
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x14009583C (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     ?DrawLogicallyRightSide@@YAXPEAXJJHJ@Z @ 0x1401D55E8 (-DrawLogicallyRightSide@@YAXPEAXJJHJ@Z.c)
 *     ?DrawBottomLogicallyLeftCorner@@YAXPEAXJHJ@Z @ 0x140219D54 (-DrawBottomLogicallyLeftCorner@@YAXPEAXJHJ@Z.c)
 *     ?DrawBottomLogicallyRightCorner@@YAXPEAXJHJ@Z @ 0x14021F0E4 (-DrawBottomLogicallyRightCorner@@YAXPEAXJHJ@Z.c)
 *     ?DrawTopLogicallyRightCorner@@YAXPEAXJJHJ@Z @ 0x140220424 (-DrawTopLogicallyRightCorner@@YAXPEAXJJHJ@Z.c)
 *     ?DrawBottomSide@@YAXPEAXJHJ@Z @ 0x1402C8708 (-DrawBottomSide@@YAXPEAXJHJ@Z.c)
 */

void __fastcall DrawRoundedRectangularShadow(char *a1, int a2, int a3, int a4, int a5)
{
  DrawTopLogicallyRightCorner(a1, a2, a3, a4, a5);
  DrawLogicallyRightSide(a1, a2, a3, a4, a5);
  DrawBottomLogicallyRightCorner(a1, a2, a4, a5);
  DrawBottomSide(a1, a2, a4, a5);
  DrawBottomLogicallyLeftCorner(a1, a2, a4, a5);
}
