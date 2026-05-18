/*
 * XREFs of sub_1800385F0 @ 0x1800385F0
 * Callers:
 *     sub_180037E8C @ 0x180037E8C (sub_180037E8C.c)
 *     sub_180038810 @ 0x180038810 (sub_180038810.c)
 *     sub_180038AC4 @ 0x180038AC4 (sub_180038AC4.c)
 *     sub_18005E5FC @ 0x18005E5FC (sub_18005E5FC.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180038770 @ 0x180038770 (sub_180038770.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800385F0(__int64 *a1, __int64 *a2, __int64 (__fastcall *a3)(__int64 *, __int64 *))
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
        sub_180038770(a1, i, i + 2);
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
          sub_180011110(v7, j);
        }
      }
      sub_180011110(v8, &v12);
      if ( v13 )
        sub_18001060C(v13);
    }
  }
  return a2;
}
