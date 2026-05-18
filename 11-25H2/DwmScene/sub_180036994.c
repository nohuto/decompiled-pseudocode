/*
 * XREFs of sub_180036994 @ 0x180036994
 * Callers:
 *     sub_18002F2B4 @ 0x18002F2B4 (sub_18002F2B4.c)
 *     sub_18002FFC8 @ 0x18002FFC8 (sub_18002FFC8.c)
 *     sub_180049230 @ 0x180049230 (sub_180049230.c)
 *     sub_1800531A8 @ 0x1800531A8 (sub_1800531A8.c)
 *     sub_180053528 @ 0x180053528 (sub_180053528.c)
 *     sub_180080FF0 @ 0x180080FF0 (sub_180080FF0.c)
 *     sub_180081F40 @ 0x180081F40 (sub_180081F40.c)
 *     sub_180096C0C @ 0x180096C0C (sub_180096C0C.c)
 *     sub_180096CBC @ 0x180096CBC (sub_180096CBC.c)
 * Callees:
 *     sub_18001197C @ 0x18001197C (sub_18001197C.c)
 */

_QWORD *__fastcall sub_180036994(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rcx
  _QWORD *v4; // r9

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 && sub_18001197C(v3) )
  {
    *v2 = *v4;
    v2[1] = v4[1];
  }
  return v2;
}
