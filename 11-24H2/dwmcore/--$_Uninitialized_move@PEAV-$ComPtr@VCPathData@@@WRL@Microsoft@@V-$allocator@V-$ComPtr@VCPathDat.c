/*
 * XREFs of ??$_Uninitialized_move@PEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@0@@Z @ 0x18020D1D4
 * Callers:
 *     ??$_Reallocate@$0A@@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAXAEA_K@Z @ 0x18020D160 (--$_Reallocate@$0A@@-$vector@V-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPath.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18029DF28 (--$_Emplace_reallocate@V-$ComPtr@VCPathData@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VCPathData@@@WR.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@0@@Z @ 0x18020D21C (--$_Destroy_range@V-$allocator@V-$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<Microsoft::WRL::ComPtr<CPathData> *,std::allocator<Microsoft::WRL::ComPtr<CPathData>>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *i; // rax

  for ( i = a1; i != a2; ++i )
  {
    *a3 = 0LL;
    if ( a3 != i )
    {
      *a3 = *i;
      *i = 0LL;
    }
    ++a3;
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CPathData>>>(a3, a3);
  return a3;
}
