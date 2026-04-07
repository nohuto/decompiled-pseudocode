/*
 * XREFs of ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800F39C0
 * Callers:
 *     ??$save@VJSONOutputArchive@cereal@@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@cereal@@YAXAEAVJSONOutputArchive@0@AEBV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x1800F0320 (--$save@VJSONOutputArchive@cereal@@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@.c)
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800F2794 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ?serialize@?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1800F6C90 (-serialize@-$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transition.c)
 * Callees:
 *     ??$_Emplace_back_internal@I@?$deque@IV?$allocator@I@std@@@std@@AEAAX$$QEAI@Z @ 0x1800EEEFC (--$_Emplace_back_internal@I@-$deque@IV-$allocator@I@std@@@std@@AEAAX$$QEAI@Z.c)
 *     ??$_Emplace_back_internal@W4NodeType@JSONOutputArchive@cereal@@@?$deque@W4NodeType@JSONOutputArchive@cereal@@V?$allocator@W4NodeType@JSONOutputArchive@cereal@@@std@@@std@@AEAAX$$QEAW4NodeType@JSONOutputArchive@cereal@@@Z @ 0x1800EEFB0 (--$_Emplace_back_internal@W4NodeType@JSONOutputArchive@cereal@@@-$deque@W4NodeType@JSONOutputArc.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800F3DC4 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 */

void __fastcall cereal::JSONOutputArchive::startNode(cereal::JSONOutputArchive *this)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  cereal::JSONOutputArchive::writeName(this);
  v2 = 0;
  std::deque<enum cereal::JSONOutputArchive::NodeType>::_Emplace_back_internal<enum cereal::JSONOutputArchive::NodeType>(
    (__int64)this + 456,
    &v2);
  v2 = 0;
  std::deque<unsigned int>::_Emplace_back_internal<unsigned int>((__int64)this + 416, &v2);
}
