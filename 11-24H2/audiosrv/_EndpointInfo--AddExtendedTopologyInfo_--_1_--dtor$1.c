/*
 * XREFs of _EndpointInfo::AddExtendedTopologyInfo_::_1_::dtor$1 @ 0x18016F886
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EndpointInfo::AddExtendedTopologyInfo_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::unique_ptr<_ConnectorInfo>::~unique_ptr<_ConnectorInfo>((_QWORD *)(a2 + 40));
}
