/*
 * XREFs of ??0?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@QEAA@AEBV?$regex_traits@G@1@PEBG1W4syntax_option_type@regex_constants@1@@Z @ 0x180143ECC
 * Callers:
 *     ??$_Reset@PEBG@?$basic_regex@GV?$regex_traits@G@std@@@std@@AEAAXPEBG0W4syntax_option_type@regex_constants@1@@Z @ 0x1801433D8 (--$_Reset@PEBG@-$basic_regex@GV-$regex_traits@G@std@@@std@@AEAAXPEBG0W4syntax_option_type@regex_.c)
 * Callees:
 *     ?_Trim@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K@Z @ 0x18013A8BC (-_Trim@-$vector@_NV-$allocator@_N@std@@@std@@QEAAX_K@Z.c)
 *     ??0?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAA@AEBV?$regex_traits@G@1@W4syntax_option_type@regex_constants@1@@Z @ 0x180143E30 (--0-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAA@AEBV-$regex_traits@G@1@W4syntax_option_type.c)
 *     ?_Trans@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180149218 (-_Trans@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned int v7; // esi

  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  std::vector<bool>::_Trim((__int64 *)(a1 + 32), 0LL);
  std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>(
    a1 + 64,
    a2,
    a5);
  *(_QWORD *)(a1 + 104) = a2;
  *(_DWORD *)(a1 + 112) = a5;
  v7 = a5 & 0x3F;
  if ( v7 < 2 )
  {
    *(_DWORD *)(a1 + 128) = 142040571;
    goto LABEL_15;
  }
  switch ( v7 )
  {
    case 2u:
      *(_DWORD *)(a1 + 128) = 1845494528;
      break;
    case 4u:
      *(_DWORD *)(a1 + 128) = 1887436827;
      break;
    case 8u:
      *(_DWORD *)(a1 + 128) = 1904320539;
      break;
    case 0x10u:
      *(_DWORD *)(a1 + 128) = 1846018820;
      break;
    case 0x20u:
      *(_DWORD *)(a1 + 128) = 1887961119;
      break;
    default:
      *(_DWORD *)(a1 + 128) = 0;
      goto LABEL_15;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 64) + 12LL) |= 8u;
LABEL_15:
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Trans(a1);
  return a1;
}
