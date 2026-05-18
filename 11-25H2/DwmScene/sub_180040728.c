/*
 * XREFs of sub_180040728 @ 0x180040728
 * Callers:
 *     sub_180049230 @ 0x180049230 (sub_180049230.c)
 *     sub_180049670 @ 0x180049670 (sub_180049670.c)
 *     sub_180055CE0 @ 0x180055CE0 (sub_180055CE0.c)
 *     sub_1800593EC @ 0x1800593EC (sub_1800593EC.c)
 *     sub_1800595F0 @ 0x1800595F0 (sub_1800595F0.c)
 *     sub_180077FC0 @ 0x180077FC0 (sub_180077FC0.c)
 *     sub_180078418 @ 0x180078418 (sub_180078418.c)
 *     sub_1800784EC @ 0x1800784EC (sub_1800784EC.c)
 *     sub_18008ADA0 @ 0x18008ADA0 (sub_18008ADA0.c)
 *     sub_180090590 @ 0x180090590 (sub_180090590.c)
 *     sub_180099A1C @ 0x180099A1C (sub_180099A1C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 */

_QWORD *__fastcall sub_180040728(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v3 = (__int64 *)sub_180011B04(a1 + 56, &v7);
  v4 = *v3;
  *v3 = 0LL;
  *a2 = v4;
  v5 = v3[1];
  v3[1] = 0LL;
  a2[1] = v5;
  if ( v8 )
    sub_18001050C(v8);
  return a2;
}
