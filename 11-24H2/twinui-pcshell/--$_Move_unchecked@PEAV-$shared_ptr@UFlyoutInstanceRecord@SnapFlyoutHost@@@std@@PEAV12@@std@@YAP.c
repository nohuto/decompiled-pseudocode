/*
 * XREFs of ??$_Move_unchecked@PEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@PEAV10@00@Z @ 0x1802B6E50
 * Callers:
 *     ?erase@?$vector@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@@2@0@Z @ 0x1801C7974 (-erase@-$vector@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V-$allocator@V-$shared.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::_Move_unchecked<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord> *,std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord> *>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 *i; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  std::_Ref_count_base *v8; // rcx

  for ( i = a1; i != a2; i += 2 )
  {
    v6 = *i;
    *i = 0LL;
    v7 = i[1];
    i[1] = 0LL;
    *a3 = v6;
    v8 = (std::_Ref_count_base *)a3[1];
    a3[1] = v7;
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    a3 += 2;
  }
  return a3;
}
