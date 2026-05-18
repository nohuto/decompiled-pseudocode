/*
 * XREFs of sub_180040888 @ 0x180040888
 * Callers:
 *     sub_180049390 @ 0x180049390 (sub_180049390.c)
 *     sub_1800497D0 @ 0x1800497D0 (sub_1800497D0.c)
 *     sub_180055E40 @ 0x180055E40 (sub_180055E40.c)
 *     sub_18005954C @ 0x18005954C (sub_18005954C.c)
 *     sub_180059750 @ 0x180059750 (sub_180059750.c)
 *     sub_180078120 @ 0x180078120 (sub_180078120.c)
 *     sub_180078578 @ 0x180078578 (sub_180078578.c)
 *     sub_18007864C @ 0x18007864C (sub_18007864C.c)
 *     sub_18008AF00 @ 0x18008AF00 (sub_18008AF00.c)
 *     sub_1800906F0 @ 0x1800906F0 (sub_1800906F0.c)
 *     sub_180099B7C @ 0x180099B7C (sub_180099B7C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 */

_QWORD *__fastcall sub_180040888(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v3 = (__int64 *)sub_180011C04(a1 + 56, &v7);
  v4 = *v3;
  *v3 = 0LL;
  *a2 = v4;
  v5 = v3[1];
  v3[1] = 0LL;
  a2[1] = v5;
  if ( v8 )
    sub_18001060C(v8);
  return a2;
}
