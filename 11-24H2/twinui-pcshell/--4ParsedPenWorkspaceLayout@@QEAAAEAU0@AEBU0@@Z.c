/*
 * XREFs of ??4ParsedPenWorkspaceLayout@@QEAAAEAU0@AEBU0@@Z @ 0x1803F898C
 * Callers:
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedPenWorkspaceLayout@@@Z@5@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1803F832C (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsI.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800C9E90 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?InternalAddRef@?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1801358F8 (-InternalAddRef@-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1801720F8 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ?Copy@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXAEBU12345@@Z @ 0x180321158 (-Copy@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXAEBU12345@@Z.c)
 */

__int64 **__fastcall ParsedPenWorkspaceLayout::operator=(__int64 **a1, __int64 **a2)
{
  void *v4; // r8
  __int64 *v5; // rdi
  __int64 v6; // rbp
  __int64 *v7; // rdx
  __int64 *v8; // rcx

  if ( a1 != a2 )
  {
    CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)a1);
    v5 = *a2;
    v6 = (__int64)&(*a2)[(_QWORD)a2[1]];
    while ( v5 != (__int64 *)v6 )
    {
      v7 = a1[1];
      if ( v7 != a1[3]
        || (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)a1,
                  (unsigned __int64)v7 + 1,
                  v4) >= 0 )
      {
        a1[1] = (__int64 *)((char *)a1[1] + 1);
        v8 = &(*a1)[(_QWORD)a1[1] - 1];
        if ( v8 )
        {
          *v8 = *v5;
          Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>::InternalAddRef(v8);
        }
      }
      ++v5;
    }
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::Copy(
      (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)(a1 + 4),
      (const struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)(a2 + 4));
  }
  return a1;
}
