/*
 * XREFs of UsbDevice_DisableCompletionReturnFailure @ 0x14004E200
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_DisableCompletion @ 0x14002C738 (UsbDevice_DisableCompletion.c)
 */

char __fastcall UsbDevice_DisableCompletionReturnFailure(__int64 a1, __int64 a2)
{
  return UsbDevice_DisableCompletion(a1, a2, 1);
}
