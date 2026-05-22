/*
 * XREFs of ??$_Emplace@AEBUKeyEventData@VirtualHotKeyTracker@@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@QEAAPEAU?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@1@QEAU21@AEBUKeyEventData@VirtualHotKeyTracker@@@Z @ 0x1801A9BB4
 * Callers:
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801A9F70 (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U_GUID@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18007DD30 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U_GUID@@PEAX@std@@@std@@@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::list<VirtualHotKeyTracker::KeyEventData>::_Emplace<VirtualHotKeyTracker::KeyEventData const &>(
        __int64 a1,
        __int64 a2,
        _OWORD *a3)
{
  _OWORD *v6; // rbx
  _QWORD *v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 8) == 0x555555555555555LL )
    std::_Xlength_error("list too long");
  v9 = a1;
  v10 = 0LL;
  v6 = operator new(0x30uLL);
  v6[1] = *a3;
  v6[2] = a3[1];
  ++*(_QWORD *)(a1 + 8);
  v7 = *(_QWORD **)(a2 + 8);
  *(_QWORD *)v6 = a2;
  *((_QWORD *)v6 + 1) = v7;
  v10 = 0LL;
  *(_QWORD *)(a2 + 8) = v6;
  *v7 = v6;
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<_GUID,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<_GUID,void *>>>((__int64)&v9);
  return v6;
}
