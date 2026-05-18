/*
 * XREFs of sub_180075918 @ 0x180075918
 * Callers:
 *     sub_180073EE4 @ 0x180073EE4 (sub_180073EE4.c)
 *     sub_18007D560 @ 0x18007D560 (sub_18007D560.c)
 *     sub_18007D5E4 @ 0x18007D5E4 (sub_18007D5E4.c)
 *     sub_18007E7DC @ 0x18007E7DC (sub_18007E7DC.c)
 *     sub_180081E54 @ 0x180081E54 (sub_180081E54.c)
 *     sub_180081E84 @ 0x180081E84 (sub_180081E84.c)
 *     sub_180082260 @ 0x180082260 (sub_180082260.c)
 *     sub_180082320 @ 0x180082320 (sub_180082320.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180073C8C @ 0x180073C8C (sub_180073C8C.c)
 */

__int64 __fastcall sub_180075918(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_180073C8C((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010134(*(void **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
