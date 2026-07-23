/*
 * XREFs of IovDetachDevice @ 0x140B8474C
 * Callers:
 *     IoDetachDevice @ 0x1403E5790 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x140B9435C (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}
