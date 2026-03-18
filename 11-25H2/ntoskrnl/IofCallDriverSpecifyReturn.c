/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x14049FA00
 * Callers:
 *     PopRequestPowerIrp @ 0x140359B00 (PopRequestPowerIrp.c)
 *     VerifierPoCallDriver @ 0x140B802E0 (VerifierPoCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x14035C150 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x1404A068C (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140B97D60 (IovCallDriver.c)
 */

NTSTATUS __fastcall IofCallDriverSpecifyReturn(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  if ( !IopDispatchCallDriver )
    return IopfCallDriver(a1, a2);
  if ( IopDispatchCallDriver == 3 )
    return IopPerfCallDriver(a1, (ULONG_PTR)a2);
  return IovCallDriver(a1, (ULONG_PTR)a2);
}
