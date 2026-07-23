/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x1404999F0
 * Callers:
 *     PopRequestPowerIrp @ 0x1403A7FD0 (PopRequestPowerIrp.c)
 *     VerifierPoCallDriver @ 0x140B922C0 (VerifierPoCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x14025CA60 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x14049A4AC (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140BA9D40 (IovCallDriver.c)
 */

__int64 __fastcall IofCallDriverSpecifyReturn(void *a1, ULONG_PTR a2)
{
  if ( !IopDispatchCallDriver )
    return IopfCallDriver((__int64)a1, a2);
  if ( IopDispatchCallDriver == 3 )
    return IopPerfCallDriver(a1);
  return IovCallDriver(a1);
}
