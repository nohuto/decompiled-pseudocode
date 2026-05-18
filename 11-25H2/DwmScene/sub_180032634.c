/*
 * XREFs of sub_180032634 @ 0x180032634
 * Callers:
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 *     sub_180061D60 @ 0x180061D60 (sub_180061D60.c)
 * Callees:
 *     sub_180028424 @ 0x180028424 (sub_180028424.c)
 *     sub_18002869C @ 0x18002869C (sub_18002869C.c)
 *     sub_180032570 @ 0x180032570 (sub_180032570.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180032634(__int64 a1, _QWORD *a2)
{
  unsigned int i; // ebx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002869C(a1 + 112, (__int64)v6);
  for ( i = 0; i < (unsigned int)sub_180032570(a1); ++i )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL * i) == *a2 )
      goto LABEL_6;
  }
  i = -1;
LABEL_6:
  sub_180028424((__int64)v6);
  return i;
}
