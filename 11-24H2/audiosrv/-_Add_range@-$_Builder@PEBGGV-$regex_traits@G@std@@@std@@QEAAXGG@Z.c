/*
 * XREFs of ?_Add_range@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXGG@Z @ 0x180146E34
 * Callers:
 *     ?_ClassRanges@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180147E50 (-_ClassRanges@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015ED0 (--2@YAPEAX_K@Z.c)
 *     ?_Add_char_to_array@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXG@Z @ 0x180146A4C (-_Add_char_to_array@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXG@Z.c)
 *     ?_Insert@?$_Buf@G@std@@QEAAXG@Z @ 0x180148A60 (-_Insert@-$_Buf@G@std@@QEAAXG@Z.c)
 */

void __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_range(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3)
{
  unsigned int i; // ebx
  __int64 v6; // rbp
  _OWORD *v7; // r8
  _OWORD *v8; // rax
  _DWORD *v9; // rax

  LOWORD(i) = a2;
  if ( (*(_DWORD *)(a1 + 16) & 0x100) != 0 )
  {
    LOWORD(i) = std::ctype<unsigned short>::tolower(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
    a3 = std::ctype<unsigned short>::tolower(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), a3);
  }
  v6 = *(_QWORD *)(a1 + 8);
  for ( i = (unsigned __int16)i; i <= a3 && (unsigned int)a3 < *(_DWORD *)(a1 + 32); ++i )
  {
    v7 = *(_OWORD **)(v6 + 40);
    if ( !v7 )
    {
      v8 = operator new(0x20uLL);
      v7 = v8;
      if ( v8 )
      {
        *v8 = 0LL;
        v8[1] = 0LL;
      }
      else
      {
        v7 = 0LL;
      }
      *(_QWORD *)(v6 + 40) = v7;
    }
    *((_BYTE *)v7 + ((unsigned __int64)i >> 3)) |= 1 << (i & 7);
  }
  if ( a3 >= i )
  {
    if ( a3 - i >= *(_DWORD *)(a1 + 36) )
    {
      v9 = *(_DWORD **)(v6 + 56);
      if ( !v9 )
      {
        v9 = operator new(0x10uLL);
        if ( v9 )
        {
          *v9 = 0;
          v9[1] = 0;
          *((_QWORD *)v9 + 1) = 0LL;
        }
        *(_QWORD *)(v6 + 56) = v9;
      }
      std::_Buf<unsigned short>::_Insert(v9, (unsigned __int16)i);
      std::_Buf<unsigned short>::_Insert(*(_QWORD *)(v6 + 56), a3);
    }
    else
    {
      do
        std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char_to_array(
          a1,
          (unsigned __int16)i++);
      while ( i <= a3 );
    }
  }
}
