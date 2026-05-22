/*
 * XREFs of std::_Func_impl_no_alloc__lambda_4cab80f0fc0214a242ccd3c88452a090__void__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_const___::_Do_call @ 0x1800290A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180016078 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ?GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x180027E10 (-GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA-AV-$vector@IV-$allocator@I@std@@@std@@I@Z.c)
 *     std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_BamoInputAttemptedDeliveryClientProxy_________lambda_1e24b515bdd59bb09c9b07f2d69df852___ @ 0x180029194 (std--find_if_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--Com.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x180066A64 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_4cab80f0fc0214a242ccd3c88452a090__void__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_const___::_Do_call(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rsi
  int v3; // ebx
  unsigned int *v4; // rbx
  unsigned int *i; // rdi
  int v6; // eax
  unsigned int *v7; // [rsp+20h] [rbp-20h] BYREF
  int *v8; // [rsp+28h] [rbp-18h]
  int *v9; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v11; // [rsp+58h] [rbp+18h] BYREF

  v11 = a2;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD *)(v2 + 72);
  LODWORD(v11) = v3;
  if ( *(_QWORD *)(v2 + 80) != *(_QWORD *)(v2 + 88) && v3 )
  {
    ViewHierarchyWithWindowManager::GetAllAncestors(*(_QWORD **)(v2 + 64), &v7, v3);
    if ( v8 == v9 )
    {
      std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>(&v7, v8, &v11);
      v4 = (unsigned int *)v8;
    }
    else
    {
      *v8 = v3;
      v4 = (unsigned int *)++v8;
    }
    for ( i = v7; i != v4; ++i )
    {
      std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_BamoInputAttemptedDeliveryClientProxy_________lambda_1e24b515bdd59bb09c9b07f2d69df852___(
        &v11,
        *(_QWORD *)(v2 + 80),
        *(_QWORD *)(v2 + 88),
        *i);
      if ( v11 != *(_QWORD *)(v2 + 88) )
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v11 + 8LL) + 24LL))(*(_QWORD *)v11 + 8LL);
        if ( v6 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x32,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputattemptedtargetmanager.cpp",
            (const char *)(unsigned int)v6,
            (int)v7);
      }
    }
    std::vector<Windows::UI::Color>::_Tidy((__int64)&v7);
  }
}
