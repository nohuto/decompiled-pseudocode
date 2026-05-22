/*
 * XREFs of ??$_Find_hint@G@?$_Tree@V?$_Tmap_traits@GW4WaveformFlags@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGW4WaveformFlags@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@1@AEBG@Z @ 0x1801994D0
 * Callers:
 *     ??$_Emplace_hint@AEBU?$pair@$$CBGW4WaveformFlags@@@std@@@?$_Tree@V?$_Tmap_traits@GW4WaveformFlags@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGW4WaveformFlags@@@std@@@3@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBGW4WaveformFlags@@@1@@Z @ 0x180199420 (--$_Emplace_hint@AEBU-$pair@$$CBGW4WaveformFlags@@@std@@@-$_Tree@V-$_Tmap_traits@GW4WaveformFlag.c)
 * Callees:
 *     ??F?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGW4WaveformFlags@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800EC28C (--F-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBGW4WaveformFl.c)
 *     ??$_Find_lower_bound@G@?$_Tree@V?$_Tmap_traits@GW4WaveformFlags@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGW4WaveformFlags@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@std@@@1@AEBG@Z @ 0x180199760 (--$_Find_lower_bound@G@-$_Tree@V-$_Tmap_traits@GW4WaveformFlags@@U-$less@G@std@@V-$allocator@U-$.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned short,enum WaveformFlags,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,enum WaveformFlags>>,0>>::_Find_hint<unsigned short>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4)
{
  unsigned __int16 v7; // di
  __int64 **v8; // rax
  bool v9; // zf
  char v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 i; // rdx
  char v14; // cl
  __int128 v15; // xmm0
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-28h]
  __int64 *v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = (__int64 *)a1;
  if ( *(_BYTE *)(a3 + 25) )
  {
    a1 = qword_180250F88;
    if ( *(_BYTE *)(*(_QWORD *)(qword_180250F88 + 8) + 25LL)
      || (v7 = *a4, *(_WORD *)(*(_QWORD *)(qword_180250F88 + 16) + 28LL) < *a4) )
    {
      *(_QWORD *)a2 = *(_QWORD *)(qword_180250F88 + 16);
      *(_BYTE *)(a2 + 16) = 0;
LABEL_35:
      *(_QWORD *)(a2 + 8) = 0LL;
      goto LABEL_36;
    }
    goto LABEL_25;
  }
  v7 = *a4;
  if ( a3 == *(_QWORD *)qword_180250F88 )
  {
    if ( v7 < *(_WORD *)(a3 + 28) )
    {
      *(_QWORD *)a2 = a3;
      *(_QWORD *)(a2 + 8) = 1LL;
      *(_BYTE *)(a2 + 16) = 0;
LABEL_36:
      *(_DWORD *)(a2 + 17) = 0;
      *(_WORD *)(a2 + 21) = 0;
      *(_BYTE *)(a2 + 23) = 0;
      return a2;
    }
    goto LABEL_25;
  }
  if ( v7 >= *(_WORD *)(a3 + 28) )
  {
    if ( v7 <= *(_WORD *)(a3 + 28) )
    {
      *(_QWORD *)a2 = a3;
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_35;
    }
    a1 = *(_QWORD *)(a3 + 16);
    v10 = *(_BYTE *)(a1 + 25);
    if ( v10 )
    {
      a1 = *(_QWORD *)(a3 + 8);
      if ( *(_BYTE *)(a1 + 25) )
        goto LABEL_31;
      v11 = a3;
      do
      {
        v12 = a1;
        if ( v11 != *(_QWORD *)(a1 + 16) )
          break;
        a1 = *(_QWORD *)(a1 + 8);
        v11 = v12;
      }
      while ( !*(_BYTE *)(a1 + 25) );
    }
    else
    {
      for ( i = *(_QWORD *)a1; !*(_BYTE *)(i + 25); i = *(_QWORD *)i )
        a1 = i;
    }
    if ( !*(_BYTE *)(a1 + 25) && v7 >= *(_WORD *)(a1 + 28) )
      goto LABEL_25;
LABEL_31:
    *(_BYTE *)(a2 + 16) = 0;
    if ( v10 )
    {
      *(_QWORD *)a2 = a3;
      *(_QWORD *)(a2 + 8) = 0LL;
    }
    else
    {
      *(_QWORD *)a2 = a1;
      *(_QWORD *)(a2 + 8) = 1LL;
    }
    goto LABEL_12;
  }
  v19 = (__int64 *)a3;
  v8 = std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,enum WaveformFlags>>>,std::_Iterator_base0>::operator--(&v19);
  a1 = (__int64)*v8;
  if ( *((_WORD *)*v8 + 14) >= v7 )
  {
LABEL_25:
    std::_Tree<std::_Tmap_traits<unsigned short,enum WaveformFlags,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,enum WaveformFlags>>,0>>::_Find_lower_bound<unsigned short>(
      a1,
      &v17,
      a4);
    if ( *(_BYTE *)(v18 + 25) || (v14 = 1, v7 < *(_WORD *)(v18 + 28)) )
      v14 = 0;
    if ( v14 )
    {
      *(_QWORD *)a2 = v18;
      *(_QWORD *)(a2 + 8) = 2LL;
      *(_BYTE *)(a2 + 16) = 1;
    }
    else
    {
      v15 = v17;
      *(_BYTE *)(a2 + 16) = 0;
      *(_OWORD *)a2 = v15;
    }
    goto LABEL_12;
  }
  v9 = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 25LL) == 0;
  *(_BYTE *)(a2 + 16) = 0;
  if ( v9 )
  {
    *(_QWORD *)a2 = a3;
    *(_QWORD *)(a2 + 8) = 1LL;
  }
  else
  {
    *(_QWORD *)a2 = a1;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
LABEL_12:
  *(_DWORD *)(a2 + 17) = 0;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  return a2;
}
