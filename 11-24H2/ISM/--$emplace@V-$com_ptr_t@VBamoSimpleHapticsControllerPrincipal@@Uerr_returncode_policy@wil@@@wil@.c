/*
 * XREFs of ??$emplace@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@$$QEAV?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801894B0
 * Callers:
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_SimpleHapticsControllerPrincipal_Stub@2345@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoSimpleHapticsControllerPrincipal@@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x18018B5A8 (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerPrincipal_Principal@I.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AF094 (--4-$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QE.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801891B0 (--$_Emplace_reallocate@V-$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_polic.c)
 */

__int64 **__fastcall std::vector<wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>>::emplace<wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>>(
        __int64 **a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v4; // rdi
  __int64 v7; // rax
  __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 v11[2]; // [rsp+28h] [rbp-10h] BYREF

  v4 = a1[1];
  if ( v4 == a1[2] )
  {
    *a2 = std::vector<wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>>(
            a1,
            a3,
            a4);
  }
  else
  {
    v7 = *a4;
    *a4 = 0LL;
    if ( a3 == v4 )
    {
      *v4 = v7;
      ++a1[1];
    }
    else
    {
      v8 = v4 - 1;
      v11[0] = v7;
      v9 = *(v4 - 1);
      *(v4 - 1) = 0LL;
      *v4 = v9;
      ++a1[1];
      while ( v8 != a3 )
        wil::com_ptr_t<ActivatableEntityBamoPrincipal,wil::err_exception_policy>::operator=(--v4, --v8);
      wil::com_ptr_t<ActivatableEntityBamoPrincipal,wil::err_exception_policy>::operator=(a3, v11);
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v11);
    }
    *a2 = a3;
  }
  return a2;
}
