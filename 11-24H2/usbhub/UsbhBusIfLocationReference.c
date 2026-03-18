/*
 * XREFs of UsbhBusIfLocationReference @ 0x140037CC0
 * Callers:
 *     UsbhBusifGetLocationInterface @ 0x140004B60 (UsbhBusifGetLocationInterface.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 */

_DWORD *__fastcall UsbhBusIfLocationReference(__int64 a1)
{
  _DWORD *result; // rax

  result = FdoExt(*(_QWORD *)(a1 + 1184));
  _InterlockedIncrement(result + 855);
  return result;
}
