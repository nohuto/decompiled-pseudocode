/*
 * XREFs of sub_18002B6B0 @ 0x18002B6B0
 * Callers:
 *     sub_18003279C @ 0x18003279C (sub_18003279C.c)
 * Callees:
 *     sub_18001D37C @ 0x18001D37C (sub_18001D37C.c)
 *     sub_18001DEA0 @ 0x18001DEA0 (sub_18001DEA0.c)
 *     ?eq_int_type@?$_WChar_traits@_W@std@@SA_NGG@Z @ 0x18001E604 (-eq_int_type@-$_WChar_traits@_W@std@@SA_NGG@Z.c)
 *     sub_18002F90C @ 0x18002F90C (sub_18002F90C.c)
 *     sub_180030530 @ 0x180030530 (sub_180030530.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002B6B0(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // r15
  unsigned int v4; // ebp
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rbx
  unsigned __int16 v10; // ax
  __int16 v11; // ax
  __int64 v12; // rbx
  __int64 v13; // rdx
  unsigned __int16 v14; // ax
  __int16 v15; // ax
  bool v16; // al
  int v17; // ecx
  __int64 v18; // rbx
  unsigned __int16 v19; // ax
  __int16 v20; // ax
  _BYTE v22[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v23[40]; // [rsp+30h] [rbp-28h] BYREF

  v2 = a2;
  v4 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= 0
    || std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= v5 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) - v5;
  }
  sub_18002F90C(v22, a1);
  if ( v22[8] )
  {
    v7 = std::ios_base::getloc(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v23);
    v8 = sub_18001DEA0(v7);
    sub_18001D37C((__int64)v23);
    if ( (std::ios_base::flags((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) & 0x1C0) == 0x40 )
      goto LABEL_13;
    while ( v6 > 0 )
    {
      v9 = std::wios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
      v10 = std::wios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
      v11 = std::wstreambuf::sputc(v9, v10);
      if ( std::_WChar_traits<wchar_t>::eq_int_type(0xFFFF, v11) )
      {
LABEL_21:
        v4 = 4;
        goto LABEL_22;
      }
      --v6;
    }
LABEL_13:
    while ( v5 > 0 )
    {
      v12 = std::wios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
      LOBYTE(v13) = *v2;
      v14 = std::ctype<wchar_t>::widen(v8, v13);
      v15 = std::wstreambuf::sputc(v12, v14);
      v16 = std::_WChar_traits<wchar_t>::eq_int_type(0xFFFF, v15);
      v17 = v4 | 4;
      if ( !v16 )
        v17 = v4;
      v4 = v17;
      --v5;
      ++v2;
      if ( v17 )
        goto LABEL_22;
    }
    while ( v6 > 0 )
    {
      v18 = std::wios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
      v19 = std::wios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
      v20 = std::wstreambuf::sputc(v18, v19);
      if ( std::_WChar_traits<wchar_t>::eq_int_type(0xFFFF, v20) )
        goto LABEL_21;
      --v6;
    }
LABEL_22:
    std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL)), 0LL);
  }
  else
  {
    v4 = 4;
  }
  std::wios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v4, 0LL);
  sub_180030530(v22);
  return a1;
}
