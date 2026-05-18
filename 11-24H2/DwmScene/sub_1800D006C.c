/*
 * XREFs of sub_1800D006C @ 0x1800D006C
 * Callers:
 *     sub_1800CF224 @ 0x1800CF224 (sub_1800CF224.c)
 *     sub_1800D02B0 @ 0x1800D02B0 (sub_1800D02B0.c)
 * Callees:
 *     sub_1800306E0 @ 0x1800306E0 (sub_1800306E0.c)
 *     sub_18003FFE4 @ 0x18003FFE4 (sub_18003FFE4.c)
 *     sub_1800CF224 @ 0x1800CF224 (sub_1800CF224.c)
 *     sub_1800CFFF0 @ 0x1800CFFF0 (sub_1800CFFF0.c)
 *     sub_1800D0EC4 @ 0x1800D0EC4 (sub_1800D0EC4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D006C(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a1 = *(_DWORD *)a2;
  sub_1800306E0(a1 + 8, a2 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 60) = *(_BYTE *)(a2 + 60);
  if ( a1 + 64 != a2 + 64 )
  {
    v6 = a1 + 64;
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64);
    sub_1800CF224(a1 + 72, **(_QWORD ***)(a2 + 72), *(_QWORD **)(a2 + 72));
    v4 = sub_18003FFE4(a1 + 64, *(_QWORD *)(a1 + 80));
    sub_1800D0EC4(a1 + 64, v4);
    v6 = 0LL;
    sub_1800CFFF0(&v6);
  }
  return a1;
}
