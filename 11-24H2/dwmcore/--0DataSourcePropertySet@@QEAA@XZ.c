/*
 * XREFs of ??0DataSourcePropertySet@@QEAA@XZ @ 0x18027CD50
 * Callers:
 *     ?CreateDataSourceProxy@@YAJPEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoDataSourceProxy@@@Z @ 0x18027D018 (-CreateDataSourceProxy@@YAJPEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoDataSourceProxy@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800DE74C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1801585E8 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 */

DataSourcePropertySet *__fastcall DataSourcePropertySet::DataSourcePropertySet(DataSourcePropertySet *this)
{
  SIZE_T size_of; // rax
  _QWORD *v3; // rax
  DataSourcePropertySet *result; // rax

  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v3 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)this + 1) = v3;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 7LL;
  *((_QWORD *)this + 7) = 8LL;
  *(_DWORD *)this = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<IUnknown *>>,std::_Iterator_base0>>>::_Assign_grow(
    (_QWORD *)this + 3,
    0x10uLL,
    *((_QWORD *)this + 1));
  *((_QWORD *)this + 8) = 0LL;
  result = this;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  return result;
}
