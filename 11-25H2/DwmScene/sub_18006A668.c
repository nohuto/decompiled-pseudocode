/*
 * XREFs of sub_18006A668 @ 0x18006A668
 * Callers:
 *     sub_18006AD24 @ 0x18006AD24 (sub_18006AD24.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 *__fastcall sub_18006A668(__int64 *a1, __int64 *a2, __int64 (__fastcall *a3)(__int64 *, __int64 *))
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
            sub_180011010(v9, v8);
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
          sub_180011010(v7, v8);
          v7 = v8;
        }
      }
      sub_180011010(v10, &v13);
      if ( v14 )
        sub_18001050C(v14);
    }
  }
  return a2;
}
