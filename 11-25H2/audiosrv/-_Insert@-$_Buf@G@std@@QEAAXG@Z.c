/*
 * XREFs of ?_Insert@?$_Buf@G@std@@QEAAXG@Z @ 0x18013FFE8
 * Callers:
 *     ?_Add_char@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXG@Z @ 0x18013DF54 (-_Add_char@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXG@Z.c)
 *     ?_Add_char_to_array@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXG@Z @ 0x18013DFD4 (-_Add_char_to_array@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXG@Z.c)
 *     ?_Add_range@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXGG@Z @ 0x18013E3BC (-_Add_range@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXGG@Z.c)
 *     ?_Char_to_elts@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXPEBG0_JPEAPEAU?$_Sequence@G@2@@Z @ 0x18013EF14 (-_Char_to_elts@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXPEBG0_JPEAPEAU-$_Sequence@G@2@@.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180061AE0 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 */

__int64 __fastcall std::_Buf<unsigned short>::_Insert(unsigned int *a1, __int16 a2)
{
  unsigned int v2; // eax
  __int64 *v3; // rdi
  unsigned int v6; // ebp
  __int64 size_of; // rax
  __int64 v8; // rax
  __int64 result; // rax

  v2 = a1[1];
  v3 = (__int64 *)(a1 + 2);
  if ( *a1 <= v2 )
  {
    v6 = v2 + 16;
    size_of = std::_Get_size_of_n<2>(v2 + 16);
    v8 = _o_realloc(*v3, size_of);
    if ( !v8 )
    {
      std::_Xbad_alloc();
      __debugbreak();
    }
    *v3 = v8;
    *a1 = v6;
  }
  result = *v3;
  *(_WORD *)(*v3 + 2LL * a1[1]++) = a2;
  return result;
}
