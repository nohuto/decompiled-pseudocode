/*
 * XREFs of ??0_lambda_33066bbcaa202ed8496d422e2c9143b2_@@QEAA@AEAVHString@Wrappers@WRL@Microsoft@@AEAPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEA_N@Z @ 0x18007A550
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x18007D3A0 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     ?RemoveTileFromCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180096674 (-RemoveTileFromCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICurate.c)
 * Callees:
 *     <none>
 */

_lambda_33066bbcaa202ed8496d422e2c9143b2_ *__fastcall _lambda_33066bbcaa202ed8496d422e2c9143b2_::_lambda_33066bbcaa202ed8496d422e2c9143b2_(
        _lambda_33066bbcaa202ed8496d422e2c9143b2_ *this,
        struct Microsoft::WRL::Wrappers::HString *a2,
        struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection **a3,
        bool *a4)
{
  _lambda_33066bbcaa202ed8496d422e2c9143b2_ *result; // rax

  *(_QWORD *)this = a2;
  result = this;
  *((_QWORD *)this + 1) = a3;
  *((_QWORD *)this + 2) = a4;
  return result;
}
