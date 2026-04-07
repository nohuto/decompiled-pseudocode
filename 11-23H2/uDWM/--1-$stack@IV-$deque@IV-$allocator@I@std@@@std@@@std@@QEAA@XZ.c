/*
 * XREFs of ??1?$stack@IV?$deque@IV?$allocator@I@std@@@std@@@std@@QEAA@XZ @ 0x1800F0FA0
 * Callers:
 *     _cereal::JSONOutputArchive::JSONOutputArchive_::_1_::dtor$2 @ 0x1800F0A6F (_cereal--JSONOutputArchive--JSONOutputArchive_--_1_--dtor$2.c)
 *     _cereal::JSONOutputArchive::JSONOutputArchive_::_1_::dtor$3 @ 0x1800F0A82 (_cereal--JSONOutputArchive--JSONOutputArchive_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::stack<unsigned int>::~stack<unsigned int,std::deque<unsigned int>>(__int64 a1)
{
  return std::deque<enum cereal::JSONOutputArchive::NodeType>::~deque<enum cereal::JSONOutputArchive::NodeType>(a1);
}
