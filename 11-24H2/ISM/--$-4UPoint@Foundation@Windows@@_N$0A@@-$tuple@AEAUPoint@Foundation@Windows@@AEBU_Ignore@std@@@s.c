/*
 * XREFs of ??$?4UPoint@Foundation@Windows@@_N$0A@@?$tuple@AEAUPoint@Foundation@Windows@@AEBU_Ignore@std@@@std@@QEAAAEAV01@$$QEAV?$tuple@UPoint@Foundation@Windows@@_N@1@@Z @ 0x1801AE70C
 * Callers:
 *     ?AveragePoint@@YA?AUPoint@Foundation@Windows@@PEBUInputInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x1801AE724 (-AveragePoint@@YA-AUPoint@Foundation@Windows@@PEBUInputInfo@@V-$ComPtr@VInputSite@@@WRL@Microsof.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::tuple<Windows::Foundation::Point &,std::_Ignore const &>::operator=<Windows::Foundation::Point,bool,0>(
        __int64 a1,
        __int64 a2)
{
  **(_QWORD **)(a1 + 8) = *(_QWORD *)(a2 + 4);
  return a1;
}
