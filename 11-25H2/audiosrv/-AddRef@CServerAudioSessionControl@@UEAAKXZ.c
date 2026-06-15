/*
 * XREFs of ?AddRef@CServerAudioSessionControl@@UEAAKXZ @ 0x18005BA00
 * Callers:
 *     ?AddRef@PersistedEndpointPolicyRule@@W7EAAKXZ @ 0x1800C4C40 (-AddRef@PersistedEndpointPolicyRule@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::AddRef(CServerAudioSessionControl *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
