/*
 * XREFs of sub_18001D038 @ 0x18001D038
 * Callers:
 *     sub_18001CF4C @ 0x18001CF4C (sub_18001CF4C.c)
 * Callees:
 *     sub_18001D3B0 @ 0x18001D3B0 (sub_18001D3B0.c)
 *     sub_18001D51C @ 0x18001D51C (sub_18001D51C.c)
 *     ?eq_int_type@?$_Narrow_char_traits@DH@std@@SA_NHH@Z @ 0x18001D628 (-eq_int_type@-$_Narrow_char_traits@DH@std@@SA_NHH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001D038(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v6; // ebp
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  unsigned int v14; // eax
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0;
  if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= 0
    || std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= a3 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) - a3;
  }
  sub_18001D3B0(v16, a1);
  if ( v16[8] )
  {
    if ( (std::ios_base::flags((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) & 0x1C0) != 0x40 )
    {
      while ( v7 )
      {
        v8 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        LOBYTE(v9) = std::ios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        v10 = std::streambuf::sputc(v8, v9);
        if ( (unsigned __int8)std::_Narrow_char_traits<char,int>::eq_int_type(0xFFFFFFFFLL, v10) )
        {
          v6 = 4;
          goto LABEL_13;
        }
        --v7;
      }
    }
    v11 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    if ( std::streambuf::sputn(v11, a2, a3) == a3 )
    {
LABEL_13:
      while ( v7 )
      {
        v12 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        LOBYTE(v13) = std::ios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        v14 = std::streambuf::sputc(v12, v13);
        if ( (unsigned __int8)std::_Narrow_char_traits<char,int>::eq_int_type(0xFFFFFFFFLL, v14) )
          goto LABEL_16;
        --v7;
      }
    }
    else
    {
LABEL_16:
      v6 |= 4u;
    }
    std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL)), 0LL);
  }
  else
  {
    v6 = 4;
  }
  std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v6, 0LL);
  sub_18001D51C(v16);
  return a1;
}
