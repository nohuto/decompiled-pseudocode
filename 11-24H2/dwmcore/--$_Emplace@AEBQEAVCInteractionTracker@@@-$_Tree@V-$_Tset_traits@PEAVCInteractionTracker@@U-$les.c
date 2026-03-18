/*
 * XREFs of ??$_Emplace@AEBQEAVCInteractionTracker@@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@_N@1@AEBQEAVCInteractionTracker@@@Z @ 0x1800E2BD0
 * Callers:
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1800E23A4 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@QEAAPEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@2@QEAU32@@Z @ 0x1800E2CD4 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@QEAAPEAU-$_.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18024DD10 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::_Emplace<CInteractionTracker * const &>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v3; // rsi
  __int64 *v7; // rdx
  __int64 *v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF

  v3 = (__int64 *)*a1;
  v7 = (__int64 *)*a1;
  v8 = *(__int64 **)(*a1 + 8LL);
  v12 = (unsigned __int64)v8;
  if ( !*((_BYTE *)v8 + 25) )
  {
    v9 = *a3;
    do
    {
      *(_QWORD *)&v12 = v8;
      if ( v8[4] < v9 )
      {
        DWORD2(v12) = 0;
        v8 = (__int64 *)v8[2];
      }
      else
      {
        v7 = v8;
        DWORD2(v12) = 1;
        v8 = (__int64 *)*v8;
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
  }
  if ( *((_BYTE *)v7 + 25) || *a3 < v7[4] )
  {
    if ( a1[1] == 0x666666666666666LL )
      std::_Throw_tree_length_error();
    v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *(_QWORD *)(v10 + 32) = *a3;
    *(_QWORD *)v10 = v3;
    *(_QWORD *)(v10 + 8) = v3;
    *(_QWORD *)(v10 + 16) = v3;
    *(_WORD *)(v10 + 24) = 0;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>::_Insert_node(a1, &v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
