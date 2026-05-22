/*
 * XREFs of ?CreatePVPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@@Z @ 0x18016CBC8
 * Callers:
 *     _lambda_7c875662d6abaa9f8d1386a75bd755d7_::operator() @ 0x18016B48C (_lambda_7c875662d6abaa9f8d1386a75bd755d7_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@PEAVAsyncStringPrincipal@@@?$vector@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV23@$$QEAPEAVAsyncStringPrincipal@@@Z @ 0x180064230 (--$_Emplace_reallocate@PEAVAsyncStringPrincipal@@@-$vector@V-$com_ptr_t@VAsyncStringPrincipal@@U.c)
 *     ??0?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x1800643A8 (--0-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoIn.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     std::_Func_impl_no_alloc__lambda_824b94053d2fecabe388e187688ff60e__void_long_::_Func_impl_no_alloc__lambda_824b94053d2fecabe388e187688ff60e__void_long___lambda_824b94053d2fecabe388e187688ff60e__0_ @ 0x180167FF4 (std--_Func_impl_no_alloc__lambda_824b94053d2fecabe388e187688ff60e__void_long_--_Func_impl_no_all.c)
 *     std::_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARIANT_const_&_::_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARIANT_const_&___lambda_82df5eb55bcd175fe38d7bfb3ca3561b__0_ @ 0x18016802C (std--_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARIANT_const_-_-.c)
 *     ?CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ @ 0x18016C308 (-CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ.c)
 *     ??0AsyncPVPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXAEBUtagPROPVARIANT@@@Z@std@@V?$function@$$A6AXJ@Z@3@@Z @ 0x180172230 (--0AsyncPVPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V-$function@$$A6AXAEBUtagPROPVARIANT@@.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall MPCConstantManagerClient::CreatePVPrincipal(__int64 a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v6; // rbx
  void (__fastcall ***v7)(_QWORD); // rax
  _QWORD *v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-81h] BYREF
  __int64 v11; // [rsp+30h] [rbp-79h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-71h] BYREF
  __int64 v13; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v14[7]; // [rsp+50h] [rbp-59h] BYREF
  _QWORD *v15; // [rsp+88h] [rbp-21h]
  _QWORD v16[7]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD *v17; // [rsp+C8h] [rbp+1Fh]
  _QWORD *v18; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 *v19; // [rsp+120h] [rbp+77h]

  v19 = a3;
  v18 = a2;
  MPCConstantManagerClient::CleanupPrincipals((MPCConstantManagerClient *)a1);
  v6 = operator new(0xC0uLL);
  v18 = v6;
  v10 = *a3;
  v11 = a3[1];
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v11);
  v15 = 0LL;
  v15 = std::_Func_impl_no_alloc__lambda_824b94053d2fecabe388e187688ff60e__void_long_::_Func_impl_no_alloc__lambda_824b94053d2fecabe388e187688ff60e__void_long___lambda_824b94053d2fecabe388e187688ff60e__0_(
          v14,
          &v10);
  v12[0] = a1;
  v12[1] = *a3;
  v13 = a3[1];
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v13);
  v17 = 0LL;
  v17 = std::_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARIANT_const___::_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARIANT_const_____lambda_82df5eb55bcd175fe38d7bfb3ca3561b__0_(
          v16,
          v12);
  v7 = (void (__fastcall ***)(_QWORD))AsyncPVPrincipal::AsyncPVPrincipal(v6, *(_QWORD *)(a1 + 32), v16, v14, 3, v10);
  v18 = v7;
  v8 = *(_QWORD **)(a1 + 56);
  if ( v8 == *(_QWORD **)(a1 + 64) )
  {
    std::vector<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>::_Emplace_reallocate<AsyncStringPrincipal *>(
      (char **)(a1 + 48),
      *(char **)(a1 + 56),
      &v18);
  }
  else
  {
    wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
      v8,
      v7);
    *(_QWORD *)(a1 + 56) += 8LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
    a2,
    *(void (__fastcall ****)(_QWORD))(*(_QWORD *)(a1 + 56) - 8LL));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a3 + 1);
  return a2;
}
