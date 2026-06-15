/*
 * XREFs of ?_Add_char_to_bitmap@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXG@Z @ 0x18013E050
 * Callers:
 *     ?_Add_char_to_class@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXG@Z @ 0x18013E0E0 (-_Add_char_to_class@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXG@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 */

int __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char_to_bitmap(
        __int64 a1,
        __int64 a2)
{
  unsigned __int16 v2; // di
  __int64 v4; // rbx
  _OWORD *v5; // r8
  _OWORD *v6; // rax
  unsigned __int64 v7; // rdx
  int result; // eax

  v2 = a2;
  if ( (*(_DWORD *)(a1 + 16) & 0x100) != 0 )
    v2 = std::ctype<unsigned short>::tolower(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_OWORD **)(v4 + 40);
  if ( !v5 )
  {
    v6 = operator new(0x20uLL);
    v5 = v6;
    if ( v6 )
    {
      *v6 = 0LL;
      v6[1] = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
    *(_QWORD *)(v4 + 40) = v5;
  }
  v7 = (unsigned __int64)v2 >> 3;
  result = *((unsigned __int8 *)v5 + v7) | (1 << (v2 & 7));
  *((_BYTE *)v5 + v7) = result;
  return result;
}
