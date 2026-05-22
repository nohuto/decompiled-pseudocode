/*
 * XREFs of ??$_Find_hint@G@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@1@AEBG@Z @ 0x180070B08
 * Callers:
 *     ??$_Emplace_hint@AEBU?$pair@$$CBGI@std@@@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBGI@1@@Z @ 0x180070A40 (--$_Emplace_hint@AEBU-$pair@$$CBGI@std@@@-$_Tree@V-$_Tmap_traits@GIU-$less@G@std@@V-$allocator@U.c)
 * Callees:
 *     ??$_Find_lower_bound@G@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@AEBG@Z @ 0x180084A60 (--$_Find_lower_bound@G@-$_Tree@V-$_Tmap_traits@GIU-$less@G@std@@V-$allocator@U-$pair@$$CBGI@std@.c)
 *     ??F?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGW4WaveformFlags@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800EC28C (--F-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBGW4WaveformFl.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned short,unsigned int,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned int>>,0>>::_Find_hint<unsigned short>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4)
{
  unsigned __int16 v7; // di
  __int64 v9; // rax
  bool v10; // zf
  __int128 v11; // xmm0
  char v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 i; // rdx
  char v16; // cl
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-28h]
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = a1;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    v7 = *a4;
    if ( a3 == *(_QWORD *)qword_180250DD0 )
    {
      if ( v7 < *(_WORD *)(a3 + 28) )
      {
        *(_QWORD *)a2 = a3;
        *(_QWORD *)(a2 + 8) = 1LL;
        *(_BYTE *)(a2 + 16) = 0;
        goto LABEL_6;
      }
      goto LABEL_31;
    }
    if ( v7 < *(_WORD *)(a3 + 28) )
    {
      v19 = a3;
      v9 = std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,enum WaveformFlags>>>,std::_Iterator_base0>::operator--(&v19);
      a1 = *(_QWORD *)v9;
      if ( *(_WORD *)(*(_QWORD *)v9 + 28LL) >= v7 )
      {
LABEL_31:
        std::_Tree<std::_Tmap_traits<unsigned short,unsigned int,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned int>>,0>>::_Find_lower_bound<unsigned short>(
          a1,
          &v17,
          a4);
        if ( *(_BYTE *)(v18 + 25) || (v16 = 1, v7 < *(_WORD *)(v18 + 28)) )
          v16 = 0;
        if ( v16 )
        {
          *(_QWORD *)a2 = v18;
          *(_QWORD *)(a2 + 8) = 2LL;
          *(_BYTE *)(a2 + 16) = 1;
        }
        else
        {
          v11 = v17;
          *(_BYTE *)(a2 + 16) = 0;
          *(_OWORD *)a2 = v11;
        }
        goto LABEL_18;
      }
      v10 = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 25LL) == 0;
      *(_BYTE *)(a2 + 16) = 0;
      if ( v10 )
      {
        *(_QWORD *)a2 = a3;
        *(_QWORD *)(a2 + 8) = 1LL;
      }
      else
      {
        *(_QWORD *)a2 = a1;
        *(_QWORD *)(a2 + 8) = 0LL;
      }
LABEL_18:
      *(_DWORD *)(a2 + 17) = 0;
      *(_WORD *)(a2 + 21) = 0;
      *(_BYTE *)(a2 + 23) = 0;
      return a2;
    }
    if ( v7 <= *(_WORD *)(a3 + 28) )
    {
      *(_QWORD *)a2 = a3;
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_5;
    }
    a1 = *(_QWORD *)(a3 + 16);
    v12 = *(_BYTE *)(a1 + 25);
    if ( v12 )
    {
      a1 = *(_QWORD *)(a3 + 8);
      if ( *(_BYTE *)(a1 + 25) )
      {
LABEL_36:
        *(_BYTE *)(a2 + 16) = 0;
        if ( v12 )
        {
          *(_QWORD *)a2 = a3;
          *(_QWORD *)(a2 + 8) = 0LL;
        }
        else
        {
          *(_QWORD *)a2 = a1;
          *(_QWORD *)(a2 + 8) = 1LL;
        }
        goto LABEL_18;
      }
      v13 = a3;
      do
      {
        v14 = a1;
        if ( v13 != *(_QWORD *)(a1 + 16) )
          break;
        a1 = *(_QWORD *)(a1 + 8);
        v13 = v14;
      }
      while ( !*(_BYTE *)(a1 + 25) );
    }
    else
    {
      for ( i = *(_QWORD *)a1; !*(_BYTE *)(i + 25); i = *(_QWORD *)i )
        a1 = i;
    }
    if ( !*(_BYTE *)(a1 + 25) && v7 >= *(_WORD *)(a1 + 28) )
      goto LABEL_31;
    goto LABEL_36;
  }
  a1 = qword_180250DD0;
  if ( !*(_BYTE *)(*(_QWORD *)(qword_180250DD0 + 8) + 25LL) )
  {
    v7 = *a4;
    if ( *(_WORD *)(*(_QWORD *)(qword_180250DD0 + 16) + 28LL) >= *a4 )
      goto LABEL_31;
  }
  *(_QWORD *)a2 = *(_QWORD *)(qword_180250DD0 + 16);
  *(_BYTE *)(a2 + 16) = 0;
LABEL_5:
  *(_QWORD *)(a2 + 8) = 0LL;
LABEL_6:
  *(_DWORD *)(a2 + 17) = 0;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  return a2;
}
