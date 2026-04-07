/*
 * XREFs of ?CompNodeReconnectChild@VisualCollection@@AEAAJPEAVCVisual@@@Z @ 0x180021CA8
 * Callers:
 *     ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x180023BDC (-ConnectToParent@CVisual@@QEAAJ_N@Z.c)
 * Callees:
 *     ?InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z @ 0x18002639C (-InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall VisualCollection::CompNodeReconnectChild(VisualCollection *this, struct CVisualProxy **a2)
{
  int inserted; // eax
  unsigned int v3; // ebx

  inserted = CContainerVisualProxy::InsertChild(*(CContainerVisualProxy **)(*(_QWORD *)this + 16LL), a2[2], 0LL, 1);
  v3 = inserted;
  if ( inserted < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x177u, 0LL);
  return v3;
}
