/*
 * XREFs of ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180011860
 * Callers:
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180011620 (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180019CB0 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@st.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B348 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18002F5BC (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800353A0 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@st.c)
 */

__int64 __fastcall std::map<std::wstring,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>::_Try_emplace<std::wstring,>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r13
  unsigned __int64 *v4; // rbx
  _QWORD *v7; // rsi
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r14
  char *v10; // rdx
  char *v11; // rcx
  _QWORD *v12; // r9
  unsigned __int64 v13; // rax
  signed __int64 v14; // rcx
  unsigned __int16 v15; // r10
  __int64 v16; // r8
  unsigned __int16 *v17; // rdx
  __int64 v18; // r10
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rax
  __int64 v21; // r10
  unsigned __int16 v22; // cx
  __int64 v23; // rax
  __int64 v24; // rbx
  _BYTE v26[16]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v28; // [rsp+90h] [rbp+30h] BYREF

  v3 = (_QWORD *)*a1;
  v4 = a3 + 2;
  v7 = (_QWORD *)*a1;
  v8 = *(_QWORD *)(*a1 + 8LL);
  v27 = v8;
  if ( !*(_BYTE *)(v8 + 25) )
  {
    std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(a3);
    do
    {
      *(_QWORD *)&v27 = v8;
      v9 = *(_QWORD *)(v8 + 48);
      if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(v8 + 32) )
        v11 = *(char **)v11;
      v13 = *v4;
      if ( *v4 >= v9 )
        v13 = v9;
      v14 = v11 - v10;
      while ( 1 )
      {
        if ( !v13 )
        {
          if ( v9 >= *v4 )
            goto LABEL_12;
          goto LABEL_24;
        }
        v15 = *(_WORD *)&v10[v14];
        if ( v15 != *(_WORD *)v10 )
          break;
        --v13;
        v10 += 2;
      }
      if ( (v15 < *(_WORD *)v10 ? -1 : 1) >= 0 )
      {
LABEL_12:
        v7 = v12;
        DWORD2(v27) = 1;
        v8 = *v12;
        continue;
      }
LABEL_24:
      DWORD2(v27) = 0;
      v8 = v12[2];
    }
    while ( !*(_BYTE *)(v8 + 25) );
  }
  if ( *((_BYTE *)v7 + 25) )
  {
LABEL_26:
    if ( a1[1] == 0x38E38E38E38E38ELL )
      std::_Xlength_error("map/set too long");
    v28 = a3;
    v23 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>,void *>>>(
            (unsigned int)v26,
            (_DWORD)a1,
            (_DWORD)v3,
            v8,
            (__int64)&v28);
    v24 = *(_QWORD *)(v23 + 8);
    *(_QWORD *)(v23 + 8) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>,void *>>>(v26);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>>::_Insert_node(
                      a1,
                      &v27,
                      v24);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(v7 + 4);
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(v16) )
      v18 = *a3;
    v20 = v19;
    if ( v19 >= *v4 )
      v20 = *v4;
    v21 = v18 - (_QWORD)v17;
    while ( v20 )
    {
      v22 = *(unsigned __int16 *)((char *)v17 + v21);
      if ( v22 != *v17 )
      {
        if ( (v22 < *v17 ? -1 : 1) < 0 )
          goto LABEL_26;
        goto LABEL_29;
      }
      --v20;
      ++v17;
    }
    if ( *v4 < v19 )
      goto LABEL_26;
LABEL_29:
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
