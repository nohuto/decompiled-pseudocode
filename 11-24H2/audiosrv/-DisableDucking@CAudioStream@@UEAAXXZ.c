/*
 * XREFs of ?DisableDucking@CAudioStream@@UEAAXXZ @ 0x18010C130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::DisableDucking(CAudioStream *this)
{
  _InterlockedExchange((volatile __int32 *)this + 138, 1);
}
