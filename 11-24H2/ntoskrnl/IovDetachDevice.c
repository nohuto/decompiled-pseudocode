/*
 * XREFs of IovDetachDevice @ 0x140B8274C
 * Callers:
 *     IoDetachDevice @ 0x1403F1A70 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x140B9235C (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}
