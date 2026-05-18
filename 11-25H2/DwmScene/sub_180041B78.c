/*
 * XREFs of sub_180041B78 @ 0x180041B78
 * Callers:
 *     sub_18008FEF0 @ 0x18008FEF0 (sub_18008FEF0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180079E74 @ 0x180079E74 (sub_180079E74.c)
 *     sub_18007BE64 @ 0x18007BE64 (sub_18007BE64.c)
 */

__int64 __fastcall sub_180041B78(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rax
  __int64 v8; // r10
  unsigned __int16 v9; // bp
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  v7 = (_QWORD *)sub_18007BE64(*(_QWORD *)(a1 + 120), &v11);
  v9 = sub_180079E74(*v7, v8);
  if ( v12 )
    sub_18001050C(v12);
  return sub_180041BF0(a1, v9, a3, a4);
}
