/*
 * XREFs of ??1?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800742B0
 * Callers:
 *     _CDeviceGraphObjectsStore::CDeviceGraphObjectsStore_::_1_::dtor$3 @ 0x18016C84E (_CDeviceGraphObjectsStore--CDeviceGraphObjectsStore_--_1_--dtor$3.c)
 *     _CAudioResourceManager::ReevaluateStreamGroups_::_1_::dtor$2 @ 0x18016DB48 (_CAudioResourceManager--ReevaluateStreamGroups_--_1_--dtor$2.c)
 *     __lambda_c4f66075b064f94c83b6e478b87a895c_::operator()_::_1_::dtor$0 @ 0x1801707CD (__lambda_c4f66075b064f94c83b6e478b87a895c_--operator()_--_1_--dtor$0.c)
 *     __lambda_c4f66075b064f94c83b6e478b87a895c_::operator()_::_1_::dtor$3 @ 0x1801707F1 (__lambda_c4f66075b064f94c83b6e478b87a895c_--operator()_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>(__int64 a1)
{
  std::vector<Microsoft::WRL::WeakRef>::_Tidy(a1);
}
