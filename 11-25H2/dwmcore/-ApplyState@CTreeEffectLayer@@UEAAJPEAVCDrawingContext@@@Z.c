/*
 * XREFs of ?ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180215150
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180080580 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x18010C960 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 */

__int64 __fastcall CTreeEffectLayer::ApplyState(CTreeEffectLayer *this, struct CDrawingContext *a2)
{
  int v3; // ebx
  int v4; // ecx
  struct CDrawingContext *v6; // rdx
  int v7; // eax
  unsigned int v8; // ebp

  *((_BYTE *)this + 120) = *((_BYTE *)a2 + 8067);
  v3 = 0;
  v4 = *((_DWORD *)a2 + 60);
  *((_BYTE *)a2 + 8067) = 0;
  *((_DWORD *)this + 31) = D2DInterpolationModeFromMilInterpolationMode(v4);
  *((_DWORD *)v6 + 60) = 1;
  v7 = CExternalLayer::ApplyState(this, v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x229u, 0LL);
    *((_BYTE *)a2 + 8067) = *((_BYTE *)this + 120);
    switch ( *((_DWORD *)this + 31) )
    {
      case 1:
        v3 = 1;
        break;
      case 2:
        v3 = 2;
        break;
      case 3:
        v3 = 6;
        break;
      case 4:
        v3 = 5;
        break;
      case 5:
        v3 = 7;
        break;
    }
    *((_DWORD *)a2 + 60) = v3;
  }
  return v8;
}
