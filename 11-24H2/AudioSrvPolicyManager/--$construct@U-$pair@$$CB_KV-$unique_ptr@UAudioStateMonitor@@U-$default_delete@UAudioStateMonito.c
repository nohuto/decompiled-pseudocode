/*
 * XREFs of ??$construct@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@AEA_KPEAUAudioStateMonitor@@@?$_Default_allocator_traits@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@std@@@1@QEAU?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@1@AEA_K$$QEAPEAUAudioStateMonitor@@@Z @ 0x1800446B8
 * Callers:
 *     ??$emplace@AEA_KPEAUAudioStateMonitor@@@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@_N@1@AEA_K$$QEAPEAUAudioStateMonitor@@@Z @ 0x1800446D0 (--$emplace@AEA_KPEAUAudioStateMonitor@@@-$_Hash@V-$_Umap_traits@_KV-$unique_ptr@UAudioStateMonit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<std::_List_node<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>,void *>>>::construct<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>,unsigned __int64 &,AudioStateMonitor *>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 result; // rax

  *a2 = *a3;
  result = *a4;
  a2[1] = *a4;
  return result;
}
