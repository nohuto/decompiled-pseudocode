/*
 * XREFs of ?Initialize@CThumbnailVisual@@MEAAJXZ @ 0x18000EB90
 * Callers:
 *     ?Create@CThumbnailVisual@@SAJPEAPEAV1@@Z @ 0x18000E878 (-Create@CThumbnailVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180035BC0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CThumbnailVisual::Initialize(CThumbnailVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CVisual::Initialize(this);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x33u, 0LL);
  return v2;
}
