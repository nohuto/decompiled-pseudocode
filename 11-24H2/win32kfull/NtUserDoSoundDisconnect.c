/*
 * XREFs of NtUserDoSoundDisconnect @ 0x140204510
 * Callers:
 *     <none>
 * Callees:
 *     ?DisconnectPlaySound@CUserPlaySound@@SAJXZ @ 0x140204704 (-DisconnectPlaySound@CUserPlaySound@@SAJXZ.c)
 */

__int64 NtUserDoSoundDisconnect()
{
  return CUserPlaySound::DisconnectPlaySound();
}
