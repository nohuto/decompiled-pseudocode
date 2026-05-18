/*
 * XREFs of sub_18007CC7C @ 0x18007CC7C
 * Callers:
 *     sub_18007D894 @ 0x18007D894 (sub_18007D894.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     sub_180027B50 @ 0x180027B50 (sub_180027B50.c)
 *     sub_18007CCF4 @ 0x18007CCF4 (sub_18007CCF4.c)
 */

__int64 *__fastcall sub_18007CC7C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_18007CCF4(a1 + 496);
  v4 = *a2;
  v5 = (_QWORD *)sub_180011C64(a1 + 8, &v7);
  sub_180027B50(v4, v5);
  if ( v8 )
    sub_18001050C(v8);
  return a2;
}
