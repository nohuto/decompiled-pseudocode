/*
 * XREFs of sub_1800324D4 @ 0x1800324D4
 * Callers:
 *     sub_180017F50 @ 0x180017F50 (sub_180017F50.c)
 *     sub_180018DD0 @ 0x180018DD0 (sub_180018DD0.c)
 *     sub_180031F90 @ 0x180031F90 (sub_180031F90.c)
 *     sub_18003279C @ 0x18003279C (sub_18003279C.c)
 *     sub_180033500 @ 0x180033500 (sub_180033500.c)
 *     sub_180033AB8 @ 0x180033AB8 (sub_180033AB8.c)
 *     sub_180034AC8 @ 0x180034AC8 (sub_180034AC8.c)
 *     sub_180066CF4 @ 0x180066CF4 (sub_180066CF4.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180028424 @ 0x180028424 (sub_180028424.c)
 *     sub_18002869C @ 0x18002869C (sub_18002869C.c)
 *     sub_180032570 @ 0x180032570 (sub_180032570.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800324D4(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  __int64 v6; // rdx
  _BYTE v8[32]; // [rsp+28h] [rbp-20h] BYREF

  v3 = a3;
  sub_18002869C(a1 + 112, (__int64)v8);
  if ( (unsigned int)v3 >= (unsigned int)sub_180032570(a1) )
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
  sub_180028424((__int64)v8);
  return a2;
}
