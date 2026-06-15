/*
 * XREFs of ?Release@CSystemAudioDeviceBase@@WBA@EAAKXZ @ 0x14006F320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CSystemAudioDeviceBase::Release()
{
  return CSystemAudioDeviceOffloadGraph::UpdateRegistry();
}
