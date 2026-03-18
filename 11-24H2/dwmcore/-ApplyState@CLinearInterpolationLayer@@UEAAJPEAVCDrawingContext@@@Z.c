/*
 * XREFs of ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180218550
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18006F8D0 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800F5410 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 */

__int64 __fastcall CLinearInterpolationLayer::ApplyState(CLinearInterpolationLayer *this, struct CDrawingContext *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // eax
  _DWORD v7[14]; // [rsp+30h] [rbp-38h] BYREF

  v3 = CExternalLayer::ApplyState(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v7[0] = 3;
    v7[1] = -16777215;
    v7[4] = 1;
    v6 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v7, 0);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x47u, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x3Cu, 0LL);
  }
  return v4;
}
