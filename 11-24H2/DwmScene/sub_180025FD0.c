/*
 * XREFs of sub_180025FD0 @ 0x180025FD0
 * Callers:
 *     sub_18002611C @ 0x18002611C (sub_18002611C.c)
 *     sub_1800261B0 @ 0x1800261B0 (sub_1800261B0.c)
 * Callees:
 *     sub_180011AAC @ 0x180011AAC (sub_180011AAC.c)
 *     sub_1800244E0 @ 0x1800244E0 (sub_1800244E0.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn sub_180025FD0(__int32 a1)
{
  __m128i *v1; // rax
  __m128i v2; // [rsp+20h] [rbp-38h] BYREF
  __m128i v3[2]; // [rsp+30h] [rbp-28h] BYREF

  v2.m128i_i32[0] = a1;
  v2.m128i_i64[1] = (__int64)&off_1801B9218;
  v1 = sub_1800244E0(v3, &v2);
  sub_180011AAC((const struct stdext::exception *)v1);
}
