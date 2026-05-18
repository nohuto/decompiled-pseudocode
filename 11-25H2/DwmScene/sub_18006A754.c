/*
 * XREFs of sub_18006A754 @ 0x18006A754
 * Callers:
 *     sub_18006AD24 @ 0x18006AD24 (sub_18006AD24.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18006AB38 @ 0x18006AB38 (sub_18006AB38.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_18006A754(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  int v5; // ebp
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 *v8; // rbx
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a1;
  v6 = (a2 - a1) >> 4;
  v7 = (a2 - a1) >> 5;
  if ( v7 > 0 )
  {
    v8 = (__int64 *)(a1 + 16 * v7);
    do
    {
      --v7;
      v8 -= 2;
      v9 = *v8;
      v10 = v8[1];
      *v8 = 0LL;
      v8[1] = 0LL;
      result = (_UNKNOWN **)sub_18006AB38(v5, v7, v6, (unsigned int)&v9, a3);
      if ( v10 )
        result = (_UNKNOWN **)sub_18001050C(v10);
    }
    while ( v7 > 0 );
  }
  return result;
}
