/*
 * XREFs of ?Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ @ 0x18006DE40
 * Callers:
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x18006D77C (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x18002E5D0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::Initialize(struct CContainerVisualProxy **this)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CContainerVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x2D2u, 0LL);
  else
    *((_BYTE *)this + 296) = 0;
  return v3;
}
