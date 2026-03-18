/*
 * XREFs of ??1CCursorManager@@QEAA@XZ @ 0x180258B98
 * Callers:
 *     _dynamic_atexit_destructor_for__g_CursorManager__ @ 0x1802E8F00 (_dynamic_atexit_destructor_for__g_CursorManager__.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@_KPEAVCCursorState@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCCursorState@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1801974B8 (--1-$_Tree@V-$_Tmap_traits@_KPEAVCCursorState@@U-$less@_K@std@@V-$allocator@U-$pair@$$CB_KPEAVCC.c)
 */

void __fastcall CCursorManager::~CCursorManager(CCursorManager *this)
{
  std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>((_QWORD **)this + 5);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}
