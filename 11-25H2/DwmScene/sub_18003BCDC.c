/*
 * XREFs of sub_18003BCDC @ 0x18003BCDC
 * Callers:
 *     sub_180011E00 @ 0x180011E00 (sub_180011E00.c)
 *     sub_180012554 @ 0x180012554 (sub_180012554.c)
 *     sub_180013D0C @ 0x180013D0C (sub_180013D0C.c)
 *     sub_180013DD4 @ 0x180013DD4 (sub_180013DD4.c)
 *     sub_180015F50 @ 0x180015F50 (sub_180015F50.c)
 *     sub_1800236C4 @ 0x1800236C4 (sub_1800236C4.c)
 *     sub_18002BD18 @ 0x18002BD18 (sub_18002BD18.c)
 *     sub_1800392E0 @ 0x1800392E0 (sub_1800392E0.c)
 *     sub_180039580 @ 0x180039580 (sub_180039580.c)
 *     sub_180039B68 @ 0x180039B68 (sub_180039B68.c)
 *     sub_180039B90 @ 0x180039B90 (sub_180039B90.c)
 *     sub_180039C00 @ 0x180039C00 (sub_180039C00.c)
 *     sub_180039D50 @ 0x180039D50 (sub_180039D50.c)
 *     sub_180039E08 @ 0x180039E08 (sub_180039E08.c)
 *     sub_180039E94 @ 0x180039E94 (sub_180039E94.c)
 *     sub_180039F04 @ 0x180039F04 (sub_180039F04.c)
 *     sub_18003A010 @ 0x18003A010 (sub_18003A010.c)
 *     sub_18003A0D8 @ 0x18003A0D8 (sub_18003A0D8.c)
 *     sub_18003A280 @ 0x18003A280 (sub_18003A280.c)
 *     sub_18003A3A8 @ 0x18003A3A8 (sub_18003A3A8.c)
 *     sub_18003A418 @ 0x18003A418 (sub_18003A418.c)
 *     sub_18003AB54 @ 0x18003AB54 (sub_18003AB54.c)
 *     sub_18003AD9C @ 0x18003AD9C (sub_18003AD9C.c)
 *     sub_18003AE3C @ 0x18003AE3C (sub_18003AE3C.c)
 *     sub_18003B990 @ 0x18003B990 (sub_18003B990.c)
 *     sub_18003BA44 @ 0x18003BA44 (sub_18003BA44.c)
 *     sub_18003BAF0 @ 0x18003BAF0 (sub_18003BAF0.c)
 *     sub_18003C9BC @ 0x18003C9BC (sub_18003C9BC.c)
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     sub_18003F038 @ 0x18003F038 (sub_18003F038.c)
 *     sub_18003F44C @ 0x18003F44C (sub_18003F44C.c)
 *     sub_18003F924 @ 0x18003F924 (sub_18003F924.c)
 *     sub_18003FC20 @ 0x18003FC20 (sub_18003FC20.c)
 *     sub_18005D33C @ 0x18005D33C (sub_18005D33C.c)
 *     sub_18005D404 @ 0x18005D404 (sub_18005D404.c)
 *     sub_18005D4CC @ 0x18005D4CC (sub_18005D4CC.c)
 *     sub_18005D594 @ 0x18005D594 (sub_18005D594.c)
 *     sub_1800632D4 @ 0x1800632D4 (sub_1800632D4.c)
 *     sub_1800659B4 @ 0x1800659B4 (sub_1800659B4.c)
 *     sub_180066CF4 @ 0x180066CF4 (sub_180066CF4.c)
 *     sub_18006A17C @ 0x18006A17C (sub_18006A17C.c)
 *     sub_18006A32C @ 0x18006A32C (sub_18006A32C.c)
 *     sub_1800784EC @ 0x1800784EC (sub_1800784EC.c)
 *     sub_18008AF4C @ 0x18008AF4C (sub_18008AF4C.c)
 *     sub_18008BFD0 @ 0x18008BFD0 (sub_18008BFD0.c)
 *     sub_180099A1C @ 0x180099A1C (sub_180099A1C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_180028730 @ 0x180028730 (sub_180028730.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18003BCDC(__int64 a1)
{
  __int64 v1; // [rsp+20h] [rbp-18h] BYREF
  __int64 v2; // [rsp+28h] [rbp-10h]

  sub_18001258C(a1, &v1);
  if ( v1 )
    sub_180028730(v1 + 16);
  if ( v2 )
    sub_18001050C(v2);
}
