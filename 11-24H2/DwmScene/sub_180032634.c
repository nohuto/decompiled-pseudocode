/*
 * XREFs of sub_180032634 @ 0x180032634
 * Callers:
 *     sub_180018010 @ 0x180018010 (sub_180018010.c)
 *     sub_180018E90 @ 0x180018E90 (sub_180018E90.c)
 *     sub_1800320F0 @ 0x1800320F0 (sub_1800320F0.c)
 *     sub_1800328FC @ 0x1800328FC (sub_1800328FC.c)
 *     sub_180033660 @ 0x180033660 (sub_180033660.c)
 *     sub_180033C18 @ 0x180033C18 (sub_180033C18.c)
 *     sub_180034C28 @ 0x180034C28 (sub_180034C28.c)
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180028584 @ 0x180028584 (sub_180028584.c)
 *     sub_1800287FC @ 0x1800287FC (sub_1800287FC.c)
 *     sub_1800326D0 @ 0x1800326D0 (sub_1800326D0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180032634(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  __int64 v6; // rdx
  _BYTE v8[32]; // [rsp+28h] [rbp-20h] BYREF

  v3 = a3;
  sub_1800287FC(a1 + 112, (__int64)v8);
  if ( (unsigned int)v3 >= (unsigned int)sub_1800326D0(a1) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v6 = (unsigned int)v3;
    if ( (__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 4 <= v3 )
    {
      std::_Xout_of_range("invalid vector subscript");
      __debugbreak();
    }
    unknown_libname_81(a2, (_QWORD *)(*(_QWORD *)(a1 + 88) + 16 * v6));
  }
  sub_180028584((__int64)v8);
  return a2;
}
