/*
 * XREFs of sub_18006A7C8 @ 0x18006A7C8
 * Callers:
 *     sub_18006AE84 @ 0x18006AE84 (sub_18006AE84.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 *__fastcall sub_18006A7C8(__int64 *a1, __int64 *a2, __int64 (__fastcall *a3)(__int64 *, __int64 *))
{
  __int64 *i; // rbx
  __int64 *v7; // r14
  __int64 *v8; // rsi
  __int64 *v9; // rcx
  __int64 *v10; // rcx
  char v12; // al
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]

  if ( a1 != a2 )
  {
    for ( i = a1 + 2; i != a2; i += 2 )
    {
      v7 = i;
      v13 = *i;
      v14 = i[1];
      *i = 0LL;
      i[1] = 0LL;
      v8 = i;
      if ( (unsigned __int8)a3(&v13, a1) )
      {
        if ( i != a1 )
        {
          do
          {
            v9 = v8;
            v8 -= 2;
            sub_180011110(v9, v8);
          }
          while ( v8 != a1 );
        }
        v10 = a1;
      }
      else
      {
        while ( 1 )
        {
          v8 -= 2;
          v12 = a3(&v13, v8);
          v10 = v7;
          if ( !v12 )
            break;
          sub_180011110(v7, v8);
          v7 = v8;
        }
      }
      sub_180011110(v10, &v13);
      if ( v14 )
        sub_18001060C(v14);
    }
  }
  return a2;
}
