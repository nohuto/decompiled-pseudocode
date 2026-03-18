/*
 * XREFs of ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x18018C0B8
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18018C08C (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@s.c)
 *     ??_ECResourceWeakRef@@UEAAPEAXI@Z @ 0x1801E24C0 (--_ECResourceWeakRef@@UEAAPEAXI@Z.c)
 *     ?shrink_to_fit@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@QEAAXXZ @ 0x18022D9B0 (-shrink_to_fit@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@Q.c)
 *     ??1?$_Tidy_guard@V?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@@std@@QEAA@XZ @ 0x180250320 (--1-$_Tidy_guard@V-$vector@PEAVCCompositionLight@@V-$allocator@PEAVCCompositionLight@@@std@@@std.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180259E9C (--1CComposition@@MEAA@XZ.c)
 *     ??1DataProviderManager@@EEAA@XZ @ 0x18025E908 (--1DataProviderManager@@EEAA@XZ.c)
 *     ??1CEffectCompilationService@@EEAA@XZ @ 0x18025F1B4 (--1CEffectCompilationService@@EEAA@XZ.c)
 *     ??1DataProviderProxy@@UEAA@XZ @ 0x180272CE0 (--1DataProviderProxy@@UEAA@XZ.c)
 *     ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180273878 (-RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z.c)
 *     ??1CSpectreCallbackRenderer@@UEAA@XZ @ 0x180285AE8 (--1CSpectreCallbackRenderer@@UEAA@XZ.c)
 *     _dynamic_atexit_destructor_for__CFlipAwayFence::s_fenceIdsToDestroy__ @ 0x1802DFD80 (_dynamic_atexit_destructor_for__CFlipAwayFence--s_fenceIdsToDestroy__.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
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
