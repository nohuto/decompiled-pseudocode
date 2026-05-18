/*
 * XREFs of sub_180087760 @ 0x180087760
 * Callers:
 *     sub_18005DC68 @ 0x18005DC68 (sub_18005DC68.c)
 *     sub_1800874BC @ 0x1800874BC (sub_1800874BC.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180054CDC @ 0x180054CDC (sub_180054CDC.c)
 *     sub_1800886B0 @ 0x1800886B0 (sub_1800886B0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180087760(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = unknown_libname_81(v7, a2);
  sub_180054CDC(a1, (__int64)v4);
  *(_QWORD *)a1 = &Spectre::Engine::ViewerCamera::`vftable';
  *(_QWORD *)(a1 + 1768) = 0LL;
  *(_QWORD *)(a1 + 1776) = 0LL;
  *(_QWORD *)(a1 + 1784) = 0LL;
  *(_QWORD *)(a1 + 1792) = 0LL;
  *(_QWORD *)(a1 + 1800) = 0LL;
  *(_DWORD *)(a1 + 1808) = 0;
  *(_DWORD *)(a1 + 1828) = 1061158912;
  *(_DWORD *)(a1 + 1832) = 1092616192;
  *(_DWORD *)(a1 + 1880) = 1071644672;
  *(_DWORD *)(a1 + 1904) = _InterlockedIncrement(&dword_1801C4E44);
  *(_QWORD *)(a1 + 1884) = 0LL;
  *(_DWORD *)(a1 + 1840) = 1048971922;
  *(_DWORD *)(a1 + 1836) = -1077342245;
  *(_DWORD *)(a1 + 1856) = 1082130432;
  *(_DWORD *)(a1 + 1844) = 1077936128;
  *(_DWORD *)(a1 + 1852) = 1069547520;
  *(_DWORD *)(a1 + 1860) = 1084227584;
  *(_QWORD *)(a1 + 1800) = 0LL;
  *(_DWORD *)(a1 + 1808) = 0;
  sub_1800886B0(a1);
  v5 = a2[1];
  if ( v5 )
    sub_18001060C(v5);
  return a1;
}
