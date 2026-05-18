/*
 * XREFs of sub_18008D71C @ 0x18008D71C
 * Callers:
 *     sub_18008F800 @ 0x18008F800 (sub_18008F800.c)
 * Callees:
 *     sub_180023918 @ 0x180023918 (sub_180023918.c)
 *     sub_18005A198 @ 0x18005A198 (sub_18005A198.c)
 *     sub_18008DA1C @ 0x18008DA1C (sub_18008DA1C.c)
 *     sub_18008DD9C @ 0x18008DD9C (sub_18008DD9C.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18008D71C(__int64 *a1, unsigned __int64 a2, __int64 *a3, __int64 *a4)
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
    v9 = sub_180023918((__int64)a1, &v12);
    *a1 = v9;
    a1[1] = v9;
    a1[2] = v9 + (a2 << 6);
    v12 = a1;
    v10 = *a4;
    for ( i = *a3; i != v10; i += 64LL )
    {
      sub_18008DA1C(v8, v9, i);
      v9 += 64LL;
    }
    sub_18005A198(v9, v9);
    a1[1] = v9;
    v12 = 0LL;
    sub_18008DD9C(&v12);
  }
}
