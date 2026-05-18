/*
 * XREFs of sub_18003E6F8 @ 0x18003E6F8
 * Callers:
 *     sub_180011EE8 @ 0x180011EE8 (sub_180011EE8.c)
 *     sub_18005D65C @ 0x18005D65C (sub_18005D65C.c)
 *     sub_180073B08 @ 0x180073B08 (sub_180073B08.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_180028730 @ 0x180028730 (sub_180028730.c)
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     sub_18003EB98 @ 0x18003EB98 (sub_18003EB98.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003E6F8(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v5; // rax
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  sub_180028730(a1 + 16);
  result = **(_QWORD **)(a1 + 88);
  v8 = result;
  while ( !*(_BYTE *)(result + 25) )
  {
    v5 = (__int64 *)sub_18003EB98(*(_QWORD *)(result + 64), v6);
    sub_18003CA5C(a2, v5);
    if ( v7 )
      sub_18001050C(v7);
    sub_18001C2C0(&v8);
    result = v8;
  }
  return result;
}
