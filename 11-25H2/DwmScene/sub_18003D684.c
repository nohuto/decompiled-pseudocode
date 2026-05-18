/*
 * XREFs of sub_18003D684 @ 0x18003D684
 * Callers:
 *     sub_18003CADC @ 0x18003CADC (sub_18003CADC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003D684(__int64 a1, __int64 a2, _QWORD *a3)
{
  sub_180012344(a1, a2);
  unknown_libname_81((_QWORD *)(a1 + 32), a3);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 60) = 0LL;
  *(_DWORD *)(a1 + 68) = 0;
  *(_BYTE *)(a1 + 72) = 1;
  *(_DWORD *)(a1 + 76) = 0;
  _InterlockedExchange((volatile __int32 *)(a1 + 76), 0);
  *(_BYTE *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  sub_180013128(a2);
  return a1;
}
