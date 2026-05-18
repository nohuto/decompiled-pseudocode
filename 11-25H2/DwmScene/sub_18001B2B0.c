/*
 * XREFs of sub_18001B2B0 @ 0x18001B2B0
 * Callers:
 *     sub_18001A1F0 @ 0x18001A1F0 (sub_18001A1F0.c)
 *     sub_180032C74 @ 0x180032C74 (sub_180032C74.c)
 *     sub_18004F730 @ 0x18004F730 (sub_18004F730.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 *     sub_180087070 @ 0x180087070 (sub_180087070.c)
 *     sub_1800BA900 @ 0x1800BA900 (sub_1800BA900.c)
 *     sub_1800D0810 @ 0x1800D0810 (sub_1800D0810.c)
 *     sub_1800D08E0 @ 0x1800D08E0 (sub_1800D08E0.c)
 *     sub_1800D0970 @ 0x1800D0970 (sub_1800D0970.c)
 *     sub_1800D1B30 @ 0x1800D1B30 (sub_1800D1B30.c)
 *     sub_1800D32D0 @ 0x1800D32D0 (sub_1800D32D0.c)
 * Callees:
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001B2B0(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rdx

  *(_QWORD *)(a1 + 8) = sub_1800137F8(a2);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  sub_180016F54(a1 + 16, v6);
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  v7 = sub_1800137F8(a2);
  v8 = 4LL;
  if ( !a3 )
    v8 = 3LL;
  sub_18001C99C(&unk_1801B8000, v8, "Throwing SpectreException with message '%s'", v7);
  return a1;
}
