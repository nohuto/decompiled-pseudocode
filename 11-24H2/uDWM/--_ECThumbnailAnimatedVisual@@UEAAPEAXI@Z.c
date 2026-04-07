/*
 * XREFs of ??_ECThumbnailAnimatedVisual@@UEAAPEAXI@Z @ 0x1800DA5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x180027DF4 (--1CRenderDataVisual@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void **__fastcall CThumbnailAnimatedVisual::`vector deleting destructor'(void **this, char a2)
{
  CRenderDataVisual::~CRenderDataVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(
        (CIconicAnimatedVisual *)this,
        (const struct CSecondaryWindowRepresentation *)0x140);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
