/*
 * XREFs of ??$_Cmp_chrange@PEBGPEBGU?$_Cmp_collate@V?$regex_traits@G@std@@@std@@@std@@YAPEBGPEBG000U?$_Cmp_collate@V?$regex_traits@G@std@@@0@@Z @ 0x1801266B4
 * Callers:
 *     ??$_Compare@PEBGPEBGV?$regex_traits@G@std@@@std@@YAPEBGPEBG000AEBV?$regex_traits@G@0@W4syntax_option_type@regex_constants@0@@Z @ 0x180126804 (--$_Compare@PEBGPEBGV-$regex_traits@G@std@@@std@@YAPEBGPEBG000AEBV-$regex_traits@G@0@W4syntax_op.c)
 * Callees:
 *     ?translate@?$_Regex_traits@G@std@@QEBAGG@Z @ 0x180131CEC (-translate@-$_Regex_traits@G@std@@QEBAGG@Z.c)
 */

unsigned __int16 *__fastcall std::_Cmp_chrange<unsigned short const *,unsigned short const *,std::_Cmp_collate<std::regex_traits<unsigned short>>>(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        __int64 a5)
{
  unsigned __int16 *v8; // rsi
  unsigned __int16 v10; // di
  __int64 v11; // rdx
  __int16 v12; // bx

  v8 = a1;
  if ( a1 == a2 )
  {
LABEL_5:
    if ( a3 != a4 )
      return a1;
  }
  else
  {
    while ( a3 != a4 )
    {
      v10 = *a3++;
      v11 = *v8++;
      v12 = std::_Regex_traits<unsigned short>::translate(a5, v11);
      if ( v12 != (unsigned __int16)std::_Regex_traits<unsigned short>::translate(a5, v10) )
        return a1;
      if ( v8 == a2 )
        goto LABEL_5;
    }
  }
  return v8;
}
