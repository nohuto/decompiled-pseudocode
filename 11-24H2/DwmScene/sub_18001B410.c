/*
 * XREFs of sub_18001B410 @ 0x18001B410
 * Callers:
 *     sub_18001A2B0 @ 0x18001A2B0 (sub_18001A2B0.c)
 *     sub_180032DD4 @ 0x180032DD4 (sub_180032DD4.c)
 *     sub_18004F890 @ 0x18004F890 (sub_18004F890.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 *     sub_1800871D0 @ 0x1800871D0 (sub_1800871D0.c)
 *     sub_1800BAA60 @ 0x1800BAA60 (sub_1800BAA60.c)
 *     sub_1800D0970 @ 0x1800D0970 (sub_1800D0970.c)
 *     sub_1800D0A40 @ 0x1800D0A40 (sub_1800D0A40.c)
 *     sub_1800D0AD0 @ 0x1800D0AD0 (sub_1800D0AD0.c)
 *     sub_1800D1C90 @ 0x1800D1C90 (sub_1800D1C90.c)
 *     sub_1800D3430 @ 0x1800D3430 (sub_1800D3430.c)
 * Callees:
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001B410(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rdx

  *(_QWORD *)(a1 + 8) = sub_1800138F8(a2);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  sub_180017054(a1 + 16, v6);
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  v7 = sub_1800138F8(a2);
  v8 = 4LL;
  if ( !a3 )
    v8 = 3LL;
  sub_18001CAFC(&unk_1801B9000, v8, "Throwing SpectreException with message '%s'", v7);
  return a1;
}
