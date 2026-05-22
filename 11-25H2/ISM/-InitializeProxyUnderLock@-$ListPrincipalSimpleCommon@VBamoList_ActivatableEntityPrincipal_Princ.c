/*
 * XREFs of ?InitializeProxyUnderLock@?$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_ActivatableEntityPrincipal_Stub@2345@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoActivatableEntityPrincipal@@@Bamo@Microsoft@@MEAAJPEAVBamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@23@@Z @ 0x180024F10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub,wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>,BamoActivatableEntityPrincipal *>::InitializeProxyUnderLock(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, void (__fastcall ***)(_QWORD)); // r15
  void (__fastcall ***v7)(_QWORD); // rdi
  int v8; // eax
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void (__fastcall ***v12)(_QWORD); // [rsp+40h] [rbp+8h] BYREF

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( (unsigned int)i >= (unsigned __int64)((*(_QWORD *)(a1 + 64) - v5) >> 3) )
      break;
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, void (__fastcall ***)(_QWORD)))(*(_QWORD *)(a2 + 8) + 24LL);
    v7 = *(void (__fastcall ****)(_QWORD))(v5 + 8 * i);
    v12 = v7;
    if ( v7 )
      (**v7)(v7);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v12);
    v8 = v6(a2 + 8, (unsigned int)i, v7);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x135,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v8,
        v10);
  }
  return 0LL;
}
