/*
 * XREFs of sub_180098C10 @ 0x180098C10
 * Callers:
 *     sub_180099028 @ 0x180099028 (sub_180099028.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 */

__int64 *__fastcall sub_180098C10(__int64 *a1, __int64 *a2)
{
  __int64 *i; // rbx
  __int64 v5; // rax
  __int64 *v6; // r8
  __int64 v7; // r14
  __int64 *v8; // rsi
  char v9; // cl
  __int64 v10; // rax
  __int64 *v11; // rcx
  char v13; // cl
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]

  if ( a1 != a2 )
  {
    for ( i = a1 + 2; i != a2; i += 2 )
    {
      v5 = i[1];
      v6 = i;
      v7 = *i;
      v8 = i;
      *i = 0LL;
      i[1] = 0LL;
      v15 = v5;
      v9 = *(_BYTE *)(v7 + 88);
      v10 = *a1;
      v14 = v7;
      if ( v9 == *(_BYTE *)(v10 + 88) )
        v9 = 0;
      if ( v9 )
      {
        if ( i != a1 )
        {
          do
          {
            v11 = v8;
            v8 -= 2;
            sub_180011010(v11, v8);
          }
          while ( v8 != a1 );
        }
        v6 = a1;
      }
      else
      {
        while ( 1 )
        {
          v13 = *(_BYTE *)(v7 + 88);
          v8 -= 2;
          if ( v13 == *(_BYTE *)(*v8 + 88) )
            v13 = 0;
          if ( !v13 )
            break;
          sub_180011010(v6, v8);
          v6 = v8;
        }
      }
      sub_180011010(v6, &v14);
      if ( v15 )
        sub_18001050C(v15);
    }
  }
  return a2;
}
