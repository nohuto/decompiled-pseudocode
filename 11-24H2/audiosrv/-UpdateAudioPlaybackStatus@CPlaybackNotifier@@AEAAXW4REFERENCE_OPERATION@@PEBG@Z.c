/*
 * XREFs of ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x1800102E4
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCPlaybackReference@@@std@@EEAAXXZ @ 0x180010220 (-_Destroy@-$_Ref_count_obj2@VCPlaybackReference@@@std@@EEAAXXZ.c)
 *     ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x180011694 (-AcquireReference@CPlaybackNotifier@@QEAA-AV-$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z.c)
 * Callees:
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x18001059C (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18009C798 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?_Deallocate_for_capacity@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXAEAV?$allocator@G@2@QEAG_K@Z @ 0x1800BFCCC (-_Deallocate_for_capacity@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXAEAV-$.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x1800BFF80 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800D9590 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800E2228 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800F3DA0 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$cha_ea_1800F3DA0.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180109378 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPlaybackNotifier::UpdateAudioPlaybackStatus(CPlaybackNotifier *a1, int a2, __int64 a3)
{
  __int64 *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r14
  unsigned __int64 v9; // rdx
  __int64 inserted; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // r15
  __int64 *v13; // rdx
  char *v14; // rcx
  char *v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rax
  signed __int64 v18; // rcx
  unsigned __int16 v19; // r11
  _QWORD *v20; // rdx
  char *v21; // rsi
  char *v22; // rdx
  char *v23; // r10
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // rax
  signed __int64 v26; // rsi
  unsigned __int16 v27; // cx
  __int64 v28; // rcx
  const char *v29; // r9
  __int64 v30; // r10
  int v31; // eax
  bool v32; // zf
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rbx
  __int128 v36; // [rsp+38h] [rbp-90h]
  __int128 v37; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v38[16]; // [rsp+60h] [rbp-68h] BYREF
  __int128 v39; // [rsp+70h] [rbp-58h] BYREF
  __int64 v40; // [rsp+80h] [rbp-48h]
  __int64 v41; // [rsp+88h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v6 = (__int64 *)((char *)a1 + 32);
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)(a3 + 2 * v7) );
  try
  {
    std::wstring::_Construct<1,unsigned short const *>(&v39, a3);
    v8 = *v6;
    v9 = *(_QWORD *)(*v6 + 8);
    v36 = v9;
    inserted = *v6;
    if ( *(_BYTE *)(v9 + 25) )
    {
      LODWORD(v16) = v40;
    }
    else
    {
      std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v39, v9);
      do
      {
        *(_QWORD *)&v36 = v11;
        v12 = *(_QWORD *)(v11 + 48);
        if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(v11 + 32, v11) )
          v14 = *(char **)v14;
        v17 = v16;
        if ( v16 >= v12 )
          v17 = v12;
        v18 = v14 - v15;
        while ( v17 )
        {
          v19 = *(_WORD *)&v15[v18];
          if ( v19 != *(_WORD *)v15 )
          {
            if ( (v19 < *(_WORD *)v15 ? -1 : 1) >= 0 )
              goto LABEL_29;
LABEL_15:
            DWORD2(v36) = 0;
            v11 = v13[2];
            goto LABEL_16;
          }
          --v17;
          v15 += 2;
        }
        if ( v12 < v16 )
          goto LABEL_15;
LABEL_29:
        DWORD2(v36) = 1;
        inserted = (__int64)v13;
        v11 = *v13;
LABEL_16:
        ;
      }
      while ( !*(_BYTE *)(v11 + 25) );
    }
    if ( *(_BYTE *)(inserted + 25) )
    {
LABEL_31:
      if ( v6[1] == 0x38E38E38E38E38ELL )
        std::_Throw_tree_length_error();
      *(_QWORD *)&v37 = &v39;
      v34 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,ENDPOINT_REF_DATA>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,ENDPOINT_REF_DATA>,void *>>>(
              (unsigned int)v38,
              (_DWORD)v6,
              v8,
              v16,
              (__int64)&v37);
      v35 = *(_QWORD *)(v34 + 8);
      *(_QWORD *)(v34 + 8) = 0LL;
      std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>,void *>>>(v38);
      v37 = v36;
      inserted = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,APPLICATION_REF_DATA>>>::_Insert_node(
                   v6,
                   &v37,
                   v35);
    }
    else
    {
      if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                              inserted + 32,
                              inserted + 32) )
        v20 = (_QWORD *)*v20;
      v21 = (char *)&v39;
      if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v39, v20) )
        v21 = v23;
      v25 = v24;
      if ( v24 >= v16 )
        v25 = v16;
      v26 = v21 - v22;
      while ( 1 )
      {
        if ( !v25 )
        {
          if ( v16 >= v24 )
            goto LABEL_34;
          goto LABEL_31;
        }
        v27 = *(_WORD *)&v22[v26];
        if ( v27 != *(_WORD *)v22 )
          break;
        --v25;
        v22 += 2;
      }
      if ( (v27 < *(_WORD *)v22 ? -1 : 1) < 0 )
        goto LABEL_31;
    }
LABEL_34:
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v39, v22) )
      std::wstring::_Deallocate_for_capacity(v28, v30, v41);
    v40 = 0LL;
    v41 = 7LL;
    LOWORD(v39) = 0;
    if ( a2 )
    {
      if ( a2 != 1 )
        return;
      v31 = *(_DWORD *)(inserted + 64);
      if ( !v31 )
        return;
      v33 = v31 - 1;
      v32 = v33 == 0;
      *(_DWORD *)(inserted + 64) = v33;
    }
    else
    {
      v32 = ++*(_DWORD *)(inserted + 64) == 1;
    }
    if ( v32 )
      CPlaybackNotifier::PublishPlaybackAudioStatus(a1);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x2C5,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      v29);
  }
}
