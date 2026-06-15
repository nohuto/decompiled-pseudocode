/*
 * XREFs of ??1CSharedHandle@@QEAA@XZ @ 0x14004B1AC
 * Callers:
 *     _CProcessingData::CopyEndpointList_::_1_::dtor$3 @ 0x140092310 (_CProcessingData--CopyEndpointList_--_1_--dtor$3.c)
 *     _CConnectionNode::CConnectionNode_::_1_::dtor$2 @ 0x14009375A (_CConnectionNode--CConnectionNode_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CSharedHandle::~CSharedHandle(CSharedHandle *this)
{
  CSharedHandle::Release(this);
}
