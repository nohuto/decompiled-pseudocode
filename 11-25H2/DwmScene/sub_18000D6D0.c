/*
 * XREFs of sub_18000D6D0 @ 0x18000D6D0
 * Callers:
 *     sub_18000D7F4 @ 0x18000D7F4 (sub_18000D7F4.c)
 *     sub_18000EF44 @ 0x18000EF44 (sub_18000EF44.c)
 * Callees:
 *     sub_18000F024 @ 0x18000F024 (sub_18000F024.c)
 */

__int64 __fastcall sub_18000D6D0(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return sub_18000F024();
  return result;
}
