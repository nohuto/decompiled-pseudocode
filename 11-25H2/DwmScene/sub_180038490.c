/*
 * XREFs of sub_180038490 @ 0x180038490
 * Callers:
 *     sub_180037D2C @ 0x180037D2C (sub_180037D2C.c)
 *     sub_1800386B0 @ 0x1800386B0 (sub_1800386B0.c)
 *     sub_180038964 @ 0x180038964 (sub_180038964.c)
 *     sub_18005E49C @ 0x18005E49C (sub_18005E49C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180038610 @ 0x180038610 (sub_180038610.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180038490(__int64 *a1, __int64 *a2, __int64 (__fastcall *a3)(__int64 *, __int64 *))
{
  __int64 *i; // rdi
  __int64 *v7; // r14
  __int64 *v8; // rcx
  __int64 *j; // rbx
  char v11; // al
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]

  if ( a1 != a2 )
  {
    for ( i = a1 + 2; i != a2; i += 2 )
    {
      v7 = i;
      v12 = *i;
      v13 = i[1];
      *i = 0LL;
      i[1] = 0LL;
      if ( (unsigned __int8)a3(&v12, a1) )
      {
        sub_180038610(a1, i, i + 2);
        v8 = a1;
      }
      else
      {
        for ( j = i; ; v7 = j )
        {
          j -= 2;
          v11 = a3(&v12, j);
          v8 = v7;
          if ( !v11 )
            break;
          sub_180011010(v7, j);
        }
      }
      sub_180011010(v8, &v12);
      if ( v13 )
        sub_18001050C(v13);
    }
  }
  return a2;
}
