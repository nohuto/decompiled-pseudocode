/*
 * XREFs of ?_Change_array@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@_K1@Z @ 0x180226D94
 * Callers:
 *     ??$_Reallocate@$0A@@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAXAEA_K@Z @ 0x1802195F0 (--$_Reallocate@$0A@@-$vector@V-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPath.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1802A7CFC (--$_Emplace_reallocate@V-$ComPtr@VCPathData@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VCPathData@@@WR.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@0@@Z @ 0x1802196AC (--$_Destroy_range@V-$allocator@V-$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 */

CPathData **__fastcall std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Change_array(
        CPathData ***a1,
        CPathData **a2,
        __int64 a3,
        __int64 a4)
{
  CPathData **v6; // rcx
  CPathData **result; // rax

  v6 = *a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CPathData>>>(v6, a1[1]);
    std::_Deallocate<16,0>(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = a2;
  a1[1] = &a2[a3];
  result = &a2[a4];
  a1[2] = result;
  return result;
}
