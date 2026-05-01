/*
 * XREFs of ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x1803209DC
 * Callers:
 *     ??$construct@UParsedTaskbarLayout@@U1@@?$_Default_allocator_traits@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@SAXAEAV?$allocator@UParsedTaskbarLayout@@@1@QEAUParsedTaskbarLayout@@$$QEAU3@@Z @ 0x1803208E0 (--$construct@UParsedTaskbarLayout@@U1@@-$_Default_allocator_traits@V-$allocator@UParsedTaskbarLa.c)
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180321B50 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     std::_Func_impl_no_alloc__lambda_4e68ad2abbd0bb666338069fbee19963__WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData_ParsedPenWorkspaceLayout_const_&_::_Do_call @ 0x180322620 (std--_Func_impl_no_alloc__lambda_4e68ad2abbd0bb666338069fbee19963__WindowsInternal--Shell--Unifi.c)
 *     ??$construct@UParsedPenWorkspaceLayout@@U1@@?$_Default_allocator_traits@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@SAXAEAV?$allocator@UParsedPenWorkspaceLayout@@@1@QEAUParsedPenWorkspaceLayout@@$$QEAU3@@Z @ 0x1803F8748 (--$construct@UParsedPenWorkspaceLayout@@U1@@-$_Default_allocator_traits@V-$allocator@UParsedPenW.c)
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803F8C60 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ?Copy@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXAEBU12345@@Z @ 0x180321158 (-Copy@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXAEBU12345@@Z.c)
 */

// Hidden C++ exception states: #wind=3
WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *__fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *this,
        const struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *a2)
{
  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 8) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 0;
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::Copy(this, a2);
  return this;
}
