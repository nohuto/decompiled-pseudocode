/*
 * XREFs of sub_18002869C @ 0x18002869C
 * Callers:
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 *     sub_1800324D4 @ 0x1800324D4 (sub_1800324D4.c)
 *     sub_180032570 @ 0x180032570 (sub_180032570.c)
 *     sub_1800325B8 @ 0x1800325B8 (sub_1800325B8.c)
 *     sub_180032634 @ 0x180032634 (sub_180032634.c)
 *     sub_18003279C @ 0x18003279C (sub_18003279C.c)
 *     sub_180033AB8 @ 0x180033AB8 (sub_180033AB8.c)
 *     sub_1800346A8 @ 0x1800346A8 (sub_1800346A8.c)
 *     sub_1800346F4 @ 0x1800346F4 (sub_1800346F4.c)
 *     sub_180034AC8 @ 0x180034AC8 (sub_180034AC8.c)
 * Callees:
 *     sub_18002822C @ 0x18002822C (sub_18002822C.c)
 *     sub_180028424 @ 0x180028424 (sub_180028424.c)
 *     sub_180028674 @ 0x180028674 (sub_180028674.c)
 *     sub_180028904 @ 0x180028904 (sub_180028904.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002869C(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  _BYTE v7[32]; // [rsp+28h] [rbp-20h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_BYTE *)(a2 + 8) = 0;
  if ( !(unsigned __int8)sub_180028904(a1, 0LL) )
  {
    LOBYTE(v4) = 1;
    if ( !(unsigned __int8)sub_180028904(a1, v4) )
    {
      v5 = sub_180028674(a1, (__int64)v7);
      if ( *(_BYTE *)(a2 + 8) )
        sub_18002822C(*(_QWORD *)a2);
      *(_QWORD *)a2 = *(_QWORD *)v5;
      *(_BYTE *)(a2 + 8) = *(_BYTE *)(v5 + 8);
      *(_QWORD *)v5 = 0LL;
      *(_BYTE *)(v5 + 8) = 0;
      sub_180028424((__int64)v7);
    }
  }
  return a2;
}
