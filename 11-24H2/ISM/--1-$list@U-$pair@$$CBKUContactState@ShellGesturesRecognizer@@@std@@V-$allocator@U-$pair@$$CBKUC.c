/*
 * XREFs of ??1?$list@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@V?$allocator@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@@2@@std@@QEAA@XZ @ 0x18009B910
 * Callers:
 *     _ShellGesturesRecognizer::ShellGesturesRecognizer_::_1_::dtor$3 @ 0x1801D27C3 (_ShellGesturesRecognizer--ShellGesturesRecognizer_--_1_--dtor$3.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18007D798 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUContactState@ShellGesturesRecognizer@.c)
 */

void __fastcall std::list<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>>::~list<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>>(
        __int64 *a1)
{
  std::_List_node<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((char *)*a1, (const struct std::nothrow_t *)0x38);
}
