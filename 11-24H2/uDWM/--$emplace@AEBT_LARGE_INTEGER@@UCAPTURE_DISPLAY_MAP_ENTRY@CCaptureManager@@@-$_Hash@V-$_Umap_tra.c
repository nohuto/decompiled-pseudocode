/*
 * XREFs of ??$emplace@AEBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@std@@_N@1@AEBT_LARGE_INTEGER@@$$QEAUCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@Z @ 0x1800AC588
 * Callers:
 *     ?_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B2664 (-_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBU.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180096728 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Find_last@T_LARGE_INTEGER@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@PEAX@std@@@1@AEBT_LARGE_INTEGER@@_K@Z @ 0x1800AC214 (--$_Find_last@T_LARGE_INTEGER@@@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@PEAXV-$_Uhash_compare@T.c)
 *     ??$_Hash_representation@_J@std@@YA_KAEB_J@Z @ 0x1800AC3B8 (--$_Hash_representation@_J@std@@YA_KAEB_J@Z.c)
 *     ??0CAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@$$QEAU01@@Z @ 0x1800ACD40 (--0CAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@$$QEAU01@@Z.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800ACEC4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DIS.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800B3670 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800B384C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureMana.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>>,0>>::emplace<_LARGE_INTEGER const &,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>(
        float *a1,
        __int64 a2,
        const unsigned __int8 *a3,
        __int64 a4)
{
  __int64 v8; // rbp
  const struct std::nothrow_t *v9; // rdx
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  float v12; // xmm0_4
  __int64 v13; // rcx
  float v14; // xmm1_4
  __int64 v15; // rax
  __int64 v16; // rax
  char *v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  char *v21; // r9
  char *v23[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v24; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v25; // [rsp+38h] [rbp-30h]

  v8 = std::_Hash_representation<__int64>(a3);
  std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::_Find_last<_LARGE_INTEGER>(
    a1,
    v23,
    (__int64)a3,
    v8);
  if ( !v23[1] )
  {
    if ( *((_QWORD *)a1 + 2) == 0x333333333333333LL )
      std::_Dwm_Xlength_error(0LL);
    v24 = a1 + 2;
    v10 = operator new[](0x50uLL, v9);
    v25 = v10;
    v10[2] = *(_QWORD *)a3;
    CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY::CAPTURE_DISPLAY_MAP_ENTRY(v10 + 3, a4);
    v11 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v11 < 0 )
      v12 = (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1))
          + (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1));
    else
      v12 = (float)(int)v11;
    v13 = *((_QWORD *)a1 + 7);
    if ( v13 < 0 )
    {
      v15 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v13 >> 1);
      v14 = (float)(int)v15 + (float)(int)v15;
    }
    else
    {
      v14 = (float)(int)v13;
    }
    if ( (float)(v12 / v14) > *a1 )
    {
      v16 = std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>>,0>>::_Desired_grow_bucket_count(a1);
      std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>>,0>>::_Forced_rehash(
        a1,
        v16);
      *(_OWORD *)v23 = *(_OWORD *)std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::_Find_last<_LARGE_INTEGER>(
                                    a1,
                                    v23,
                                    (__int64)(v10 + 2),
                                    v8);
    }
    v25 = 0LL;
    v17 = v23[0];
    v18 = (_QWORD *)*((_QWORD *)v23[0] + 1);
    ++*((_QWORD *)a1 + 2);
    *v10 = v17;
    v10[1] = v18;
    *v18 = v10;
    *((_QWORD *)v17 + 1) = v10;
    v19 = *((_QWORD *)a1 + 3);
    v20 = 2 * (v8 & *((_QWORD *)a1 + 6));
    v21 = *(char **)(v19 + 16 * (v8 & *((_QWORD *)a1 + 6)));
    if ( v21 == *((char **)a1 + 1) )
    {
      *(_QWORD *)(v19 + 16 * (v8 & *((_QWORD *)a1 + 6))) = v10;
LABEL_17:
      *(_QWORD *)(v19 + 8 * v20 + 8) = v10;
      goto LABEL_18;
    }
    if ( v21 == v17 )
    {
      *(_QWORD *)(v19 + 16 * (v8 & *((_QWORD *)a1 + 6))) = v10;
    }
    else if ( *(_QWORD **)(v19 + 16 * (v8 & *((_QWORD *)a1 + 6)) + 8) == v18 )
    {
      goto LABEL_17;
    }
LABEL_18:
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>,void *>>>(&v24);
    return a2;
  }
  *(char **)a2 = v23[1];
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
