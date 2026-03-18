/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x140375990
 * Callers:
 *     PopRequestPowerIrp @ 0x140377360 (PopRequestPowerIrp.c)
 *     VerifierPoCallDriver @ 0x140B902C0 (VerifierPoCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x1403741A0 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x14049F664 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140BA7D40 (IovCallDriver.c)
 */

__int64 __fastcall IofCallDriverSpecifyReturn(void *a1, ULONG_PTR a2)
{
  if ( !IopDispatchCallDriver )
    return IopfCallDriver((__int64)a1, a2);
  if ( IopDispatchCallDriver == 3 )
    return IopPerfCallDriver(a1);
  return IovCallDriver(a1);
}
