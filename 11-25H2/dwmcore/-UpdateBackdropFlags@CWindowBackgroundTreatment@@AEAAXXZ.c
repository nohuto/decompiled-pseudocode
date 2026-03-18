/*
 * XREFs of ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x18011B030
 * Callers:
 *     ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z @ 0x180027C7C (--0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z.c)
 *     ?OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18022BB70 (-OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x18011B07C (-GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ.c)
 */

void __fastcall CWindowBackgroundTreatment::UpdateBackdropFlags(CBrush **this)
{
  struct CBrushRenderingGraph *BrushGraph; // rax
  CBrush *v3; // rdx

  BrushGraph = CBrush::GetBrushGraph(this[9]);
  v3 = 0LL;
  *((_BYTE *)this + 302) = 0;
  if ( BrushGraph )
  {
    if ( this != (CBrush **)-302LL )
      *((_BYTE *)this + 302) = *((_BYTE *)BrushGraph + 196);
    v3 = (CBrush *)*((_QWORD *)BrushGraph + 26);
  }
  this[38] = v3;
}
