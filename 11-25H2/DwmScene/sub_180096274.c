/*
 * XREFs of sub_180096274 @ 0x180096274
 * Callers:
 *     sub_18009536C @ 0x18009536C (sub_18009536C.c)
 * Callees:
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 */

__int64 __fastcall sub_180096274(__int64 a1)
{
  __int64 result; // rax

  result = 0x666666666666666LL;
  if ( *(_QWORD *)(a1 + 8) == 0x666666666666666LL )
    sub_18001CC04();
  return result;
}
