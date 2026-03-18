/*
 * XREFs of IovDetachDevice @ 0x140B7274C
 * Callers:
 *     IoDetachDevice @ 0x1402FD9C0 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x140B8237C (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}
