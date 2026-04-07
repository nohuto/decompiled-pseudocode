/*
 * XREFs of ?TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ @ 0x180030F2C
 * Callers:
 *     ?HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ @ 0x18002D090 (-HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18002DB50 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180030618 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?GetRoundedBorderColor@CTopLevelWindow@@AEAA?AU_D3DCOLORVALUE@@XZ @ 0x180030D88 (-GetRoundedBorderColor@CTopLevelWindow@@AEAA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x180031890 (-UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::TreatAsActiveWindow(CTopLevelWindow *this)
{
  return (*((_BYTE *)this + 584) & 0x40) != 0 || (*(_BYTE *)(*((_QWORD *)this + 89) + 739LL) & 0x10) != 0;
}
