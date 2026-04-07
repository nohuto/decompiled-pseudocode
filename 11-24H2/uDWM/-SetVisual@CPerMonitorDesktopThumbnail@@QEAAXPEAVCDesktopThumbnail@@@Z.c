/*
 * XREFs of ?SetVisual@CPerMonitorDesktopThumbnail@@QEAAXPEAVCDesktopThumbnail@@@Z @ 0x1800BC4D4
 * Callers:
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800BC154 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?SetVisual@CDesktopThumbnailCVI@@QEAAXPEAVCDesktopThumbnailBase@@@Z @ 0x18009B238 (-SetVisual@CDesktopThumbnailCVI@@QEAAXPEAVCDesktopThumbnailBase@@@Z.c)
 */

void __fastcall CPerMonitorDesktopThumbnail::SetVisual(CPerMonitorDesktopThumbnail *this, struct CDesktopThumbnail *a2)
{
  CMILRefCountBase *v2; // rdx
  __int64 v3; // r8

  CDesktopThumbnailCVI::SetVisual(this, a2);
  *(_QWORD *)(v3 + 64) = v2;
  if ( v2 )
    CMILRefCountBase::AddRef(v2);
}
