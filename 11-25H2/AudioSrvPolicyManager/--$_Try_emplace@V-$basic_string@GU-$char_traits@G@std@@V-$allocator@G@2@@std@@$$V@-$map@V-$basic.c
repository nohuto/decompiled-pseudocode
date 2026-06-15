/*
 * XREFs of ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180011B00
 * Callers:
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x1800118C0 (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180019B80 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@st.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B218 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180031F9C (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180037D80 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@st.c)
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
  char v9; // r12
  _QWORD *v10; // rdx
  unsigned __int64 v11; // r14
  char *v12; // rdx
  char *v13; // rcx
  _QWORD *v14; // r9
  unsigned __int64 v15; // rax
  signed __int64 v16; // rcx
  unsigned __int16 v17; // r10
  _QWORD *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int16 *v21; // rdx
  __int64 v22; // r10
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // rax
  __int64 v25; // r10
  unsigned __int16 v26; // cx
  __int64 v27; // rax
  __int64 v28; // rbx
  _BYTE v30[16]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v31; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v32; // [rsp+90h] [rbp+30h] BYREF

  v3 = (_QWORD *)*a1;
  v4 = a3 + 2;
  v7 = (_QWORD *)*a1;
  v8 = *(_QWORD *)(*a1 + 8LL);
  v31 = v8;
  if ( !*(_BYTE *)(v8 + 25) )
  {
    v9 = std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(a3, a2, a3, v8);
    do
    {
      *(_QWORD *)&v31 = v8;
      v10 = a3;
      if ( v9 )
        v10 = (_QWORD *)*a3;
      v11 = *(_QWORD *)(v8 + 48);
      if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                              v8 + 32,
                              v10,
                              a3,
                              v8) )
        v13 = *(char **)v13;
      v15 = *v4;
      if ( *v4 >= v11 )
        v15 = v11;
      v16 = v13 - v12;
      while ( 1 )
      {
        if ( !v15 )
        {
          if ( v11 >= *v4 )
            goto LABEL_14;
          goto LABEL_28;
        }
        v17 = *(_WORD *)&v12[v16];
        if ( v17 != *(_WORD *)v12 )
          break;
        --v15;
        v12 += 2;
      }
      if ( (v17 < *(_WORD *)v12 ? -1 : 1) >= 0 )
      {
LABEL_14:
        v7 = v14;
        DWORD2(v31) = 1;
        v8 = *v14;
        continue;
      }
LABEL_28:
      DWORD2(v31) = 0;
      v8 = v14[2];
    }
    while ( !*(_BYTE *)(v8 + 25) );
  }
  if ( *((_BYTE *)v7 + 25) )
  {
LABEL_30:
    if ( a1[1] == 0x38E38E38E38E38ELL )
      std::_Xlength_error("map/set too long");
    v32 = a3;
    v27 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>,void *>>>(
            (unsigned int)v30,
            (_DWORD)a1,
            (_DWORD)v3,
            v8,
            (__int64)&v32);
    v28 = *(_QWORD *)(v27 + 8);
    *(_QWORD *)(v27 + 8) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>,void *>>>(v30);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>>::_Insert_node(
                      a1,
                      &v31,
                      v28);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                            v7 + 4,
                            v7 + 4,
                            a3,
                            v8) )
      v18 = (_QWORD *)*v18;
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(v19, v18, v19, v20) )
      v22 = *a3;
    v24 = v23;
    if ( v23 >= *v4 )
      v24 = *v4;
    v25 = v22 - (_QWORD)v21;
    while ( v24 )
    {
      v26 = *(unsigned __int16 *)((char *)v21 + v25);
      if ( v26 != *v21 )
      {
        if ( (v26 < *v21 ? -1 : 1) < 0 )
          goto LABEL_30;
        goto LABEL_33;
      }
      --v24;
      ++v21;
    }
    if ( *v4 < v23 )
      goto LABEL_30;
LABEL_33:
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
