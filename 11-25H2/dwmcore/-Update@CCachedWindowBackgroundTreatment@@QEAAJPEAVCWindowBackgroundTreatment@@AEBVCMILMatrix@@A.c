/*
 * XREFs of ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801C2568
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180023C04 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCWindowBackgroundBitmapProducer@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundBitmapProducer@@@Z @ 0x1801C2678 (--4-$ComPtr@VCWindowBackgroundBitmapProducer@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundB.c)
 *     ??4?$ComPtr@VCWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundTreatment@@@Z @ 0x1801C26C4 (--4-$ComPtr@VCWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundTreatm.c)
 *     ?IsInfinite@?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1801C270C (-IsInfinite@-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeede.c)
 */

__int64 __fastcall CCachedWindowBackgroundTreatment::Update(
        CCachedWindowBackgroundTreatment *this,
        struct CWindowBackgroundTreatment *a2,
        const struct CMILMatrix *a3,
        const struct _D3DCOLORVALUE *a4)
{
  __int64 v4; // r14
  char *v5; // rdi
  unsigned int v6; // ebx
  float v10; // xmm0_4
  int v11; // ecx
  unsigned int v12; // eax
  __int128 v13; // xmm0

  v4 = *((_QWORD *)a2 + 10);
  v5 = (char *)a2 + 88;
  v6 = 0;
  if ( !v4 )
    goto LABEL_8;
  v10 = *((float *)a2 + 27);
  v11 = (v10 <= *((float *)a2 + 26)) + 1;
  if ( *((float *)a2 + 24) > *(float *)v5 )
    v11 = v10 <= *((float *)a2 + 26);
  v12 = v11 + 1;
  if ( *((float *)a2 + 25) > *((float *)a2 + 23) )
    v12 = v11;
  if ( v12 > 1
    || (unsigned __int8)TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::IsInfinite(v5) )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x151u, 0LL);
  }
  else
  {
LABEL_8:
    Microsoft::WRL::ComPtr<CWindowBackgroundTreatment>::operator=((char *)this + 16);
    Microsoft::WRL::ComPtr<CWindowBackgroundBitmapProducer>::operator=((char *)this + 24, v4);
    *((_OWORD *)this + 2) = *(_OWORD *)a3;
    *((_OWORD *)this + 3) = *((_OWORD *)a3 + 1);
    *((_OWORD *)this + 4) = *((_OWORD *)a3 + 2);
    *((_OWORD *)this + 5) = *((_OWORD *)a3 + 3);
    *((_DWORD *)this + 24) = *((_DWORD *)a3 + 16);
    *(_OWORD *)((char *)this + 100) = *(_OWORD *)v5;
    v13 = *(_OWORD *)&a4->r;
    *(_QWORD *)((char *)this + 116) = *((_QWORD *)v5 + 2);
    *(_OWORD *)((char *)this + 124) = v13;
  }
  return v6;
}
