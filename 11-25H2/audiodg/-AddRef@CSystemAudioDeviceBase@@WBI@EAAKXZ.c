/*
 * XREFs of ?AddRef@CSystemAudioDeviceBase@@WBI@EAAKXZ @ 0x14006F330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CSystemAudioDeviceBase::AddRef()
{
  return CSystemAudioDeviceOffloadGraph::UpdateRegistry();
}
