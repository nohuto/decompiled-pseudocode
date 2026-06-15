/*
 * XREFs of ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x180016224
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCPlaybackReference@@@std@@EEAAXXZ @ 0x180016160 (-_Destroy@-$_Ref_count_obj2@VCPlaybackReference@@@std@@EEAAXXZ.c)
 *     ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x1800175D4 (-AcquireReference@CPlaybackNotifier@@QEAA-AV-$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z.c)
 * Callees:
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x1800164DC (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18009FED4 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?_Deallocate_for_capacity@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXAEAV?$allocator@G@2@QEAG_K@Z @ 0x1800C108C (-_Deallocate_for_capacity@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXAEAV-$.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x1800C1360 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800DD67C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800DD8A0 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800EED74 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@st.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180103228 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPlaybackNotifier::UpdateAudioPlaybackStatus(CPlaybackNotifier *a1, int a2, __int64 a3)
{
  __int64 *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r14
  __int64 inserted; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // r15
  __int64 *v12; // rdx
  char *v13; // rcx
  char *v14; // r8
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rax
  signed __int64 v17; // rcx
  unsigned __int16 v18; // r11
  char *v19; // rsi
  char *v20; // rdx
  char *v21; // r10
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rax
  signed __int64 v24; // rsi
  unsigned __int16 v25; // cx
  __int64 v26; // rcx
  const char *v27; // r9
  __int64 v28; // r10
  int v29; // eax
  bool v30; // zf
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rbx
  __int128 v34; // [rsp+38h] [rbp-90h]
  __int128 v35; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v36[16]; // [rsp+60h] [rbp-68h] BYREF
  __int128 v37; // [rsp+70h] [rbp-58h] BYREF
  __int64 v38; // [rsp+80h] [rbp-48h]
  __int64 v39; // [rsp+88h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v6 = (__int64 *)((char *)a1 + 32);
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)(a3 + 2 * v7) );
  try
  {
    std::wstring::_Construct<1,unsigned short const *>(&v37, a3, v7);
    v8 = *v6;
    v34 = *(unsigned __int64 *)(*v6 + 8);
    inserted = *v6;
    if ( *(_BYTE *)(v34 + 25) )
    {
      LODWORD(v15) = v38;
    }
    else
    {
      std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v37);
      do
      {
        *(_QWORD *)&v34 = v10;
        v11 = *(_QWORD *)(v10 + 48);
        if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(v10 + 32) )
          v13 = *(char **)v13;
        v16 = v15;
        if ( v15 >= v11 )
          v16 = v11;
        v17 = v13 - v14;
        while ( v16 )
        {
          v18 = *(_WORD *)&v14[v17];
          if ( v18 != *(_WORD *)v14 )
          {
            if ( (v18 < *(_WORD *)v14 ? -1 : 1) >= 0 )
              goto LABEL_27;
LABEL_15:
            DWORD2(v34) = 0;
            v10 = v12[2];
            goto LABEL_16;
          }
          --v16;
          v14 += 2;
        }
        if ( v11 < v15 )
          goto LABEL_15;
LABEL_27:
        DWORD2(v34) = 1;
        inserted = (__int64)v12;
        v10 = *v12;
LABEL_16:
        ;
      }
      while ( !*(_BYTE *)(v10 + 25) );
    }
    if ( *(_BYTE *)(inserted + 25) )
    {
LABEL_29:
      if ( v6[1] == 0x38E38E38E38E38ELL )
        std::_Throw_tree_length_error();
      *(_QWORD *)&v35 = &v37;
      v32 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,ENDPOINT_REF_DATA>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,ENDPOINT_REF_DATA>,void *>>>(
              (unsigned int)v36,
              (_DWORD)v6,
              v8,
              v15,
              (__int64)&v35);
      v33 = *(_QWORD *)(v32 + 8);
      *(_QWORD *)(v32 + 8) = 0LL;
      std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>,void *>>>(v36);
      v35 = v34;
      inserted = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,APPLICATION_REF_DATA>>>::_Insert_node(
                   v6,
                   &v35,
                   v33);
    }
    else
    {
      std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(inserted + 32);
      v19 = (char *)&v37;
      if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v37) )
        v19 = v21;
      v23 = v22;
      if ( v22 >= v15 )
        v23 = v15;
      v24 = v19 - v20;
      while ( 1 )
      {
        if ( !v23 )
        {
          if ( v15 >= v22 )
            goto LABEL_32;
          goto LABEL_29;
        }
        v25 = *(_WORD *)&v20[v24];
        if ( v25 != *(_WORD *)v20 )
          break;
        --v23;
        v20 += 2;
      }
      if ( (v25 < *(_WORD *)v20 ? -1 : 1) < 0 )
        goto LABEL_29;
    }
LABEL_32:
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v37) )
      std::wstring::_Deallocate_for_capacity(v26, v28, v39);
    v38 = 0LL;
    v39 = 7LL;
    LOWORD(v37) = 0;
    if ( a2 )
    {
      if ( a2 != 1 )
        return;
      v29 = *(_DWORD *)(inserted + 64);
      if ( !v29 )
        return;
      v31 = v29 - 1;
      v30 = v31 == 0;
      *(_DWORD *)(inserted + 64) = v31;
    }
    else
    {
      v30 = ++*(_DWORD *)(inserted + 64) == 1;
    }
    if ( v30 )
      CPlaybackNotifier::PublishPlaybackAudioStatus(a1);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x2C5,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      v27);
  }
}
