/*
 * XREFs of ?find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x180022D5C
 * Callers:
 *     ?TryUpdateApplicationActivationState@ActivationWatcherBamoPrincipal@@QEAAX_K@Z @ 0x180022C8C (-TryUpdateApplicationActivationState@ActivationWatcherBamoPrincipal@@QEAAX_K@Z.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@AEBU_LUID@@@Z @ 0x1800B2110 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActivatableEntityB.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1800B2154 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActiv_ea_1800B2154.c)
 * Callees:
 *     ?GetItemAt@?$ListPrincipalDetails@VBamoActivatableEntityPrincipal@@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@3@VBamoList_ActivatableEntityPrincipal_Stub@3456@$00$0A@$0A@@Bamo@Microsoft@@QEAAPEAVBamoActivatableEntityPrincipal@@I@Z @ 0x180023018 (-GetItemAt@-$ListPrincipalDetails@VBamoActivatableEntityPrincipal@@VBamoList_ActivatableEntityPr.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall ActivationWatcherBamoPrincipal::find_and_return_if(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rbp
  unsigned int i; // edi
  void (__fastcall ***ItemAt)(_QWORD); // rax
  const char *v10; // r9
  void (__fastcall ***v11)(_QWORD); // rbx
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void (__fastcall ***v18)(_QWORD); // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v19; // [rsp+78h] [rbp+10h]
  __int64 v20; // [rsp+80h] [rbp+18h]
  void (__fastcall ***v21)(_QWORD); // [rsp+88h] [rbp+20h]

  v20 = a3;
  v19 = a2;
  *a2 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 32LL))(a1 + 8);
  v7 = (__int64)(*(_QWORD *)(v6 + 64) - *(_QWORD *)(v6 + 56)) >> 3;
  for ( i = 0; i < (unsigned int)v7; ++i )
  {
    ItemAt = (void (__fastcall ***)(_QWORD))Microsoft::Bamo::ListPrincipalDetails<BamoActivatableEntityPrincipal,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub,1,0,0>::GetItemAt(
                                              v6,
                                              i);
    v11 = ItemAt;
    v21 = ItemAt;
    if ( ItemAt )
      (**ItemAt)(ItemAt);
    v12 = retaddr;
    if ( !v11 )
      goto LABEL_16;
    v18 = v11;
    v13 = *(_QWORD *)(a3 + 56);
    if ( !v13 )
    {
      std::_Xbad_function_call();
      __debugbreak();
LABEL_16:
      wil::details::in1diag3::_FailFast_Unexpected(
        v12,
        (void *)0x92,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\activationwatcherbamoprincipal.cpp",
        v10);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, void (__fastcall ****)(_QWORD)))(*(_QWORD *)v13 + 16LL))(v13, &v18) )
    {
      v14 = *a2;
      *a2 = v11;
      (**v11)(v11);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      (*v11)[1](v11);
      break;
    }
    (*v11)[1](v11);
  }
  v15 = *(_QWORD *)(a3 + 56);
  if ( v15 )
  {
    LOBYTE(v5) = v15 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(v15, v5);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return a2;
}
