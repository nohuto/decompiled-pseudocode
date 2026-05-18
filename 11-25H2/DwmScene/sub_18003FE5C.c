/*
 * XREFs of sub_18003FE5C @ 0x18003FE5C
 * Callers:
 *     sub_18003CB18 @ 0x18003CB18 (sub_18003CB18.c)
 *     sub_18003CFE0 @ 0x18003CFE0 (sub_18003CFE0.c)
 * Callees:
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 */

__int64 __fastcall sub_18003FE5C(__int64 a1)
{
  __int64 result; // rax

  result = 0x333333333333333LL;
  if ( *(_QWORD *)(a1 + 8) == 0x333333333333333LL )
    sub_18001CC04();
  return result;
}
