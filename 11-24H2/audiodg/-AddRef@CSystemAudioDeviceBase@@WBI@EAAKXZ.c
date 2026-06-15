/*
 * XREFs of ?AddRef@CSystemAudioDeviceBase@@WBI@EAAKXZ @ 0x14006F2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CSystemAudioDeviceBase::AddRef()
{
  return CSystemAudioDeviceOffloadGraph::UpdateRegistry();
}
