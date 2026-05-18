/*
 * XREFs of sub_1800D0C4C @ 0x1800D0C4C
 * Callers:
 *     sub_1800CF540 @ 0x1800CF540 (sub_1800CF540.c)
 *     sub_1800CF73C @ 0x1800CF73C (sub_1800CF73C.c)
 * Callees:
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 */

__int64 __fastcall sub_1800D0C4C(__int64 a1)
{
  __int64 result; // rax

  result = 0x155555555555555LL;
  if ( *(_QWORD *)(a1 + 8) == 0x155555555555555LL )
    sub_18001CC04();
  return result;
}
