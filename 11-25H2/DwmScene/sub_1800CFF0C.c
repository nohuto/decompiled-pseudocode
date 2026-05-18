/*
 * XREFs of sub_1800CFF0C @ 0x1800CFF0C
 * Callers:
 *     sub_1800CF0C4 @ 0x1800CF0C4 (sub_1800CF0C4.c)
 *     sub_1800D0150 @ 0x1800D0150 (sub_1800D0150.c)
 * Callees:
 *     sub_180030580 @ 0x180030580 (sub_180030580.c)
 *     sub_18003FE84 @ 0x18003FE84 (sub_18003FE84.c)
 *     sub_1800CF0C4 @ 0x1800CF0C4 (sub_1800CF0C4.c)
 *     sub_1800CFE90 @ 0x1800CFE90 (sub_1800CFE90.c)
 *     sub_1800D0D64 @ 0x1800D0D64 (sub_1800D0D64.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CFF0C(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a1 = *(_DWORD *)a2;
  sub_180030580(a1 + 8, a2 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 60) = *(_BYTE *)(a2 + 60);
  if ( a1 + 64 != a2 + 64 )
  {
    v6 = a1 + 64;
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64);
    sub_1800CF0C4(a1 + 72, **(_QWORD ***)(a2 + 72), *(_QWORD **)(a2 + 72));
    v4 = sub_18003FE84(a1 + 64, *(_QWORD *)(a1 + 80));
    sub_1800D0D64(a1 + 64, v4);
    v6 = 0LL;
    sub_1800CFE90(&v6);
  }
  return a1;
}
