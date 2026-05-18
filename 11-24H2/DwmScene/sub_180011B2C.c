/*
 * XREFs of sub_180011B2C @ 0x180011B2C
 * Callers:
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     sub_18004094C @ 0x18004094C (sub_18004094C.c)
 * Callees:
 *     sub_180011AAC @ 0x180011AAC (sub_180011AAC.c)
 */

void __noreturn sub_180011B2C()
{
  _QWORD v0[3]; // [rsp+20h] [rbp-18h] BYREF

  v0[1] = "unknown";
  v0[0] = &std::bad_weak_ptr::`vftable';
  sub_180011AAC((const struct stdext::exception *)v0);
}
