/*
 * XREFs of GetObjectTypeName @ 0x140034ED0
 * Callers:
 *     AcpiParseULongArray @ 0x140033A80 (AcpiParseULongArray.c)
 *     AcpiParseCore @ 0x14003F8A0 (AcpiParseCore.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetObjectTypeName(unsigned __int16 a1)
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
