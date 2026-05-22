/*
 * XREFs of ??C?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@QEBAPEBU?$pair@$$CBIUComboButtonRegistration@@@1@XZ @ 0x18019E5F8
 * Callers:
 *     ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x18019EAEC (-FindExactComboButtonMatch@ButtonRecognizer@@AEBA-AV-$reverse_iterator@V-$_Tree_const_iterator@V.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,ComboButtonRegistration>>>>>::operator->(
        __int64 **a1)
{
  __int64 *v1; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx

  v1 = *a1;
  if ( *((_BYTE *)v1 + 25) )
  {
    i = (__int64 *)v1[2];
  }
  else
  {
    i = (__int64 *)*v1;
    if ( *(_BYTE *)(*v1 + 25) )
    {
      for ( i = (__int64 *)v1[1]; !*((_BYTE *)i + 25) && v1 == (__int64 *)*i; i = (__int64 *)i[1] )
        v1 = i;
      if ( *((_BYTE *)v1 + 25) )
        i = v1;
    }
    else
    {
      for ( j = (__int64 *)i[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
        i = j;
    }
  }
  return i + 4;
}
