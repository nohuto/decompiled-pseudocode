/*
 * XREFs of ?UnRegisterBatchProcessingCompleteListener@CExpressionManager@@QEAAXPEAVIBatchProcessingCompleteListener@@@Z @ 0x180113E7C
 * Callers:
 *     ??1CAnimationController@@UEAA@XZ @ 0x180113E2C (--1CAnimationController@@UEAA@XZ.c)
 * Callees:
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V?$_Uhash_compare@PEAVIBatchProcessingCompleteListener@@U?$hash@PEAVIBatchProcessingCompleteListener@@@std@@U?$equal_to@PEAVIBatchProcessingCompleteListener@@@3@@std@@V?$allocator@PEAVIBatchProcessingCompleteListener@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVIBatchProcessingCompleteListener@@@std@@@std@@@2@V32@@Z @ 0x180113F1C (-erase@-$_Hash@V-$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V-$_Uhash_compare@PEAVIBatc.c)
 */

void __fastcall CExpressionManager::UnRegisterBatchProcessingCompleteListener(
        CExpressionManager *this,
        struct IBatchProcessingCompleteListener *a2)
{
  __int64 v2; // r8
  unsigned __int64 i; // r9
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // r8
  char v9; // [rsp+30h] [rbp+8h] BYREF
  struct IBatchProcessingCompleteListener *v10; // [rsp+38h] [rbp+10h]

  v10 = a2;
  v2 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v4 = *((unsigned __int8 *)&v10 + i);
    v2 = 0x100000001B3LL * (v4 ^ v2);
  }
  v5 = *((_QWORD *)this + 76);
  v6 = *((_QWORD *)this + 74);
  v7 = 2 * (v2 & *((_QWORD *)this + 79));
  v8 = *(_QWORD *)(v5 + 16 * (v2 & *((_QWORD *)this + 79)) + 8);
  if ( v8 == v6 )
  {
LABEL_6:
    v8 = 0LL;
  }
  else
  {
    while ( a2 != *(struct IBatchProcessingCompleteListener **)(v8 + 16) )
    {
      if ( v8 == *(_QWORD *)(v5 + 8 * v7) )
        goto LABEL_6;
      v8 = *(_QWORD *)(v8 + 8);
    }
  }
  if ( v8 )
  {
    if ( v8 != v6 )
      std::_Hash<std::_Uset_traits<IBatchProcessingCompleteListener *,std::_Uhash_compare<IBatchProcessingCompleteListener *,std::hash<IBatchProcessingCompleteListener *>,std::equal_to<IBatchProcessingCompleteListener *>>,std::allocator<IBatchProcessingCompleteListener *>,0>>::erase(
        (char *)this + 584,
        &v9);
  }
}
