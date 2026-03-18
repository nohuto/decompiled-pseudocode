/*
 * XREFs of ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x18000E4B0
 * Callers:
 *     ?GetProperty@CCompositionSpotLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18000D110 (-GetProperty@CCompositionSpotLight@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CEllipseGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18000D1B0 (-GetProperty@CEllipseGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18000ED10 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?GetProperty@CLineGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180202CF0 (-GetProperty@CLineGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CCompositionAmbientLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180219CB0 (-GetProperty@CCompositionAmbientLight@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CCompositionPointLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18021F160 (-GetProperty@CCompositionPointLight@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CVisualSurface@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18028E6F0 (-GetProperty@CVisualSurface@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CCompositionDistantLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1802951B0 (-GetProperty@CCompositionDistantLight@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CRadialGradientBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1802A30A0 (-GetProperty@CRadialGradientBrush@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CSurfaceBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1802A67F0 (-GetProperty@CSurfaceBrush@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CViewBox@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1802A8250 (-GetProperty@CViewBox@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
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
