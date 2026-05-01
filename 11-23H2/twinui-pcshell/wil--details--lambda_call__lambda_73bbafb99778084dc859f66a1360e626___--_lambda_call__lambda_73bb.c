/*
 * XREFs of wil::details::lambda_call__lambda_73bbafb99778084dc859f66a1360e626___::_lambda_call__lambda_73bbafb99778084dc859f66a1360e626___ @ 0x18043DB58
 * Callers:
 *     _CPeopleBarFlyoutExperienceManager::OnViewShowing_::_1_::dtor$1 @ 0x18043F607 (_CPeopleBarFlyoutExperienceManager--OnViewShowing_--_1_--dtor$1.c)
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800ADBAC (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 */

void __fastcall wil::details::lambda_call__lambda_73bbafb99778084dc859f66a1360e626___::_lambda_call__lambda_73bbafb99778084dc859f66a1360e626___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(*(_QWORD *)a1);
  }
}
