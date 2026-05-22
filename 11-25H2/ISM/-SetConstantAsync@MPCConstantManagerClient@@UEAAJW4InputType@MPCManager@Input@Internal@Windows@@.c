/*
 * XREFs of ?SetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAUIPropertyValue@Foundation@6@PEAPEAUIAsyncAction@96@@Z @ 0x1801703D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAsyncHelper@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@UINilDelegate@Internal@3@VCNoResult@63@VComTaskPoolHandler@63@U?$AsyncCausalityOptions@$1?SetConstantAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAUIAsyncAction@Foundation@1@$$QEAVComTaskPoolHandler@01@QEBGW4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x1801690C4 (--$MakeAsyncHelper@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@_ea_1801690C4.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_a408cc100a5b103155a70fabf7a2049b___ @ 0x18016955C (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_a408cc100a5b103155a70fabf.c)
 *     ?CreatePROPVARIANTFromPropertyValue@MPCConstantManagerClient@@CAJPEAUIPropertyValue@Foundation@Windows@@PEAUtagPROPVARIANT@@@Z @ 0x18016C998 (-CreatePROPVARIANTFromPropertyValue@MPCConstantManagerClient@@CAJPEAUIPropertyValue@Foundation@W.c)
 */

__int64 __fastcall MPCConstantManagerClient::SetConstantAsync(
        __int64 a1,
        int a2,
        HSTRING a3,
        struct Windows::Foundation::IPropertyValue *a4,
        __int64 *a5)
{
  int v9; // eax
  __int128 v10; // xmm0
  char *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+20h] [rbp-60h]
  tagPROPVARIANT v15; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v16[2]; // [rsp+48h] [rbp-38h] BYREF
  BYTE *pData; // [rsp+68h] [rbp-18h]
  HSTRING v18; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]
  HSTRING newString; // [rsp+90h] [rbp+10h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 248LL) )
  {
    memset(&v15, 0, sizeof(v15));
    v9 = MPCConstantManagerClient::CreatePROPVARIANTFromPropertyValue(a4, &v15);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
        (const char *)(unsigned int)v9,
        v14);
    newString = 0LL;
    WindowsDuplicateString(a3, &newString);
    v10 = *(_OWORD *)&v15.vt;
    v15.lVal = 0;
    v16[1] = v10;
    *(_QWORD *)&v16[0] = a1;
    DWORD2(v16[0]) = a2;
    pData = v15.bstrblobVal.pData;
    v18 = newString;
    *(_QWORD *)&v15.vt = 4LL;
    v11 = Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_a408cc100a5b103155a70fabf7a2049b___(v16);
    return Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const SetConstantAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
             a5,
             (__int64)&v15,
             v12,
             v13,
             (void (__fastcall ***)(_QWORD, __int64))v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)0x80010103LL);
    return 2147549443LL;
  }
}
