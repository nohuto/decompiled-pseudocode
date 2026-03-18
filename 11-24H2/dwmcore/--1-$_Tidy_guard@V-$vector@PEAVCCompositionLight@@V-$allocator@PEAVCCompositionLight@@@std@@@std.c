/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@@std@@QEAA@XZ @ 0x180250320
 * Callers:
 *     ??$?0V?$span_iterator@PEAVCCompositionLight@@@details@gsl@@$0A@@?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@QEAA@V?$span_iterator@PEAVCCompositionLight@@@details@gsl@@0AEBV?$allocator@PEAVCCompositionLight@@@1@@Z @ 0x1802858B8 (--$-0V-$span_iterator@PEAVCCompositionLight@@@details@gsl@@$0A@@-$vector@PEAVCCompositionLight@@.c)
 * Callees:
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x18018C0B8 (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tidy_guard<std::vector<CCompositionLight *>>::~_Tidy_guard<std::vector<CCompositionLight *>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<CDataSourceReader *>::_Tidy(v1);
}
