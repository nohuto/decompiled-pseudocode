/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18014F4C0
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006B870 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18014EFB0 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x18009EF40 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 */

CSurfaceDrawListBrush *__fastcall wil::details::out_param_t<std::unique_ptr<CDrawListBrush>>::~out_param_t<std::unique_ptr<CDrawListBrush>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  CSurfaceDrawListBrush *result; // rax
  CMultiPrimitiveDrawListBrush **v4; // rdx
  CMultiPrimitiveDrawListBrush *v5; // rcx
  CSurfaceDrawListBrush *(__fastcall *v6)(CSurfaceDrawListBrush *, char, __int64); // rax

  result = (CSurfaceDrawListBrush *)a1;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v4 = *(CMultiPrimitiveDrawListBrush ***)a1;
    result = *(CSurfaceDrawListBrush **)(a1 + 8);
    v5 = **(CMultiPrimitiveDrawListBrush ***)a1;
    *v4 = result;
    if ( v5 )
    {
      v6 = **(CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char, __int64))v5;
      if ( v6 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
      {
        return CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v5, 1, a3);
      }
      else if ( v6 == CSurfaceDrawListBrush::`vector deleting destructor' )
      {
        return CSurfaceDrawListBrush::`vector deleting destructor'(v5, 1, a3);
      }
      else if ( (char *)v6 == (char *)CDrawListPrimitive0::`scalar deleting destructor' )
      {
        return (CSurfaceDrawListBrush *)CDrawListPrimitive0::`scalar deleting destructor'(v5, 1u);
      }
      else
      {
        return (CSurfaceDrawListBrush *)((__int64 (__fastcall *)(CMultiPrimitiveDrawListBrush *, __int64))v6)(v5, 1LL);
      }
    }
  }
  return result;
}
