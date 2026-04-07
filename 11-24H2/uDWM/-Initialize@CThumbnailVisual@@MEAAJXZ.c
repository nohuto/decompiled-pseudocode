/*
 * XREFs of ?Initialize@CThumbnailVisual@@MEAAJXZ @ 0x180061BC0
 * Callers:
 *     ?Create@CThumbnailVisual@@SAJPEAPEAV1@@Z @ 0x18006105C (-Create@CThumbnailVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x18002E5D0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CThumbnailVisual::Initialize(struct CContainerVisualProxy **this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CContainerVisual::Initialize(this);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x32u, 0LL);
  return v2;
}
