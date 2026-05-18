/*
 * XREFs of sub_18001B33C @ 0x18001B33C
 * Callers:
 *     sub_18001D21C @ 0x18001D21C (sub_18001D21C.c)
 *     sub_180068574 @ 0x180068574 (sub_180068574.c)
 * Callees:
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001B33C(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx

  *(_QWORD *)(a1 + 8) = sub_1800137F8(a3);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  sub_180016F54(a1 + 16, v8);
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = a2;
  v9 = sub_1800137F8(a3);
  v10 = 4LL;
  if ( !a4 )
    v10 = 3LL;
  sub_18001C99C(&unk_1801B8000, v10, "Throwing SpectreException with message '%s' and HRESULT error 0x%.8x", v9);
  return a1;
}
