/*
 * XREFs of ?GetType@CVirtualAudioStream@@UEAA?AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ @ 0x1800FB2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CVirtualAudioStream::GetType(__int64 a1)
{
  return *(_DWORD *)(a1 + 40) != 0;
}
