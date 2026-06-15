/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlComModule__ @ 0x1801698E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x18008889C (-Term@CAtlComModule@ATL@@QEAAXXZ.c)
 */

void ATL::_dynamic_atexit_destructor_for___AtlComModule__()
{
  const unsigned __int16 *v0; // rdx

  ATL::CAtlComModule::Term((ATL::CAtlComModule *)&ATL::_AtlComModule);
  CBaseStreamGroupProxy::OnEndpointUnavailableForUse((CBaseStreamGroupProxy *)&ATL::_AtlComModule, v0);
}
