/*
 * XREFs of ?GetForCurrentThread@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@XZ @ 0x18008DCF0
 * Callers:
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x18008DB6C (--0DeviceInputHost@@AEAA@XZ.c)
 *     ??0InputProcess@@AEAA@XZ @ 0x1800CBF30 (--0InputProcess@@AEAA@XZ.c)
 * Callees:
 *     ?AddRef@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18000BC14 (-AddRef@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18000CF00 (-InternalRelease@-$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Create@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18007F5E4 (-Create@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClientConnection@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_a541461e8d66da6faf437e54554206d1_::_lambda_a541461e8d66da6faf437e54554206d1_ @ 0x1800AC498 (_lambda_a541461e8d66da6faf437e54554206d1_--_lambda_a541461e8d66da6faf437e54554206d1_.c)
 *     std::function_void___cdecl(enum_CallOnThreadExit::CallbackReason)_::function_void___cdecl(enum_CallOnThreadExit::CallbackReason)___lambda_a541461e8d66da6faf437e54554206d1__0_ @ 0x18012DBB4 (std--function_void___cdecl(enum_CallOnThreadExit--CallbackReason)_--function_void___cdecl(enum_C.c)
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@@Z @ 0x1801311E4 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
Microsoft::Bamo::BaseBamoConnection **__fastcall InputSystemInternalClientConnection::GetForCurrentThread(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  __int64 v2; // rdi
  int v3; // eax
  Microsoft::Bamo::BaseBamoConnection **v4; // rax
  Microsoft::Bamo::BaseBamoConnection *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  Microsoft::Bamo::BaseBamoConnection *v8; // rcx
  int v10; // [rsp+20h] [rbp-58h]
  _BYTE v11[72]; // [rsp+28h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v13; // [rsp+88h] [rbp+10h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v14; // [rsp+90h] [rbp+18h] BYREF

  v2 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( !*(_QWORD *)(v2 + 24) )
  {
    v13 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    v3 = CoreUICreate(&v13);
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x27,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\system\\inputsysteminternalclientconnection.cpp",
        (const char *)(unsigned int)v3,
        v10);
    v4 = InputSystemInternalClientConnection::Create(&v14, v13);
    v5 = *v4;
    *v4 = 0LL;
    *(_QWORD *)(v2 + 24) = v5;
    Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::InternalRelease(&v14);
    v6 = lambda_a541461e8d66da6faf437e54554206d1_::_lambda_a541461e8d66da6faf437e54554206d1_(&v14, *(_QWORD *)(v2 + 24));
    v7 = std::function_void___cdecl_enum_CallOnThreadExit::CallbackReason__::function_void___cdecl_enum_CallOnThreadExit::CallbackReason____lambda_a541461e8d66da6faf437e54554206d1__0_(
           v11,
           v6);
    CallOnThreadExit::Register(v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  }
  v8 = *(Microsoft::Bamo::BaseBamoConnection **)(v2 + 24);
  *a1 = v8;
  if ( v8 )
    Microsoft::Bamo::BaseBamoConnection::AddRef(v8);
  return a1;
}
