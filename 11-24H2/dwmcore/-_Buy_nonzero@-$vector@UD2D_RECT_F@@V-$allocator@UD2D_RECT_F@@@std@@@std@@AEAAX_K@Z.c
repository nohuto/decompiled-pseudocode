/*
 * XREFs of ?_Buy_nonzero@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@AEAAX_K@Z @ 0x180265C28
 * Callers:
 *     ??0?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180263CB8 (--0-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0PEAUD2D_RECT_F@@$0A@@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@QEAA@PEAUD2D_RECT_F@@0AEBV?$allocator@UD2D_RECT_F@@@1@@Z @ 0x18028B1D8 (--$-0PEAUD2D_RECT_F@@$0A@@-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@QEAA@PEAUD.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180041D70 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<D2D_RECT_F>::_Buy_nonzero(__int64 *a1, unsigned __int64 a2)
{
  SIZE_T size_of; // rax
  __int64 result; // rax

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  size_of = std::_Get_size_of_n<16>(a2);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 16 * a2;
  return result;
}
