/*
 * XREFs of sub_180064700 @ 0x180064700
 * Callers:
 *     sub_180061D60 @ 0x180061D60 (sub_180061D60.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18004C574 @ 0x18004C574 (sub_18004C574.c)
 *     sub_18007C380 @ 0x18007C380 (sub_18007C380.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180064700(__int64 a1)
{
  __int64 v1; // [rsp+20h] [rbp-18h] BYREF
  __int64 v2; // [rsp+28h] [rbp-10h]

  sub_18004C574(*(_QWORD *)(a1 + 512), &v1);
  sub_18007C380(v1, &unk_1801C77A8);
  if ( v2 )
    sub_18001050C(v2);
}
