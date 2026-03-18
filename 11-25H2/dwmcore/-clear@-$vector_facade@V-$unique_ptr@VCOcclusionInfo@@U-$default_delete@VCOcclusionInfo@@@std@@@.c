/*
 * XREFs of ?clear@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800CD9A8
 * Callers:
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800BA7D0 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800CE84C (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x1800CE9F4 (--1CTreeData@@UEAA@XZ.c)
 *     ?Initialize@CDesktopTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1801077A0 (-Initialize@CDesktopTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180107A70 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180108990 (-Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECWindowOcclusionInfo@@UEAAPEAXI@Z @ 0x1800CDA70 (--_ECWindowOcclusionInfo@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear(
        __int64 a1)
{
  CWindowOcclusionInfo **v1; // rbx
  __int64 result; // rax
  __int64 v4; // rsi
  CWindowOcclusionInfo **v5; // rbp
  CWindowOcclusionInfo *v6; // rcx
  CMultiPrimitiveDrawListBrush *(__fastcall *v7)(CMultiPrimitiveDrawListBrush *, char); // rax

  v1 = *(CWindowOcclusionInfo ***)a1;
  result = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( result )
  {
    v4 = 8 * result;
    v5 = &v1[result];
    while ( v1 != v5 )
    {
      v6 = *v1;
      if ( *v1 )
      {
        v7 = **(CMultiPrimitiveDrawListBrush *(__fastcall ***)(CMultiPrimitiveDrawListBrush *, char))v6;
        if ( (char *)v7 == (char *)CWindowOcclusionInfo::`vector deleting destructor' )
        {
          result = (__int64)CWindowOcclusionInfo::`vector deleting destructor'(v6, 1u);
        }
        else if ( v7 == CSurfaceDrawListBrush::`vector deleting destructor' )
        {
          result = (__int64)CSurfaceDrawListBrush::`vector deleting destructor'(v6, 1);
        }
        else if ( v7 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
        {
          result = (__int64)CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v6, 1);
        }
        else
        {
          result = (__int64)v7(v6, 1);
        }
      }
      ++v1;
    }
    *(_QWORD *)(a1 + 8) -= v4;
  }
  return result;
}
