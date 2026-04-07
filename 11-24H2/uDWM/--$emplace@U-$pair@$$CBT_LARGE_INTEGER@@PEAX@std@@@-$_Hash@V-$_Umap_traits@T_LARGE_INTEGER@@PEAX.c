/*
 * XREFs of ??$emplace@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBT_LARGE_INTEGER@@PEAX@1@@Z @ 0x1800ED4D0
 * Callers:
 *     ?RegisterWindowCloseEvent@CWindowList@@AEAAJPEAUHWND__@@PEAXUDWM_WINDOW_CLOSE_EVENT_TOKEN@@@Z @ 0x1800F29F4 (-RegisterWindowCloseEvent@CWindowList@@AEAAJPEAUHWND__@@PEAXUDWM_WINDOW_CLOSE_EVENT_TOKEN@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039930 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18008A0E0 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@V-$com_ptr_t@VCBitmapSo.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180096728 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Find_last@T_LARGE_INTEGER@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@PEAX@std@@@1@AEBT_LARGE_INTEGER@@_K@Z @ 0x1800AC214 (--$_Find_last@T_LARGE_INTEGER@@@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@PEAXV-$_Uhash_compare@T.c)
 *     ??$_Hash_representation@_J@std@@YA_KAEB_J@Z @ 0x1800AC3B8 (--$_Hash_representation@_J@std@@YA_KAEB_J@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800B3670 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800F41A4 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@PEAXV-$_Uhash_compare@T_LARGE_INTEGER@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::emplace<std::pair<_LARGE_INTEGER const,void *>>(
        float *a1,
        __int64 a2,
        const unsigned __int8 *a3)
{
  __int64 v6; // r14
  const struct std::nothrow_t *v7; // rdx
  _OWORD *v8; // rbx
  __int64 v9; // rdx
  float v10; // xmm0_4
  __int64 v11; // rcx
  float v12; // xmm1_4
  __int64 v13; // rax
  __int64 v14; // rax
  char *v15; // rdx
  _QWORD *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  char *v19; // r9
  _QWORD *v21; // [rsp+20h] [rbp-38h] BYREF
  _OWORD *v22; // [rsp+28h] [rbp-30h]
  char *v23[2]; // [rsp+30h] [rbp-28h] BYREF

  v6 = std::_Hash_representation<__int64>(a3);
  std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::_Find_last<_LARGE_INTEGER>(
    a1,
    v23,
    (__int64)a3,
    v6);
  if ( !v23[1] )
  {
    if ( *((_QWORD *)a1 + 2) == 0x7FFFFFFFFFFFFFFLL )
      std::_Dwm_Xlength_error(0LL);
    v21 = a1 + 2;
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL, v7);
    v22 = v8;
    v8[1] = *(_OWORD *)a3;
    v9 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v9 < 0 )
      v10 = (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1))
          + (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1));
    else
      v10 = (float)(int)v9;
    v11 = *((_QWORD *)a1 + 7);
    if ( v11 < 0 )
    {
      v13 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v11 >> 1);
      v12 = (float)(int)v13 + (float)(int)v13;
    }
    else
    {
      v12 = (float)(int)v11;
    }
    if ( (float)(v10 / v12) > *a1 )
    {
      v14 = std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>>,0>>::_Desired_grow_bucket_count(
              (__int64)a1,
              v9);
      std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::_Forced_rehash(
        a1,
        v14);
      *(_OWORD *)v23 = *(_OWORD *)std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::_Find_last<_LARGE_INTEGER>(
                                    a1,
                                    v23,
                                    (__int64)(v8 + 1),
                                    v6);
    }
    v22 = 0LL;
    v15 = v23[0];
    v16 = (_QWORD *)*((_QWORD *)v23[0] + 1);
    ++*((_QWORD *)a1 + 2);
    *(_QWORD *)v8 = v15;
    *((_QWORD *)v8 + 1) = v16;
    *v16 = v8;
    *((_QWORD *)v15 + 1) = v8;
    v17 = *((_QWORD *)a1 + 3);
    v18 = 2 * (v6 & *((_QWORD *)a1 + 6));
    v19 = *(char **)(v17 + 16 * (v6 & *((_QWORD *)a1 + 6)));
    if ( v19 == *((char **)a1 + 1) )
    {
      *(_QWORD *)(v17 + 16 * (v6 & *((_QWORD *)a1 + 6))) = v8;
LABEL_17:
      *(_QWORD *)(v17 + 8 * v18 + 8) = v8;
      goto LABEL_18;
    }
    if ( v19 == v15 )
    {
      *(_QWORD *)(v17 + 16 * (v6 & *((_QWORD *)a1 + 6))) = v8;
    }
    else if ( *(_QWORD **)(v17 + 16 * (v6 & *((_QWORD *)a1 + 6)) + 8) == v16 )
    {
      goto LABEL_17;
    }
LABEL_18:
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 1;
    std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>((__int64)&v21);
    return a2;
  }
  *(char **)a2 = v23[1];
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
