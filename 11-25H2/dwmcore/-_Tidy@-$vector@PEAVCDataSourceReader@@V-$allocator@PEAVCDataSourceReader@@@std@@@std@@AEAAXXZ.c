/*
 * XREFs of ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x1800C1200
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800C11D4 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@s.c)
 *     ??_ECResourceWeakRef@@UEAAPEAXI@Z @ 0x1801EC1D0 (--_ECResourceWeakRef@@UEAAPEAXI@Z.c)
 *     ?shrink_to_fit@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@QEAAXXZ @ 0x180239750 (-shrink_to_fit@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@Q.c)
 *     ??1?$_Tidy_guard@V?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@@std@@QEAA@XZ @ 0x18025B970 (--1-$_Tidy_guard@V-$vector@PEAVCCompositionLight@@V-$allocator@PEAVCCompositionLight@@@std@@@std.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180264D94 (--1CComposition@@MEAA@XZ.c)
 *     ??1DataProviderManager@@EEAA@XZ @ 0x180268848 (--1DataProviderManager@@EEAA@XZ.c)
 *     ??1CEffectCompilationService@@EEAA@XZ @ 0x1802690F4 (--1CEffectCompilationService@@EEAA@XZ.c)
 *     ??1DataProviderProxy@@UEAA@XZ @ 0x18027D3F0 (--1DataProviderProxy@@UEAA@XZ.c)
 *     ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x18027DF88 (-RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z.c)
 *     ??1CSpectreCallbackRenderer@@UEAA@XZ @ 0x180291088 (--1CSpectreCallbackRenderer@@UEAA@XZ.c)
 *     _dynamic_atexit_destructor_for__CFlipAwayFence::s_fenceIdsToDestroy__ @ 0x1802E9020 (_dynamic_atexit_destructor_for__CFlipAwayFence--s_fenceIdsToDestroy__.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CDataSourceReader *>::_Tidy(__int64 a1)
{
  _QWORD *v2; // rcx
  unsigned __int64 v3; // rdx

  v2 = *(_QWORD **)a1;
  if ( v2 )
  {
    v3 = (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v3 >= 0x1000 )
    {
      v3 += 39LL;
      if ( (unsigned __int64)v2 - *(v2 - 1) - 8 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v2 = (_QWORD *)*(v2 - 1);
    }
    operator delete(v2, v3);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
