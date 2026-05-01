/*
 * XREFs of ??$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedTaskbarLayout@@@Z@5@PEAUParsedTaskbarLayout@@@Z @ 0x1803202A0
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180321B50 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x180320BCC (--1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ.c)
 *     ??4ParsedTaskbarLayout@@QEAAXAEBU0@@Z @ 0x180320CA4 (--4ParsedTaskbarLayout@@QEAAXAEBU0@@Z.c)
 *     ??R?$_Func_class@V?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@$$V@std@@QEBA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180320D54 (--R-$_Func_class@V-$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@.c)
 *     ?GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAHAEBU12345@@Z @ 0x1803214F0 (-GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAH.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem<ParsedTaskbarLayout>(
        __int64 *a1,
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *a2,
        __int64 *a3,
        __int64 a4)
{
  int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // r14
  int SelectionScore; // r15d
  __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 *v14; // rcx
  __int64 v15; // rdx
  _BYTE v16[168]; // [rsp+20h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v7 = -1;
  v8 = *a1;
  v9 = a1[1];
  if ( *a1 == v9 )
    goto LABEL_9;
  do
  {
    std::_Func_class<wil::com_ptr_t<IApplicationViewTitlebarConfiguration,wil::err_exception_policy>,>::operator()(
      a3,
      v16,
      v8);
    SelectionScore = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::GetSelectionScore(
                       a2,
                       (const struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)v16);
    if ( SelectionScore > v7 )
    {
      ParsedTaskbarLayout::operator=(a4, v8);
      v7 = SelectionScore;
    }
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)v16);
    v8 += 136LL;
  }
  while ( v8 != v9 );
  if ( v7 == -1 )
  {
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F7,
      (int)"shellcommon\\internal\\shell\\inc\\Private\\StartLayoutSelectionData.h",
      (const char *)0x80070490LL);
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData(a2);
    v14 = (__int64 *)a3[7];
    if ( v14 )
    {
      v15 = *v14;
      LOBYTE(v15) = v14 != a3;
      (*(void (__fastcall **)(__int64 *, __int64))(*v14 + 32))(v14, v15);
      a3[7] = 0LL;
    }
    return 2147943568LL;
  }
  else
  {
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData(a2);
    v12 = (__int64 *)a3[7];
    if ( v12 )
    {
      LOBYTE(v11) = v12 != a3;
      (*(void (__fastcall **)(__int64 *, __int64))(*v12 + 32))(v12, v11);
      a3[7] = 0LL;
    }
    return 0LL;
  }
}
