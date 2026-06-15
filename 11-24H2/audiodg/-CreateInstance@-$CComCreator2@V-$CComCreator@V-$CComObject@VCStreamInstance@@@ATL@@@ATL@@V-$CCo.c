/*
 * XREFs of ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCStreamInstance@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCStreamInstance@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003AB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CStreamInstance>>,ATL::CComCreator<ATL::CComAggObject<CStreamInstance>>>::CreateInstance(
        __int64 a1)
{
  if ( a1 )
    return ATL::CComCreator<ATL::CComAggObject<CStreamInstance>>::CreateInstance();
  else
    return ATL::CComCreator<ATL::CComObject<CStreamInstance>>::CreateInstance();
}
