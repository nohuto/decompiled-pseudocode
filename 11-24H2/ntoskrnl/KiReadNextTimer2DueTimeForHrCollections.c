/*
 * XREFs of KiReadNextTimer2DueTimeForHrCollections @ 0x14043F1CC
 * Callers:
 *     KiGetNextTimer2ExpirationDueTime @ 0x1405C25A4 (KiGetNextTimer2ExpirationDueTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReadNextTimer2DueTimeForHrCollections(char a1)
{
  __int64 result; // rax

  if ( !a1 )
    return qword_140F22220;
  result = qword_140F22208;
  if ( qword_140F22220 < (unsigned __int64)qword_140F22208 )
    return qword_140F22220;
  return result;
}
