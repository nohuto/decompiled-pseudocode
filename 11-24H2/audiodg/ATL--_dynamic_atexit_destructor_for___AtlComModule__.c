/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlComModule__ @ 0x1400972F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x140056758 (-Term@CAtlComModule@ATL@@QEAAXXZ.c)
 */

void ATL::_dynamic_atexit_destructor_for___AtlComModule__()
{
  ATL::CAtlComModule::Term((ATL::CAtlComModule *)&ATL::_AtlComModule);
  Windows::Media::Devices::SendCommandAsyncOperation::OnCancel((Windows::Media::Devices::SendCommandAsyncOperation *)&ATL::_AtlComModule);
}
