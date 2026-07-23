/*
 * XREFs of vscan_fn @ 0x1801247D0
 * Callers:
 *     sscanf @ 0x180124790 (sscanf.c)
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall vscan_fn(
        __int64 (__fastcall *a1)(__int64 *, __int64, __int64, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+38h] [rbp-30h]
  int v9; // [rsp+3Ch] [rbp-2Ch]
  __int64 v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]
  __int128 v12; // [rsp+4Ch] [rbp-1Ch]
  int v13; // [rsp+5Ch] [rbp-Ch]

  v9 = 0;
  v5 = -1LL;
  v13 = 0;
  v12 = 0LL;
  do
    ++v5;
  while ( *(_BYTE *)(a2 + v5) );
  if ( a2 && a3 )
  {
    v10 = a2;
    v7 = a2;
    if ( v5 > 0x7FFFFFFF )
      LODWORD(v5) = 0x7FFFFFFF;
    v11 = 73;
    v8 = v5;
    return a1(&v7, a3, a4, a5);
  }
  else
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
