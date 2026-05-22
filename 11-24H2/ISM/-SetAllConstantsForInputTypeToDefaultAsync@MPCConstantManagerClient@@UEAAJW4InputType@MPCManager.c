/*
 * XREFs of ?SetAllConstantsForInputTypeToDefaultAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAPEAUIAsyncAction@Foundation@6@@Z @ 0x180171230
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAsyncHelper@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@UINilDelegate@Internal@3@VCNoResult@63@VComTaskPoolHandler@63@U?$AsyncCausalityOptions@$1?SetAllConstantsForInputTypeToDefaultAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAUIAsyncAction@Foundation@1@$$QEAVComTaskPoolHandler@01@QEBGW4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x180169E4C (--$MakeAsyncHelper@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@UINilDeleg.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_16bcd66e868557b6123b295398ded03e___ @ 0x18016A284 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_16bcd66e868557b6123b29539.c)
 */

__int64 __fastcall MPCConstantManagerClient::SetAllConstantsForInputTypeToDefaultAsync(__int64 a1, int a2, __int64 *a3)
{
  char *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+38h] [rbp-20h]
  __int128 v10; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 248LL) )
  {
    *(_QWORD *)&v10 = a1;
    DWORD2(v10) = a2;
    v8 = 4LL;
    v9 = 0;
    v5 = Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_16bcd66e868557b6123b295398ded03e___(&v10);
    return Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const SetAllConstantsForInputTypeToDefaultAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
             a3,
             (__int64)&v8,
             v6,
             v7,
             (void (__fastcall ***)(_QWORD, __int64))v5);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)0x80010103LL);
    return 2147549443LL;
  }
}
