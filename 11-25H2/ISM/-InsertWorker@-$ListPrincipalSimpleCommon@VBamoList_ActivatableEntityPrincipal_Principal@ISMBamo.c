/*
 * XREFs of ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_ActivatableEntityPrincipal_Stub@2345@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoActivatableEntityPrincipal@@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180024AA0
 * Callers:
 *     ?Add@?$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_ActivatableEntityPrincipal_Stub@2345@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoActivatableEntityPrincipal@@@Bamo@Microsoft@@QEAAJPEAVBamoActivatableEntityPrincipal@@@Z @ 0x18000DF1C (-Add@-$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBam.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ @ 0x180024CF8 (-IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ.c)
 *     ??4?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180024E5C (--4-$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$Q.c)
 *     ?BroadcastRemoteInsert@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180024FD0 (-BroadcastRemoteInsert@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18007325C (--$_Emplace_reallocate@V-$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub,wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>,BamoActivatableEntityPrincipal *>::InsertWorker(
        __int64 a1,
        Microsoft::Bamo::BaseBamoConnection *a2,
        unsigned int a3,
        char *a4)
{
  __int64 v5; // r13
  __int64 v6; // r14
  char *v7; // rdi
  __int64 v8; // r12
  char **v9; // rsi
  char *v10; // rbx
  int v11; // eax
  char **v13; // r14
  char *v14; // rax
  char *v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = a3;
  v6 = a1;
  v7 = (char *)(a1 + 56);
  if ( a3 > (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56)) >> 3) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x14D,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      a4);
  try
  {
    v15 = a4;
    if ( a4 )
      (**(void (__fastcall ***)(char *))a4)(a4);
    v8 = *(_QWORD *)v7 + 8 * v5;
    v9 = (char **)*((_QWORD *)v7 + 1);
    if ( v9 == *((char ***)v7 + 2) )
    {
      std::vector<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>(
        v7,
        *(_QWORD *)v7 + 8 * v5,
        &v15);
      v10 = v15;
    }
    else
    {
      v10 = 0LL;
      if ( (char **)v8 == v9 )
      {
        *v9 = a4;
        *((_QWORD *)v7 + 1) += 8LL;
      }
      else
      {
        v15 = v7;
        v16[0] = (__int64)a4;
        v13 = v9 - 1;
        v14 = *(v9 - 1);
        *(v9 - 1) = 0LL;
        *v9 = v14;
        *((_QWORD *)v7 + 1) += 8LL;
        while ( v13 != (char **)v8 )
          wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>::operator=(--v9, --v13);
        wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>::operator=(v8, v16);
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v16);
        v6 = a1;
      }
    }
    if ( v10 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  catch ( ... )
  {
    wil::details::in1diag3::FailFast_CaughtException(
      retaddr,
      (void *)0x153,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      a4);
  }
  if ( !Microsoft::Bamo::BaseBamoConnection::IsDisconnected(a2) )
  {
    v11 = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::BroadcastRemoteInsert(
            (Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal *)(v6 + 8),
            v5,
            (struct BamoActivatableEntityPrincipal *)a4);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x157,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v11,
        (int)v15);
  }
  return 0LL;
}
