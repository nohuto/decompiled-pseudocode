/*
 * XREFs of ?IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x180203490
 * Callers:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D4130 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180119DE8 (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x180217A3C (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 */

char __fastcall CComposition::IsOverdrawHeatMapEnabled(CComposition *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // cl
  _DWORD *TopByReference; // rax

  if ( !*((_DWORD *)this + 1576) )
    return 0;
  TopByReference = (_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(
                               (char *)this + 6296,
                               a2,
                               a3,
                               a4);
  v4 = 1;
  if ( *TopByReference != 1 )
    return 0;
  return v4;
}
