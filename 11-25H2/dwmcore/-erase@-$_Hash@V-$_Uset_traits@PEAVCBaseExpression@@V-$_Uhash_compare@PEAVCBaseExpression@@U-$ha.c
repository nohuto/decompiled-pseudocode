/*
 * XREFs of ?erase@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@2@V32@@Z @ 0x1801DA4E8
 * Callers:
 *     ?StartAsTriggeredAnimation@CNaturalAnimation@@UEAAJXZ @ 0x1802AACC0 (-StartAsTriggeredAnimation@CNaturalAnimation@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx

  v5 = 0LL;
  v6 = 0xCBF29CE484222325uLL;
  do
  {
    v7 = *((unsigned __int8 *)a3 + v5++ + 16);
    v6 = 0x100000001B3LL * (v7 ^ v6);
  }
  while ( v5 < 8 );
  v8 = a1[3];
  v9 = 2 * (v6 & a1[6]);
  if ( *(_QWORD **)(v8 + 16 * (v6 & a1[6]) + 8) == a3 )
  {
    if ( *(_QWORD **)(v8 + 16 * (v6 & a1[6])) == a3 )
    {
      v10 = a1[1];
      *(_QWORD *)(v8 + 16 * (v6 & a1[6])) = v10;
    }
    else
    {
      v10 = a3[1];
    }
    *(_QWORD *)(v8 + 8 * v9 + 8) = v10;
  }
  else if ( *(_QWORD **)(v8 + 16 * (v6 & a1[6])) == a3 )
  {
    *(_QWORD *)(v8 + 16 * (v6 & a1[6])) = *a3;
  }
  v11 = *a3;
  --a1[2];
  *(_QWORD *)a3[1] = v11;
  *(_QWORD *)(v11 + 8) = a3[1];
  operator delete(a3, 0x18uLL);
  *a2 = v11;
  return a2;
}
