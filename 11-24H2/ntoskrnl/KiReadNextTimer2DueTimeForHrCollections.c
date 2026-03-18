/*
 * XREFs of KiReadNextTimer2DueTimeForHrCollections @ 0x140446E1C
 * Callers:
 *     KiGetNextTimer2ExpirationDueTime @ 0x1405C4EDC (KiGetNextTimer2ExpirationDueTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReadNextTimer2DueTimeForHrCollections(char a1)
{
  __int64 result; // rax

  if ( !a1 )
    return qword_140F22080;
  result = qword_140F22068;
  if ( qword_140F22080 < (unsigned __int64)qword_140F22068 )
    return qword_140F22080;
  return result;
}
