/*
 * XREFs of sub_180011AFC @ 0x180011AFC
 * Callers:
 *     sub_180010A3C @ 0x180010A3C (sub_180010A3C.c)
 *     sub_180010D50 @ 0x180010D50 (sub_180010D50.c)
 *     sub_180012270 @ 0x180012270 (sub_180012270.c)
 *     sub_180016BE4 @ 0x180016BE4 (sub_180016BE4.c)
 *     sub_180016C14 @ 0x180016C14 (sub_180016C14.c)
 *     sub_18001D934 @ 0x18001D934 (sub_18001D934.c)
 *     sub_180023C10 @ 0x180023C10 (sub_180023C10.c)
 *     sub_180026310 @ 0x180026310 (sub_180026310.c)
 *     sub_18002768C @ 0x18002768C (sub_18002768C.c)
 *     sub_180029334 @ 0x180029334 (sub_180029334.c)
 *     sub_180029360 @ 0x180029360 (sub_180029360.c)
 *     sub_18002D710 @ 0x18002D710 (sub_18002D710.c)
 *     sub_18003D0C4 @ 0x18003D0C4 (sub_18003D0C4.c)
 *     sub_18007AC94 @ 0x18007AC94 (sub_18007AC94.c)
 * Callees:
 *     sub_180011AAC @ 0x180011AAC (sub_180011AAC.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_180011AFC()
{
  _QWORD v0[3]; // [rsp+20h] [rbp-18h] BYREF

  v0[1] = "bad array new length";
  v0[0] = &stdext::bad_array_new_length::`vftable';
  sub_180011AAC((const struct stdext::exception *)v0);
}
