/*
 * XREFs of ??_ECRedirectVisualProxy@@UEAAPEAXI@Z @ 0x1800B6170
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualProxy@@UEAA@XZ @ 0x1800692AC (--1CVisualProxy@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CRedirectVisualProxy *__fastcall CRedirectVisualProxy::`vector deleting destructor'(
        CRedirectVisualProxy *this,
        char a2)
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
