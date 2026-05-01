/*
 * XREFs of ??$find@X@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@1@AEBI@Z @ 0x1801F5558
 * Callers:
 *     ?GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAI@Z @ 0x18047096C (-GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAI@Z.c)
 *     ?DeleteProcessId@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x180663148 (-DeleteProcessId@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::find<void>(
        _QWORD *a1,
        _QWORD *a2,
        _DWORD *a3)
{
  __int64 v4; // r9
  unsigned __int64 i; // r10
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // r9

  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v6 = *((unsigned __int8 *)a3 + i);
    v4 = 0x100000001B3LL * (v6 ^ v4);
  }
  v7 = v4 & a1[6];
  v8 = a1[3];
  v9 = 2 * v7;
  v10 = *(_QWORD *)(v8 + 8 * v9 + 8);
  if ( v10 == a1[1] )
  {
LABEL_4:
    v10 = 0LL;
  }
  else
  {
    v12 = *(_QWORD *)(v8 + 8 * v9);
    while ( *a3 != *(_DWORD *)(v10 + 16) )
    {
      if ( v10 == v12 )
        goto LABEL_4;
      v10 = *(_QWORD *)(v10 + 8);
    }
  }
  if ( !v10 )
    v10 = a1[1];
  *a2 = v10;
  return a2;
}
