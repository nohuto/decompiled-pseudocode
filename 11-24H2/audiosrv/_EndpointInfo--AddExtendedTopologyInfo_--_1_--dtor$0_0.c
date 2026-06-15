/*
 * XREFs of _EndpointInfo::AddExtendedTopologyInfo_::_1_::dtor$0_0 @ 0x1801728B2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EndpointInfo::AddExtendedTopologyInfo_::_1_::dtor_0_0(__int64 a1, __int64 a2)
{
  std::vector<std::unique_ptr<_ConnectorInfo>>::~vector<std::unique_ptr<_ConnectorInfo>>(a2 + 48);
}
