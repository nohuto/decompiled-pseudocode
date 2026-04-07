/*
 * XREFs of ??$?0AEBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@$0A@@?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@QEAA@AEBT_LARGE_INTEGER@@$$QEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@Z @ 0x1800AB55C
 * Callers:
 *     ??$emplace@AEBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@std@@_N@1@AEBT_LARGE_INTEGER@@$$QEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@Z @ 0x1800AC74C (--$emplace@AEBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@-$_Hash@V-$.c)
 * Callees:
 *     ??0CAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@$$QEAU01@@Z @ 0x1800ACD40 (--0CAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@$$QEAU01@@Z.c)
 */

_QWORD *__fastcall std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *v4; // r11
  _QWORD *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *result; // rax

  *a1 = *a2;
  CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY::CAPTURE_DISPLAY_MAP_ENTRY(a1 + 1, a3);
  v5 = v4 + 7;
  a1[8] = 0LL;
  if ( a1 + 8 != v4 + 7 )
  {
    a1[8] = *v5;
    *v5 = 0LL;
  }
  v6 = v4[10];
  v7 = v4[9];
  v8 = v4[8];
  v4[10] = 0LL;
  v4[9] = 0LL;
  v4[8] = 0LL;
  a1[9] = v8;
  a1[10] = v7;
  a1[11] = v6;
  v9 = v4[11];
  v10 = v4[13];
  v11 = v4[12];
  v4[13] = 0LL;
  v4[12] = 0LL;
  v4[11] = 0LL;
  a1[12] = v9;
  result = a1;
  a1[13] = v11;
  a1[14] = v10;
  return result;
}
