/*
 * XREFs of ?GetState@CAudioSession@@UEAAJPEAW4_AudioSessionState@@@Z @ 0x180051900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::GetState(enum _AudioSessionState *this, enum _AudioSessionState *a2)
{
  *a2 = this[84];
  return 0LL;
}
