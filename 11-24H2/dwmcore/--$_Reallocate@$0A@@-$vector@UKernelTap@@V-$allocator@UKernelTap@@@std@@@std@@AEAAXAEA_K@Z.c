/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAXAEA_K@Z @ 0x1801F59B0
 * Callers:
 *     ?reserve@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAAX_K@Z @ 0x1801F595C (-reserve@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0M@@std@@YA_K_K@Z @ 0x1801F5CA4 (--$_Get_size_of_n@$0M@@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

__int64 __fastcall std::vector<KernelTap>::_Reallocate<0>(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdi
  SIZE_T size_of; // rax
  void *v6; // rbx

  v4 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2);
  size_of = std::_Get_size_of_n<12>(*a2);
  v6 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<KernelTap>::_Change_array(a1, v6, v4, *a2);
}
