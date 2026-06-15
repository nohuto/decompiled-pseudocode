/*
 * XREFs of wil::details::lambda_call__lambda_7689b35a0bf80f5507f5324595203735___::_lambda_call__lambda_7689b35a0bf80f5507f5324595203735___ @ 0x14005769C
 * Callers:
 *     _CAudioProcessor::AddAPOOutputConnection_::_1_::dtor$5 @ 0x14009199D (_CAudioProcessor--AddAPOOutputConnection_--_1_--dtor$5.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x14000C538 (-RemoveAt@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_CONNECTI.c)
 */

void __fastcall wil::details::lambda_call__lambda_7689b35a0bf80f5507f5324595203735___::_lambda_call__lambda_7689b35a0bf80f5507f5324595203735___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::RemoveAt(
      (_QWORD *)(**(_QWORD **)a1 + 280LL),
      **(_QWORD **)(a1 + 8));
  }
}
