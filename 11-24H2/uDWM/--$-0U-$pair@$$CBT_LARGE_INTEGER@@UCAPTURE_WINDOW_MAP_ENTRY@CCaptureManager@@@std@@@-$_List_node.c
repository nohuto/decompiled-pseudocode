/*
 * XREFs of ??$?0U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@1@$$QEAU?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@1@@Z @ 0x1800AB5F8
 * Callers:
 *     ??$emplace@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@1@@Z @ 0x1800AC90C (--$emplace@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@-$_Has.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
const struct std::nothrow_t **__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>,void *>>>(
        const struct std::nothrow_t **a1,
        const struct std::nothrow_t *a2,
        __int64 a3)
{
  const struct std::nothrow_t *v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // r8

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v5 = (const struct std::nothrow_t *)operator new[](0x40uLL, a2);
  a1[1] = v5;
  *((_QWORD *)v5 + 2) = *(_QWORD *)a3;
  *((_QWORD *)v5 + 3) = *(_QWORD *)(a3 + 8);
  v6 = (_QWORD *)(a3 + 16);
  *((_QWORD *)v5 + 4) = 0LL;
  if ( (const struct std::nothrow_t *)((char *)v5 + 32) != (const struct std::nothrow_t *)(a3 + 16) )
  {
    *((_QWORD *)v5 + 4) = *v6;
    *v6 = 0LL;
  }
  *((_QWORD *)v5 + 5) = *(_QWORD *)(a3 + 24);
  v7 = (_QWORD *)(a3 + 32);
  *((_QWORD *)v5 + 6) = 0LL;
  if ( (const struct std::nothrow_t *)((char *)v5 + 48) != (const struct std::nothrow_t *)(a3 + 32) )
  {
    *((_QWORD *)v5 + 6) = *v7;
    *v7 = 0LL;
  }
  *((_BYTE *)v5 + 56) = *(_BYTE *)(a3 + 40);
  *((_BYTE *)v5 + 57) = *(_BYTE *)(a3 + 41);
  return a1;
}
