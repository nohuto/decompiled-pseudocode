/*
 * XREFs of sub_180090550 @ 0x180090550
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180045508 @ 0x180045508 (sub_180045508.c)
 *     sub_1800488C8 @ 0x1800488C8 (sub_1800488C8.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180090550(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h]

  v2 = (__int64 *)sub_1800488C8(a2, &v3);
  sub_180045508(*v2);
  if ( v4 )
    sub_18001050C(v4);
}
