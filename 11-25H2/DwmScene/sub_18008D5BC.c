/*
 * XREFs of sub_18008D5BC @ 0x18008D5BC
 * Callers:
 *     sub_18008F6A0 @ 0x18008F6A0 (sub_18008F6A0.c)
 * Callees:
 *     sub_1800237B8 @ 0x1800237B8 (sub_1800237B8.c)
 *     sub_18005A038 @ 0x18005A038 (sub_18005A038.c)
 *     sub_18008D8BC @ 0x18008D8BC (sub_18008D8BC.c)
 *     sub_18008DC3C @ 0x18008DC3C (sub_18008DC3C.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18008D5BC(__int64 *a1, unsigned __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 i; // rdi
  __int64 *v12; // [rsp+60h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0x3FFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    v12 = (__int64 *)a2;
    v9 = sub_1800237B8((__int64)a1, &v12);
    *a1 = v9;
    a1[1] = v9;
    a1[2] = v9 + (a2 << 6);
    v12 = a1;
    v10 = *a4;
    for ( i = *a3; i != v10; i += 64LL )
    {
      sub_18008D8BC(v8, v9, i);
      v9 += 64LL;
    }
    sub_18005A038(v9, v9);
    a1[1] = v9;
    v12 = 0LL;
    sub_18008DC3C(&v12);
  }
}
