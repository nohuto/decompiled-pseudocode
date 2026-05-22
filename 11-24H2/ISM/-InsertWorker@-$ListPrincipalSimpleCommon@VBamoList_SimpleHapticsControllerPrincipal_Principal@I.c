/*
 * XREFs of ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_SimpleHapticsControllerPrincipal_Stub@2345@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoSimpleHapticsControllerPrincipal@@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x18018B5A8
 * Callers:
 *     ?Add@?$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_SimpleHapticsControllerPrincipal_Stub@2345@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoSimpleHapticsControllerPrincipal@@@Bamo@Microsoft@@QEAAJPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x180189F34 (-Add@-$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_A.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ @ 0x1800252B8 (-IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800C8010 (--0-$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEA.c)
 *     ??$emplace@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@$$QEAV?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801894B0 (--$emplace@V-$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@.c)
 *     ?BroadcastRemoteInsert@BamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x18018A780 (-BroadcastRemoteInsert@BamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Li.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Stub,wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>,BamoSimpleHapticsControllerPrincipal *>::InsertWorker(
        __int64 a1,
        Microsoft::Bamo::BaseBamoConnection *a2,
        unsigned int a3,
        char *a4)
{
  __int64 v5; // rsi
  __int64 **v8; // rbx
  const char *v9; // r9
  Microsoft::Bamo::BaseBamoConnection *v10; // rcx
  int v11; // eax
  __int64 *v13; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v5 = a3;
  v8 = (__int64 **)(a1 + 56);
  if ( a3 > (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56)) >> 3) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x14D,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      a4);
  wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>(
    &v15,
    (void (__fastcall ***)(_QWORD))a4);
  try
  {
    std::vector<wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>>::emplace<wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>>(
      v8,
      &v13,
      &(*v8)[v5],
      &v15);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v15);
    v10 = a2;
  }
  catch ( ... )
  {
    wil::details::in1diag3::FailFast_CaughtException(
      retaddr,
      (void *)0x153,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      v9);
  }
  if ( !Microsoft::Bamo::BaseBamoConnection::IsDisconnected(v10) )
  {
    v11 = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal::BroadcastRemoteInsert(
            (struct Microsoft::BamoImpl::ConnectionIndirector **)(a1 + 8),
            v5,
            (struct BamoSimpleHapticsControllerPrincipal *)a4);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x157,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v11,
        (int)v13);
  }
  return 0LL;
}
