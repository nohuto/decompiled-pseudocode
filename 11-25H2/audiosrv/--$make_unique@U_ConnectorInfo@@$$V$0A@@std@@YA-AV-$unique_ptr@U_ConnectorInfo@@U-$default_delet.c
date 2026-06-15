/*
 * XREFs of ??$make_unique@U_ConnectorInfo@@$$V$0A@@std@@YA?AV?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@0@XZ @ 0x1800E6078
 * Callers:
 *     ?AddExtendedTopologyInfo@EndpointInfo@@AEAAJAEAV?$vector@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@2@@std@@AEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@1@Z @ 0x1800E75D0 (-AddExtendedTopologyInfo@EndpointInfo@@AEAAJAEAV-$vector@V-$unique_ptr@U_ConnectorInfo@@U-$defau.c)
 *     ?AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@00@Z @ 0x18015758C (-AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<_ConnectorInfo,,0>(_QWORD *a1)
{
  _QWORD *v2; // rax

  v2 = operator new(0x48uLL);
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    v2[2] = 0LL;
    v2[3] = 7LL;
    *(_WORD *)v2 = 0;
    *((_OWORD *)v2 + 2) = 0LL;
    v2[6] = 0LL;
    v2[7] = 7LL;
    *((_WORD *)v2 + 16) = 0;
    v2[8] = 0LL;
  }
  else
  {
    v2 = 0LL;
  }
  *a1 = v2;
  return a1;
}
