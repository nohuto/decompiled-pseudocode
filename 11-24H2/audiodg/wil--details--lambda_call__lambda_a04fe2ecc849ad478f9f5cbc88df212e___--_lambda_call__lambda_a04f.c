/*
 * XREFs of wil::details::lambda_call__lambda_a04fe2ecc849ad478f9f5cbc88df212e___::_lambda_call__lambda_a04fe2ecc849ad478f9f5cbc88df212e___ @ 0x14005758C
 * Callers:
 *     _CAudioProcessor::AddAPOInputConnection_::_1_::dtor$5 @ 0x1400918E7 (_CAudioProcessor--AddAPOInputConnection_--_1_--dtor$5.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x14000C538 (-RemoveAt@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_CONNECTI.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_a04fe2ecc849ad478f9f5cbc88df212e___::_lambda_call__lambda_a04fe2ecc849ad478f9f5cbc88df212e___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::RemoveAt(
      (_QWORD *)(**(_QWORD **)a1 + 248LL),
      **(_QWORD **)(a1 + 8));
  }
}
