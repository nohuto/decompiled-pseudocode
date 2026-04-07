/*
 * XREFs of ??_GCCompositor@@MEAAPEAXI@Z @ 0x1800B611C
 * Callers:
 *     ??_ECCompositor@@O7EAAPEAXI@Z @ 0x1800B60C0 (--_ECCompositor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CCompositor@@MEAA@XZ @ 0x1800B6058 (--1CCompositor@@MEAA@XZ.c)
 */

CCompositor *__fastcall CCompositor::`scalar deleting destructor'(CCompositor *this, char a2)
{
  CCompositor::~CCompositor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x30);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
