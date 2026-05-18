/*
 * XREFs of sub_180017418 @ 0x180017418
 * Callers:
 *     sub_180010320 @ 0x180010320 (sub_180010320.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_1800102A0 @ 0x1800102A0 (sub_1800102A0.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_180017418(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rax
  void *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = off_1800EB070;
  v2 = (__int64 *)(a1 + 136);
  *(_QWORD *)(a1 + 16) = off_1800EB1D0;
  sub_18000E854((__int64 *)(a1 + 136));
  v3 = *(_QWORD *)(a1 + 112);
  if ( v3 != *(_QWORD *)(a1 + 120) )
    *(_QWORD *)(a1 + 120) = v3;
  if ( a1 == qword_1801C3438 )
    qword_1801C3438 = 0LL;
  sub_18000E854(v2);
  v4 = *(void **)(a1 + 112);
  if ( v4 )
  {
    sub_180010134(v4, (*(_QWORD *)(a1 + 128) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
    sub_18001050C(v5);
  v6 = *(_QWORD *)(a1 + 88);
  if ( v6 )
    sub_18001050C(v6);
  v7 = *(_QWORD *)(a1 + 72);
  if ( v7 )
    sub_18001050C(v7);
  sub_1800102A0((_QWORD *)(a1 + 56));
  sub_18000E854((__int64 *)(a1 + 48));
  sub_18000E854((__int64 *)(a1 + 40));
  result = sub_18000E854((__int64 *)(a1 + 32));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
