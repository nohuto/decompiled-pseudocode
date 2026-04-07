/*
 * XREFs of ?SendLinkVisualCommand@VisualCollection@@AEAAJPEAVCVisualProxy@@0_N@Z @ 0x180026354
 * Callers:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180025CA0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 * Callees:
 *     ?InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z @ 0x18002639C (-InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall VisualCollection::SendLinkVisualCommand(
        VisualCollection *this,
        struct CVisualProxy *a2,
        struct CVisualProxy *a3,
        bool a4)
{
  int inserted; // eax
  unsigned int v5; // ebx

  inserted = CContainerVisualProxy::InsertChild(*(CContainerVisualProxy **)(*(_QWORD *)this + 16LL), a2, a3, a4);
  v5 = inserted;
  if ( inserted < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x33u, 0LL);
  return v5;
}
