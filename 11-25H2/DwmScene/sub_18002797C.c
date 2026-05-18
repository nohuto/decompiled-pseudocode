/*
 * XREFs of sub_18002797C @ 0x18002797C
 * Callers:
 *     sub_1800473C0 @ 0x1800473C0 (sub_1800473C0.c)
 *     sub_180049670 @ 0x180049670 (sub_180049670.c)
 *     sub_180054A90 @ 0x180054A90 (sub_180054A90.c)
 *     sub_180054B7C @ 0x180054B7C (sub_180054B7C.c)
 *     sub_180058260 @ 0x180058260 (sub_180058260.c)
 *     sub_180082BD8 @ 0x180082BD8 (sub_180082BD8.c)
 *     sub_1800917DC @ 0x1800917DC (sub_1800917DC.c)
 *     sub_180091DB0 @ 0x180091DB0 (sub_180091DB0.c)
 *     sub_1800BC570 @ 0x1800BC570 (sub_1800BC570.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18002797C(__int64 a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)(__int64))
{
  __int64 result; // rax

  do
  {
    result = a4(a1);
    a1 += a2;
    --a3;
  }
  while ( a3 );
  return result;
}
