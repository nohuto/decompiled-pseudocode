/*
 * XREFs of sub_18004D5B4 @ 0x18004D5B4
 * Callers:
 *     sub_18004CF28 @ 0x18004CF28 (sub_18004CF28.c)
 * Callees:
 *     memcpy @ 0x18000CD49 (memcpy.c)
 *     sub_180010918 @ 0x180010918 (sub_180010918.c)
 *     sub_1800118D8 @ 0x1800118D8 (sub_1800118D8.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@D@std@@@std@@QEBA_NXZ @ 0x18001199C (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@D@std@@@std@@QEBA_NXZ.c)
 */

char __fastcall sub_18004D5B4(__int64 a1)
{
  unsigned __int64 v2; // rax
  void **v3; // rcx
  unsigned __int64 v4; // rax
  void *v5; // rbx
  __int64 v6; // rcx
  void *v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(v2) = std::_String_val<std::_Simple_types<char>>::_Large_mode_engaged(a1);
  if ( (_BYTE)v2 )
  {
    v4 = (unsigned __int64)v3[2];
    if ( v4 > 0xF )
    {
      v2 = v4 | 0xF;
      if ( v2 > 0x7FFFFFFFFFFFFFFFLL )
        v2 = 0x7FFFFFFFFFFFFFFFLL;
      v10 = v2;
      if ( v2 < *(_QWORD *)(a1 + 24) )
      {
        v7 = (void *)sub_180010918(0x7FFFFFFFFFFFFFFFLL, &v10);
        memcpy(v7, *(const void **)a1, *(_QWORD *)(a1 + 16) + 1LL);
        sub_1800118D8(v8, *(void **)a1, *(_QWORD *)(a1 + 24));
        LOBYTE(v2) = v10;
        *(_QWORD *)(a1 + 24) = v10;
        *(_QWORD *)a1 = v7;
      }
    }
    else
    {
      v5 = *v3;
      memcpy(v3, *v3, v4 + 1);
      LOBYTE(v2) = sub_1800118D8(v6, v5, *(_QWORD *)(a1 + 24));
      *(_QWORD *)(a1 + 24) = 15LL;
    }
  }
  return v2;
}
