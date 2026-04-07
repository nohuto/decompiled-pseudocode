/*
 * XREFs of ??$emplace@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@1@@Z @ 0x1800AC90C
 * Callers:
 *     ?_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B2F78 (-_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAV.c)
 * Callees:
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180096728 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$?0U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@1@$$QEAU?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@1@@Z @ 0x1800AB5F8 (--$-0U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@-$_List_node.c)
 *     ??$_Find_last@T_LARGE_INTEGER@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@PEAX@std@@@1@AEBT_LARGE_INTEGER@@_K@Z @ 0x1800AC214 (--$_Find_last@T_LARGE_INTEGER@@@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@PEAXV-$_Uhash_compare@T.c)
 *     ??$_Hash_representation@_J@std@@YA_KAEB_J@Z @ 0x1800AC3B8 (--$_Hash_representation@_J@std@@YA_KAEB_J@Z.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800ACF24 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WIN.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800B3670 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800B3B8C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManag.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>>,0>>::emplace<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>>(
        float *a1,
        __int64 a2,
        const unsigned __int8 *a3)
{
  __int64 v6; // rbp
  __int64 v7; // rdx
  float v8; // xmm0_4
  __int64 v9; // rcx
  float v10; // xmm1_4
  __int64 v11; // rax
  __int64 v12; // rax
  char **v13; // rbx
  char *v14; // rdx
  char *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  char *v18; // r9
  const struct std::nothrow_t *v20; // [rsp+20h] [rbp-28h] BYREF
  char **v21; // [rsp+28h] [rbp-20h]
  char *v22[2]; // [rsp+30h] [rbp-18h] BYREF

  v6 = std::_Hash_representation<__int64>(a3);
  std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::_Find_last<_LARGE_INTEGER>(
    a1,
    v22,
    (__int64)a3,
    v6);
  if ( !v22[1] )
  {
    if ( *((_QWORD *)a1 + 2) == 0x3FFFFFFFFFFFFFFLL )
      std::_Dwm_Xlength_error(0LL);
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>,void *>>>(
      &v20,
      (const struct std::nothrow_t *)(a1 + 2),
      (__int64)a3);
    v7 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v7 < 0 )
      v8 = (float)(v7 & 1 | (unsigned int)((unsigned __int64)v7 >> 1))
         + (float)(v7 & 1 | (unsigned int)((unsigned __int64)v7 >> 1));
    else
      v8 = (float)(int)v7;
    v9 = *((_QWORD *)a1 + 7);
    if ( v9 < 0 )
    {
      v11 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v9 >> 1);
      v10 = (float)(int)v11 + (float)(int)v11;
    }
    else
    {
      v10 = (float)(int)v9;
    }
    if ( (float)(v8 / v10) <= *a1 )
    {
      v13 = v21;
    }
    else
    {
      v12 = std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>>,0>>::_Desired_grow_bucket_count(a1);
      std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>>,0>>::_Forced_rehash(
        a1,
        v12);
      v13 = v21;
      *(_OWORD *)v22 = *(_OWORD *)std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::_Find_last<_LARGE_INTEGER>(
                                    a1,
                                    v22,
                                    (__int64)(v21 + 2),
                                    v6);
    }
    v21 = 0LL;
    v14 = v22[0];
    v15 = (char *)*((_QWORD *)v22[0] + 1);
    ++*((_QWORD *)a1 + 2);
    *v13 = v14;
    v13[1] = v15;
    *(_QWORD *)v15 = v13;
    *((_QWORD *)v14 + 1) = v13;
    v16 = *((_QWORD *)a1 + 3);
    v17 = 2 * (v6 & *((_QWORD *)a1 + 6));
    v18 = *(char **)(v16 + 16 * (v6 & *((_QWORD *)a1 + 6)));
    if ( v18 == *((char **)a1 + 1) )
    {
      *(_QWORD *)(v16 + 16 * (v6 & *((_QWORD *)a1 + 6))) = v13;
LABEL_18:
      *(_QWORD *)(v16 + 8 * v17 + 8) = v13;
      goto LABEL_19;
    }
    if ( v18 == v14 )
    {
      *(_QWORD *)(v16 + 16 * (v6 & *((_QWORD *)a1 + 6))) = v13;
    }
    else if ( *(char **)(v16 + 16 * (v6 & *((_QWORD *)a1 + 6)) + 8) == v15 )
    {
      goto LABEL_18;
    }
LABEL_19:
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>,void *>>>(&v20);
    return a2;
  }
  *(char **)a2 = v22[1];
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
