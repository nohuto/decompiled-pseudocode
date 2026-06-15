/*
 * XREFs of ??1CPropertyPointerArray@@QEAA@XZ @ 0x14003588C
 * Callers:
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x1400306A0 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$7 @ 0x140092165 (_CProcessingData--CopyAPOList_--_1_--dtor$7.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$8 @ 0x14009217B (_CProcessingData--CopyAPOList_--_1_--dtor$8.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$9 @ 0x140092191 (_CProcessingData--CopyAPOList_--_1_--dtor$9.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$10 @ 0x1400921A7 (_CProcessingData--CopyAPOList_--_1_--dtor$10.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$11 @ 0x1400921C0 (_CProcessingData--CopyAPOList_--_1_--dtor$11.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$12 @ 0x1400921D9 (_CProcessingData--CopyAPOList_--_1_--dtor$12.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$13 @ 0x1400921F2 (_CProcessingData--CopyAPOList_--_1_--dtor$13.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$14 @ 0x14009220B (_CProcessingData--CopyAPOList_--_1_--dtor$14.c)
 *     _CAPONode::CAPONode_::_1_::dtor$6 @ 0x1400925C4 (_CAPONode--CAPONode_--_1_--dtor$6.c)
 *     _CAPONode::CAPONode_::_1_::dtor$7 @ 0x1400925DA (_CAPONode--CAPONode_--_1_--dtor$7.c)
 *     _CAPONode::CAPONode_::_1_::dtor$8 @ 0x1400925F0 (_CAPONode--CAPONode_--_1_--dtor$8.c)
 *     _CAPONode::CAPONode_::_1_::dtor$9 @ 0x140092606 (_CAPONode--CAPONode_--_1_--dtor$9.c)
 *     _CAPONode::CAPONode_::_1_::dtor$10 @ 0x14009261F (_CAPONode--CAPONode_--_1_--dtor$10.c)
 *     _CAPONode::CAPONode_::_1_::dtor$11 @ 0x140092638 (_CAPONode--CAPONode_--_1_--dtor$11.c)
 *     _CAPONode::CAPONode_::_1_::dtor$12 @ 0x140092651 (_CAPONode--CAPONode_--_1_--dtor$12.c)
 *     _CAPONode::CAPONode_::_1_::dtor$13 @ 0x14009266A (_CAPONode--CAPONode_--_1_--dtor$13.c)
 *     _CAudioProcessor::ActivateAPO_::_1_::dtor$2 @ 0x140093B26 (_CAudioProcessor--ActivateAPO_--_1_--dtor$2.c)
 *     _CAudioProcessor::ActivateAPO_::_1_::dtor$3 @ 0x140093B38 (_CAudioProcessor--ActivateAPO_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall CPropertyPointerArray::~CPropertyPointerArray(void **this)
{
  void *v1; // rcx

  v1 = *this;
  if ( v1 )
    free(v1);
}
