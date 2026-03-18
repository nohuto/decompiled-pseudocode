/*
 * XREFs of IovDeleteDevice @ 0x140B72734
 * Callers:
 *     IoDeleteDevice @ 0x1402FDA50 (IoDeleteDevice.c)
 * Callees:
 *     VfIoDeleteDevice @ 0x140B8224C (VfIoDeleteDevice.c)
 */

__int64 __fastcall IovDeleteDevice(ULONG_PTR a1)
{
  return VfIoDeleteDevice(a1);
}
