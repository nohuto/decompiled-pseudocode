/*
 * XREFs of ??$lookup_classname@PEBG@?$_Regex_traits@G@std@@QEBAFPEBG0_N@Z @ 0x180143738
 * Callers:
 *     ?_CharacterClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_N_N@Z @ 0x180147A9C (-_CharacterClassEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_N_N@Z.c)
 *     ?_Do_ex_class@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z @ 0x180148378 (-_Do_ex_class@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z.c)
 * Callees:
 *     ??$equal@PEBGPEBGU?$_Cmp_icase@V?$_Regex_traits@G@std@@@std@@@std@@YA_NQEBG00U?$_Cmp_icase@V?$_Regex_traits@G@std@@@0@@Z @ 0x1801436A8 (--$equal@PEBGPEBGU-$_Cmp_icase@V-$_Regex_traits@G@std@@@std@@@std@@YA_NQEBG00U-$_Cmp_icase@V-$_R.c)
 */

__int64 __fastcall std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        char a4)
{
  const wchar_t *v6; // r8
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned __int16 v12; // cx

  v6 = L"alnum";
  LODWORD(v9) = 0;
  if ( L"alnum" )
  {
    v10 = 0LL;
    v11 = a3 - a2;
    do
    {
      if ( v11 == LODWORD((&`std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>'::`2'::_Names)[v10 + 2])
        && std::equal<unsigned short const *,unsigned short const *,std::_Cmp_icase<std::_Regex_traits<unsigned short>>>(
             a2,
             a3,
             (__int64)v6,
             a1) )
      {
        break;
      }
      v9 = (unsigned int)(v9 + 1);
      v10 = 3 * v9;
      v6 = (const wchar_t *)(&`std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>'::`2'::_Names)[3 * v9 + 1];
    }
    while ( v6 );
  }
  v12 = 0;
  if ( (&`std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>'::`2'::_Names)[3 * (unsigned int)v9 + 1] )
    v12 = *((_WORD *)&`std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>'::`2'::_Names
          + 12 * (unsigned int)v9
          + 10);
  if ( a4 && (v12 & 3) != 0 )
    v12 |= 3u;
  return v12;
}
