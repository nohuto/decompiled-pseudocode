/*
 * XREFs of ??$_Find_hint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18006754C
 * Callers:
 *     ??$_Emplace_hint@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@1@@Z @ 0x180067448 (--$_Emplace_hint@AEBU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18004DF08 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ??$?MGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x1800677B8 (--$-MGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 *     ??F?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800BF5A8 (--F-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<void>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::_Find_hint<std::wstring>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rsi
  __int64 *v8; // rdi
  bool v9; // zf
  char v10; // al
  __int64 v12; // r14
  char v13; // al
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rax
  __int64 v19; // r14
  __int128 v20; // [rsp+20h] [rbp-38h]
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  v4 = *a1;
  if ( *(_BYTE *)(a3 + 25) )
  {
    if ( !*(_BYTE *)(v4[1] + 25) && !(unsigned __int8)std::operator<<unsigned short>(v4[2] + 32, a4) )
      goto LABEL_4;
    *(_QWORD *)a2 = v4[2];
    *(_BYTE *)(a2 + 16) = 0;
LABEL_16:
    *(_QWORD *)(a2 + 8) = 0LL;
    goto LABEL_14;
  }
  v12 = a3 + 32;
  v13 = std::operator<<unsigned short>(a4, a3 + 32);
  if ( a3 != *v4 )
  {
    if ( v13 )
    {
      v21 = a3;
      v14 = *(_QWORD *)std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>,std::_Iterator_base0>::operator--(&v21);
      if ( !(unsigned __int8)std::operator<<unsigned short>(v14 + 32, a4) )
        goto LABEL_4;
      v9 = *(_BYTE *)(*(_QWORD *)(v14 + 16) + 25LL) == 0;
      *(_BYTE *)(a2 + 16) = 0;
      if ( !v9 )
      {
        *(_QWORD *)a2 = v14;
        goto LABEL_16;
      }
      *(_QWORD *)a2 = a3;
LABEL_27:
      *(_QWORD *)(a2 + 8) = 1LL;
      goto LABEL_14;
    }
    if ( (unsigned __int8)std::operator<<unsigned short>(v12, a4) )
    {
      v21 = a3;
      v18 = std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
              &v21,
              v15,
              v16,
              v17);
      v19 = *v18;
      if ( !*(_BYTE *)(*v18 + 25) && !(unsigned __int8)std::operator<<unsigned short>(a4, v19 + 32) )
        goto LABEL_4;
      v9 = *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) == 0;
      *(_BYTE *)(a2 + 16) = 0;
      if ( v9 )
      {
        *(_QWORD *)a2 = v19;
        goto LABEL_27;
      }
    }
    else
    {
      *(_BYTE *)(a2 + 16) = 1;
    }
    *(_QWORD *)a2 = a3;
    goto LABEL_16;
  }
  if ( v13 )
  {
    *(_QWORD *)a2 = a3;
    *(_QWORD *)(a2 + 8) = 1LL;
LABEL_21:
    *(_BYTE *)(a2 + 16) = 0;
    goto LABEL_14;
  }
LABEL_4:
  v8 = (__int64 *)v4[1];
  v20 = (unsigned __int64)v8;
  while ( !*((_BYTE *)v8 + 25) )
  {
    *(_QWORD *)&v20 = v8;
    if ( (unsigned __int8)std::operator<<unsigned short>(v8 + 4, a4) )
    {
      v8 = (__int64 *)v8[2];
      DWORD2(v20) = 0;
    }
    else
    {
      v4 = v8;
      DWORD2(v20) = 1;
      v8 = (__int64 *)*v8;
    }
  }
  if ( *((_BYTE *)v4 + 25) || (v9 = (unsigned __int8)std::operator<<unsigned short>(a4, v4 + 4) == 0, v10 = 1, !v9) )
    v10 = 0;
  if ( !v10 )
  {
    *(_OWORD *)a2 = v20;
    goto LABEL_21;
  }
  *(_QWORD *)a2 = v4;
  *(_QWORD *)(a2 + 8) = 2LL;
  *(_BYTE *)(a2 + 16) = 1;
LABEL_14:
  *(_DWORD *)(a2 + 17) = 0;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  return a2;
}
