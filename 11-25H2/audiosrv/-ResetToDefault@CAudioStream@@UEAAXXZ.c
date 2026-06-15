/*
 * XREFs of ?ResetToDefault@CAudioStream@@UEAAXXZ @ 0x1801073F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::ResetToDefault(CAudioStream *this)
{
  _InterlockedExchange((volatile __int32 *)this + 138, 0);
}
