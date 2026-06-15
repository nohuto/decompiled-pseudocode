/*
 * XREFs of ??1CPropertyPointerArray@@QEAA@XZ @ 0x14003558C
 * Callers:
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x1400303A0 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$7 @ 0x140091BE5 (_CProcessingData--CopyAPOList_--_1_--dtor$7.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$8 @ 0x140091BFB (_CProcessingData--CopyAPOList_--_1_--dtor$8.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$9 @ 0x140091C11 (_CProcessingData--CopyAPOList_--_1_--dtor$9.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$10 @ 0x140091C27 (_CProcessingData--CopyAPOList_--_1_--dtor$10.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$11 @ 0x140091C40 (_CProcessingData--CopyAPOList_--_1_--dtor$11.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$12 @ 0x140091C59 (_CProcessingData--CopyAPOList_--_1_--dtor$12.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$13 @ 0x140091C72 (_CProcessingData--CopyAPOList_--_1_--dtor$13.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$14 @ 0x140091C8B (_CProcessingData--CopyAPOList_--_1_--dtor$14.c)
 *     _CAPONode::CAPONode_::_1_::dtor$6 @ 0x140092044 (_CAPONode--CAPONode_--_1_--dtor$6.c)
 *     _CAPONode::CAPONode_::_1_::dtor$7 @ 0x14009205A (_CAPONode--CAPONode_--_1_--dtor$7.c)
 *     _CAPONode::CAPONode_::_1_::dtor$8 @ 0x140092070 (_CAPONode--CAPONode_--_1_--dtor$8.c)
 *     _CAPONode::CAPONode_::_1_::dtor$9 @ 0x140092086 (_CAPONode--CAPONode_--_1_--dtor$9.c)
 *     _CAPONode::CAPONode_::_1_::dtor$10 @ 0x14009209F (_CAPONode--CAPONode_--_1_--dtor$10.c)
 *     _CAPONode::CAPONode_::_1_::dtor$11 @ 0x1400920B8 (_CAPONode--CAPONode_--_1_--dtor$11.c)
 *     _CAPONode::CAPONode_::_1_::dtor$12 @ 0x1400920D1 (_CAPONode--CAPONode_--_1_--dtor$12.c)
 *     _CAPONode::CAPONode_::_1_::dtor$13 @ 0x1400920EA (_CAPONode--CAPONode_--_1_--dtor$13.c)
 *     _CAudioProcessor::ActivateAPO_::_1_::dtor$2 @ 0x140093586 (_CAudioProcessor--ActivateAPO_--_1_--dtor$2.c)
 *     _CAudioProcessor::ActivateAPO_::_1_::dtor$3 @ 0x140093598 (_CAudioProcessor--ActivateAPO_--_1_--dtor$3.c)
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
