/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800ACC08
 * Callers:
 *     ?StopFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B1AE0 (-StopFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800AC360 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_M.c)
 *     ??$_Hash_representation@_J@std@@YA_KAEB_J@Z @ 0x1800AC3B8 (--$_Hash_representation@_J@std@@YA_KAEB_J@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>>>>,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // r11
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbx

  v5 = std::_Hash_representation<__int64>((const unsigned __int8 *)(a3 + 16));
  v8 = a1[3];
  v9 = 2 * (a1[6] & v5);
  if ( *(_QWORD **)(v8 + 16 * (a1[6] & v5) + 8) == v7 )
  {
    if ( *(_QWORD **)(v8 + 16 * (a1[6] & v5)) == v7 )
    {
      v10 = a1[1];
      *(_QWORD *)(v8 + 8 * v9) = v10;
    }
    else
    {
      v10 = v7[1];
    }
    *(_QWORD *)(v8 + 8 * v9 + 8) = v10;
  }
  else if ( *(_QWORD **)(v8 + 16 * (a1[6] & v5)) == v7 )
  {
    *(_QWORD *)(v8 + 16 * (a1[6] & v5)) = *v7;
  }
  v11 = *v7;
  --a1[2];
  *(_QWORD *)v7[1] = v11;
  *(_QWORD *)(v11 + 8) = v7[1];
  std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>,void *>>>(
    v6,
    (__int64)v7);
  *a2 = v11;
  return a2;
}
