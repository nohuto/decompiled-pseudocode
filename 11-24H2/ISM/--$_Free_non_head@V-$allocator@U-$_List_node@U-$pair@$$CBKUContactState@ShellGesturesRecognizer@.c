/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18007D798
 * Callers:
 *     ??1?$_Hash@V?$_Umap_traits@KUContactState@ShellGesturesRecognizer@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18007D744 (--1-$_Hash@V-$_Umap_traits@KUContactState@ShellGesturesRecognizer@@V-$_Uhash_compare@KU-$hash@K@.c)
 *     ??1?$list@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@V?$allocator@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@@2@@std@@QEAA@XZ @ 0x18009B910 (--1-$list@U-$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@V-$allocator@U-$pair@$$CBKUC.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  char *v2; // rcx
  char *v3; // rbx

  **(_QWORD **)(a2 + 8) = 0LL;
  v2 = *(char **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v3 = *(char **)v2;
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x38);
      v2 = v3;
    }
    while ( v3 );
  }
}
