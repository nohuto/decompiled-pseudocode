/*
 * XREFs of sub_180032794 @ 0x180032794
 * Callers:
 *     sub_1800318EC @ 0x1800318EC (sub_1800318EC.c)
 *     sub_180061EC0 @ 0x180061EC0 (sub_180061EC0.c)
 * Callees:
 *     sub_180028584 @ 0x180028584 (sub_180028584.c)
 *     sub_1800287FC @ 0x1800287FC (sub_1800287FC.c)
 *     sub_1800326D0 @ 0x1800326D0 (sub_1800326D0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180032794(__int64 a1, _QWORD *a2)
{
  unsigned int i; // ebx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_1800287FC(a1 + 112, (__int64)v6);
  for ( i = 0; i < (unsigned int)sub_1800326D0(a1); ++i )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL * i) == *a2 )
      goto LABEL_6;
  }
  i = -1;
LABEL_6:
  sub_180028584((__int64)v6);
  return i;
}
