/*
 * XREFs of sub_1800CDCF0 @ 0x1800CDCF0
 * Callers:
 *     sub_1800CF884 @ 0x1800CF884 (sub_1800CF884.c)
 * Callees:
 *     sub_18003FD80 @ 0x18003FD80 (sub_18003FD80.c)
 *     sub_1800CF964 @ 0x1800CF964 (sub_1800CF964.c)
 *     sub_1800CFAB8 @ 0x1800CFAB8 (sub_1800CFAB8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CDCF0(__int64 a1, __int64 a2)
{
  _QWORD **v4; // rdi
  _QWORD *i; // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)a1 = *(_DWORD *)a2;
  sub_1800CFAB8(a1 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  sub_18003FD80(a1 + 24, (__int64)(*(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24)) >> 3, *(_QWORD *)(a1 + 8));
  v4 = *(_QWORD ***)(a2 + 8);
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
    sub_1800CF964(a1, v7, i + 2);
  return a1;
}
