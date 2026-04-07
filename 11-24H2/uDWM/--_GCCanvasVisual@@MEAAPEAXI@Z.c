/*
 * XREFs of ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x1800673B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCanvasVisual@@MEAA@XZ @ 0x1800673FC (--1CCanvasVisual@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CCanvasVisual *__fastcall CCanvasVisual::`scalar deleting destructor'(CCanvasVisual *this, char a2)
{
  CCanvasVisual::~CCanvasVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0xF0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
