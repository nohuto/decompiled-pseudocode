/*
 * XREFs of ??1?$list@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape2@@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape2@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800D538C
 * Callers:
 *     _GestureServices::GestureServices_::_1_::dtor$15 @ 0x1801CFA06 (_GestureServices--GestureServices_--_1_--dtor$15.c)
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$12 @ 0x1801D1D43 (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$12.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_std::shared_ptr_GestureHandler__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__std::shared_ptr_GestureHandler______0___::_Hash_std::_Umap_traits_unsigned___int64_std::shared_ptr_GestureHandler__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__std::shared_ptr_GestureHandler______0____::_1_::dtor$0 @ 0x1801D3B3D (_std--_Hash_std--_Umap_traits_unsigned___int64_std--shared_ptr_GestureHandler__std--_Uhash_compa.c)
 *     _SystemCursorService2::SystemCursorService2_::_1_::dtor$9 @ 0x1801D6958 (_SystemCursorService2--SystemCursorService2_--_1_--dtor$9.c)
 *     _SystemCursorShape2::SystemCursorShape2_::_1_::dtor$4 @ 0x1801D6992 (_SystemCursorShape2--SystemCursorShape2_--_1_--dtor$4.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D4974 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$shared_ptr@VCustomCursorApplication.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape2>>>::~list<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape2>>>(
        __int64 *a1)
{
  std::_List_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((char *)*a1, (const struct std::nothrow_t *)0x28);
}
