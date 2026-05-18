/*
 * XREFs of sub_18004D674 @ 0x18004D674
 * Callers:
 *     sub_18004D7E4 @ 0x18004D7E4 (sub_18004D7E4.c)
 * Callees:
 *     sub_18001D338 @ 0x18001D338 (sub_18001D338.c)
 *     ?eq_int_type@?$_Narrow_char_traits@DH@std@@SA_NHH@Z @ 0x18001D4C8 (-eq_int_type@-$_Narrow_char_traits@DH@std@@SA_NHH@Z.c)
 *     sub_18001D54C @ 0x18001D54C (sub_18001D54C.c)
 *     sub_18001D608 @ 0x18001D608 (sub_18001D608.c)
 *     sub_18001D614 @ 0x18001D614 (sub_18001D614.c)
 *     sub_18004DA80 @ 0x18004DA80 (sub_18004DA80.c)
 *     sub_18004E710 @ 0x18004E710 (sub_18004E710.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004D674(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // si
  unsigned int v6; // edi
  char v7; // r14
  int v8; // r15d
  __int64 v9; // rax
  int i; // eax
  int v11; // esi
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a3;
  v6 = 0;
  v7 = 0;
  LOBYTE(a3) = 1;
  sub_18004DA80(v17, a1, a3);
  if ( v17[8] )
  {
    sub_18004E710(a2);
    v8 = sub_18001D614(v3);
    v9 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    for ( i = std::streambuf::sgetc(v9); ; i = std::streambuf::snextc(v13) )
    {
      v11 = i;
      if ( std::_Narrow_char_traits<char,int>::eq_int_type(-1, i) )
        break;
      if ( std::_Narrow_char_traits<char,int>::eq_int_type(v11, v8) )
      {
        v7 = 1;
        v14 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        std::streambuf::sbumpc(v14);
        goto LABEL_10;
      }
      if ( *(_QWORD *)(a2 + 16) >= 0x7FFFFFFFFFFFFFFFuLL )
      {
        v6 = 2;
        goto LABEL_10;
      }
      LOBYTE(v12) = sub_18001D608(v11);
      sub_18001D54C(a2, v12);
      v7 = 1;
      v13 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    }
    v6 = 1;
  }
LABEL_10:
  v15 = v6 | 2;
  if ( v7 )
    v15 = v6;
  std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v15, 0LL);
  sub_18001D338((__int64)v17);
  return a1;
}
