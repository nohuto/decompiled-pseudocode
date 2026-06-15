/*
 * XREFs of ?AddRef@PersistedEndpointPolicyRule@@W7EAAKXZ @ 0x1800C3920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PersistedEndpointPolicyRule::AddRef(__int64 a1)
{
  return CServerAudioSessionControl::AddRef((CServerAudioSessionControl *)(a1 - 8));
}
