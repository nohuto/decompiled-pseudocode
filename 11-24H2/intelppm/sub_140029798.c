/*
 * XREFs of sub_140029798 @ 0x140029798
 * Callers:
 *     sub_140029660 @ 0x140029660 (sub_140029660.c)
 * Callees:
 *     sub_140004B88 @ 0x140004B88 (sub_140004B88.c)
 *     sub_1400053CC @ 0x1400053CC (sub_1400053CC.c)
 *     sub_1400054D4 @ 0x1400054D4 (sub_1400054D4.c)
 *     sub_140028D44 @ 0x140028D44 (sub_140028D44.c)
 */

__int64 sub_140029798()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  unsigned int v2; // eax
  __int64 *v3; // rcx
  unsigned int v4; // r11d
  _OWORD v6[2]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int8 v7; // [rsp+60h] [rbp+20h] BYREF
  __int64 v8; // [rsp+68h] [rbp+28h] BYREF
  __int64 v9; // [rsp+70h] [rbp+30h] BYREF

  v8 = 0LL;
  memset(v6, 0, sizeof(v6));
  v7 = 0;
  if ( byte_1400193D8 )
  {
LABEL_2:
    sub_1400054D4((__int64)&qword_140019198, 32, (__int64)v6);
    sub_1400053CC((__int64 *)v6);
    while ( !(unsigned int)sub_140004B88((__int64 *)v6, &v8) )
    {
      if ( _bittest64((const signed __int64 *)(v8 + 280), 0x25u) )
        *(_BYTE *)(v8 + 376) = 0;
    }
    dword_14001983C = 1;
  }
  else
  {
    v9 = 0LL;
    sub_1400054D4((__int64)&qword_140019198, 32, (__int64)v6);
    sub_1400053CC((__int64 *)v6);
    while ( !(unsigned int)sub_140004B88((__int64 *)v6, &v8) )
    {
      v0 = v8;
      if ( _bittest64((const signed __int64 *)(v8 + 280), 0x25u) )
      {
        if ( (int)sub_140028D44(v8, &v7) < 0 )
          goto LABEL_2;
        v1 = v7;
        *(_BYTE *)(v0 + 376) = v7;
        ++*((_DWORD *)&v9 + v1);
      }
    }
    v2 = 0;
    v3 = &v9;
    do
    {
      if ( !*(_DWORD *)v3 )
        break;
      ++v2;
      v3 = (__int64 *)((char *)v3 + 4);
    }
    while ( v2 < 2 );
    dword_14001983C = v2;
    return 0;
  }
  return v4;
}
