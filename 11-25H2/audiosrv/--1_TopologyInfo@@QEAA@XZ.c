/*
 * XREFs of ??1_TopologyInfo@@QEAA@XZ @ 0x1800E67E4
 * Callers:
 *     ??1?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@QEAA@XZ @ 0x1800E65B0 (--1-$unique_ptr@U_TopologyInfo@@U-$default_delete@U_TopologyInfo@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@0@@Z @ 0x1800E5BF4 (--$_Destroy_range@V-$allocator@V-$unique_ptr@U_ConnectorInfo@@U-$default_delete@U_ConnectorInfo@.c)
 */

void __fastcall _TopologyInfo::~_TopologyInfo(_TopologyInfo *this)
{
  PropVariantClear((PROPVARIANT *)this + 6);
  PropVariantClear((PROPVARIANT *)this + 3);
  if ( *(_QWORD *)this )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<_ConnectorInfo>>>(*(_QWORD *)this, *((_QWORD *)this + 1));
    std::_Deallocate<16,0>(
      *(char **)this,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 2) - *(_QWORD *)this) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
}
