/*
 * XREFs of sub_18001EFE0 @ 0x18001EFE0
 * Callers:
 *     sub_1800BFCEC @ 0x1800BFCEC (sub_1800BFCEC.c)
 *     sub_1800BFDCC @ 0x1800BFDCC (sub_1800BFDCC.c)
 *     sub_1800BFFBC @ 0x1800BFFBC (sub_1800BFFBC.c)
 *     sub_1800C2170 @ 0x1800C2170 (sub_1800C2170.c)
 *     sub_1800C223C @ 0x1800C223C (sub_1800C223C.c)
 * Callees:
 *     sub_18001D250 @ 0x18001D250 (sub_18001D250.c)
 *     sub_18001D3BC @ 0x18001D3BC (sub_18001D3BC.c)
 *     ?eq_int_type@?$_Narrow_char_traits@DH@std@@SA_NHH@Z @ 0x18001D4C8 (-eq_int_type@-$_Narrow_char_traits@DH@std@@SA_NHH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001EFE0(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // eax
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  char v16; // [rsp+28h] [rbp-20h]

  v4 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_BYTE *)(a2 + v5) );
  if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= 0
    || std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= v5 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) - v5;
  }
  sub_18001D250((__int64)&v15, a1);
  if ( v16 )
  {
    if ( (std::ios_base::flags((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) & 0x1C0) != 0x40 )
    {
      while ( v6 > 0 )
      {
        v7 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        LOBYTE(v8) = std::ios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        v9 = std::streambuf::sputc(v7, v8);
        if ( std::_Narrow_char_traits<char,int>::eq_int_type(-1, v9) )
        {
          v4 = 4;
          goto LABEL_19;
        }
        --v6;
      }
    }
    v10 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    if ( std::streambuf::sputn(v10, a2, v5) == v5 )
    {
      while ( v6 > 0 )
      {
        v11 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        LOBYTE(v12) = std::ios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        v13 = std::streambuf::sputc(v11, v12);
        if ( std::_Narrow_char_traits<char,int>::eq_int_type(-1, v13) )
          goto LABEL_18;
        --v6;
      }
    }
    else
    {
LABEL_18:
      v4 = 4;
    }
LABEL_19:
    std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL)), 0LL);
  }
  else
  {
    v4 = 4;
  }
  std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v4, 0LL);
  sub_18001D3BC(&v15);
  return a1;
}
