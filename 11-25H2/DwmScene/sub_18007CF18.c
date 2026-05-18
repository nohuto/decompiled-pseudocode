/*
 * XREFs of sub_18007CF18 @ 0x18007CF18
 * Callers:
 *     sub_18007D4F0 @ 0x18007D4F0 (sub_18007D4F0.c)
 * Callees:
 *     sub_180073C8C @ 0x180073C8C (sub_180073C8C.c)
 *     sub_18007D134 @ 0x18007D134 (sub_18007D134.c)
 *     sub_18007D560 @ 0x18007D560 (sub_18007D560.c)
 *     sub_18007EA6C @ 0x18007EA6C (sub_18007EA6C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007CF18(__int64 *a1, unsigned __int64 a2, __int64 *a3, __int64 *a4)
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
    sub_18007EA6C();
    v12 = a1;
    v8 = *a1;
    v9 = *a4;
    for ( i = *a3; i != v9; i += 48LL )
    {
      sub_18007D134(v7, v8, i);
      v8 += 48LL;
    }
    sub_180073C8C(v8, v8);
    a1[1] = v8;
    v12 = 0LL;
    return sub_18007D560(&v12);
  }
  return result;
}
