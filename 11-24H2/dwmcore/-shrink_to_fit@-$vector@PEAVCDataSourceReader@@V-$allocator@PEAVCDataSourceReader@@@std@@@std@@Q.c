/*
 * XREFs of ?shrink_to_fit@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@QEAAXXZ @ 0x18022D9B0
 * Callers:
 *     ?RemoveProcessedReadersFromReadyList@DataProviderManager@@AEAAXXZ @ 0x1801BA9EC (-RemoveProcessedReadersFromReadyList@DataProviderManager@@AEAAXXZ.c)
 *     ?EnsureRemovedFromReadyList@CDataSourceReader@@AEAAXXZ @ 0x1802919FC (-EnsureRemovedFromReadyList@CDataSourceReader@@AEAAXXZ.c)
 * Callees:
 *     ??$_Reallocate@$0A@@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXAEA_K@Z @ 0x180131D6C (--$_Reallocate@$0A@@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXA.c)
 */

void __fastcall std::vector<CDataSourceReader *>::shrink_to_fit(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1[1];
  if ( v1 != a1[2] )
  {
    if ( *a1 == v1 )
    {
      std::vector<CDataSourceReader *>::_Tidy((__int64)a1);
    }
    else
    {
      v2 = (v1 - *a1) >> 3;
      std::vector<CVectorShape *>::_Reallocate<0>((__int64)a1, (unsigned __int64 *)&v2);
    }
  }
}
