/*
 * XREFs of sub_18002D77C @ 0x18002D77C
 * Callers:
 *     sub_18002B938 @ 0x18002B938 (sub_18002B938.c)
 * Callees:
 *     ?eq_int_type@?$_WChar_traits@_W@std@@SA_NGG@Z @ 0x18001E604 (-eq_int_type@-$_WChar_traits@_W@std@@SA_NGG@Z.c)
 *     sub_18002F90C @ 0x18002F90C (sub_18002F90C.c)
 *     sub_180030530 @ 0x180030530 (sub_180030530.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002D77C(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v6; // ebp
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned __int16 v9; // ax
  __int16 v10; // ax
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int16 v13; // ax
  __int16 v14; // ax
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
  sub_18002F90C(v16, a1);
  if ( v16[8] )
  {
    if ( (std::ios_base::flags((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) & 0x1C0) != 0x40 )
    {
      while ( v7 )
      {
        v8 = std::wios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        v9 = std::wios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        v10 = std::wstreambuf::sputc(v8, v9);
        if ( std::_WChar_traits<wchar_t>::eq_int_type(0xFFFF, v10) )
        {
          v6 = 4;
          goto LABEL_13;
        }
        --v7;
      }
    }
    v11 = std::wios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    if ( std::wstreambuf::sputn(v11, a2, a3) == a3 )
    {
LABEL_13:
      while ( v7 )
      {
        v12 = std::wios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        v13 = std::wios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        v14 = std::wstreambuf::sputc(v12, v13);
        if ( std::_WChar_traits<wchar_t>::eq_int_type(0xFFFF, v14) )
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
  std::wios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v6, 0LL);
  sub_180030530(v16);
  return a1;
}
