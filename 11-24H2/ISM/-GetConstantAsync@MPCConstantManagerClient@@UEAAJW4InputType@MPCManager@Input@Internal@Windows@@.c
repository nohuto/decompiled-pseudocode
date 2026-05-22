/*
 * XREFs of ?GetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundation@6@@Z @ 0x18016F050
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAsyncHelper@U?$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUIPropertyValue@Foundation@Windows@@@23@UINilDelegate@Internal@3@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@63@VComTaskPoolHandler@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAU?$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundation@1@$$QEAVComTaskPoolHandler@01@QEBGW4TrustLevel@@PEAV?$AsyncCallbackBase@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@01@@Z @ 0x180169D90 (--$MakeAsyncHelper@U-$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundation@Windows.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue___lambda_7c875662d6abaa9f8d1386a75bd755d7___ @ 0x18016A1EC (Windows--Internal--MakeOpLambda_0_Windows--Internal--CMarshaledInterfaceResult_Wind_ea_18016A1EC.c)
 */

__int64 __fastcall MPCConstantManagerClient::GetConstantAsync(__int64 a1, int a2, HSTRING a3, __int64 *a4)
{
  char *v8; // rax
  __int64 v9; // r9
  _DWORD v10[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+48h] [rbp-20h]
  HSTRING v13; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  HSTRING newString; // [rsp+70h] [rbp+8h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 248LL) )
  {
    newString = 0LL;
    WindowsDuplicateString(a3, &newString);
    v10[1] = 0;
    v10[2] = 0;
    v13 = newString;
    v11 = a1;
    v12 = a2;
    v10[0] = 4;
    v8 = Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue___lambda_7c875662d6abaa9f8d1386a75bd755d7___((__int64)&v11);
    return Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncOperation<Windows::Foundation::IPropertyValue *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::IPropertyValue *>,Windows::Internal::INilDelegate,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
             a4,
             (__int64)v10,
             (__int64)L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.IPropertyValue>",
             v9,
             (__int64)v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)0x80010103LL);
    return 2147549443LL;
  }
}
