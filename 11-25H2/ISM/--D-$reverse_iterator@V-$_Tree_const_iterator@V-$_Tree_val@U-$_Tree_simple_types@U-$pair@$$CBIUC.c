/*
 * XREFs of ??D?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@QEBAAEBU?$pair@$$CBIUComboButtonRegistration@@@1@XZ @ 0x18019E650
 * Callers:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x18019E7DC (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,ComboButtonRegistration>>>>>::operator*(
        __int64 **a1)
{
  __int64 *v1; // rcx
  __int64 *v2; // rax
  __int64 *v3; // rdx
  __int64 *i; // rcx

  v1 = *a1;
  if ( *((_BYTE *)v1 + 25) )
  {
    v2 = (__int64 *)v1[2];
  }
  else
  {
    v2 = (__int64 *)*v1;
    if ( *(_BYTE *)(*v1 + 25) )
    {
      v2 = (__int64 *)v1[1];
      if ( !*((_BYTE *)v2 + 25) )
      {
        v3 = v1;
        do
        {
          if ( v3 != (__int64 *)*v2 )
            break;
          v1 = v2;
          v2 = (__int64 *)v2[1];
          v3 = v1;
        }
        while ( !*((_BYTE *)v2 + 25) );
      }
      if ( *((_BYTE *)v1 + 25) )
        v2 = v1;
    }
    else
    {
      for ( i = (__int64 *)v2[2]; !*((_BYTE *)i + 25); i = (__int64 *)i[2] )
        v2 = i;
    }
  }
  return v2 + 4;
}
