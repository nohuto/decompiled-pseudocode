/*
 * XREFs of ?GetStreamPriority@CAudioStream@@UEAAKXZ @ 0x18006BC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetStreamPriority(CAudioStream *this)
{
  return *((unsigned int *)this + 63);
}
