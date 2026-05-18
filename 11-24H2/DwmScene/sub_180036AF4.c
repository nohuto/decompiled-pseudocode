/*
 * XREFs of sub_180036AF4 @ 0x180036AF4
 * Callers:
 *     sub_18002F414 @ 0x18002F414 (sub_18002F414.c)
 *     sub_180030128 @ 0x180030128 (sub_180030128.c)
 *     sub_180049390 @ 0x180049390 (sub_180049390.c)
 *     sub_180053308 @ 0x180053308 (sub_180053308.c)
 *     sub_180053688 @ 0x180053688 (sub_180053688.c)
 *     sub_180081150 @ 0x180081150 (sub_180081150.c)
 *     sub_1800820A0 @ 0x1800820A0 (sub_1800820A0.c)
 *     sub_180096D6C @ 0x180096D6C (sub_180096D6C.c)
 *     sub_180096E1C @ 0x180096E1C (sub_180096E1C.c)
 * Callees:
 *     sub_180011A7C @ 0x180011A7C (sub_180011A7C.c)
 */

_QWORD *__fastcall sub_180036AF4(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rcx
  _QWORD *v4; // r9

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 && sub_180011A7C(v3) )
  {
    *v2 = *v4;
    v2[1] = v4[1];
  }
  return v2;
}
