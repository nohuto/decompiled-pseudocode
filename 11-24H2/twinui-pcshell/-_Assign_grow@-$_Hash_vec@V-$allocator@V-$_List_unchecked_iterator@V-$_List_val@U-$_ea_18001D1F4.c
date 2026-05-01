/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@std@@@std@@@2@@Z @ 0x18001D1F4
 * Callers:
 *     ??0?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@1@AEBV?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@1@@Z @ 0x1801F4068 (--0-$_Hash@V-$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V-$_Uhash_co.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18035F4C4 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18001D4AC (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802DF760 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

unsigned __int64 *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>>>>>::_Assign_grow(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v5; // rdx
  __int64 v7; // rcx
  __int64 size_of; // rax
  __int64 v9; // rax
  void *v10; // rcx
  unsigned __int64 *v11; // rdi
  __int64 v12; // rdx
  const struct std::nothrow_t *v13; // rdx
  unsigned __int64 *result; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  void *v17; // [rsp+28h] [rbp-20h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v7 = v5 - *(_QWORD *)a1;
  if ( v7 >> 3 >= a2 )
  {
    result = 0LL;
    v15 = (unsigned __int64)(v7 + 7) >> 3;
    if ( *(_QWORD *)a1 > v5 )
      v15 = 0LL;
    if ( v15 )
    {
      result = (unsigned __int64 *)a3;
      memset64(*(void **)a1, a3, v15);
    }
  }
  else
  {
    size_of = std::_Get_size_of_n<8>(a2);
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v10 = *(void **)a1;
    v11 = (unsigned __int64 *)v9;
    v12 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
    if ( v12 )
    {
      v13 = (const struct std::nothrow_t *)(8 * v12);
      v16 = (unsigned __int64)v13;
      v17 = v10;
      if ( (unsigned __int64)v13 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v17, &v16);
        v13 = (const struct std::nothrow_t *)v16;
        v10 = v17;
      }
      operator delete(v10, v13);
    }
    result = &v11[a2];
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = result;
    *(_QWORD *)(a1 + 16) = result;
    while ( v11 != result )
      *v11++ = a3;
  }
  return result;
}
