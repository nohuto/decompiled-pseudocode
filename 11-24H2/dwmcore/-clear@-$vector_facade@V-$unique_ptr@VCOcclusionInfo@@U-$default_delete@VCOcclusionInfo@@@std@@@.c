/*
 * XREFs of ?clear@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18009F978
 * Callers:
 *     ?Initialize@CDesktopTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180032440 (-Initialize@CDesktopTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180032710 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180033280 (-Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800A081C (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800A2CC0 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ??1?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801F552C (--1-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@std@.c)
 * Callees:
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18009EDD0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x18009EF40 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECWindowOcclusionInfo@@UEAAPEAXI@Z @ 0x18009FA40 (--_ECWindowOcclusionInfo@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  CWindowOcclusionInfo **v3; // rbx
  __int64 result; // rax
  __int64 v6; // rsi
  CWindowOcclusionInfo **v7; // rbp
  CWindowOcclusionInfo *v8; // rcx
  CMultiPrimitiveDrawListBrush *(__fastcall *v9)(CMultiPrimitiveDrawListBrush *, char, __int64); // rax

  v3 = *(CWindowOcclusionInfo ***)a1;
  result = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( result )
  {
    v6 = 8 * result;
    v7 = &v3[result];
    while ( v3 != v7 )
    {
      v8 = *v3;
      if ( *v3 )
      {
        v9 = **(CMultiPrimitiveDrawListBrush *(__fastcall ***)(CMultiPrimitiveDrawListBrush *, char, __int64))v8;
        if ( (char *)v9 == (char *)CWindowOcclusionInfo::`vector deleting destructor' )
        {
          result = (__int64)CWindowOcclusionInfo::`vector deleting destructor'(v8, 1u);
        }
        else if ( v9 == CSurfaceDrawListBrush::`vector deleting destructor' )
        {
          result = (__int64)CSurfaceDrawListBrush::`vector deleting destructor'(v8, 1, a3);
        }
        else if ( v9 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
        {
          result = (__int64)CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v8, 1, a3);
        }
        else
        {
          result = ((__int64 (__fastcall *)(CWindowOcclusionInfo *, __int64))v9)(v8, 1LL);
        }
      }
      ++v3;
    }
    *(_QWORD *)(a1 + 8) -= v6;
  }
  return result;
}
