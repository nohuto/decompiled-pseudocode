/*
 * XREFs of sub_180064860 @ 0x180064860
 * Callers:
 *     sub_180061EC0 @ 0x180061EC0 (sub_180061EC0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18004C6D4 @ 0x18004C6D4 (sub_18004C6D4.c)
 *     sub_18007C4E0 @ 0x18007C4E0 (sub_18007C4E0.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180064860(__int64 a1)
{
  __int64 v1; // [rsp+20h] [rbp-18h] BYREF
  __int64 v2; // [rsp+28h] [rbp-10h]

  sub_18004C6D4(*(_QWORD *)(a1 + 512), &v1);
  sub_18007C4E0(v1, &unk_1801C87B8);
  if ( v2 )
    sub_18001060C(v2);
}
