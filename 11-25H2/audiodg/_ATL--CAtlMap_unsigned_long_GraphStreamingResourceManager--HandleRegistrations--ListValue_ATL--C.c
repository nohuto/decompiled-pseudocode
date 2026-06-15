/*
 * XREFs of _ATL::CAtlMap_unsigned_long_GraphStreamingResourceManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_GraphStreamingResourceManager::HandleRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x140092B8B
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAtPos@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140013680 (-RemoveAtPos@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElemen.c)
 *     _CxxThrowException_0 @ 0x14005A1E0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlMap_unsigned_long_GraphStreamingResourceManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_GraphStreamingResourceManager::HandleRegistrations::ListValue___::SetAt_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAtPos(
    *(__int64 **)(a2 + 48),
    *(_QWORD *)(a2 + 72));
  throw;
}
