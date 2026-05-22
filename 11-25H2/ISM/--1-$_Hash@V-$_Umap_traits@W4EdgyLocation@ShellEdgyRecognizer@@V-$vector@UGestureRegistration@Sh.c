/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@W4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@V?$_Uhash_compare@W4EdgyLocation@ShellEdgyRecognizer@@U?$hash@W4EdgyLocation@ShellEdgyRecognizer@@@std@@U?$equal_to@W4EdgyLocation@ShellEdgyRecognizer@@@4@@4@V?$allocator@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180196E00
 * Callers:
 *     ??1?$unordered_map@W4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@U?$hash@W4EdgyLocation@ShellEdgyRecognizer@@@4@U?$equal_to@W4EdgyLocation@ShellEdgyRecognizer@@@4@V?$allocator@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@@4@@std@@QEAA@XZ @ 0x180196F38 (--1-$unordered_map@W4EdgyLocation@ShellEdgyRecognizer@@V-$vector@UGestureRegistration@ShellGestu.c)
 *     ??1ShellGesturesProcessor@@UEAA@XZ @ 0x180197230 (--1ShellGesturesProcessor@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180156D74 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V-$.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<enum ShellEdgyRecognizer::EdgyLocation,std::vector<ShellGesturesProcessor::GestureRegistration>,std::_Uhash_compare<enum ShellEdgyRecognizer::EdgyLocation,std::hash<enum ShellEdgyRecognizer::EdgyLocation>,std::equal_to<enum ShellEdgyRecognizer::EdgyLocation>>,std::allocator<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>>,0>>::~_Hash<std::_Umap_traits<enum ShellEdgyRecognizer::EdgyLocation,std::vector<ShellGesturesProcessor::GestureRegistration>,std::_Uhash_compare<enum ShellEdgyRecognizer::EdgyLocation,std::hash<enum ShellEdgyRecognizer::EdgyLocation>,std::equal_to<enum ShellEdgyRecognizer::EdgyLocation>>,std::allocator<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>>,0>>(
        __int64 *a1)
{
  char *v2; // rcx

  v2 = (char *)a1[3];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)((a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  std::_List_node<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>,void *>>>(
    (__int64)v2,
    a1[1]);
  std::_Deallocate<16,0>((char *)a1[1], (const struct std::nothrow_t *)0x30);
}
