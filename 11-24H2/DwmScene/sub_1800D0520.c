/*
 * XREFs of sub_1800D0520 @ 0x1800D0520
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001E61C @ 0x18001E61C (sub_18001E61C.c)
 *     sub_1800CF404 @ 0x1800CF404 (sub_1800CF404.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_1800D0520(_QWORD **a1, __int64 *a2)
{
  __int64 *v4; // rbx
  __int64 **v5; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v9[4]; // [rsp+28h] [rbp-20h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v4 = (__int64 *)*a1[12];
  while ( !*((_BYTE *)v4 + 25) )
  {
    ((void (__fastcall *)(_QWORD **, __int64 *, __int64 *))(*a1)[25])(a1, v9, v4 + 4);
    sub_1800CF404(a2, a2[1], v9[0], (v9[1] - v9[0]) >> 5);
    sub_18001E61C((__int64)v9);
    v5 = (__int64 **)v4[2];
    if ( *((_BYTE *)v5 + 25) )
    {
      for ( i = (__int64 *)v4[1]; !*((_BYTE *)i + 25) && v4 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v4 = i;
      v4 = i;
    }
    else
    {
      v4 = (__int64 *)v4[2];
      for ( j = *v5; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v4 = j;
    }
  }
  return a2;
}
