/*
 * XREFs of ?AddRef@CServerAudioSessionControl@@UEAAKXZ @ 0x18004D180
 * Callers:
 *     ?AddRef@PersistedEndpointPolicyRule@@W7EAAKXZ @ 0x1800C3920 (-AddRef@PersistedEndpointPolicyRule@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::AddRef(CServerAudioSessionControl *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
