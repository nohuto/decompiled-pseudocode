/*
 * XREFs of ??_GCButton@@MEAAPEAXI@Z @ 0x180021BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CButton@@MEAA@XZ @ 0x180021BEC (--1CButton@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CButton *__fastcall CButton::`scalar deleting destructor'(CButton *this, char a2)
{
  CButton::~CButton(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x170);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
