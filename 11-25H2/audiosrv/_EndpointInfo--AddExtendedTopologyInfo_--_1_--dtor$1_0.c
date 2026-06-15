/*
 * XREFs of _EndpointInfo::AddExtendedTopologyInfo_::_1_::dtor$1_0 @ 0x180168FFE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EndpointInfo::AddExtendedTopologyInfo_::_1_::dtor_1_0(__int64 a1, __int64 a2)
{
  std::unique_ptr<_ConnectorInfo>::~unique_ptr<_ConnectorInfo>((_QWORD *)(a2 + 32));
}
