/*
 * XREFs of ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801A9F70
 * Callers:
 *     ?OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801A9450 (-OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetKeyboardInputData@KeyboardInputInfo@@QEAA?AU_KEYBOARD_INPUT_DATA@@XZ @ 0x180063530 (-GetKeyboardInputData@KeyboardInputInfo@@QEAA-AU_KEYBOARD_INPUT_DATA@@XZ.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??4?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F7538 (--4-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Assign_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801A9A64 (--$_Assign_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@UKeyEv.c)
 *     ??$_Construct_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801A9B10 (--$_Construct_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_typ.c)
 *     ??$_Emplace@AEBUKeyEventData@VirtualHotKeyTracker@@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@QEAAPEAU?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@1@QEAU21@AEBUKeyEventData@VirtualHotKeyTracker@@@Z @ 0x1801A9BB4 (--$_Emplace@AEBUKeyEventData@VirtualHotKeyTracker@@@-$list@UKeyEventData@VirtualHotKeyTracker@@V.c)
 *     ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@UCompareGuids@VirtualHotKeyTracker@@V?$allocator@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@std@@_N@1@AEBU_GUID@@@Z @ 0x1801A9C64 (--$_Try_emplace@AEBU_GUID@@$$V@-$map@U_GUID@@V-$list@UKeyEventData@VirtualHotKeyTracker@@V-$allo.c)
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData_______lambda_7f079bc5e87df2e09bd622ff86c26e64___ @ 0x1801A9DB0 (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_VirtualHotKeyTracker--.c)
 *     ?SynthesizeKeyEvent@VirtualHotKeyTracker@@AEAAXAEBUKeyEventData@1@U_GUID@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@@Z @ 0x1801AA480 (-SynthesizeKeyEvent@VirtualHotKeyTracker@@AEAAXAEBUKeyEventData@1@U_GUID@@W4_SYNTHESIZE_KEYBOARD.c)
 *     ?_Unchecked_erase@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAPEAU?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1801AA524 (-_Unchecked_erase@-$list@UKeyEventData@VirtualHotKeyTracker@@V-$allocator@UKeyEventData@VirtualH.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualHotKeyTracker::OnInput(
        VirtualHotKeyTracker *this,
        struct KeyboardInputInfo *a2,
        struct _GUID *a3,
        const struct HotKeyDetectionResult *a4)
{
  const struct HotKeyDetectionResult *v4; // r15
  struct _GUID *v5; // rdi
  __int64 *v6; // r13
  char v7; // r12
  __int64 v8; // r11
  __int16 v9; // dx
  __int64 **v10; // rcx
  __int64 *v11; // rax
  __int64 *v12; // rdx
  __int64 *v13; // r8
  __int128 v14; // xmm1
  __m128i *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 **v18; // rsi
  __int64 *v19; // rbx
  __int64 *v20; // r15
  __int64 *v21; // r13
  __int64 *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  __m128i *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 *v29; // rsi
  __int64 *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 *v34; // rdi
  _QWORD *v35; // rax
  __int64 **v36; // rcx
  char **v37; // rcx
  char *v38; // rcx
  char *v39; // rdi
  __m128i **v40; // rax
  __m128i *i; // rax
  __m128i *j; // rcx
  __int64 v44; // [rsp+20h] [rbp-E0h]
  struct _GUID *v45; // [rsp+28h] [rbp-D8h]
  __m128i v46; // [rsp+30h] [rbp-D0h] BYREF
  __m128i *v47; // [rsp+40h] [rbp-C0h]
  const struct HotKeyDetectionResult *v48; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v49[16]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v50[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v51[16]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v52[16]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v53; // [rsp+98h] [rbp-68h] BYREF
  __int128 v54; // [rsp+A8h] [rbp-58h]
  __m128i v55; // [rsp+C0h] [rbp-40h] BYREF
  __m128i v56; // [rsp+D0h] [rbp-30h]
  __int64 *v57[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v58; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v59; // [rsp+100h] [rbp+0h]

  v4 = a4;
  v48 = a4;
  v5 = a3;
  v45 = a3;
  v6 = (__int64 *)this;
  v46.m128i_i64[0] = (__int64)this;
  v7 = *((_BYTE *)a2 + 94) & 1;
  LOBYTE(v44) = v7;
  v53 = 0LL;
  v54 = 0LL;
  *(_QWORD *)&v54 = *((unsigned int *)a2 + 1);
  *(struct _KEYBOARD_INPUT_DATA *)&v53 = *KeyboardInputInfo::GetKeyboardInputData(
                                            a2,
                                            (struct _KEYBOARD_INPUT_DATA *)&v55);
  WORD4(v54) = *(_WORD *)(v8 + 58);
  v9 = *(_WORD *)(v8 + 60);
  WORD5(v54) = v9;
  v10 = (__int64 **)v6[4];
  v11 = *v10;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( v11 == (__int64 *)v10 )
      {
        v12 = v11;
        goto LABEL_14;
      }
      if ( v9 == *((_WORD *)v11 + 21) )
        break;
      v11 = (__int64 *)*v11;
    }
    v12 = v11;
    while ( 1 )
    {
      v13 = (__int64 *)*v11;
      v11 = v13;
      if ( v13 == (__int64 *)v10 )
        break;
      if ( *(_WORD *)(v8 + 60) != *((_WORD *)v13 + 21) )
      {
        v14 = *((_OWORD *)v13 + 2);
        *((_OWORD *)v12 + 1) = *((_OWORD *)v13 + 1);
        *((_OWORD *)v12 + 2) = v14;
        v12 = (__int64 *)*v12;
      }
    }
LABEL_14:
    std::list<VirtualHotKeyTracker::KeyEventData>::_Unchecked_erase(v6 + 4, v12, v10);
  }
  else
  {
    while ( v11 != (__int64 *)v10 )
    {
      if ( *((_WORD *)v11 + 21) == v9 )
        goto LABEL_15;
      v11 = (__int64 *)*v11;
    }
    std::list<VirtualHotKeyTracker::KeyEventData>::_Emplace<VirtualHotKeyTracker::KeyEventData const &>(
      (__int64)(v6 + 4),
      v6[4],
      &v53);
  }
LABEL_15:
  if ( *(_QWORD *)v4 && !v7 )
  {
    v15 = (__m128i *)((char *)v4 + 16);
    v16 = *((_QWORD *)v4 + 2) - *(_QWORD *)&GUID_NULL.Data1;
    if ( !v16 )
      v16 = *((_QWORD *)v4 + 3) - *(_QWORD *)GUID_NULL.Data4;
    if ( v16 )
    {
      v17 = *(_QWORD *)&v5->Data1 - v15->m128i_i64[0];
      if ( *(_QWORD *)&v5->Data1 == v15->m128i_i64[0] )
        v17 = *(_QWORD *)v5->Data4 - *((_QWORD *)v4 + 3);
      if ( v17 )
      {
        v18 = (__int64 **)v6[4];
        v19 = *v18;
        v20 = v6;
        while ( v19 != (__int64 *)v18 )
        {
          v58 = *((_OWORD *)v19 + 1);
          v59 = *((_OWORD *)v19 + 2);
          v10 = (__int64 **)((unsigned __int64)v19[5] >> 16);
          if ( (unsigned __int16)((_WORD)v10 - 160) <= 5u
            || (LOWORD(v10) = (_WORD)v10 - 91, (unsigned __int16)v10 <= 1u) )
          {
            v21 = *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                             v20 + 6,
                                             (__int64)v49,
                                             v15)
                              + 48LL);
            v22 = *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                             v20 + 6,
                                             (__int64)v50,
                                             v15)
                              + 48LL);
            do
              v22 = (__int64 *)*v22;
            while ( v22 != v21 && *((_WORD *)v22 + 21) != WORD5(v59) );
            if ( v22 == *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                                   v20 + 6,
                                                   (__int64)v51,
                                                   v15)
                                    + 48LL) )
            {
              v23 = std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                      v20 + 6,
                      (__int64)v52,
                      v15);
              std::list<VirtualHotKeyTracker::KeyEventData>::_Emplace<VirtualHotKeyTracker::KeyEventData const &>(
                *(_QWORD *)v23 + 48LL,
                *(_QWORD *)(*(_QWORD *)v23 + 48LL),
                &v58);
              v55 = *v15;
              VirtualHotKeyTracker::SynthesizeKeyEvent(v24, &v58, &v55, 2LL, v44, v45);
            }
          }
          v19 = (__int64 *)*v19;
        }
        v4 = v48;
        v5 = v45;
        v6 = (__int64 *)v46.m128i_i64[0];
        v7 = v44;
      }
    }
  }
  if ( *(_QWORD *)v4 && *((_BYTE *)v4 + 32) )
  {
    v55 = *(__m128i *)v5;
    VirtualHotKeyTracker::SynthesizeKeyEvent(v10, &v53, &v55, 1LL, v44, v45);
  }
  v25 = *(__m128i **)v6[6];
  while ( !v25[1].m128i_i8[9] )
  {
    v56 = v25[2];
    v57[0] = 0LL;
    v57[1] = 0LL;
    std::list<VirtualHotKeyTracker::KeyEventData>::_Construct_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>>(
      v57,
      *(__int64 **)v25[3].m128i_i64[0],
      (__int64 *)v25[3].m128i_i64[0]);
    v55 = v56;
    v26 = *(_QWORD *)&v5->Data1 - v56.m128i_i64[0];
    if ( *(_QWORD *)&v5->Data1 == v56.m128i_i64[0] )
      v26 = *(_QWORD *)v5->Data4 - _mm_srli_si128(v56, 8).m128i_u64[0];
    if ( v26 )
    {
      if ( v7 )
      {
        v34 = v57[0];
        v46.m128i_i64[0] = (__int64)&v53;
        v46.m128i_i64[1] = (__int64)v6;
        v47 = &v55;
        v35 = std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData_______lambda_7f079bc5e87df2e09bd622ff86c26e64___(
                &v48,
                *(__int64 **)v57[0],
                v57[0],
                (__int64)&v46);
        std::list<VirtualHotKeyTracker::KeyEventData>::_Unchecked_erase(v57, *v35, v34);
        v36 = (__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                        v6 + 6,
                                        (__int64)&v58,
                                        &v55)
                         + 48LL);
        if ( v36 != v57 )
          std::list<VirtualHotKeyTracker::KeyEventData>::_Assign_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>>(
            (__int64)v36,
            *v57[0],
            v57[0]);
      }
      else if ( *(_QWORD *)v4 )
      {
        v27 = *((_QWORD *)v4 + 2) - v56.m128i_i64[0];
        if ( !v27 )
          v27 = *((_QWORD *)v4 + 3) - _mm_srli_si128(v56, 8).m128i_u64[0];
        if ( !v27 )
        {
          v28 = v6[2];
          if ( *(_QWORD *)v4 != v28 || (*(_WORD *)(v28 + 24) & 0x4000) == 0 )
          {
            v29 = *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                             v6 + 6,
                                             (__int64)v52,
                                             &v55)
                              + 48LL);
            v30 = *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                             v6 + 6,
                                             (__int64)v51,
                                             &v55)
                              + 48LL);
            do
              v30 = (__int64 *)*v30;
            while ( v30 != v29 && WORD5(v54) != *((_WORD *)v30 + 21) );
            v31 = std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                    v6 + 6,
                    (__int64)v50,
                    &v55);
            v32 = *(_QWORD *)v31;
            if ( v30 == *(__int64 **)(*(_QWORD *)v31 + 48LL) )
            {
              v33 = std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                      v6 + 6,
                      (__int64)v49,
                      &v55);
              std::list<VirtualHotKeyTracker::KeyEventData>::_Emplace<VirtualHotKeyTracker::KeyEventData const &>(
                *(_QWORD *)v33 + 48LL,
                *(_QWORD *)(*(_QWORD *)v33 + 48LL),
                &v53);
            }
            v46 = v55;
            VirtualHotKeyTracker::SynthesizeKeyEvent(v32, &v53, &v46, 2LL, v44, v45);
          }
        }
      }
    }
    v37 = (char **)v57[0];
    **((_QWORD **)v57[0] + 1) = 0LL;
    v38 = *v37;
    if ( v38 )
    {
      do
      {
        v39 = *(char **)v38;
        std::_Deallocate<16,0>(v38, (const struct std::nothrow_t *)0x30);
        v38 = v39;
      }
      while ( v39 );
    }
    std::_Deallocate<16,0>((char *)v57[0], (const struct std::nothrow_t *)0x30);
    v40 = (__m128i **)v25[1].m128i_i64[0];
    if ( *((_BYTE *)v40 + 25) )
    {
      for ( i = (__m128i *)v25->m128i_i64[1];
            !i[1].m128i_i8[9] && v25 == (__m128i *)i[1].m128i_i64[0];
            i = (__m128i *)i->m128i_i64[1] )
      {
        v25 = i;
      }
      v25 = i;
    }
    else
    {
      v25 = (__m128i *)v25[1].m128i_i64[0];
      for ( j = *v40; !j[1].m128i_i8[9]; j = (__m128i *)j->m128i_i64[0] )
        v25 = j;
    }
    v5 = v45;
  }
  std::shared_ptr<SystemCursorShapeBitmap2>::operator=(v6 + 2, v4);
  return 0LL;
}
