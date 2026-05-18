/*
 * XREFs of sub_1800906B0 @ 0x1800906B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180045668 @ 0x180045668 (sub_180045668.c)
 *     sub_180048A28 @ 0x180048A28 (sub_180048A28.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800906B0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h]

  v2 = (__int64 *)sub_180048A28(a2, &v3);
  sub_180045668(*v2);
  if ( v4 )
    sub_18001060C(v4);
}
