/*
 * XREFs of KiReadNextTimer2DueTimeForHrCollections @ 0x1404498A8
 * Callers:
 *     KiGetNextTimer2ExpirationDueTime @ 0x1405C0B8C (KiGetNextTimer2ExpirationDueTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReadNextTimer2DueTimeForHrCollections(char a1)
{
  __int64 result; // rax

  if ( !a1 )
    return qword_140F21760;
  result = qword_140F21748;
  if ( qword_140F21760 < (unsigned __int64)qword_140F21748 )
    return qword_140F21760;
  return result;
}
