/*
 * XREFs of ??4EndpointInfo@@QEAAAEAV0@AEBV0@@Z @ 0x1800EACD0
 * Callers:
 *     ??0EndpointInfo@@QEAA@AEBV0@@Z @ 0x1800EA654 (--0EndpointInfo@@QEAA@AEBV0@@Z.c)
 *     ??0ResourceGroupInstance@@QEAA@_KAEAVEndpointInfo@@PEBGK@Z @ 0x1800EA6FC (--0ResourceGroupInstance@@QEAA@_KAEAVEndpointInfo@@PEBGK@Z.c)
 *     ??4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z @ 0x1800EADAC (--4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800EC56C (-DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@0@@Z @ 0x1800EA078 (--$_Destroy_range@V-$allocator@V-$unique_ptr@U_TopologyInfo@@U-$default_delete@U_TopologyInfo@@@.c)
 *     ?AddExtendedTopologyInfo@EndpointInfo@@AEAAJAEAV?$vector@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@2@@std@@AEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@1@Z @ 0x1800EBA20 (-AddExtendedTopologyInfo@EndpointInfo@@AEAAJAEAV-$vector@V-$unique_ptr@U_ConnectorInfo@@U-$defau.c)
 *     ?SetEndpointInfo@EndpointInfo@@QEAAJPEBG00K@Z @ 0x1800EF5D8 (-SetEndpointInfo@EndpointInfo@@QEAAJPEBG00K@Z.c)
 */

EndpointInfo *__fastcall EndpointInfo::operator=(EndpointInfo *this, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  const unsigned __int16 *v8; // rax
  unsigned int v9; // edx
  const unsigned __int16 *v10; // r8
  const unsigned __int16 *v11; // r9
  int v12; // eax
  _QWORD *v13; // rsi
  _QWORD *i; // rdi
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_QWORD *)this + 13);
  v5 = *((_QWORD *)this + 14);
  if ( v4 != v5 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<_TopologyInfo>>>(v4, v5);
    *((_QWORD *)this + 14) = *((_QWORD *)this + 13);
  }
  std::wstring::c_str(a2 + 64, *(unsigned int *)(a2 + 96));
  std::wstring::c_str(a2 + 32, v6);
  v8 = (const unsigned __int16 *)std::wstring::c_str(a2, v7);
  v12 = EndpointInfo::SetEndpointInfo(this, v8, v10, v11, v9);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      340LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\ConstraintModel\\Lib\\ConstraintModelTypes.h",
      (const char *)(unsigned int)v12);
  v13 = *(_QWORD **)(a2 + 112);
  for ( i = *(_QWORD **)(a2 + 104); i != v13; ++i )
  {
    v15 = EndpointInfo::AddExtendedTopologyInfo(this, *i, *i + 24LL, *i + 48LL);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        345LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\ConstraintModel\\Lib\\ConstraintModelTypes.h",
        (const char *)(unsigned int)v15);
  }
  return this;
}
