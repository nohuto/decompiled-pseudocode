/*
 * XREFs of sub_180017518 @ 0x180017518
 * Callers:
 *     sub_180010420 @ 0x180010420 (sub_180010420.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_1800103A0 @ 0x1800103A0 (sub_1800103A0.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_180017518(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rax
  void *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = off_1800EC070;
  v2 = (__int64 *)(a1 + 136);
  *(_QWORD *)(a1 + 16) = off_1800EC1D0;
  sub_18000E954((__int64 *)(a1 + 136));
  v3 = *(_QWORD *)(a1 + 112);
  if ( v3 != *(_QWORD *)(a1 + 120) )
    *(_QWORD *)(a1 + 120) = v3;
  if ( a1 == qword_1801C4448 )
    qword_1801C4448 = 0LL;
  sub_18000E954(v2);
  v4 = *(void **)(a1 + 112);
  if ( v4 )
  {
    sub_180010234(v4, (*(_QWORD *)(a1 + 128) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
    sub_18001060C(v5);
  v6 = *(_QWORD *)(a1 + 88);
  if ( v6 )
    sub_18001060C(v6);
  v7 = *(_QWORD *)(a1 + 72);
  if ( v7 )
    sub_18001060C(v7);
  sub_1800103A0((_QWORD *)(a1 + 56));
  sub_18000E954((__int64 *)(a1 + 48));
  sub_18000E954((__int64 *)(a1 + 40));
  result = sub_18000E954((__int64 *)(a1 + 32));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
