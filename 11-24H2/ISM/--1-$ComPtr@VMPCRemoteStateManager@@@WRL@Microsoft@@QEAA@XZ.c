/*
 * XREFs of ??1?$ComPtr@VMPCRemoteStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18009BA50
 * Callers:
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$15 @ 0x1801D2602 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$15.c)
 *     _AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor$0 @ 0x1801D2B16 (_AnimationDataProvider--GetBamoDataSourceStub_--_1_--dtor$0.c)
 *     _MPC3DStateHelper::MPC3DStateHelper_::_1_::dtor$6 @ 0x1801D3AED (_MPC3DStateHelper--MPC3DStateHelper_--_1_--dtor$6.c)
 *     _AnimationDataProvider::CreateDataSource_::_1_::dtor$0 @ 0x1801D6C62 (_AnimationDataProvider--CreateDataSource_--_1_--dtor$0.c)
 *     _AnimationDataProvider::GetDataSourceId_::_1_::dtor$0 @ 0x1801D6D4C (_AnimationDataProvider--GetDataSourceId_--_1_--dtor$0.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_EdgyProcessor::EdgyDragMessageInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__EdgyProcessor::EdgyDragMessageInfo____0___::_Try_emplace_unsigned_long_const_&__::_1_::dtor$5 @ 0x1801D7638 (_std--_Hash_std--_Umap_traits_unsigned_long_EdgyProcessor--EdgyDragMessageInfo_std-_ea_1801D7638.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_DragNDropProcessor::MessageInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo____0___::_Try_emplace_unsigned_long_const_&__::_1_::dtor$6 @ 0x1801D764E (_std--_Hash_std--_Umap_traits_unsigned_long_DragNDropProcessor--MessageInfo_std--_U_ea_1801D764E.c)
 *     _DragNDropProcessor::StartAnimation_::_1_::dtor$0 @ 0x1801D77F0 (_DragNDropProcessor--StartAnimation_--_1_--dtor$0.c)
 *     _EdgyProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$0 @ 0x1801D7802 (_EdgyProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$0.c)
 *     _ResizeProcessor::HitTest_::_1_::dtor$1 @ 0x1801D7853 (_ResizeProcessor--HitTest_--_1_--dtor$1.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$6 @ 0x1801D789B (_DragNDropProcessor--HitTest_--_1_--dtor$6.c)
 *     _DragNDropProcessor::SetupInteractionContext_::_1_::dtor$1 @ 0x1801D78F5 (_DragNDropProcessor--SetupInteractionContext_--_1_--dtor$1.c)
 *     _ResizeProcessor::StartAnimation_::_1_::dtor$0 @ 0x1801D7907 (_ResizeProcessor--StartAnimation_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartManualDrag_::_1_::dtor$1 @ 0x1801D794F (_DragNDropProcessor--StartManualDrag_--_1_--dtor$1.c)
 *     _ResizeProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$0 @ 0x1801D7A56 (_ResizeProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$0.c)
 *     _ResizeProcessor::HitTest_::_1_::dtor$2 @ 0x1801D7A8C (_ResizeProcessor--HitTest_--_1_--dtor$2.c)
 *     _ResizeProcessor::StartAnimation_::_1_::dtor$1 @ 0x1801D7A9E (_ResizeProcessor--StartAnimation_--_1_--dtor$1.c)
 *     _ResizeProcessor::StartGestureRecognition_::_1_::dtor$0 @ 0x1801D7AB0 (_ResizeProcessor--StartGestureRecognition_--_1_--dtor$0.c)
 *     _EdgyProcessor::StartAnimation_::_1_::dtor$0 @ 0x1801D7C68 (_EdgyProcessor--StartAnimation_--_1_--dtor$0.c)
 *     _EdgyProcessor::HitTest_::_1_::dtor$1 @ 0x1801D7C8C (_EdgyProcessor--HitTest_--_1_--dtor$1.c)
 *     _EdgyProcessor::StartAnimation_::_1_::dtor$1 @ 0x1801D7CE6 (_EdgyProcessor--StartAnimation_--_1_--dtor$1.c)
 *     _EdgyProcessor::StartGestureRecognition_::_1_::dtor$1 @ 0x1801D7CF8 (_EdgyProcessor--StartGestureRecognition_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<MPCRemoteStateManager>::~ComPtr<MPCRemoteStateManager>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease(a1);
}
