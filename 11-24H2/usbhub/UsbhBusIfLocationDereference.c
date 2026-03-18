/*
 * XREFs of UsbhBusIfLocationDereference @ 0x140056B90
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 */

_DWORD *__fastcall UsbhBusIfLocationDereference(__int64 a1)
{
  _DWORD *result; // rax

  result = FdoExt(*(_QWORD *)(a1 + 1184));
  _InterlockedDecrement(result + 855);
  return result;
}
