/*
 * XREFs of ?DeleteApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z @ 0x14003252C
 * Callers:
 *     std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___ @ 0x1400324EC (std--_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___--__Temp.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::_Destroy @ 0x140032510 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___--_Destro.c)
 * Callees:
 *     ?CleanupApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z @ 0x140032670 (-CleanupApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z.c)
 */

void __fastcall DeleteApoNotification(struct APO_NOTIFICATION *Block)
{
  CleanupApoNotification(Block);
  operator delete(Block);
}
