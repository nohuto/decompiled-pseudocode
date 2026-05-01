/*
 * XREFs of ?_Buy_raw@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1806BE340
 * Callers:
 *     ??0?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1802AFA64 (--0-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allocator@USnapAss.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18014AECC (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 */

char *__fastcall std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Buy_raw(
        _QWORD *a1,
        unsigned __int64 a2)
{
  size_t size_of; // rax
  char *result; // rax

  size_of = std::_Get_size_of_n<32>(a2);
  result = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = result;
  a1[1] = result;
  a1[2] = &result[32 * a2];
  return result;
}
