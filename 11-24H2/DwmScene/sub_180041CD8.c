/*
 * XREFs of sub_180041CD8 @ 0x180041CD8
 * Callers:
 *     sub_180090050 @ 0x180090050 (sub_180090050.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180079FD4 @ 0x180079FD4 (sub_180079FD4.c)
 *     sub_18007BFC4 @ 0x18007BFC4 (sub_18007BFC4.c)
 */

__int64 __fastcall sub_180041CD8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rax
  __int64 v8; // r10
  unsigned __int16 v9; // bp
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  v7 = (_QWORD *)sub_18007BFC4(*(_QWORD *)(a1 + 120), &v11);
  v9 = sub_180079FD4(*v7, v8);
  if ( v12 )
    sub_18001060C(v12);
  return sub_180041D50(a1, v9, a3, a4);
}
