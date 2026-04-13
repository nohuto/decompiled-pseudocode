/*
 * XREFs of ?RevertAsync@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18006EC70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::RevertOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___ @ 0x18006B638 (Windows--Internal--MakeAsyncHelper_Windows--Foundation--IAsyncAction_Windows--Found_ea_18006B638.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca___ @ 0x18006BA00 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_d05d40dcdd1d56fa321a7e7a2.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::RevertAsync(
        Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *this,
        struct Windows::Foundation::IAsyncAction **a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  unsigned int v7; // ebx
  _DWORD v9[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v11; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  v11 = (char *)this - 48;
  v9[0] = 3;
  v9[1] = 130;
  v9[2] = 0;
  v3 = Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca___(&v11);
  v6 = Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::RevertOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___(
         (__int64 *)a2,
         (__int64)v9,
         v4,
         v5,
         (void (__fastcall ***)(_QWORD, __int64))v3);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x85,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
