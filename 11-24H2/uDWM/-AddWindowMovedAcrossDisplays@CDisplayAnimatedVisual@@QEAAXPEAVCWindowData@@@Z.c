/*
 * XREFs of ?AddWindowMovedAcrossDisplays@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800BCDB4
 * Callers:
 *     ?TrackCrossDisplaysMoveDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@HH@Z @ 0x18001AE00 (-TrackCrossDisplaysMoveDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@HH@Z.c)
 * Callees:
 *     ??$emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x1800843B0 (--$emplace@AEAPEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData.c)
 */

void __fastcall CDisplayAnimatedVisual::AddWindowMovedAcrossDisplays(
        CDisplayAnimatedVisual *this,
        struct CWindowData *a2)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 && *((_QWORD *)a2 + 56) && !*((_BYTE *)this + 264) )
    std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::emplace<CWindowData * &>(
      (__int64)this + 336,
      (__int64)v2);
}
