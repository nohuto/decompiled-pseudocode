/*
 * XREFs of ?_Trans@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180149218
 * Callers:
 *     ??0?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@QEAA@AEBV?$regex_traits@G@1@PEBG1W4syntax_option_type@regex_constants@1@@Z @ 0x180143ECC (--0-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@QEAA@AEBV-$regex_traits@G@1@PEBG1W4syntax_option_.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180148CD0 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ?_Beg_expr@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEBA_NXZ @ 0x180147588 (-_Beg_expr@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEBA_NXZ.c)
 *     ?_Is_esc@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEBA_NXZ @ 0x180148BEC (-_Is_esc@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEBA_NXZ.c)
 */

char __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Trans(
        unsigned __int16 **a1)
{
  unsigned __int16 v2; // cx
  char *v3; // rax
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  bool v10; // zf
  bool v11; // zf
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx

  if ( *a1 == a1[2] )
  {
    v2 = -1;
    LODWORD(v3) = -1;
    *((_WORD *)a1 + 60) = -1;
  }
  else
  {
    v4 = **a1;
    *((_WORD *)a1 + 60) = v4;
    v3 = strchr("()$^.*+?[]|\\-{},:=!\n\r\b", v4);
    v2 = *((_WORD *)a1 + 60);
    if ( v3 )
      LODWORD(v3) = *((unsigned __int16 *)a1 + 60);
  }
  *((_DWORD *)a1 + 31) = (_DWORD)v3;
  if ( v2 > 0x3Fu )
  {
    v12 = v2 - 92;
    if ( !v12 )
    {
      LOBYTE(v3) = std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Is_esc((__int64)a1);
      if ( (_BYTE)v3 )
      {
        v3 = (char *)*a1;
        v16 = (*a1)[1];
        *((_WORD *)a1 + 60) = v16;
        *((_DWORD *)a1 + 31) = v16;
      }
      return (char)v3;
    }
    v13 = v12 - 2;
    if ( v13 )
    {
      v14 = v13 - 29;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( !v15 )
        {
          v10 = ((_BYTE)a1[16] & 2) == 0;
          goto LABEL_32;
        }
        if ( v15 != 1 )
          return (char)v3;
      }
      v10 = ((_BYTE)a1[16] & 0x10) == 0;
      goto LABEL_32;
    }
    if ( ((_DWORD)a1[16] & 0x2000000) == 0 )
      return (char)v3;
    LOBYTE(v3) = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Beg_expr((__int64)(a1 + 8));
    v10 = (_BYTE)v3 == 0;
  }
  else
  {
    if ( v2 == 63 )
    {
LABEL_13:
      v10 = ((_BYTE)a1[16] & 1) == 0;
      goto LABEL_32;
    }
    v5 = v2 - 10;
    if ( !v5 )
    {
      if ( ((_BYTE)a1[16] & 4) != 0 && !*((_DWORD *)a1 + 7) )
        *((_DWORD *)a1 + 31) = 124;
      return (char)v3;
    }
    v6 = v5 - 26;
    if ( !v6 )
    {
      if ( ((_DWORD)a1[16] & 0x2000000) == 0 )
        return (char)v3;
      v3 = (char *)(*a1 + 1);
      if ( v3 == (char *)a1[2] )
        return (char)v3;
      v11 = *(_WORD *)v3 == 10;
      goto LABEL_16;
    }
    v7 = v6 - 4;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 != 1 )
            return (char)v3;
          goto LABEL_13;
        }
        if ( ((_DWORD)a1[16] & 0x4000000) == 0 )
          return (char)v3;
        LOBYTE(v3) = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Beg_expr((__int64)(a1 + 8));
        v11 = (_BYTE)v3 == 0;
LABEL_16:
        if ( !v11 )
          goto LABEL_33;
        return (char)v3;
      }
    }
    v10 = ((_BYTE)a1[16] & 8) == 0;
  }
LABEL_32:
  if ( v10 )
LABEL_33:
    *((_DWORD *)a1 + 31) = 0;
  return (char)v3;
}
