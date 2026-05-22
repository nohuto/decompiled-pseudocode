/*
 * XREFs of ??1?$ComPtr@VMPCRemoteStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18009B8A0
 * Callers:
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$16 @ 0x1801CA604 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$16.c)
 *     _AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor$0 @ 0x1801CB676 (_AnimationDataProvider--GetBamoDataSourceStub_--_1_--dtor$0.c)
 *     _MPC3DStateHelper::MPC3DStateHelper_::_1_::dtor$6 @ 0x1801CC838 (_MPC3DStateHelper--MPC3DStateHelper_--_1_--dtor$6.c)
 *     _AnimationDataProvider::CreateDataSource_::_1_::dtor$0 @ 0x1801CF3CA (_AnimationDataProvider--CreateDataSource_--_1_--dtor$0.c)
 *     _AnimationDataProvider::GetDataSourceId_::_1_::dtor$0 @ 0x1801CF4B4 (_AnimationDataProvider--GetDataSourceId_--_1_--dtor$0.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_EdgyProcessor::EdgyDragMessageInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__EdgyProcessor::EdgyDragMessageInfo____0___::_Try_emplace_unsigned_long_const_&__::_1_::dtor$5 @ 0x1801CFDF0 (_std--_Hash_std--_Umap_traits_unsigned_long_EdgyProcessor--EdgyDragMessageInfo_std-_ea_1801CFDF0.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_DragNDropProcessor::MessageInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo____0___::_Try_emplace_unsigned_long_const_&__::_1_::dtor$6 @ 0x1801CFE06 (_std--_Hash_std--_Umap_traits_unsigned_long_DragNDropProcessor--MessageInfo_std--_U_ea_1801CFE06.c)
 *     _DragNDropProcessor::StartAnimation_::_1_::dtor$0 @ 0x1801CFFA8 (_DragNDropProcessor--StartAnimation_--_1_--dtor$0.c)
 *     _EdgyProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$0 @ 0x1801CFFBA (_EdgyProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$0.c)
 *     _ResizeProcessor::HitTest_::_1_::dtor$1 @ 0x1801D000B (_ResizeProcessor--HitTest_--_1_--dtor$1.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$6 @ 0x1801D0053 (_DragNDropProcessor--HitTest_--_1_--dtor$6.c)
 *     _DragNDropProcessor::SetupInteractionContext_::_1_::dtor$1 @ 0x1801D00AD (_DragNDropProcessor--SetupInteractionContext_--_1_--dtor$1.c)
 *     _ResizeProcessor::StartAnimation_::_1_::dtor$0 @ 0x1801D00BF (_ResizeProcessor--StartAnimation_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartManualDrag_::_1_::dtor$1 @ 0x1801D0107 (_DragNDropProcessor--StartManualDrag_--_1_--dtor$1.c)
 *     _ResizeProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$0 @ 0x1801D020E (_ResizeProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$0.c)
 *     _ResizeProcessor::HitTest_::_1_::dtor$2 @ 0x1801D0244 (_ResizeProcessor--HitTest_--_1_--dtor$2.c)
 *     _ResizeProcessor::StartAnimation_::_1_::dtor$1 @ 0x1801D0256 (_ResizeProcessor--StartAnimation_--_1_--dtor$1.c)
 *     _ResizeProcessor::StartGestureRecognition_::_1_::dtor$0 @ 0x1801D0268 (_ResizeProcessor--StartGestureRecognition_--_1_--dtor$0.c)
 *     _EdgyProcessor::StartAnimation_::_1_::dtor$0 @ 0x1801D0420 (_EdgyProcessor--StartAnimation_--_1_--dtor$0.c)
 *     _EdgyProcessor::HitTest_::_1_::dtor$1 @ 0x1801D0444 (_EdgyProcessor--HitTest_--_1_--dtor$1.c)
 *     _EdgyProcessor::StartAnimation_::_1_::dtor$1 @ 0x1801D049E (_EdgyProcessor--StartAnimation_--_1_--dtor$1.c)
 *     _EdgyProcessor::StartGestureRecognition_::_1_::dtor$1 @ 0x1801D04B0 (_EdgyProcessor--StartGestureRecognition_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<MPCRemoteStateManager>::~ComPtr<MPCRemoteStateManager>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease(a1);
}
