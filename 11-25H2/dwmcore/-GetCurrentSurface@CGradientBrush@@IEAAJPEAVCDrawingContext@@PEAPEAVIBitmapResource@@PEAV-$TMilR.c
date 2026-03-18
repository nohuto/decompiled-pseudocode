/*
 * XREFs of ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019CB60
 * Callers:
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18019C790 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1802AC7D0 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z @ 0x180013040 (-FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x18019DB48 (-Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGradientBrush::GetCurrentSurface(CGradientBrush *this, __int64 a2, __int64 *a3, __int64 a4)
{
  unsigned int v5; // edi
  struct CD3DDevice *v9; // rbx
  char v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  int v15; // eax
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v17[8]; // [rsp+38h] [rbp-40h] BYREF

  v5 = 0;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  v17[1] = 0LL;
  v9 = *(struct CD3DDevice **)(a2 + 40);
  v10 = *((_BYTE *)this + 233) == 0;
  v17[0] = &v16;
  if ( CGradientSource::FindExistingGradient(
         (CGradientBrush *)((char *)this + 104),
         v9,
         v10,
         (const struct CGradientSource::RetrievalParams *)v17)
    || (v15 = CGradientBrush::Generate(this, v9, (const struct CGradientSource::RetrievalParams *)v17),
        v5 = v15,
        v15 >= 0) )
  {
    v11 = v16;
    v12 = *(_DWORD *)(v16 + 40);
    *(_DWORD *)a4 = 0;
    *(_DWORD *)(a4 + 8) = 1157627904;
    *a3 = v11;
    v13 = 0LL;
    *(float *)(a4 + 4) = (float)v12;
    *(float *)(a4 + 12) = (float)(v12 + 1);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x1BCu, 0LL);
    v13 = v16;
  }
  if ( v13 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v5;
}
