/*
 * XREFs of ??0?$list@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@2@@std@@QEAA@AEBV?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@1@@Z @ 0x18009A49C
 * Callers:
 *     ??0?$_Hash@V?$_Umap_traits@KPEAVInputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@1@@Z @ 0x180082AAC (--0-$_Hash@V-$_Umap_traits@KPEAVInputInfoValidator@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_t.c)
 *     ??0PenHapticInterface@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@Z @ 0x18018A1CC (--0PenHapticInterface@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEA.c)
 *     ??$?0V?$allocator@U?$_List_node@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@PEAX@std@@@std@@@?$_Hash@V?$_Umap_traits@GUSimpleHapticsControllerFeedback@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@@3@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@PEAX@std@@@1@@Z @ 0x18018B7E4 (--$-0V-$allocator@U-$_List_node@U-$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@PEAX@std@@@.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1801C2178 (--$_Try_emplace@AEBK$$V@-$map@KV-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_p.c)
 *     _lambda_c0e0b7aaf59f49f216d7dff859f9f140_::operator() @ 0x1801C3004 (_lambda_c0e0b7aaf59f49f216d7dff859f9f140_--operator().c)
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801C4840 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned long const,InputInfoValidator *>>::list<std::pair<unsigned long const,InputInfoValidator *>>(
        _QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v2 = v2;
  v2[1] = v2;
  *a1 = v2;
  return a1;
}
