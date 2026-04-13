/*
 * XREFs of ?Execute@UnlockActionHelper@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18008D450
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAsyncHelper@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@UINilDelegate@Internal@3@V?$CBasicResult@E$0A@@63@VComTaskPoolHandler@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAU?$IAsyncOperation@_N@Foundation@1@$$QEAVComTaskPoolHandler@01@QEB_WW4TrustLevel@@PEAV?$AsyncCallbackBase@V?$CBasicResult@E$0A@@Internal@Windows@@@01@@Z @ 0x18008C38C (--$MakeAsyncHelper@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedHandler@.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CBasicResult_unsigned_char_0___lambda_de7ca9b0ec13d6a85971aebf8330bbf3___ @ 0x18008C44C (Windows--Internal--MakeOpLambda_0_Windows--Internal--CBasicResult_unsigned_char_0___lambda_de7ca.c)
 *     ??0?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18008CAB0 (--0-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     _lambda_de7ca9b0ec13d6a85971aebf8330bbf3_::__lambda_de7ca9b0ec13d6a85971aebf8330bbf3_ @ 0x18008CB7C (_lambda_de7ca9b0ec13d6a85971aebf8330bbf3_--__lambda_de7ca9b0ec13d6a85971aebf8330bbf3_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall UnlockActionHelper::Execute(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // r9
  int v6; // ebx
  _DWORD v8[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  __int64 v11; // [rsp+60h] [rbp+10h] BYREF
  __int64 v12; // [rsp+68h] [rbp+18h] BYREF

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  v12 = v3;
  wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>(
    &v11,
    (__int64 *)(a1 + 32));
  wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>(
    v9,
    &v11);
  v9[1] = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v8[0] = 3;
  v8[1] = 128;
  v8[2] = 0;
  v4 = Windows::Internal::MakeOpLambda_0_Windows::Internal::CBasicResult_unsigned_char_0___lambda_de7ca9b0ec13d6a85971aebf8330bbf3___(v9);
  v6 = Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::INilDelegate,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
         a2,
         (__int64)v8,
         (__int64)L"Windows.Foundation.IAsyncOperation`1<Boolean>",
         v5,
         (__int64)v4);
  lambda_de7ca9b0ec13d6a85971aebf8330bbf3_::__lambda_de7ca9b0ec13d6a85971aebf8330bbf3_(v9);
  if ( v6 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v6);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v11);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v12);
  return (unsigned int)v6;
}
