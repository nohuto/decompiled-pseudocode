/*
 * XREFs of ?OnAlphaMarginsChanging@CWindowNode@@AEAAJAEBU_MARGINS@@@Z @ 0x180078B94
 * Callers:
 *     ?SetAlphaMargins@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJU_MARGINS@@@Z @ 0x180078B28 (-SetAlphaMargins@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJU_MARGINS@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

__int64 __fastcall CWindowNode::OnAlphaMarginsChanging(CWindowNode *this, const struct _MARGINS *a2)
{
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2->cxLeftWidth >= 0 && a2->cxRightWidth >= 0 && a2->cyTopHeight >= 0 && a2->cyBottomHeight >= 0 )
  {
    CVisual::PropagateFlags(this, 4LL);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x720,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
      (const char *)0x80070057LL,
      v3);
    return 2147942487LL;
  }
}
