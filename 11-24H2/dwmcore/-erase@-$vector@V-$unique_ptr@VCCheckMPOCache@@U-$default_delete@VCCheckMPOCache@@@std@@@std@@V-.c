/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1801DE7E8
 * Callers:
 *     ?RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ @ 0x18023EF34 (-RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ.c)
 * Callees:
 *     ??1?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@QEAA@XZ @ 0x1801DE880 (--1-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@@QEAA@XZ.c)
 *     ??$?4U?$default_delete@VCCheckMPOCache@@@std@@$0A@@?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801DE8A0 (--$-4U-$default_delete@VCCheckMPOCache@@@std@@$0A@@-$unique_ptr@VCCheckMPOCache@@U-$default_dele.c)
 */

_QWORD *__fastcall std::vector<std::unique_ptr<CCheckMPOCache>>::erase(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 i; // rsi
  _QWORD *result; // rax

  v4 = a4;
  if ( a3 != a4 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = a3;
    if ( a4 != v8 )
    {
      do
      {
        std::unique_ptr<CCheckMPOCache>::operator=<std::default_delete<CCheckMPOCache>,0>(v9, v4);
        v9 += 8LL;
        v4 += 8LL;
      }
      while ( v4 != v8 );
    }
    v10 = *(_QWORD *)(a1 + 8);
    for ( i = v9; i != v10; i += 8LL )
      std::unique_ptr<CCheckMPOCache>::~unique_ptr<CCheckMPOCache>(i);
    *(_QWORD *)(a1 + 8) = v9;
  }
  result = a2;
  *a2 = a3;
  return result;
}
