/*
 * XREFs of ?AttachMouse@MPCMouseProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x180036F40
 * Callers:
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180037040 (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?ShouldAttachDevice@MPCMouseProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x180079CF0 (-ShouldAttachDevice@MPCMouseProcessor@@UEAA_NPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800940D4 (--$_Try_emplace@AEBK$$V@-$map@KU-$pair@PEAUDeviceInfo@@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall MPCMouseProcessor::AttachMouse(MPCMouseProcessor *this, struct DeviceInfo *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, struct DeviceInfo *, __int64, __int64 *); // rbx
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // [rsp+20h] [rbp-30h]
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  _BYTE v13[16]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v15; // [rsp+70h] [rbp+20h] BYREF

  v15 = 0LL;
  v4 = *((_QWORD *)this + 461);
  v5 = *(__int64 (__fastcall **)(__int64, struct DeviceInfo *, __int64, __int64 *))(*(_QWORD *)v4 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  v6 = v5(v4, a2, 1LL, &v15);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1AA,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v6,
      v11);
  v7 = v15;
  v12 = v15;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v12);
  v8 = *(_QWORD *)std::map<unsigned long,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>::_Try_emplace<unsigned long const &,>(
                    (char *)this + 5376,
                    v13,
                    a2);
  *(_QWORD *)(v8 + 40) = a2;
  v12 = 0LL;
  v9 = *(_QWORD *)(v8 + 48);
  *(_QWORD *)(v8 + 48) = v7;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  v10 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
}
