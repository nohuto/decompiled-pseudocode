/*
 * XREFs of sub_140034FD0 @ 0x140034FD0
 * Callers:
 *     sub_140033B80 @ 0x140033B80 (sub_140033B80.c)
 *     sub_14003F9A0 @ 0x14003F9A0 (sub_14003F9A0.c)
 * Callees:
 *     <none>
 */

const char *__fastcall sub_140034FD0(unsigned __int16 a1)
{
  switch ( a1 )
  {
    case 0u:
      return "INTEGER";
    case 1u:
      return "STRING";
    case 2u:
      return "BUFFER";
  }
  if ( (unsigned int)a1 - 3 < 2 )
    return "PACKAGE";
  return "UNKNOWN";
}
