/*
 * XREFs of ?SetConstantToDefaultAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@6@@Z @ 0x1801704E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAsyncHelper@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@UINilDelegate@Internal@3@VCNoResult@63@VComTaskPoolHandler@63@U?$AsyncCausalityOptions@$1?SetConstantToDefaultAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAUIAsyncAction@Foundation@1@$$QEAVComTaskPoolHandler@01@QEBGW4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x18016918C (--$MakeAsyncHelper@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@_ea_18016918C.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_2c3f3b4f1bafb50fab998dee840e32d8___ @ 0x1801694C4 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_2c3f3b4f1bafb50fab998dee8.c)
 */

__int64 __fastcall MPCConstantManagerClient::SetConstantToDefaultAsync(__int64 a1, int a2, HSTRING a3, __int64 *a4)
{
  char *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD v11[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+48h] [rbp-20h]
  HSTRING v14; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  HSTRING newString; // [rsp+70h] [rbp+8h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 248LL) )
  {
    newString = 0LL;
    WindowsDuplicateString(a3, &newString);
    v11[1] = 0;
    v11[2] = 0;
    v14 = newString;
    v12 = a1;
    v13 = a2;
    v11[0] = 4;
    v8 = Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_2c3f3b4f1bafb50fab998dee840e32d8___((__int64)&v12);
    return Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const SetConstantToDefaultAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
             a4,
             (__int64)v11,
             v9,
             v10,
             (void (__fastcall ***)(_QWORD, __int64))v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x79,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)0x80010103LL);
    return 2147549443LL;
  }
}
