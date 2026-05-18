/*
 * XREFs of sub_180034C28 @ 0x180034C28
 * Callers:
 *     sub_180034CF0 @ 0x180034CF0 (sub_180034CF0.c)
 * Callees:
 *     sub_180028584 @ 0x180028584 (sub_180028584.c)
 *     sub_1800287FC @ 0x1800287FC (sub_1800287FC.c)
 *     sub_180031078 @ 0x180031078 (sub_180031078.c)
 *     sub_180032634 @ 0x180032634 (sub_180032634.c)
 *     sub_1800326D0 @ 0x1800326D0 (sub_1800326D0.c)
 *     sub_180034854 @ 0x180034854 (sub_180034854.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180034C28(__int64 a1)
{
  unsigned int i; // edi
  _QWORD *v3; // rax
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[16]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v7[24]; // [rsp+40h] [rbp-18h] BYREF

  sub_1800287FC(a1 + 8, (__int64)v7);
  sub_1800287FC(a1 + 112, (__int64)v6);
  for ( i = 0; i < (unsigned int)sub_1800326D0(a1); ++i )
  {
    v3 = sub_180032634(a1, &v5, i);
    sub_180034854(a1, v3);
  }
  *(_DWORD *)(a1 + 1320) = -8388609;
  *(_DWORD *)(a1 + 1324) = 2139095039;
  *(_DWORD *)(a1 + 1328) = 0;
  *(_QWORD *)(a1 + 1336) = 0LL;
  sub_180031078((__int64 ***)(a1 + 1376));
  sub_180028584((__int64)v6);
  return sub_180028584((__int64)v7);
}
