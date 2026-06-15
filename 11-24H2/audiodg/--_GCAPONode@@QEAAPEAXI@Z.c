/*
 * XREFs of ??_GCAPONode@@QEAAPEAXI@Z @ 0x14000B930
 * Callers:
 *     ?ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x140005DF0 (-ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z.c)
 *     ?CopyAPOList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z @ 0x14000B30C (-CopyAPOList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z.c)
 *     _lambda_4f5bca04da2ba347195d47ea7d1a4d66_::operator() @ 0x14000D97C (_lambda_4f5bca04da2ba347195d47ea7d1a4d66_--operator().c)
 *     ??1?$CAutoPtr@VCAPONode@@@ATL@@QEAA@XZ @ 0x14003D274 (--1-$CAutoPtr@VCAPONode@@@ATL@@QEAA@XZ.c)
 *     _CProcessingData::CopyAPOList_::_1_::catch$19 @ 0x140091CA4 (_CProcessingData--CopyAPOList_--_1_--catch$19.c)
 * Callees:
 *     ??3CProcessorTransaction@@SAXPEAX@Z @ 0x14000C894 (--3CProcessorTransaction@@SAXPEAX@Z.c)
 *     ??1CAPONode@@QEAA@XZ @ 0x14000C8BC (--1CAPONode@@QEAA@XZ.c)
 */

CAPONode *__fastcall CAPONode::`scalar deleting destructor'(CAPONode *this)
{
  CAPONode::~CAPONode(this);
  CProcessorTransaction::operator delete(this);
  return this;
}
