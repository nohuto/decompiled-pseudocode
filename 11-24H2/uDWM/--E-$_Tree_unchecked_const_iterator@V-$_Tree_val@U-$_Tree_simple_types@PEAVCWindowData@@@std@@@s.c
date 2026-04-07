/*
 * XREFs of ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800BCC64
 * Callers:
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18009A16C (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAPEAU?$_Tree_node@PEAVCWindowData@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800BD728 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAPEAU-$_Tree_node@PE.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@2@V32@@Z @ 0x1800BDC30 (-erase@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData@@@std@@V-$allocator@PEAV.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@SAPEAU?$_Tree_node@PEAVCWindowData@@PEAX@2@PEAU32@@Z @ 0x1800BDB48 (-_Min@-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@SAPEAU-$_Tree_node@PEAVCWin.c)
 */

__int64 *__fastcall std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CWindowData *>>,std::_Iterator_base0>::operator++(
        __int64 *a1)
{
  __int64 *v1; // r8
  __int64 v2; // rcx
  __int64 i; // rax

  v1 = a1;
  v2 = *a1;
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 16) + 25LL) )
  {
    for ( i = *(_QWORD *)(v2 + 8); !*(_BYTE *)(i + 25) && v2 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
    {
      *v1 = i;
      v2 = i;
    }
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Min(*(_QWORD *)(v2 + 16), 0LL, v1);
  }
  *v1 = i;
  return v1;
}
