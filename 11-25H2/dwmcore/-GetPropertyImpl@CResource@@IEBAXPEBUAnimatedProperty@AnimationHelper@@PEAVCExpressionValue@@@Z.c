/*
 * XREFs of ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x180034230
 * Callers:
 *     ?GetProperty@CEllipseGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180032580 (-GetProperty@CEllipseGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180034A90 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800387D0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?GetProperty@CCompositionSpotLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801F7020 (-GetProperty@CCompositionSpotLight@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CLineGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18020EC30 (-GetProperty@CLineGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CCompositionAmbientLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180225940 (-GetProperty@CCompositionAmbientLight@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CCompositionPointLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18022A5F0 (-GetProperty@CCompositionPointLight@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CVisualSurface@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18029AE50 (-GetProperty@CVisualSurface@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CCompositionDistantLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1802A0B00 (-GetProperty@CCompositionDistantLight@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CRadialGradientBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1802ACBC0 (-GetProperty@CRadialGradientBrush@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CSurfaceBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1802B0330 (-GetProperty@CSurfaceBrush@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CViewBox@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1802B1D10 (-GetProperty@CViewBox@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CResource::GetPropertyImpl(
        CResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        struct CExpressionValue *a3)
{
  int v3; // eax
  __int64 v4; // r10
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_QWORD *)a2 + 1);
  if ( v3 == 35 )
  {
    *((_DWORD *)a3 + 18) = 35;
    *(_QWORD *)a3 = *(_QWORD *)((char *)this + v4);
  }
  else
  {
    switch ( v3 )
    {
      case 17:
        *(_BYTE *)a3 = *((_BYTE *)this + v4);
        *((_DWORD *)a3 + 18) = 17;
        break;
      case 18:
        *(_DWORD *)a3 = *(_DWORD *)((char *)this + v4);
        *((_DWORD *)a3 + 18) = 18;
        break;
      case 42:
        *((_DWORD *)a3 + 18) = 42;
        *(_DWORD *)a3 = *(_DWORD *)((char *)this + v4);
        break;
      case 52:
        *((_DWORD *)a3 + 18) = 52;
        *(_QWORD *)a3 = *(_QWORD *)((char *)this + v4);
        *((_DWORD *)a3 + 2) = *(_DWORD *)((char *)this + v4 + 8);
        break;
      case 69:
        *((_DWORD *)a3 + 18) = 69;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + v4);
        break;
      case 70:
        *((_DWORD *)a3 + 18) = 70;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + v4);
        break;
      case 71:
        *((_DWORD *)a3 + 18) = 71;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + v4);
        break;
      case 104:
        *((_DWORD *)a3 + 18) = 104;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + v4);
        *((_QWORD *)a3 + 2) = *(_QWORD *)((char *)this + v4 + 16);
        break;
      case 265:
        *((_DWORD *)a3 + 18) = 265;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + v4);
        *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + v4 + 16);
        *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + v4 + 32);
        *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + v4 + 48);
        break;
      default:
        ModuleFailFastForHRESULT(-2147024809, retaddr);
    }
  }
}
