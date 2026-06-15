/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlComModule__ @ 0x1801731A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x180075C8C (-Term@CAtlComModule@ATL@@QEAAXXZ.c)
 */

void ATL::_dynamic_atexit_destructor_for___AtlComModule__()
{
  ATL::CAtlComModule::Term((ATL::CAtlComModule *)&ATL::_AtlComModule);
  CVolumeControlBase::ReloadVolumeState((CVolumeControlBase *)&ATL::_AtlComModule);
}
