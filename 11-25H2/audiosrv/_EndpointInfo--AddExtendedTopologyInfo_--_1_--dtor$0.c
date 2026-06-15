/*
 * XREFs of _EndpointInfo::AddExtendedTopologyInfo_::_1_::dtor$0 @ 0x1801661EA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EndpointInfo::AddExtendedTopologyInfo_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::unique_ptr<_TopologyInfo>::~unique_ptr<_TopologyInfo>((_TopologyInfo **)(a2 + 32));
}
