/*
 * XREFs of ??1?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@QEAA@XZ @ 0x1800EA9CC
 * Callers:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@0@@Z @ 0x1800EA040 (--$_Destroy_range@V-$allocator@V-$unique_ptr@U_ConnectorInfo@@U-$default_delete@U_ConnectorInfo@.c)
 *     ?AddExtendedTopologyInfo@EndpointInfo@@AEAAJAEAV?$vector@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@2@@std@@AEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@1@Z @ 0x1800EBA20 (-AddExtendedTopologyInfo@EndpointInfo@@AEAAJAEAV-$vector@V-$unique_ptr@U_ConnectorInfo@@U-$defau.c)
 *     ?AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@00@Z @ 0x18016033C (-AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-.c)
 *     _EndpointInfo::AddExtendedTopologyInfo_::_1_::dtor$1 @ 0x18016F886 (_EndpointInfo--AddExtendedTopologyInfo_--_1_--dtor$1.c)
 *     _EndpointInfo::AddExtendedTopologyInfo_::_1_::dtor$1_0 @ 0x1801728C4 (_EndpointInfo--AddExtendedTopologyInfo_--_1_--dtor$1_0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@XZ @ 0x1800EAC08 (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<_ConnectorInfo>::~unique_ptr<_ConnectorInfo>(_QWORD *a1)
{
  void *v1; // rbx

  v1 = (void *)*a1;
  if ( *a1 )
  {
    std::pair<std::wstring const,std::wstring>::~pair<std::wstring const,std::wstring>(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x48);
  }
}
