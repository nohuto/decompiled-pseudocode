/*
 * XREFs of _vscprintf_helper @ 0x180120AAC
 * Callers:
 *     _vscprintf @ 0x180120A90 (_vscprintf.c)
 *     _vscwprintf @ 0x180120BC0 (_vscwprintf.c)
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall vscprintf_helper(__int64 (__fastcall *a1)(__int64 *), __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp-38h] BYREF
  int v4; // [rsp+38h] [rbp-30h]
  int v5; // [rsp+3Ch] [rbp-2Ch]
  __int64 v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  __int128 v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+5Ch] [rbp-Ch]

  v5 = 0;
  v9 = 0;
  v8 = 0LL;
  if ( a2 )
  {
    v6 = 0LL;
    v3 = 0LL;
    v4 = 0x7FFFFFFF;
    v7 = 66;
    return a1(&v3);
  }
  else
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
