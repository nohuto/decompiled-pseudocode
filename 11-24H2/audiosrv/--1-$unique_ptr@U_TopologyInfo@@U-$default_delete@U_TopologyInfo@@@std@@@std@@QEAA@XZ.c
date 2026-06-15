/*
 * XREFs of ??1?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@QEAA@XZ @ 0x1800EA9FC
 * Callers:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@0@@Z @ 0x1800EA078 (--$_Destroy_range@V-$allocator@V-$unique_ptr@U_TopologyInfo@@U-$default_delete@U_TopologyInfo@@@.c)
 *     ?AddExtendedTopologyInfo@EndpointInfo@@AEAAJAEAV?$vector@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@2@@std@@AEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@1@Z @ 0x1800EBA20 (-AddExtendedTopologyInfo@EndpointInfo@@AEAAJAEAV-$vector@V-$unique_ptr@U_ConnectorInfo@@U-$defau.c)
 *     _EndpointInfo::AddExtendedTopologyInfo_::_1_::dtor$0 @ 0x18016F874 (_EndpointInfo--AddExtendedTopologyInfo_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1_TopologyInfo@@QEAA@XZ @ 0x1800EAC30 (--1_TopologyInfo@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<_TopologyInfo>::~unique_ptr<_TopologyInfo>(_TopologyInfo **a1)
{
  _TopologyInfo *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    _TopologyInfo::~_TopologyInfo(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x48);
  }
}
