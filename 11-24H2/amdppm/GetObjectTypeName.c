/*
 * XREFs of GetObjectTypeName @ 0x14002E73C
 * Callers:
 *     AcpiParseCore @ 0x14002AFD0 (AcpiParseCore.c)
 *     AcpiParseULongArray @ 0x14002C420 (AcpiParseULongArray.c)
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
