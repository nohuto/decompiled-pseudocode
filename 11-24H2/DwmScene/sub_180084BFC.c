/*
 * XREFs of sub_180084BFC @ 0x180084BFC
 * Callers:
 *     sub_1800862C0 @ 0x1800862C0 (sub_1800862C0.c)
 * Callees:
 *     sub_18001D498 @ 0x18001D498 (sub_18001D498.c)
 *     sub_18001D4DC @ 0x18001D4DC (sub_18001D4DC.c)
 *     ?eq_int_type@?$_Narrow_char_traits@DH@std@@SA_NHH@Z @ 0x18001D628 (-eq_int_type@-$_Narrow_char_traits@DH@std@@SA_NHH@Z.c)
 *     sub_18001D6AC @ 0x18001D6AC (sub_18001D6AC.c)
 *     sub_18001D768 @ 0x18001D768 (sub_18001D768.c)
 *     sub_18001DF18 @ 0x18001DF18 (sub_18001DF18.c)
 *     sub_18004DBE0 @ 0x18004DBE0 (sub_18004DBE0.c)
 *     sub_18004E870 @ 0x18004E870 (sub_18004E870.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180084BFC(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  char v5; // r15
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rax
  int i; // eax
  char v11; // si
  char v12; // si
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  _BYTE v18[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v19[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  v5 = 0;
  sub_18004DBE0((__int64)v18, a1, 0);
  if ( v18[8] )
  {
    v6 = std::ios_base::getloc(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v19);
    v7 = sub_18001DF18(v6);
    sub_18001D4DC((__int64)v19);
    sub_18004E870(a2);
    v8 = 0x7FFFFFFFFFFFFFFFLL;
    if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) > 0
      && (unsigned __int64)std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) < 0x7FFFFFFFFFFFFFFFLL )
    {
      v8 = std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL)));
    }
    v9 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    for ( i = std::streambuf::sgetc(v9); ; i = std::streambuf::snextc(v15) )
    {
      v11 = i;
      if ( !v8 )
        break;
      if ( std::_Narrow_char_traits<char,int>::eq_int_type(-1, i) )
      {
        v4 = 1;
        break;
      }
      v12 = sub_18001D768(v11);
      LOBYTE(v13) = v12;
      if ( (unsigned __int8)std::ctype<char>::is(v7, 72LL, v13) )
        break;
      LOBYTE(v14) = v12;
      sub_18001D6AC(a2, v14);
      v5 = 1;
      --v8;
      v15 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    }
  }
  std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL)), 0LL);
  v16 = v4 | 2;
  if ( v5 )
    v16 = v4;
  std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v16, 0LL);
  sub_18001D498((__int64)v18);
  return a1;
}
