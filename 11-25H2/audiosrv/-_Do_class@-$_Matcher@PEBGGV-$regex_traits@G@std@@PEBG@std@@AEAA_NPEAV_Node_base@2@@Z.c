/*
 * XREFs of ?_Do_class@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1801308D8
 * Callers:
 *     ?_Match_pat@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x180131234 (-_Match_pat@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 * Callees:
 *     __std_find_trivial_2 @ 0x1800A7470 (__std_find_trivial_2.c)
 *     ??$_Lookup_coll@PEBGG@std@@YAPEBGPEBG0PEBU?$_Sequence@G@0@@Z @ 0x180126FAC (--$_Lookup_coll@PEBGG@std@@YAPEBGPEBG0PEBU-$_Sequence@G@0@@Z.c)
 *     ??$_Lookup_equiv@GV?$regex_traits@G@std@@@std@@YA_NGPEBU?$_Sequence@G@0@AEBV?$regex_traits@G@0@@Z @ 0x180127028 (--$_Lookup_equiv@GV-$regex_traits@G@std@@@std@@YA_NGPEBU-$_Sequence@G@0@AEBV-$regex_traits@G@0@@.c)
 *     ??$_Lookup_range@G@std@@YA_NIPEBU?$_Buf@G@0@@Z @ 0x18012719C (--$_Lookup_range@G@std@@YA_NIPEBU-$_Buf@G@0@@Z.c)
 *     ?isctype@?$_Regex_traits@G@std@@QEBA_NGF@Z @ 0x180131B74 (-isctype@-$_Regex_traits@G@std@@QEBA_NGF@Z.c)
 *     ?translate@?$_Regex_traits@G@std@@QEBAGG@Z @ 0x180131CEC (-translate@-$_Regex_traits@G@std@@QEBAGG@Z.c)
 */

char __fastcall std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Do_class(
        __int16 **a1,
        __int64 a2)
{
  __int64 *v2; // rsi
  unsigned __int16 v5; // r14
  __int16 *v6; // r15
  char v7; // bl
  unsigned int *v8; // r8
  __int64 v9; // r12
  __int16 *v10; // rax
  __int64 v11; // r15
  unsigned __int16 v12; // ax
  __int64 v13; // r8
  bool v14; // zf
  __int64 v15; // rax
  unsigned int *v16; // rdx

  v2 = (__int64 *)(a1 + 26);
  v5 = **a1;
  if ( ((_DWORD)a1[23] & 0x100) != 0 )
    v5 = std::ctype<unsigned short>::tolower(*(_QWORD *)(*v2 + 8), v5);
  v6 = *a1;
  v7 = 0;
  v8 = *(unsigned int **)(a2 + 32);
  v9 = (__int64)(*a1 + 1);
  if ( !v8 || (v10 = std::_Lookup_coll<unsigned short const *,unsigned short>(*a1, a1[20], v8), v10 == v6) )
  {
    v11 = *(_QWORD *)(a2 + 56);
    if ( v11 )
    {
      if ( ((_DWORD)a1[23] & 0x800) != 0 )
        v12 = std::_Regex_traits<unsigned short>::translate(*v2, v5);
      else
        v12 = v5;
      if ( std::_Lookup_range<unsigned short>(v12, v11) )
        goto LABEL_22;
      v2 = (__int64 *)(a1 + 26);
    }
    if ( v5 >= 0x100u )
    {
      v15 = *(_QWORD *)(a2 + 48);
      if ( v15
        && _std_find_trivial_2(
             *(const __m128i **)(v15 + 8),
             (const __m128i *)(*(_QWORD *)(v15 + 8) + 2LL * *(unsigned int *)(v15 + 4)),
             v5) != (const __m128i *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL)
                                    + 2LL * *(unsigned int *)(*(_QWORD *)(a2 + 48) + 4LL)) )
      {
        goto LABEL_22;
      }
      if ( *(_WORD *)(a2 + 64) )
      {
        v2 = (__int64 *)(a1 + 26);
        if ( (unsigned __int8)std::_Regex_traits<unsigned short>::isctype(a1[26], v5) )
          goto LABEL_22;
      }
      v16 = *(unsigned int **)(a2 + 72);
      if ( !v16 )
        goto LABEL_23;
      v14 = std::_Lookup_equiv<unsigned short,std::regex_traits<unsigned short>>(v5, v16, *v2) == 0;
    }
    else
    {
      v13 = *(_QWORD *)(a2 + 40);
      if ( !v13 )
        goto LABEL_23;
      v14 = ((unsigned __int8)(1 << (v5 & 7)) & *(_BYTE *)(((unsigned __int64)v5 >> 3) + v13)) == 0;
    }
    if ( v14 )
      goto LABEL_23;
    goto LABEL_22;
  }
  v9 = (__int64)v10;
LABEL_22:
  v7 = 1;
LABEL_23:
  if ( v7 == (*(_BYTE *)(a2 + 12) & 1) )
    return 0;
  *a1 = (__int16 *)v9;
  return 1;
}
