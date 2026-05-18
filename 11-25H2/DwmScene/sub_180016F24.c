/*
 * XREFs of sub_180016F24 @ 0x180016F24
 * Callers:
 *     sub_180017F50 @ 0x180017F50 (sub_180017F50.c)
 *     sub_1800B8F60 @ 0x1800B8F60 (sub_1800B8F60.c)
 *     sub_1800B92C0 @ 0x1800B92C0 (sub_1800B92C0.c)
 *     sub_1800B9D90 @ 0x1800B9D90 (sub_1800B9D90.c)
 *     sub_1800BECFC @ 0x1800BECFC (sub_1800BECFC.c)
 *     sub_1800BEF30 @ 0x1800BEF30 (sub_1800BEF30.c)
 *     sub_1800C32E0 @ 0x1800C32E0 (sub_1800C32E0.c)
 *     sub_1800C4F60 @ 0x1800C4F60 (sub_1800C4F60.c)
 *     sub_1800C833C @ 0x1800C833C (sub_1800C833C.c)
 *     sub_1800C84D0 @ 0x1800C84D0 (sub_1800C84D0.c)
 *     sub_1800C8C18 @ 0x1800C8C18 (sub_1800C8C18.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180014FA0 @ 0x180014FA0 (sub_180014FA0.c)
 */

_QWORD *__fastcall sub_180016F24(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  sub_180014FA0(a1, (__int64)a2, *a2);
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 )
    sub_18001050C(v4);
  return a1;
}
