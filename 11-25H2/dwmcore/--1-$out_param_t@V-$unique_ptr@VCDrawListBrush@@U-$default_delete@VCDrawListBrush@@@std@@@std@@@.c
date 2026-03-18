/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180119860
 * Callers:
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180119350 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18011A3E0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 */

CSurfaceDrawListBrush *__fastcall wil::details::out_param_t<std::unique_ptr<CDrawListBrush>>::~out_param_t<std::unique_ptr<CDrawListBrush>>(
        __int64 a1)
{
  CSurfaceDrawListBrush *result; // rax
  CMultiPrimitiveDrawListBrush **v2; // rdx
  CMultiPrimitiveDrawListBrush *v3; // rcx
  CDrawListPrimitive0 *(__fastcall *v4)(CDrawListPrimitive0 *, char); // rax

  result = (CSurfaceDrawListBrush *)a1;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v2 = *(CMultiPrimitiveDrawListBrush ***)a1;
    result = *(CSurfaceDrawListBrush **)(a1 + 8);
    v3 = **(CMultiPrimitiveDrawListBrush ***)a1;
    *v2 = result;
    if ( v3 )
    {
      v4 = **(CDrawListPrimitive0 *(__fastcall ***)(CDrawListPrimitive0 *, char))v3;
      if ( v4 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
      {
        return CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v3, 1);
      }
      else if ( v4 == CSurfaceDrawListBrush::`vector deleting destructor' )
      {
        return CSurfaceDrawListBrush::`vector deleting destructor'(v3, 1);
      }
      else if ( v4 == CDrawListPrimitive0::`scalar deleting destructor' )
      {
        return CDrawListPrimitive0::`scalar deleting destructor'(v3, 1);
      }
      else
      {
        return v4(v3, 1);
      }
    }
  }
  return result;
}
