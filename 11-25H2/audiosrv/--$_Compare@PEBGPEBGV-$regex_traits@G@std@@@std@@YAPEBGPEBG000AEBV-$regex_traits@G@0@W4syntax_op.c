/*
 * XREFs of ??$_Compare@PEBGPEBGV?$regex_traits@G@std@@@std@@YAPEBGPEBG000AEBV?$regex_traits@G@0@W4syntax_option_type@regex_constants@0@@Z @ 0x180126804
 * Callers:
 *     ?_Match_pat@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x180131234 (-_Match_pat@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 *     ?_Skip@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z @ 0x1801403F4 (-_Skip@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z.c)
 * Callees:
 *     ??$_Cmp_chrange@PEBGPEBGU?$_Cmp_collate@V?$regex_traits@G@std@@@std@@@std@@YAPEBGPEBG000U?$_Cmp_collate@V?$regex_traits@G@std@@@0@@Z @ 0x1801266B4 (--$_Cmp_chrange@PEBGPEBGU-$_Cmp_collate@V-$regex_traits@G@std@@@std@@@std@@YAPEBGPEBG000U-$_Cmp_.c)
 *     ??$_Cmp_chrange@PEBGPEBGU?$_Cmp_icase@V?$regex_traits@G@std@@@std@@@std@@YAPEBGPEBG000U?$_Cmp_icase@V?$regex_traits@G@std@@@0@@Z @ 0x180126754 (--$_Cmp_chrange@PEBGPEBGU-$_Cmp_icase@V-$regex_traits@G@std@@@std@@@std@@YAPEBGPEBG000U-$_Cmp_ic.c)
 */

unsigned __int16 *__fastcall std::_Compare<unsigned short const *,unsigned short const *,std::regex_traits<unsigned short>>(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int16 a6)
{
  unsigned __int16 *v7; // r10
  unsigned __int16 *v9; // rdx
  unsigned __int16 v10; // cx
  __int16 v11; // ax

  v7 = a1;
  if ( (a6 & 0x100) != 0 )
    return std::_Cmp_chrange<unsigned short const *,unsigned short const *,std::_Cmp_icase<std::regex_traits<unsigned short>>>(
             a1,
             a2,
             a3,
             a4,
             a5);
  if ( (a6 & 0x800) == 0 )
  {
    v9 = a1;
    if ( a1 == a2 )
    {
LABEL_10:
      if ( a3 != a4 )
        return v7;
    }
    else
    {
      while ( a3 != a4 )
      {
        v10 = *a3++;
        v11 = *v9++;
        if ( v11 != v10 )
          return v7;
        if ( v9 == a2 )
          goto LABEL_10;
      }
    }
    return v9;
  }
  return std::_Cmp_chrange<unsigned short const *,unsigned short const *,std::_Cmp_collate<std::regex_traits<unsigned short>>>(
           a1,
           a2,
           a3,
           a4,
           a5);
}
