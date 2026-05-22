/*
 * XREFs of ?at@?$map@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@@std@@QEAAAEAGAEBW4GazeProperty@@@Z @ 0x18018440C
 * Callers:
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x180183A00 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z @ 0x180183CC8 (-GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z.c)
 *     ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x180183E40 (-GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z.c)
 *     ?SetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEAXKPEADK@Z @ 0x180184344 (-SetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEAXKPEADK@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@W4GazeProperty@@@?$_Tree@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@std@@@1@AEBW4GazeProperty@@@Z @ 0x18018391C (--$_Find_lower_bound@W4GazeProperty@@@-$_Tree@V-$_Tmap_traits@W4GazeProperty@@GU-$less@W4GazePro.c)
 */

__int64 __fastcall std::map<enum GazeProperty,unsigned short>::at(__int64 *a1, _DWORD *a2)
{
  _DWORD *v2; // r10
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Find_lower_bound<enum GazeProperty>(
    a1,
    &v4,
    a2);
  if ( *(_BYTE *)(v5 + 25) || *v2 < *(_DWORD *)(v5 + 28) )
  {
    std::_Xout_of_range("invalid map<K, T> key");
    __debugbreak();
    JUMPOUT(0x180184453LL);
  }
  return v5 + 32;
}
