/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@std@@@?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180095B8C
 * Callers:
 *     ?OnGraphicsDeviceLost@CWindowList@@QEAAXXZ @ 0x1800F1448 (-OnGraphicsDeviceLost@CWindowList@@QEAAXXZ.c)
 *     _dynamic_atexit_destructor_for__CWindowBorder::CCachedBorderBrush::s_cache__ @ 0x1800F9320 (_dynamic_atexit_destructor_for__CWindowBorder--CCachedBorderBrush--s_cache__.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@std@@@?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18007AF6C (--$_Freenode@V-$allocator@U-$_List_node@V-$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEA.c)
 */

void __fastcall std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>::_Free_non_head<std::allocator<std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>::_Freenode<std::allocator<std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>>>(
        a1,
        v2);
      v2 = v3;
    }
    while ( v3 );
  }
}
