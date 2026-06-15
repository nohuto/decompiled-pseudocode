/*
 * XREFs of ?GetEndpointId@VirtualAudioSessionInfo@@UEAAPEBGXZ @ 0x180028C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall VirtualAudioSessionInfo::GetEndpointId(VirtualAudioSessionInfo *this)
{
  return (const unsigned __int16 *)*((_QWORD *)this + 3);
}
