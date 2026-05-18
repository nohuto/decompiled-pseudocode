/*
 * XREFs of sub_18006AC54 @ 0x18006AC54
 * Callers:
 *     sub_18006AD24 @ 0x18006AD24 (sub_18006AD24.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_18006AB38 @ 0x18006AB38 (sub_18006AB38.c)
 */

// Hidden C++ exception states: #wind=1
signed __int64 __fastcall sub_18006AC54(__int64 *a1, __int64 a2, unsigned __int8 (__fastcall *a3)(__int64, __int64))
{
  signed __int64 result; // rax
  __int64 *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  result = (a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( result >= 32 )
  {
    v6 = (__int64 *)(a2 - 16);
    v7 = -8LL - (_QWORD)a1;
    v8 = 16LL - (_QWORD)a1;
    do
    {
      v9 = *v6;
      v10 = v6[1];
      *v6 = 0LL;
      v6[1] = 0LL;
      sub_180011010(v6, a1);
      sub_18006AB38((__int64)a1, 0LL, ((__int64)v6 + v7 + 8) >> 4, &v9, a3);
      if ( v10 )
        sub_18001050C(v10);
      v6 -= 2;
      result = ((unsigned __int64)v6 + v8) & 0xFFFFFFFFFFFFFFF0uLL;
    }
    while ( result >= 32 );
  }
  return result;
}
