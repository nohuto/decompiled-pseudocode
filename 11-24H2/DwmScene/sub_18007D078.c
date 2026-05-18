/*
 * XREFs of sub_18007D078 @ 0x18007D078
 * Callers:
 *     sub_18007D650 @ 0x18007D650 (sub_18007D650.c)
 * Callees:
 *     sub_180073DEC @ 0x180073DEC (sub_180073DEC.c)
 *     sub_18007D294 @ 0x18007D294 (sub_18007D294.c)
 *     sub_18007D6C0 @ 0x18007D6C0 (sub_18007D6C0.c)
 *     sub_18007EBCC @ 0x18007EBCC (sub_18007EBCC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007D078(__int64 *a1, unsigned __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 i; // rdi
  __int64 result; // rax
  __int64 *v12; // [rsp+50h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0x555555555555555LL )
      std::_Xlength_error("vector too long");
    sub_18007EBCC();
    v12 = a1;
    v8 = *a1;
    v9 = *a4;
    for ( i = *a3; i != v9; i += 48LL )
    {
      sub_18007D294(v7, v8, i);
      v8 += 48LL;
    }
    sub_180073DEC(v8, v8);
    a1[1] = v8;
    v12 = 0LL;
    return sub_18007D6C0(&v12);
  }
  return result;
}
