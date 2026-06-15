/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z @ 0x14000B9B8
 * Callers:
 *     ?DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z @ 0x1400090D0 (-DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z.c)
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x1400303A0 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 *     ?InsertBefore@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCAPONode@@@Z @ 0x140057404 (-InsertBefore@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVC.c)
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14007F320 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     ?GetFreeNode@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAXXZ @ 0x14000BA24 (-GetFreeNode@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAXXZ.c)
 */

_QWORD *__fastcall ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddHead(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rdi
  _QWORD *v5; // rdx
  __int64 v6; // r8
  _QWORD *result; // rax

  v2 = *a1;
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetFreeNode(a1);
  v5 = (_QWORD *)a1[4];
  v6 = *v5;
  v5[2] = *a2;
  a1[4] = v6;
  v5[1] = 0LL;
  *v5 = v2;
  ++a1[2];
  if ( *a1 )
    *(_QWORD *)(*a1 + 8LL) = v5;
  else
    a1[1] = v5;
  result = v5;
  *a1 = v5;
  return result;
}
