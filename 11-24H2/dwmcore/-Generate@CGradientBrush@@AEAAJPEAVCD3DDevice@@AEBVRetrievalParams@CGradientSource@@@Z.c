/*
 * XREFs of ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x180062C98
 * Callers:
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180061E9C (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV-$TMilR.c)
 *     ?GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z @ 0x18013EED0 (-GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@.c)
 *     ?GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGradientBrush@@@Z @ 0x1801D3E90 (-GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGr.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?ToD2D1ExtendMode@ExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z @ 0x180062DEC (-ToD2D1ExtendMode@ExtendMode@@YA-AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z.c)
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x180062E18 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGradientBrush::Generate(
        CGradientBrush *this,
        struct CD3DDevice *a2,
        const struct CGradientSource::RetrievalParams *a3)
{
  __int64 v3; // rdi
  int v4; // ebp
  int v6; // esi
  __int64 v7; // rcx
  __int64 i; // rax
  int v9; // eax
  char v10; // r9
  int v11; // eax
  unsigned int v12; // edi
  _QWORD v14[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 24);
  v4 = (int)a2;
  v6 = (int)a3;
  gsl::details::extent_type<-1>::extent_type<-1>(v14, 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)this + 25) - v3) >> 2));
  v14[1] = v3;
  if ( v14[0] == -1LL || !v3 && v14[0] )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  *((_BYTE *)this + 234) = 1;
  for ( i = *((_QWORD *)this + 24); i != *((_QWORD *)this + 25); i += 20LL )
  {
    if ( *(float *)(i + 16) < 1.0 )
    {
      *((_BYTE *)this + 234) = 0;
      break;
    }
  }
  LOBYTE(v7) = *((_BYTE *)this + 232);
  v9 = ExtendMode::ToD2D1ExtendMode(v7);
  v11 = CGradientSource::Generate(
          (int)this + 104,
          v4,
          v6,
          (unsigned int)v14,
          v10,
          *((_BYTE *)this + 234),
          *((_BYTE *)this + 235),
          v9);
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x175u, 0LL);
  else
    *((_BYTE *)this + 233) = 1;
  return v12;
}
