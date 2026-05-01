/*
 * XREFs of ??$_Emplace_back_internal@AEAUCRect@Geometry@@@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXAEAUCRect@Geometry@@@Z @ 0x1805A4D4C
 * Callers:
 *     ??$SetGuidedSnapAssistRegions@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@0@Z @ 0x18029BE44 (--$SetGuidedSnapAssistRegions@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UCRect@Geometr.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1801346BC (-_Growmap@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::deque<tagRECT>::_Emplace_back_internal<Geometry::CRect &>(_QWORD *a1, _OWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 result; // rax

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<winrt::guid>::_Growmap(a1);
  v4 = a1[2] - 1LL;
  a1[3] &= v4;
  v5 = v4 & (a1[4] + a1[3]);
  if ( !*(_QWORD *)(a1[1] + 8 * v5) )
    *(_QWORD *)(a1[1] + 8 * v5) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  result = a1[1];
  *(_OWORD *)*(_QWORD *)(result + 8 * v5) = *a2;
  ++a1[4];
  return result;
}
