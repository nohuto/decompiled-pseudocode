/*
 * XREFs of UsbDevice_OnResetDisableCompletion @ 0x14004E4C0
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_DisableCompletion @ 0x14002C738 (UsbDevice_DisableCompletion.c)
 */

char __fastcall UsbDevice_OnResetDisableCompletion(__int64 a1, __int64 a2)
{
  return UsbDevice_DisableCompletion(a1, a2, 2);
}
