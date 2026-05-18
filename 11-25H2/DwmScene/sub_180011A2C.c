/*
 * XREFs of sub_180011A2C @ 0x180011A2C
 * Callers:
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     sub_1800407EC @ 0x1800407EC (sub_1800407EC.c)
 * Callees:
 *     sub_1800119AC @ 0x1800119AC (sub_1800119AC.c)
 */

void __noreturn sub_180011A2C()
{
  _QWORD v0[3]; // [rsp+20h] [rbp-18h] BYREF

  v0[1] = "unknown";
  v0[0] = &std::bad_weak_ptr::`vftable';
  sub_1800119AC((const struct stdext::exception *)v0);
}
