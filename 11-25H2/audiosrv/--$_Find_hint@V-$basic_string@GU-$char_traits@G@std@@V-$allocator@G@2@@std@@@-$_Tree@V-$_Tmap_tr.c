/*
 * XREFs of ??$_Find_hint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800EE2C4
 * Callers:
 *     ??$_Emplace_hint@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@1@@Z @ 0x1800EE0CC (--$_Emplace_hint@AEBU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@W4.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x18004E910 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 *     ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18007F0C8 (--$_Find_lower_bound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_ea_18007F0C8.c)
 *     ??$_Lower_bound_duplicate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800EE618 (--$_Lower_bound_duplicate@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>>,0>>::_Find_hint<std::wstring>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int16 *v9; // rdx
  unsigned __int64 v10; // r11
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  unsigned __int64 v15; // r11
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int16 *v19; // rdx
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // r8
  int v22; // eax
  __int64 v23; // r10
  unsigned __int64 v24; // r11
  __int64 v25; // r9
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  unsigned __int16 *v28; // rdx
  unsigned __int64 v29; // r11
  __int64 v30; // r8
  int v31; // eax
  _QWORD *v32; // r10
  unsigned __int64 v33; // r11
  __int64 v34; // rax
  unsigned __int16 *v35; // rdx
  unsigned __int64 v36; // r11
  __int64 v37; // r8
  int v38; // eax
  __int64 *v39; // r10
  unsigned __int64 v40; // r11
  __int64 v42; // r11
  _QWORD *v43; // rdx
  _QWORD *v44; // rax
  __int64 i; // rax
  __int64 v46; // r11
  unsigned __int64 v47; // rbp
  __int64 v48; // rax
  unsigned __int16 *v49; // rdx
  __int64 v50; // r8
  int v51; // eax
  __int64 v52; // r10
  __int64 v53; // r11
  bool v54; // zf
  __int64 *v55; // r11
  char v56; // r14
  __int64 *v57; // rax
  __int64 **v58; // rcx
  __int64 *v59; // rcx
  unsigned __int64 v60; // rbp
  __int64 v61; // rax
  unsigned __int16 *v62; // rdx
  __int64 v63; // r8
  int v64; // eax
  __int64 v65; // rdi
  __int64 v66; // rcx
  __int128 v67; // [rsp+20h] [rbp-38h] BYREF
  __int64 v68; // [rsp+30h] [rbp-28h]

  if ( *(_BYTE *)(a3 + 25) )
  {
    v6 = qword_1801CF568;
    if ( *(_BYTE *)(*(_QWORD *)(qword_1801CF568 + 8) + 25LL) )
      goto LABEL_9;
    std::wstring::c_str(a4);
    v8 = std::wstring::c_str(v7 + 32);
    v12 = *(_QWORD *)(v11 + 16);
    if ( v12 >= v10 )
      v12 = v10;
    v13 = std::_WChar_traits<unsigned short>::compare(v8, v9, v12);
    if ( v13 )
    {
      if ( v13 < 0 )
        goto LABEL_9;
      goto LABEL_66;
    }
    if ( v15 < *(_QWORD *)(a4 + 16) )
    {
LABEL_9:
      *(_QWORD *)a2 = *(_QWORD *)(v6 + 16);
      *(_BYTE *)(a2 + 16) = 0;
LABEL_28:
      *(_QWORD *)(a2 + 8) = 0LL;
      goto LABEL_29;
    }
LABEL_66:
    std::_Tree<std::_Tmap_traits<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>>,0>>::_Find_lower_bound<std::wstring>(
      v14,
      (__int64 *)&v67,
      a4);
    v65 = v68;
    if ( (unsigned __int8)std::_Tree<std::_Tmap_traits<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>>,0>>::_Lower_bound_duplicate<std::wstring>(
                            v66,
                            v68,
                            a4) )
    {
      *(_QWORD *)a2 = v65;
      *(_QWORD *)(a2 + 8) = 2LL;
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_29;
    }
    *(_OWORD *)a2 = v67;
    goto LABEL_18;
  }
  v16 = a3 + 32;
  v17 = a3 + 32;
  if ( a3 == *(_QWORD *)qword_1801CF568 )
  {
    std::wstring::c_str(v17);
    v18 = std::wstring::c_str(a4);
    v21 = *(_QWORD *)(v16 + 16);
    if ( v21 >= v20 )
      v21 = v20;
    v22 = std::_WChar_traits<unsigned short>::compare(v18, v19, v21);
    if ( v22 )
    {
      if ( v22 >= 0 )
        goto LABEL_66;
    }
    else if ( v24 >= *(_QWORD *)(v16 + 16) )
    {
      goto LABEL_66;
    }
    *(_QWORD *)a2 = v23;
    *(_QWORD *)(a2 + 8) = 1LL;
LABEL_18:
    *(_BYTE *)(a2 + 16) = 0;
    goto LABEL_29;
  }
  std::wstring::c_str(v17);
  v26 = *(_QWORD *)(v25 + 16);
  v27 = std::wstring::c_str(a4);
  v30 = v29;
  if ( v29 >= v26 )
    v30 = v26;
  v31 = std::_WChar_traits<unsigned short>::compare(v27, v28, v30);
  if ( v31 )
  {
    if ( v31 >= 0 )
      goto LABEL_23;
LABEL_31:
    if ( *(_BYTE *)(*v32 + 25LL) )
    {
      v42 = v32[1];
      if ( !*(_BYTE *)(v42 + 25) )
      {
        v43 = v32;
        do
        {
          if ( v43 != *(_QWORD **)v42 )
            break;
          v44 = (_QWORD *)v42;
          v42 = *(_QWORD *)(v42 + 8);
          v43 = v44;
        }
        while ( !*(_BYTE *)(v42 + 25) );
      }
    }
    else
    {
      for ( i = *(_QWORD *)(*v32 + 16LL); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
        ;
    }
    std::wstring::c_str(a4);
    v47 = *(_QWORD *)(v46 + 48);
    v48 = std::wstring::c_str(v46 + 32);
    v50 = v26;
    if ( v26 >= v47 )
      v50 = v47;
    v51 = std::_WChar_traits<unsigned short>::compare(v48, v49, v50);
    if ( v51 )
    {
      if ( v51 >= 0 )
        goto LABEL_66;
    }
    else if ( v47 >= v26 )
    {
      goto LABEL_66;
    }
    v54 = *(_BYTE *)(*(_QWORD *)(v53 + 16) + 25LL) == 0;
    *(_BYTE *)(a2 + 16) = 0;
    if ( v54 )
    {
      *(_QWORD *)a2 = v52;
      *(_QWORD *)(a2 + 8) = 1LL;
      goto LABEL_29;
    }
    *(_QWORD *)a2 = v53;
    goto LABEL_28;
  }
  if ( v26 < v33 )
    goto LABEL_31;
LABEL_23:
  std::wstring::c_str(a4);
  v34 = std::wstring::c_str(v16);
  v37 = v36;
  if ( v26 < v36 )
    v37 = v26;
  v38 = std::_WChar_traits<unsigned short>::compare(v34, v35, v37);
  if ( v38 )
  {
    if ( v38 >= 0 )
    {
LABEL_27:
      *(_QWORD *)a2 = v39;
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_28;
    }
  }
  else if ( v40 >= v26 )
  {
    goto LABEL_27;
  }
  v55 = (__int64 *)v39[2];
  v56 = *((_BYTE *)v55 + 25);
  if ( v56 )
  {
    v55 = (__int64 *)v39[1];
    if ( *((_BYTE *)v55 + 25) )
      goto LABEL_63;
    v57 = v39;
    do
    {
      v58 = (__int64 **)v55;
      if ( v57 != (__int64 *)v55[2] )
        break;
      v55 = (__int64 *)v55[1];
      v57 = (__int64 *)v58;
    }
    while ( !*((_BYTE *)v55 + 25) );
  }
  else
  {
    v59 = (__int64 *)*v55;
    if ( !*(_BYTE *)(*v55 + 25) )
    {
      do
      {
        v55 = v59;
        v59 = (__int64 *)*v59;
      }
      while ( !*((_BYTE *)v59 + 25) );
    }
  }
  if ( !*((_BYTE *)v55 + 25) )
  {
    v60 = v55[6];
    std::wstring::c_str((__int64)(v55 + 4));
    v61 = std::wstring::c_str(a4);
    v63 = v60;
    if ( v60 >= v26 )
      v63 = v26;
    v64 = std::_WChar_traits<unsigned short>::compare(v61, v62, v63);
    if ( v64 )
    {
      if ( v64 >= 0 )
        goto LABEL_66;
    }
    else if ( v26 >= v60 )
    {
      goto LABEL_66;
    }
  }
LABEL_63:
  *(_BYTE *)(a2 + 16) = 0;
  if ( v56 )
  {
    *(_QWORD *)a2 = v39;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  else
  {
    *(_QWORD *)a2 = v55;
    *(_QWORD *)(a2 + 8) = 1LL;
  }
LABEL_29:
  *(_DWORD *)(a2 + 17) = 0;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  return a2;
}
