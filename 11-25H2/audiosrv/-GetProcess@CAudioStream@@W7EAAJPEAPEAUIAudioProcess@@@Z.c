/*
 * XREFs of ?GetProcess@CAudioStream@@W7EAAJPEAPEAUIAudioProcess@@@Z @ 0x180106910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetProcess(__int64 a1, struct IAudioProcess **a2)
{
  return CAudioStream::GetProcess((CAudioStream *)(a1 - 8), a2);
}
