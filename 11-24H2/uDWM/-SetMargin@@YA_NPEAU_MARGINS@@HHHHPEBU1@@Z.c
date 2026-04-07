/*
 * XREFs of ?SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z @ 0x18002B780
 * Callers:
 *     ?UpdateMargins@CTopLevelWindow@@AEAA_NXZ @ 0x18002B290 (-UpdateMargins@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?SetMargin@@YA_NPEAU_MARGINS@@AEBU1@PEBU1@@Z @ 0x18002B750 (-SetMargin@@YA_NPEAU_MARGINS@@AEBU1@PEBU1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall SetMargin(
        struct _MARGINS *a1,
        int cxLeftWidth,
        int cxRightWidth,
        int cyTopHeight,
        int a5,
        const struct _MARGINS *a6)
{
  char v6; // r11
  int cyBottomHeight; // r10d

  v6 = 0;
  if ( a6 )
  {
    if ( cxLeftWidth >= a6->cxLeftWidth )
      cxLeftWidth = a6->cxLeftWidth;
    if ( cxRightWidth >= a6->cxRightWidth )
      cxRightWidth = a6->cxRightWidth;
    if ( cyTopHeight >= a6->cyTopHeight )
      cyTopHeight = a6->cyTopHeight;
    cyBottomHeight = a5;
    if ( a5 >= a6->cyBottomHeight )
      cyBottomHeight = a6->cyBottomHeight;
  }
  else
  {
    cyBottomHeight = a5;
  }
  if ( cxLeftWidth != a1->cxLeftWidth )
  {
    a1->cxLeftWidth = cxLeftWidth;
    v6 = 1;
  }
  if ( cxRightWidth != a1->cxRightWidth )
  {
    a1->cxRightWidth = cxRightWidth;
    v6 = 1;
  }
  if ( cyTopHeight != a1->cyTopHeight )
  {
    a1->cyTopHeight = cyTopHeight;
    v6 = 1;
  }
  if ( cyBottomHeight == a1->cyBottomHeight )
    return v6;
  a1->cyBottomHeight = cyBottomHeight;
  return 1;
}
