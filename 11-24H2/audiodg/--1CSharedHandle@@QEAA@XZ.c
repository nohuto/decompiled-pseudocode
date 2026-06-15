/*
 * XREFs of ??1CSharedHandle@@QEAA@XZ @ 0x14004AD0C
 * Callers:
 *     _CProcessingData::CopyEndpointList_::_1_::dtor$3 @ 0x140091D90 (_CProcessingData--CopyEndpointList_--_1_--dtor$3.c)
 *     _CConnectionNode::CConnectionNode_::_1_::dtor$2 @ 0x1400931BA (_CConnectionNode--CConnectionNode_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CSharedHandle::~CSharedHandle(CSharedHandle *this)
{
  CSharedHandle::Release(this);
}
