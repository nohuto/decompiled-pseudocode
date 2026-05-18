/*
 * XREFs of sub_18009656C @ 0x18009656C
 * Callers:
 *     sub_180095958 @ 0x180095958 (sub_180095958.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_18009656C(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  void **v4; // rdi
  _QWORD *v5; // r14
  __int64 v6; // rsi
  void *v7; // rcx

  while ( 1 )
  {
    result = a1[4];
    if ( !result )
      break;
    v3 = result - 1;
    a1[4] = v3;
    if ( !v3 )
      a1[3] = 0LL;
  }
  v4 = (void **)(a1 + 1);
  v5 = a1 + 1;
  if ( a1[1] )
  {
    v6 = a1[2];
    if ( v6 )
    {
      do
      {
        --v6;
        v7 = (void *)*((_QWORD *)*v4 + v6);
        if ( v7 )
          sub_180010234(v7, 0x10uLL);
      }
      while ( v6 );
      v5 = a1 + 1;
    }
    result = sub_180010234(*v4, 8LL * a1[2]);
  }
  a1[2] = 0LL;
  *v5 = 0LL;
  return result;
}
