/*
 * XREFs of ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x1801B2254
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180033CD4 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x18008E3EC (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ??0CCachedWindowBackgroundTreatment@@AEAA@PEAVCWindowBackgroundTreatment@@PEAVCWindowBackgroundBitmapProducer@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801B236C (--0CCachedWindowBackgroundTreatment@@AEAA@PEAVCWindowBackgroundTreatment@@PEAVCWindowBackgroundB.c)
 *     ?IsInfinite@?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1801B25FC (-IsInfinite@-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeede.c)
 */

__int64 __fastcall CCachedWindowBackgroundTreatment::Create(
        struct CWindowBackgroundTreatment *a1,
        const struct CMILMatrix *a2,
        const struct _D3DCOLORVALUE *a3,
        struct CCachedWindowBackgroundTreatment **a4)
{
  __int64 v4; // rbp
  float *v5; // rdi
  unsigned int v6; // ebx
  int v9; // r12d
  int v10; // esi
  float v11; // xmm0_4
  bool v12; // cf
  bool v13; // zf
  float v14; // xmm0_4
  int v15; // ecx
  unsigned int v16; // eax
  void (__fastcall ***v17)(_QWORD); // rax
  struct CCachedWindowBackgroundTreatment *v19; // [rsp+60h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 10);
  v5 = (float *)((char *)a1 + 88);
  v6 = 0;
  v19 = 0LL;
  v9 = (int)a2;
  v10 = (int)a1;
  if ( !v4 )
    goto LABEL_9;
  v11 = *((float *)a1 + 27);
  v12 = v11 < *((float *)a1 + 26);
  v13 = v11 == *((float *)a1 + 26);
  v14 = *((float *)a1 + 24);
  v15 = (v12 || v13) + 1;
  if ( v14 > *v5 )
    v15 = v12 || v13;
  v16 = v15 + 1;
  if ( v5[3] > v5[1] )
    v16 = v15;
  if ( v16 > 1
    || (unsigned __int8)TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::IsInfinite(v5) )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x132u, 0LL);
  }
  else
  {
LABEL_9:
    v17 = (void (__fastcall ***)(_QWORD))MIDL_user_allocate(0x90uLL);
    if ( v17 )
      v17 = (void (__fastcall ***)(_QWORD))CCachedWindowBackgroundTreatment::CCachedWindowBackgroundTreatment(
                                             (_DWORD)v17,
                                             v10,
                                             v4,
                                             v9,
                                             (__int64)v5,
                                             (__int64)a3);
    Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v19, v17);
    if ( v19 )
    {
      *a4 = v19;
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x13Au, 0LL);
    }
  }
  return v6;
}
