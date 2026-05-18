/*
 * XREFs of sub_1800287FC @ 0x1800287FC
 * Callers:
 *     sub_1800318EC @ 0x1800318EC (sub_1800318EC.c)
 *     sub_180032634 @ 0x180032634 (sub_180032634.c)
 *     sub_1800326D0 @ 0x1800326D0 (sub_1800326D0.c)
 *     sub_180032718 @ 0x180032718 (sub_180032718.c)
 *     sub_180032794 @ 0x180032794 (sub_180032794.c)
 *     sub_1800328FC @ 0x1800328FC (sub_1800328FC.c)
 *     sub_180033C18 @ 0x180033C18 (sub_180033C18.c)
 *     sub_180034808 @ 0x180034808 (sub_180034808.c)
 *     sub_180034854 @ 0x180034854 (sub_180034854.c)
 *     sub_180034C28 @ 0x180034C28 (sub_180034C28.c)
 * Callees:
 *     sub_18002838C @ 0x18002838C (sub_18002838C.c)
 *     sub_180028584 @ 0x180028584 (sub_180028584.c)
 *     sub_1800287D4 @ 0x1800287D4 (sub_1800287D4.c)
 *     sub_180028A64 @ 0x180028A64 (sub_180028A64.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800287FC(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  _BYTE v7[32]; // [rsp+28h] [rbp-20h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_BYTE *)(a2 + 8) = 0;
  if ( !(unsigned __int8)sub_180028A64(a1, 0LL) )
  {
    LOBYTE(v4) = 1;
    if ( !(unsigned __int8)sub_180028A64(a1, v4) )
    {
      v5 = sub_1800287D4(a1, (__int64)v7);
      if ( *(_BYTE *)(a2 + 8) )
        sub_18002838C(*(_QWORD *)a2);
      *(_QWORD *)a2 = *(_QWORD *)v5;
      *(_BYTE *)(a2 + 8) = *(_BYTE *)(v5 + 8);
      *(_QWORD *)v5 = 0LL;
      *(_BYTE *)(v5 + 8) = 0;
      sub_180028584((__int64)v7);
    }
  }
  return a2;
}
