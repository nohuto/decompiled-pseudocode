/*
 * XREFs of sub_18003D7E4 @ 0x18003D7E4
 * Callers:
 *     sub_18003CC3C @ 0x18003CC3C (sub_18003CC3C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003D7E4(__int64 a1, __int64 a2, _QWORD *a3)
{
  sub_180012444(a1, a2);
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
  sub_180013228(a2);
  return a1;
}
