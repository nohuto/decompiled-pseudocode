/*
 * XREFs of ??_GCPerMonitorDesktopThumbnail@@EEAAPEAXI@Z @ 0x1800BBBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CPerMonitorDesktopThumbnail@@EEAA@XZ @ 0x1800BBAA8 (--1CPerMonitorDesktopThumbnail@@EEAA@XZ.c)
 */

CDesktopThumbnail **__fastcall CPerMonitorDesktopThumbnail::`scalar deleting destructor'(
        CDesktopThumbnail **this,
        char a2)
{
  CPerMonitorDesktopThumbnail::~CPerMonitorDesktopThumbnail(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(
        (CIconicAnimatedVisual *)this,
        (const struct CSecondaryWindowRepresentation *)0x50);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
