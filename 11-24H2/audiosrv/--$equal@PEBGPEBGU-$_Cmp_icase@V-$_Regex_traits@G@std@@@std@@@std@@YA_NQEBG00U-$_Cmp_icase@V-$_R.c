/*
 * XREFs of ??$equal@PEBGPEBGU?$_Cmp_icase@V?$_Regex_traits@G@std@@@std@@@std@@YA_NQEBG00U?$_Cmp_icase@V?$_Regex_traits@G@std@@@0@@Z @ 0x1801436A8
 * Callers:
 *     ??$lookup_classname@PEBG@?$_Regex_traits@G@std@@QEBAFPEBG0_N@Z @ 0x180143738 (--$lookup_classname@PEBG@-$_Regex_traits@G@std@@QEBAFPEBG0_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall std::equal<unsigned short const *,unsigned short const *,std::_Cmp_icase<std::_Regex_traits<unsigned short>>>(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int16 *v6; // r14
  __int64 v7; // r15
  unsigned __int16 v8; // di
  __int16 v9; // si

  v6 = a1;
  if ( a1 == a2 )
    return 1;
  v7 = a3 - (_QWORD)a1;
  while ( 1 )
  {
    v8 = *v6;
    v9 = std::ctype<unsigned short>::tolower(*(_QWORD *)(a4 + 8), *(unsigned __int16 *)((char *)v6 + v7));
    if ( (unsigned __int16)std::ctype<unsigned short>::tolower(*(_QWORD *)(a4 + 8), v8) != v9 )
      break;
    if ( ++v6 == a2 )
      return 1;
  }
  return 0;
}
