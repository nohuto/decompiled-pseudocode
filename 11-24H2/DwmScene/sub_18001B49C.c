/*
 * XREFs of sub_18001B49C @ 0x18001B49C
 * Callers:
 *     sub_18001D37C @ 0x18001D37C (sub_18001D37C.c)
 *     sub_1800686D4 @ 0x1800686D4 (sub_1800686D4.c)
 * Callees:
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001B49C(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx

  *(_QWORD *)(a1 + 8) = sub_1800138F8(a3);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  sub_180017054(a1 + 16, v8);
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = a2;
  v9 = sub_1800138F8(a3);
  v10 = 4LL;
  if ( !a4 )
    v10 = 3LL;
  sub_18001CAFC(&unk_1801B9000, v10, "Throwing SpectreException with message '%s' and HRESULT error 0x%.8x", v9);
  return a1;
}
