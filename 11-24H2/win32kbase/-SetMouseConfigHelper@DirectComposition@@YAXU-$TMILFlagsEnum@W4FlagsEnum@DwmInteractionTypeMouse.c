/*
 * XREFs of ?SetMouseConfigHelper@DirectComposition@@YAXU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@00PEAU2@@Z @ 0x140233808
 * Callers:
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1400FFF64 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::SetMouseConfigHelper(int a1, int a2, int a3, int *a4)
{
  int v4; // eax

  if ( (a1 & a2) != 0 )
  {
    v4 = *a4;
    if ( (a1 & a3) != 0 )
      *a4 = a1 | v4;
    else
      *a4 = v4 & ~a1;
  }
}
