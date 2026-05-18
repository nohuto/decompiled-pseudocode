/*
 * XREFs of sub_180027A40 @ 0x180027A40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 */

__int64 __fastcall sub_180027A40(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h]

  sub_180011B04(a1 + 72, &v3);
  v1 = *(_QWORD *)(v3 + 3648);
  if ( v4 )
    sub_18001050C(v4);
  return v1;
}
