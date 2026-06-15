/*
 * XREFs of ??$_Find_hint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800F3374
 * Callers:
 *     ??$_Emplace_hint@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@1@@Z @ 0x1800F317C (--$_Emplace_hint@AEBU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@W4.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180042DA0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 *     ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18006CE68 (--$_Find_lower_bound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_ea_18006CE68.c)
 *     ??$_Lower_bound_duplicate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800D1F1C (--$_Lower_bound_duplicate@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>>,0>>::_Find_hint<std::wstring>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int16 *v10; // rdx
  unsigned __int64 v11; // r11
  __int64 v12; // r9
  unsigned __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  unsigned __int64 v16; // r11
  __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int16 *v21; // rdx
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // r8
  int v24; // eax
  __int64 v25; // r10
  unsigned __int64 v26; // r11
  __int64 v27; // rax
  __int64 v28; // r9
  unsigned __int64 v29; // rdi
  __int64 v30; // rax
  unsigned __int16 *v31; // rdx
  unsigned __int64 v32; // r11
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // rdx
  _QWORD *v36; // r10
  unsigned __int64 v37; // r11
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int16 *v40; // rdx
  unsigned __int64 v41; // r11
  __int64 v42; // r8
  int v43; // eax
  __int64 v44; // rdx
  __int64 *v45; // r10
  unsigned __int64 v46; // r11
  __int64 v48; // r11
  __int64 v49; // rax
  __int64 i; // rax
  __int64 v51; // rax
  __int64 v52; // r11
  unsigned __int64 v53; // rbp
  __int64 v54; // rax
  unsigned __int16 *v55; // rdx
  __int64 v56; // r8
  int v57; // eax
  __int64 v58; // r10
  __int64 v59; // r11
  bool v60; // zf
  __int64 *v61; // r11
  char v62; // r14
  __int64 *v63; // rax
  __int64 **v64; // rcx
  __int64 *v65; // rcx
  unsigned __int64 v66; // rbp
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned __int16 *v69; // rdx
  __int64 v70; // r8
  int v71; // eax
  __int64 v72; // rdi
  __int64 v73; // rcx
  __int128 v74; // [rsp+20h] [rbp-38h] BYREF
  __int64 v75; // [rsp+30h] [rbp-28h]

  if ( *(_BYTE *)(a3 + 25) )
  {
    v6 = qword_1801DB6B8;
    if ( *(_BYTE *)(*(_QWORD *)(qword_1801DB6B8 + 8) + 25LL) )
      goto LABEL_9;
    v7 = std::wstring::c_str(a4, a2);
    v9 = std::wstring::c_str(v8 + 32, v7);
    v13 = *(_QWORD *)(v12 + 16);
    if ( v13 >= v11 )
      v13 = v11;
    v14 = std::_WChar_traits<unsigned short>::compare(v9, v10, v13);
    if ( v14 )
    {
      if ( v14 < 0 )
        goto LABEL_9;
      goto LABEL_66;
    }
    if ( v16 < *(_QWORD *)(a4 + 16) )
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
      v15,
      (__int64)&v74,
      a4);
    v72 = v75;
    if ( std::_Tree<std::_Tmap_traits<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>>,0>>::_Lower_bound_duplicate<std::wstring>(
           v73,
           v75,
           a4) )
    {
      *(_QWORD *)a2 = v72;
      *(_QWORD *)(a2 + 8) = 2LL;
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_29;
    }
    *(_OWORD *)a2 = v74;
    goto LABEL_18;
  }
  v17 = a3 + 32;
  v18 = a3 + 32;
  if ( a3 == *(_QWORD *)qword_1801DB6B8 )
  {
    v19 = std::wstring::c_str(v18, a2);
    v20 = std::wstring::c_str(a4, v19);
    v23 = *(_QWORD *)(v17 + 16);
    if ( v23 >= v22 )
      v23 = v22;
    v24 = std::_WChar_traits<unsigned short>::compare(v20, v21, v23);
    if ( v24 )
    {
      if ( v24 >= 0 )
        goto LABEL_66;
    }
    else if ( v26 >= *(_QWORD *)(v17 + 16) )
    {
      goto LABEL_66;
    }
    *(_QWORD *)a2 = v25;
    *(_QWORD *)(a2 + 8) = 1LL;
LABEL_18:
    *(_BYTE *)(a2 + 16) = 0;
    goto LABEL_29;
  }
  v27 = std::wstring::c_str(v18, a2);
  v29 = *(_QWORD *)(v28 + 16);
  v30 = std::wstring::c_str(a4, v27);
  v33 = v32;
  if ( v32 >= v29 )
    v33 = v29;
  v34 = std::_WChar_traits<unsigned short>::compare(v30, v31, v33);
  if ( v34 )
  {
    if ( v34 >= 0 )
      goto LABEL_23;
LABEL_31:
    if ( *(_BYTE *)(*v36 + 25LL) )
    {
      v48 = v36[1];
      if ( !*(_BYTE *)(v48 + 25) )
      {
        v35 = (__int64)v36;
        do
        {
          if ( v35 != *(_QWORD *)v48 )
            break;
          v49 = v48;
          v48 = *(_QWORD *)(v48 + 8);
          v35 = v49;
        }
        while ( !*(_BYTE *)(v48 + 25) );
      }
    }
    else
    {
      for ( i = *(_QWORD *)(*v36 + 16LL); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
        ;
    }
    v51 = std::wstring::c_str(a4, v35);
    v53 = *(_QWORD *)(v52 + 48);
    v54 = std::wstring::c_str(v52 + 32, v51);
    v56 = v29;
    if ( v29 >= v53 )
      v56 = v53;
    v57 = std::_WChar_traits<unsigned short>::compare(v54, v55, v56);
    if ( v57 )
    {
      if ( v57 >= 0 )
        goto LABEL_66;
    }
    else if ( v53 >= v29 )
    {
      goto LABEL_66;
    }
    v60 = *(_BYTE *)(*(_QWORD *)(v59 + 16) + 25LL) == 0;
    *(_BYTE *)(a2 + 16) = 0;
    if ( v60 )
    {
      *(_QWORD *)a2 = v58;
      *(_QWORD *)(a2 + 8) = 1LL;
      goto LABEL_29;
    }
    *(_QWORD *)a2 = v59;
    goto LABEL_28;
  }
  if ( v29 < v37 )
    goto LABEL_31;
LABEL_23:
  v38 = std::wstring::c_str(a4, v35);
  v39 = std::wstring::c_str(v17, v38);
  v42 = v41;
  if ( v29 < v41 )
    v42 = v29;
  v43 = std::_WChar_traits<unsigned short>::compare(v39, v40, v42);
  if ( v43 )
  {
    if ( v43 >= 0 )
    {
LABEL_27:
      *(_QWORD *)a2 = v45;
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_28;
    }
  }
  else if ( v46 >= v29 )
  {
    goto LABEL_27;
  }
  v61 = (__int64 *)v45[2];
  v62 = *((_BYTE *)v61 + 25);
  if ( v62 )
  {
    v61 = (__int64 *)v45[1];
    if ( *((_BYTE *)v61 + 25) )
      goto LABEL_63;
    v63 = v45;
    do
    {
      v64 = (__int64 **)v61;
      if ( v63 != (__int64 *)v61[2] )
        break;
      v61 = (__int64 *)v61[1];
      v63 = (__int64 *)v64;
    }
    while ( !*((_BYTE *)v61 + 25) );
  }
  else
  {
    v65 = (__int64 *)*v61;
    if ( !*(_BYTE *)(*v61 + 25) )
    {
      do
      {
        v61 = v65;
        v65 = (__int64 *)*v65;
      }
      while ( !*((_BYTE *)v65 + 25) );
    }
  }
  if ( !*((_BYTE *)v61 + 25) )
  {
    v66 = v61[6];
    v67 = std::wstring::c_str((__int64)(v61 + 4), v44);
    v68 = std::wstring::c_str(a4, v67);
    v70 = v66;
    if ( v66 >= v29 )
      v70 = v29;
    v71 = std::_WChar_traits<unsigned short>::compare(v68, v69, v70);
    if ( v71 )
    {
      if ( v71 >= 0 )
        goto LABEL_66;
    }
    else if ( v29 >= v66 )
    {
      goto LABEL_66;
    }
  }
LABEL_63:
  *(_BYTE *)(a2 + 16) = 0;
  if ( v62 )
  {
    *(_QWORD *)a2 = v45;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  else
  {
    *(_QWORD *)a2 = v61;
    *(_QWORD *)(a2 + 8) = 1LL;
  }
LABEL_29:
  *(_DWORD *)(a2 + 17) = 0;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  return a2;
}
