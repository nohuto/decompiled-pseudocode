/*
 * XREFs of ??_GCVisualProxy@@UEAAPEAXI@Z @ 0x180069260
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualProxy@@UEAA@XZ @ 0x1800692AC (--1CVisualProxy@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CVisualProxy *__fastcall CVisualProxy::`scalar deleting destructor'(CVisualProxy *this, char a2)
{
  CVisualProxy::~CVisualProxy(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x20);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
