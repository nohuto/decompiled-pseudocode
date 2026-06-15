/*
 * XREFs of ?DisableDucking@CAudioStream@@UEAAXXZ @ 0x180105F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::DisableDucking(CAudioStream *this)
{
  _InterlockedExchange((volatile __int32 *)this + 138, 1);
}
