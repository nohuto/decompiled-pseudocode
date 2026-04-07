/*
 * XREFs of ?_Min@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@SAPEAU?$_Tree_node@PEAVCWindowData@@PEAX@2@PEAU32@@Z @ 0x1800BDB48
 * Callers:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800BCC64 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowData@@@std@@@s.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAPEAU?$_Tree_node@PEAVCWindowData@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800BD728 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAPEAU-$_Tree_node@PE.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Min(_QWORD *a1)
{
  __int64 *v1; // rdx

  v1 = (__int64 *)*a1;
  if ( !*(_BYTE *)(*a1 + 25LL) )
  {
    do
    {
      a1 = v1;
      v1 = (__int64 *)*v1;
    }
    while ( !*((_BYTE *)v1 + 25) );
  }
  return a1;
}
