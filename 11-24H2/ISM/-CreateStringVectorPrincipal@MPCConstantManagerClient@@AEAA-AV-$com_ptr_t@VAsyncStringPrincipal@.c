/*
 * XREFs of ?CreateStringVectorPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@P6A?AV?$com_ptr_t@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@3@PEBG@Z@Z @ 0x18016DF24
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_b07e28b8d9a43b43078b009fd4c08247__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________::Run @ 0x1801710D0 (Windows--Internal--COperationLambdaVar_0__lambda_b07e28b8d9a43b43078b009fd4c08247___ea_1801710D0.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_de6bcc426287dbdda407399e3f0c7994__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________::Run @ 0x180171170 (Windows--Internal--COperationLambdaVar_0__lambda_de6bcc426287dbdda407399e3f0c7994___ea_180171170.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@PEAVAsyncStringPrincipal@@@?$vector@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV23@$$QEAPEAVAsyncStringPrincipal@@@Z @ 0x180064670 (--$_Emplace_reallocate@PEAVAsyncStringPrincipal@@@-$vector@V-$com_ptr_t@VAsyncStringPrincipal@@U.c)
 *     ??0?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x1800647E8 (--0-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoIn.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     std::_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_short_const___::_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_short_const_____lambda_07471f410bb64c4d3d31f6ab24fa2971__0_ @ 0x180168DFC (std--_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_short_const___-.c)
 *     std::_Func_impl_no_alloc__lambda_902f91128e69d2cf33c0410a5e5ad4c7__void_long_::_Func_impl_no_alloc__lambda_902f91128e69d2cf33c0410a5e5ad4c7__void_long___lambda_902f91128e69d2cf33c0410a5e5ad4c7__0_ @ 0x180168EBC (std--_Func_impl_no_alloc__lambda_902f91128e69d2cf33c0410a5e5ad4c7__void_long_--_Func_impl_no_all.c)
 *     ?CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ @ 0x18016D198 (-CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ.c)
 *     ??0AsyncStringPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXPEBG@Z@std@@V?$function@$$A6AXJ@Z@3@@Z @ 0x1801739E0 (--0AsyncStringPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V-$function@$$A6AXPEBG@Z@std@@V-$f.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *MPCConstantManagerClient::CreateStringVectorPrincipal(__int64 a1, _QWORD *a2, __int64 *a3, ...)
{
  void (__fastcall ***v6)(_QWORD); // rdi
  void (__fastcall ***v7)(_QWORD); // rax
  _QWORD *v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-91h] BYREF
  __int64 v11; // [rsp+30h] [rbp-89h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-81h] BYREF
  __int64 v13[2]; // [rsp+48h] [rbp-71h] BYREF
  _QWORD v14[7]; // [rsp+58h] [rbp-61h] BYREF
  _QWORD *v15; // [rsp+90h] [rbp-29h]
  _QWORD v16[7]; // [rsp+98h] [rbp-21h] BYREF
  _QWORD *v17; // [rsp+D0h] [rbp+17h]
  void (__fastcall ***v18)(_QWORD); // [rsp+138h] [rbp+7Fh] BYREF
  va_list va; // [rsp+138h] [rbp+7Fh]
  va_list va1; // [rsp+140h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, void (__fastcall ***)(_QWORD));
  MPCConstantManagerClient::CleanupPrincipals((MPCConstantManagerClient *)a1);
  v6 = (void (__fastcall ***)(_QWORD))operator new(0xC0uLL);
  v18 = v6;
  v10 = *a3;
  v11 = a3[1];
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v11);
  v15 = 0LL;
  v15 = std::_Func_impl_no_alloc__lambda_902f91128e69d2cf33c0410a5e5ad4c7__void_long_::_Func_impl_no_alloc__lambda_902f91128e69d2cf33c0410a5e5ad4c7__void_long___lambda_902f91128e69d2cf33c0410a5e5ad4c7__0_(
          v14,
          &v10);
  v12[0] = a1;
  v12[1] = *a3;
  v13[0] = a3[1];
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v13);
  v13[1] = (__int64)StringToHstringVectorParser;
  v17 = 0LL;
  v17 = std::_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_short_const___::_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_short_const_____lambda_07471f410bb64c4d3d31f6ab24fa2971__0_(
          v16,
          v12);
  v7 = (void (__fastcall ***)(_QWORD))AsyncStringPrincipal::AsyncStringPrincipal(
                                        v6,
                                        *(_QWORD *)(a1 + 32),
                                        v16,
                                        v14,
                                        3,
                                        v10);
  v18 = v7;
  v8 = *(_QWORD **)(a1 + 104);
  if ( v8 == *(_QWORD **)(a1 + 112) )
  {
    std::vector<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>::_Emplace_reallocate<AsyncStringPrincipal *>(
      (char **)(a1 + 96),
      *(char **)(a1 + 104),
      (void (__fastcall ****)(_QWORD))va);
  }
  else
  {
    wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
      v8,
      v7);
    *(_QWORD *)(a1 + 104) += 8LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
    a2,
    *(void (__fastcall ****)(_QWORD))(*(_QWORD *)(a1 + 104) - 8LL));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a3 + 1);
  return a2;
}
