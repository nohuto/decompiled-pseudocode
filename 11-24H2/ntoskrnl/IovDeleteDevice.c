/*
 * XREFs of IovDeleteDevice @ 0x140B84734
 * Callers:
 *     IoDeleteDevice @ 0x1403E5820 (IoDeleteDevice.c)
 * Callees:
 *     VfIoDeleteDevice @ 0x140B9422C (VfIoDeleteDevice.c)
 */

__int64 __fastcall IovDeleteDevice(ULONG_PTR a1)
{
  return VfIoDeleteDevice(a1);
}
