/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@0@@Z @ 0x1800E5C2C
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@0@@Z @ 0x1800E6000 (--$_Uninitialized_move@PEAV-$unique_ptr@U_TopologyInfo@@U-$default_delete@U_TopologyInfo@@@std@@.c)
 *     ??1?$vector@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800E6628 (--1-$vector@V-$unique_ptr@U_TopologyInfo@@U-$default_delete@U_TopologyInfo@@@std@@@std@@V-$alloc.c)
 *     ??1EndpointInfo@@QEAA@XZ @ 0x1800E6708 (--1EndpointInfo@@QEAA@XZ.c)
 *     ??4EndpointInfo@@QEAAAEAV0@AEBV0@@Z @ 0x1800E6884 (--4EndpointInfo@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@2@_K1@Z @ 0x1800EABD4 (-_Change_array@-$vector@V-$unique_ptr@U_TopologyInfo@@U-$default_delete@U_TopologyInfo@@@std@@@s.c)
 *     _std::vector_std::unique_ptr__TopologyInfo_std::default_delete__TopologyInfo____std::allocator_std::unique_ptr__TopologyInfo_std::default_delete__TopologyInfo_______::_Emplace_reallocate_std::unique_ptr__TopologyInfo_std::default_delete__TopologyInfo______::_1_::catch$0 @ 0x1801660B5 (_std--vector_std--unique_ptr__TopologyInfo_std--default_delete__TopologyInfo____std--allocator_s.c)
 * Callees:
 *     ??1?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@QEAA@XZ @ 0x1800E65B0 (--1-$unique_ptr@U_TopologyInfo@@U-$default_delete@U_TopologyInfo@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<_TopologyInfo>>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::unique_ptr<_TopologyInfo>::~unique_ptr<_TopologyInfo>(v3);
      v3 += 8LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
