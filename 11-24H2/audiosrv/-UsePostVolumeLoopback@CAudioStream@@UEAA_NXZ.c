/*
 * XREFs of ?UsePostVolumeLoopback@CAudioStream@@UEAA_NXZ @ 0x18010EF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAudioStream::UsePostVolumeLoopback(CAudioStream *this)
{
  return *((_BYTE *)this + 624);
}
