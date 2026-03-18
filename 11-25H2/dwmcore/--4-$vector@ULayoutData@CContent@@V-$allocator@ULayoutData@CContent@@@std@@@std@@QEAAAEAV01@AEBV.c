/*
 * XREFs of ??4?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18029F4AC
 * Callers:
 *     ?GetTextureMemoryLayoutData@CClipBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18029F9B0 (-GetTextureMemoryLayoutData@CClipBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CContent@@.c)
 *     ?GetTextureMemoryLayoutData@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1802A3ED0 (-GetTextureMemoryLayoutData@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CContent.c)
 *     ?GetTextureMemoryLayoutData@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1802A9530 (-GetTextureMemoryLayoutData@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CContent@@.c)
 * Callees:
 *     ??$_Assign_counted_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXPEAULayoutData@CContent@@_K@Z @ 0x18029F108 (--$_Assign_counted_range@PEAULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@U.c)
 */

char **__fastcall std::vector<CContent::LayoutData>::operator=(char **a1, __int64 a2)
{
  if ( a1 != (char **)a2 )
    std::vector<CContent::LayoutData>::_Assign_counted_range<CContent::LayoutData *>(
      a1,
      *(char **)a2,
      0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3));
  return a1;
}
