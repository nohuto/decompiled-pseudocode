/*
 * XREFs of ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1801A68AC
 * Callers:
 *     ?Thunk_RegisterComboButton_0@?$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z @ 0x1801A6A90 (-Thunk_RegisterComboButton_0@-$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180016078 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1801A544C (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1801A55CC (--$_Try_emplace@AEBI$$V@-$map@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 *     std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___ @ 0x1801A5708 (std--find_if_std--_Tree_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair_unsigned_int_c.c)
 *     ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Button@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@0@V10@V10@AEBW4_Button@@@Z @ 0x1801A5808 (--$remove@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Bu.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@V?$initializer_list@W4_Button@@@1@AEBV?$allocator@W4_Button@@@1@@Z @ 0x1801A58F8 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@V-$initializer_list@W4_Button@@@.c)
 *     ??4?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801A5BD8 (--4-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?OnComboButtonRegistryComplete@ButtonRecognizer@@AEAAJIPEAUtagMsgRoutingInfo@@@Z @ 0x1801A666C (-OnComboButtonRegistryComplete@ButtonRecognizer@@AEAAJIPEAUtagMsgRoutingInfo@@@Z.c)
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801A6B90 (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator.c)
 *     ?erase@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@2@0@Z @ 0x1801A6C70 (-erase@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vec.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ButtonRecognizer::RegisterComboButton(
        ButtonRecognizer *this,
        struct tagMsgRoutingInfo *a2,
        __int64 a3,
        struct ButtonRegistrationABI *a4)
{
  char v4; // bl
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v16; // [rsp+20h] [rbp-79h] BYREF
  __int64 v17; // [rsp+28h] [rbp-71h] BYREF
  int *v18; // [rsp+30h] [rbp-69h] BYREF
  int *v19; // [rsp+38h] [rbp-61h]
  _QWORD v20[2]; // [rsp+50h] [rbp-49h] BYREF
  _DWORD v21[5]; // [rsp+60h] [rbp-39h] BYREF
  char v22; // [rsp+74h] [rbp-25h] BYREF
  _BYTE v23[8]; // [rsp+80h] [rbp-19h] BYREF
  char *v24; // [rsp+88h] [rbp-11h] BYREF
  __int128 v25; // [rsp+90h] [rbp-9h]
  __int128 v26; // [rsp+A0h] [rbp+7h]
  __int128 v27; // [rsp+B0h] [rbp+17h]
  __int64 v28; // [rsp+C0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v4 = a3;
  v21[0] = *(_DWORD *)a4;
  v21[1] = *((_DWORD *)a4 + 1);
  v21[2] = *((_DWORD *)a4 + 2);
  v21[3] = *((_DWORD *)a4 + 3);
  v21[4] = *((_DWORD *)a4 + 4);
  v20[0] = v21;
  v20[1] = &v22;
  std::vector<enum _Button>::vector<enum _Button>((void **)&v18, (__int64)v20, a3);
  LODWORD(v17) = 305;
  v7 = std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum _Button>>>,enum _Button>(
         v20,
         v18,
         v19,
         &v17);
  std::vector<enum _Button>::erase(&v18, &v17, *v7, v8);
  if ( !v4 )
    std::_Sort_unchecked<enum _Button *,std::less<void>>(v18, v19, v19 - v18, 0);
  v24 = 0LL;
  v25 = 0LL;
  v23[0] = v4;
  std::vector<enum _Button>::operator=(&v24, (__int64)&v18);
  v26 = *(_OWORD *)a2;
  v27 = *((_OWORD *)a2 + 1);
  v28 = *((_QWORD *)a2 + 4);
  std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___(
    &v17,
    **((_QWORD **)this + 4),
    *((_QWORD *)this + 4),
    v23);
  v10 = (_QWORD *)*((_QWORD *)this + 4);
  if ( (_QWORD *)v17 == v10 )
  {
    v11 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 5) = v11 + 1;
  }
  else
  {
    v11 = *(_DWORD *)(v17 + 32);
  }
  v16 = v11;
  if ( *((_QWORD *)this + 5) )
    std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Erase_unchecked(
      (char *)this + 32,
      *v10);
  v12 = *(_QWORD *)std::map<unsigned int,ComboButtonRegistration>::_Try_emplace<unsigned int const &,>(
                     (__int64 *)this + 4,
                     (__int64)v20,
                     &v16,
                     v9);
  *(_BYTE *)(v12 + 40) = v23[0];
  std::vector<enum _Button>::operator=((char **)(v12 + 48), (__int64)&v24);
  *(_OWORD *)(v12 + 72) = v26;
  *(_OWORD *)(v12 + 88) = v27;
  *(_QWORD *)(v12 + 104) = v28;
  v13 = ButtonRecognizer::OnComboButtonRegistryComplete(this, v16, a2);
  v14 = v13;
  if ( v13 >= 0 )
    v14 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x190,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)(unsigned int)v13);
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v24);
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v18);
  return v14;
}
