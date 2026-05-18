/*
 * XREFs of sub_180082FB4 @ 0x180082FB4
 * Callers:
 *     sub_180082EC0 @ 0x180082EC0 (sub_180082EC0.c)
 * Callees:
 *     _o_pow @ 0x18000C47C (_o_pow.c)
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180045668 @ 0x180045668 (sub_180045668.c)
 *     sub_18007CCA4 @ 0x18007CCA4 (sub_18007CCA4.c)
 *     sub_180082EF0 @ 0x180082EF0 (sub_180082EF0.c)
 *     sub_180083220 @ 0x180083220 (sub_180083220.c)
 *     sub_180083518 @ 0x180083518 (sub_180083518.c)
 *     sub_180083558 @ 0x180083558 (sub_180083558.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_180082FB4(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int16 a5)
{
  __int64 *v5; // r13
  unsigned int v6; // edi
  char v7; // bl
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  __int64 v11; // r8
  unsigned int v12; // esi
  bool v13; // zf
  unsigned int v14; // ebx
  int v15; // r14d
  int v16; // r12d
  __int64 v17; // r13
  int v18; // r14d
  unsigned int i; // r15d
  __int128 v21; // [rsp+60h] [rbp-79h] BYREF
  __int64 v22; // [rsp+70h] [rbp-69h]
  __int128 v23; // [rsp+78h] [rbp-61h] BYREF
  __int64 v24; // [rsp+88h] [rbp-51h]
  __int128 v25; // [rsp+90h] [rbp-49h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-39h]
  __int128 v27; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-21h]

  v5 = a1;
  o_pow();
  v6 = (int)2.0;
  v27 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v7 = a5;
  LOBYTE(v8) = a5;
  sub_180083220(v10, v9, v8, (int)2.0, (__int64)&v27, (__int64)&v25, (__int64)&v23);
  v12 = (int)2.0 + 1;
  v21 = 0LL;
  v22 = 0LL;
  v13 = v7 == 0;
  v14 = 1;
  if ( v13 )
  {
    if ( v6 )
    {
      v15 = (int)2.0 + 1;
      do
      {
        if ( v14 > 1 )
        {
          a5 = v6 + v15 - v12;
          sub_180083558(&v21, &a5);
        }
        if ( (int)2.0 != -1 )
        {
          v16 = (int)2.0;
          v17 = v12;
          do
          {
            a5 = v15 - v12 + v16;
            sub_180083558(&v21, &a5);
            a5 = v15 + v16;
            sub_180083558(&v21, &a5);
            --v16;
            --v17;
          }
          while ( v17 );
        }
        if ( v14 < v6 )
        {
          a5 = v15;
          sub_180083558(&v21, &a5);
        }
        ++v14;
        LOWORD(v15) = v12 + v15;
      }
      while ( v14 <= v6 );
      v5 = a1;
    }
  }
  else if ( v6 )
  {
    v18 = (int)2.0 + 1;
    do
    {
      if ( v14 > 1 )
      {
        a5 = v18 - v12;
        sub_180083558(&v21, &a5);
      }
      for ( i = 0; i <= v6; ++i )
      {
        a5 = v18 - v12 + i;
        sub_180083558(&v21, &a5);
        a5 = v18 + i;
        sub_180083558(&v21, &a5);
      }
      if ( v14 < v6 )
      {
        a5 = v18 + v6;
        sub_180083558(&v21, &a5);
      }
      ++v14;
      LOWORD(v18) = v12 + v18;
    }
    while ( v14 <= v6 );
  }
  sub_180082EF0(v5, a2, v11, (__int64 *)&v27, &v21, (__int64 *)&v25, (__int64 *)&v23);
  sub_180045668(*v5);
  sub_180083518(&v21);
  if ( (_QWORD)v23 )
    sub_180010234((void *)v23, (v24 - v23) & 0xFFFFFFFFFFFFFFF8uLL);
  sub_18007CCA4((__int64)&v25);
  sub_18007CCA4((__int64)&v27);
  return v5;
}
