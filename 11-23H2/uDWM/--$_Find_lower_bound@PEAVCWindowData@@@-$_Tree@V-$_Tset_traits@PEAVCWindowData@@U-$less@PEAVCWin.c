/*
 * XREFs of ??$_Find_lower_bound@PEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@@1@AEBQEAVCWindowData@@@Z @ 0x18001EAD0
 * Callers:
 *     ?OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18001EA38 (-OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ??$_Emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x1800B6C7C (--$_Emplace@AEAPEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowDat.c)
 *     ?find@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@2@AEBQEAVCWindowData@@@Z @ 0x1800B88A0 (-find@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData@@@std@@V-$allocator@PEAVC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::_Find_lower_bound<CWindowData *>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  unsigned __int64 v6; // r8
  int v7; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v6 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( v4[4] >= v6 )
      {
        *(_QWORD *)(a2 + 16) = v4;
        v7 = 1;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        v7 = 0;
      }
      *(_DWORD *)(a2 + 8) = v7;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
