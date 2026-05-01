/*
 * XREFs of ??1?$ComPtr@UIUnifiedTileManagerStatics@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B4904
 * Callers:
 *     _CPinnedList::_ShouldAddMenu_::_1_::dtor$0 @ 0x1806CC0DA (_CPinnedList--_ShouldAddMenu_--_1_--dtor$0.c)
 *     _CPinnedList::v_IsAcceptableTarget_::_1_::dtor$0 @ 0x1806CC0FE (_CPinnedList--v_IsAcceptableTarget_--_1_--dtor$0.c)
 *     _CLauncherTipContextMenu::_EnumerateAndBuildMenu_::_1_::dtor$1 @ 0x1806CC110 (_CLauncherTipContextMenu--_EnumerateAndBuildMenu_--_1_--dtor$1.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$4 @ 0x1806CC122 (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$4.c)
 *     _CLauncherTipContextMenu::_EnumerateAndBuildMenu_::_1_::dtor$3 @ 0x1806CC215 (_CLauncherTipContextMenu--_EnumerateAndBuildMenu_--_1_--dtor$3.c)
 *     __lambda_21d9478fa7481aa5ac8b815bdb34bba5_::operator()_::_1_::dtor$3 @ 0x1806CC24B (__lambda_21d9478fa7481aa5ac8b815bdb34bba5_--operator()_--_1_--dtor$3.c)
 *     _PWSLayoutParser::ParsePinnedAppNode_::_1_::dtor$0 @ 0x1806CC25D (_PWSLayoutParser--ParsePinnedAppNode_--_1_--dtor$0.c)
 *     _DDAScreenCapture::GetScreenCaptureAsWicBitmapSource_::_1_::dtor$9 @ 0x1806CC26F (_DDAScreenCapture--GetScreenCaptureAsWicBitmapSource_--_1_--dtor$9.c)
 *     _CLauncherTipContextMenu::AddMissingLinksFromDefaultProfile_::_1_::dtor$2 @ 0x1806CC281 (_CLauncherTipContextMenu--AddMissingLinksFromDefaultProfile_--_1_--dtor$2.c)
 *     _LoadImageWithWIC_::_1_::dtor$0 @ 0x1806D3457 (_LoadImageWithWIC_--_1_--dtor$0.c)
 *     _ConvertHBITMAPToWICBitmap_::_1_::dtor$1 @ 0x1806D3469 (_ConvertHBITMAPToWICBitmap_--_1_--dtor$1.c)
 *     _ConvertWICBitmapToHBITMAP_::_1_::dtor$1 @ 0x1806D347B (_ConvertWICBitmapToHBITMAP_--_1_--dtor$1.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Storage::Streams::IRandomAccessStream____Windows::Foundation::IAsyncOperation_Windows::Storage::Streams::IRandomAccessStream______::_1_::dtor$0 @ 0x1806E7333 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Storage--Stream.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$0 @ 0x1806E73BD (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$0.c)
 *     _GetStreamOfWICBitmapSourceWithOptions_::_1_::dtor$0 @ 0x1806E73F3 (_GetStreamOfWICBitmapSourceWithOptions_--_1_--dtor$0.c)
 *     _details::ObjectArrayAdapterImpl_IPenWorkspaceLayoutItem_Microsoft::WRL::ComPtr_IPenWorkspaceLayoutItem___::Iterator::Iterator_::_1_::dtor$0 @ 0x1806E758E (_details--ObjectArrayAdapterImpl_IPenWorkspaceLayoutItem_Microsoft--WRL--ComPtr_IPenWorkspaceLay.c)
 *     _PenWorkspace::Discover::UTMIconLoader::GetIcon_::_1_::dtor$2 @ 0x1806E75C8 (_PenWorkspace--Discover--UTMIconLoader--GetIcon_--_1_--dtor$2.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$10 @ 0x1806E775A (_CPinnedList--InternalModify_--_1_--dtor$10.c)
 *     _CLauncherTipContextMenu::CleanupObsoleteLinks_::_1_::dtor$1 @ 0x1806FEB46 (_CLauncherTipContextMenu--CleanupObsoleteLinks_--_1_--dtor$1.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$4 @ 0x1807041B4 (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$4.c)
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$18 @ 0x18070444C (_GetPidlsFromTaskbarLayout_--_1_--dtor$18.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::IUnifiedTileManagerStatics>::~ComPtr<WindowsInternal::Shell::UnifiedTile::IUnifiedTileManagerStatics>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
