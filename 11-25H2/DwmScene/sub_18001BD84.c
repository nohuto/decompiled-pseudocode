/*
 * XREFs of sub_18001BD84 @ 0x18001BD84
 * Callers:
 *     sub_18001C4F4 @ 0x18001C4F4 (sub_18001C4F4.c)
 *     sub_180096100 @ 0x180096100 (sub_180096100.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18001BD84(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 v2; // rdx
  _QWORD *result; // rax

  v2 = (__int64)((unsigned __int128)(*a2 * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 18;
  result = a1;
  *a1 = (v2 >> 63) + v2;
  return result;
}
