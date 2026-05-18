/*
 * XREFs of sub_180027BA0 @ 0x180027BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 */

__int64 __fastcall sub_180027BA0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h]

  sub_180011C04(a1 + 72, &v3);
  v1 = *(_QWORD *)(v3 + 3648);
  if ( v4 )
    sub_18001060C(v4);
  return v1;
}
