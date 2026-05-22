/*
 * XREFs of ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x18019E7DC
 * Callers:
 *     ?OnInput@ComboButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18019D780 (-OnInput@ComboButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@AEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA?A_TAEAW4_Button@@@Z @ 0x18019E0DC (--$emplace_back@AEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA-A_TA.c)
 *     ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Button@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@0@V10@V10@AEBW4_Button@@@Z @ 0x18019E218 (--$remove@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Bu.c)
 *     ??4?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18019E5C4 (--4-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??D?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@QEBAAEBU?$pair@$$CBIUComboButtonRegistration@@@1@XZ @ 0x18019E650 (--D-$reverse_iterator@V-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUC.c)
 *     ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x18019EAEC (-FindExactComboButtonMatch@ButtonRecognizer@@AEBA-AV-$reverse_iterator@V-$_Tree_const_iterator@V.c)
 *     ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x18019EE84 (-IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV-$vector@W4_Button@@V-$allocator@W4_Button@@.c)
 *     ?OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ @ 0x18019F138 (-OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ.c)
 *     ?erase@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@2@0@Z @ 0x18019F660 (-erase@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vec.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ButtonRecognizer::DetectComboButton(ButtonRecognizer *this, struct InputInfo *a2)
{
  int v3; // ecx
  char v4; // r8
  int v5; // ecx
  int v6; // ecx
  char *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  int v10; // r14d
  int v11; // ebx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 *v15; // rbx
  char v16; // al
  __int64 *v17; // rbx
  char IsComboButtonCandidate; // al
  __int64 v20; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 *v22; // [rsp+40h] [rbp+20h] BYREF
  __int64 v23; // [rsp+48h] [rbp+28h] BYREF

  v3 = *((_DWORD *)this + 6);
  v4 = *((_BYTE *)a2 + 68);
  LODWORD(v22) = *((_DWORD *)a2 + 16);
  v5 = v3 - 1;
  if ( !v5 )
  {
    *(_WORD *)((char *)this + 17) = 0;
    *((_BYTE *)this + 16) = 0;
    if ( !v4 )
      return 0LL;
    std::vector<enum _Button>::emplace_back<enum _Button &>((_QWORD *)this + 6, &v22);
    ButtonRecognizer::FindExactComboButtonMatch(this, &v22, (char *)this + 48);
    if ( v22 != **((__int64 ***)this + 4) )
    {
      *((_BYTE *)this + 18) = 1;
      v17 = std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,ComboButtonRegistration>>>>>::operator*(&v22);
      *((_DWORD *)this + 18) = *(_DWORD *)v17;
      *((_BYTE *)this + 80) = *((_BYTE *)v17 + 8);
      std::vector<enum _Button>::operator=((char **)this + 11, (__int64)(v17 + 2));
      *((_OWORD *)this + 7) = *(_OWORD *)(v17 + 5);
      *((_OWORD *)this + 8) = *(_OWORD *)(v17 + 7);
      *((_QWORD *)this + 18) = v17[9];
    }
    IsComboButtonCandidate = ButtonRecognizer::IsComboButtonCandidate(this, (char *)this + 48);
    if ( *((_BYTE *)this + 18) )
    {
      if ( !IsComboButtonCandidate )
      {
        v11 = ButtonRecognizer::OnSendComboButtonInvokeEvent(this);
        if ( v11 < 0 )
        {
          v12 = 460LL;
          goto LABEL_37;
        }
        *((_BYTE *)this + 16) = 1;
LABEL_39:
        *((_DWORD *)this + 6) = 3;
        return 0LL;
      }
    }
    else if ( !IsComboButtonCandidate )
    {
      goto LABEL_39;
    }
    v20 = *((_QWORD *)this + 19);
    *((_BYTE *)this + 17) = 1;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v20 + 80LL))(v20, 20000000LL, 0LL);
    if ( v11 >= 0 )
    {
      *((_DWORD *)this + 6) = 2;
      return 0LL;
    }
    v12 = 468LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v10 = 1;
    *((_BYTE *)this + 17) = 1;
    if ( !v4 )
    {
      if ( *((_BYTE *)this + 18) )
      {
        v11 = ButtonRecognizer::OnSendComboButtonInvokeEvent(this);
        if ( v11 < 0 )
        {
          v12 = 484LL;
          goto LABEL_37;
        }
        *((_BYTE *)this + 16) = 1;
      }
      v7 = (char *)this + 48;
      v13 = std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum _Button>>>,enum _Button>(
              &v23,
              *((_DWORD **)this + 6),
              *((_DWORD **)this + 7),
              &v22);
      std::vector<enum _Button>::erase((char *)this + 48, &v22, *v13, v14);
LABEL_14:
      if ( *(_QWORD *)v7 != *((_QWORD *)v7 + 1) )
        v10 = 3;
      goto LABEL_25;
    }
    *((_BYTE *)this + 18) = 0;
    std::vector<enum _Button>::emplace_back<enum _Button &>((_QWORD *)this + 6, &v22);
    ButtonRecognizer::FindExactComboButtonMatch(this, &v22, (char *)this + 48);
    if ( v22 != **((__int64 ***)this + 4) )
    {
      *((_BYTE *)this + 18) = 1;
      v15 = std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,ComboButtonRegistration>>>>>::operator*(&v22);
      *((_DWORD *)this + 18) = *(_DWORD *)v15;
      *((_BYTE *)this + 80) = *((_BYTE *)v15 + 8);
      std::vector<enum _Button>::operator=((char **)this + 11, (__int64)(v15 + 2));
      *((_OWORD *)this + 7) = *(_OWORD *)(v15 + 5);
      *((_OWORD *)this + 8) = *(_OWORD *)(v15 + 7);
      *((_QWORD *)this + 18) = v15[9];
    }
    v16 = ButtonRecognizer::IsComboButtonCandidate(this, (char *)this + 48);
    if ( *((_BYTE *)this + 18) )
    {
      if ( !v16 )
      {
        v11 = ButtonRecognizer::OnSendComboButtonInvokeEvent(this);
        if ( v11 < 0 )
        {
          v12 = 509LL;
          goto LABEL_37;
        }
        *((_BYTE *)this + 16) = 1;
        goto LABEL_24;
      }
    }
    else if ( !v16 )
    {
LABEL_24:
      v10 = 3;
      goto LABEL_25;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 19) + 80LL))(
            *((_QWORD *)this + 19),
            20000000LL,
            0LL);
    if ( v11 < 0 )
    {
      v12 = 515LL;
      goto LABEL_37;
    }
    v10 = 2;
LABEL_25:
    *((_DWORD *)this + 6) = v10;
    return 0LL;
  }
  if ( v6 == 1 )
  {
    v7 = (char *)this + 48;
    if ( v4 )
    {
      std::vector<enum _Button>::emplace_back<enum _Button &>((_QWORD *)this + 6, &v22);
    }
    else
    {
      v8 = std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum _Button>>>,enum _Button>(
             &v23,
             *(_DWORD **)v7,
             *((_DWORD **)this + 7),
             &v22);
      std::vector<enum _Button>::erase((char *)this + 48, &v22, *v8, v9);
    }
    v10 = 1;
    goto LABEL_14;
  }
  return 0LL;
}
