/*
 * XREFs of UsbDevice_DisableCompletionReturnSuccess @ 0x140001D50
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_DisableCompletion @ 0x140001D68 (UsbDevice_DisableCompletion.c)
 */

__int64 __fastcall UsbDevice_DisableCompletionReturnSuccess(__int64 a1, __int64 a2)
{
  return UsbDevice_DisableCompletion(a1, a2, 0LL);
}
