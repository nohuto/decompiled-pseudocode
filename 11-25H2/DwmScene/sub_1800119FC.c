/*
 * XREFs of sub_1800119FC @ 0x1800119FC
 * Callers:
 *     sub_18001093C @ 0x18001093C (sub_18001093C.c)
 *     sub_180010C50 @ 0x180010C50 (sub_180010C50.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_180016AE4 @ 0x180016AE4 (sub_180016AE4.c)
 *     sub_180016B14 @ 0x180016B14 (sub_180016B14.c)
 *     sub_18001D7D4 @ 0x18001D7D4 (sub_18001D7D4.c)
 *     sub_180023AB0 @ 0x180023AB0 (sub_180023AB0.c)
 *     sub_1800261B0 @ 0x1800261B0 (sub_1800261B0.c)
 *     sub_18002752C @ 0x18002752C (sub_18002752C.c)
 *     sub_1800291D4 @ 0x1800291D4 (sub_1800291D4.c)
 *     sub_180029200 @ 0x180029200 (sub_180029200.c)
 *     sub_18002D5B0 @ 0x18002D5B0 (sub_18002D5B0.c)
 *     sub_18003CF64 @ 0x18003CF64 (sub_18003CF64.c)
 *     sub_18007AB34 @ 0x18007AB34 (sub_18007AB34.c)
 * Callees:
 *     sub_1800119AC @ 0x1800119AC (sub_1800119AC.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_1800119FC()
{
  _QWORD v0[3]; // [rsp+20h] [rbp-18h] BYREF

  v0[1] = "bad array new length";
  v0[0] = &stdext::bad_array_new_length::`vftable';
  sub_1800119AC((const struct stdext::exception *)v0);
}
