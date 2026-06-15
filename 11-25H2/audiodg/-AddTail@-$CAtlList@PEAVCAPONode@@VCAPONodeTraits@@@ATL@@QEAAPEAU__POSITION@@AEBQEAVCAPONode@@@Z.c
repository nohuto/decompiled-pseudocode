/*
 * XREFs of ?AddTail@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z @ 0x14000C9E0
 * Callers:
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x1400306A0 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 *     ?InsertAfter@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCAPONode@@@Z @ 0x140081508 (-InsertAfter@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCA.c)
 * Callees:
 *     ?GetFreeNode@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAXXZ @ 0x14000B9F4 (-GetFreeNode@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAXXZ.c)
 */

_QWORD *__fastcall ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddTail(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  _QWORD *v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rax
  _QWORD *result; // rax

  v2 = a1[1];
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetFreeNode((__int64)a1);
  v5 = (_QWORD *)a1[4];
  v6 = *v5;
  v5[2] = *a2;
  a1[4] = v6;
  *v5 = 0LL;
  v5[1] = v2;
  ++a1[2];
  v7 = (_QWORD *)a1[1];
  if ( v7 )
    *v7 = v5;
  else
    *a1 = v5;
  result = v5;
  a1[1] = v5;
  return result;
}
