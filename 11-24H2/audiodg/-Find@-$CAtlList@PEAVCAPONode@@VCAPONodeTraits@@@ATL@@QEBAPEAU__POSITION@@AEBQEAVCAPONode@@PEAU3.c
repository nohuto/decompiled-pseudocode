/*
 * XREFs of ?Find@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3@@Z @ 0x1400377D4
 * Callers:
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x1400303A0 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 *     wil::details::lambda_call__lambda_fbdce4dee2e6b7f17b380108274a8644___::_lambda_call__lambda_fbdce4dee2e6b7f17b380108274a8644___ @ 0x14005762C (wil--details--lambda_call__lambda_fbdce4dee2e6b7f17b380108274a8644___--_lambda_call__lambda_fbdc.c)
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14007F320 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall ATL::CAtlList<CAPONode *,CAPONodeTraits>::Find(__int64 ***a1, _QWORD **a2)
{
  __int64 **i; // r9

  for ( i = *a1; ; i = (__int64 **)*i )
  {
    if ( !i )
      return 0LL;
    if ( *i[2] == **a2 )
      break;
  }
  return i;
}
