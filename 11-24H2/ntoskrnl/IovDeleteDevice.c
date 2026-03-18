/*
 * XREFs of IovDeleteDevice @ 0x140B82734
 * Callers:
 *     IoDeleteDevice @ 0x1403F1B00 (IoDeleteDevice.c)
 * Callees:
 *     VfIoDeleteDevice @ 0x140B9222C (VfIoDeleteDevice.c)
 */

__int64 __fastcall IovDeleteDevice(ULONG_PTR a1)
{
  return VfIoDeleteDevice(a1);
}
