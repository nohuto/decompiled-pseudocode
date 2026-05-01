/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@QEAA@XZ @ 0x1802CE0D4
 * Callers:
 *     ?v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ @ 0x180222CE0 (-v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ.c)
 *     ??$_Construct_n@AEBQEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBQEAW412345@@?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAX_KAEBQEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@1@Z @ 0x1803205A8 (--$_Construct_n@AEBQEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     ??0GuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@QEAA@AEBW4SnapAssistUsage@23456@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@6@@Z @ 0x1805BC8F8 (--0GuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@QEA.c)
 * Callees:
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x180048B14 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 */

void __fastcall std::_Tidy_guard<std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>>::~_Tidy_guard<std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(v1);
}
