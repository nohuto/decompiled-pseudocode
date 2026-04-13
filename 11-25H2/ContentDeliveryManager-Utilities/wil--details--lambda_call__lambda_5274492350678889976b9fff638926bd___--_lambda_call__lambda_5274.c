/*
 * XREFs of wil::details::lambda_call__lambda_5274492350678889976b9fff638926bd___::_lambda_call__lambda_5274492350678889976b9fff638926bd___ @ 0x18007ACF8
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x18007CF70 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterTriggerInternal_::_1_::dtor$6 @ 0x1800BA04C (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800BA04C.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_010e8bf6f58c094ac3af7f0590ce04f4___ @ 0x18007821C (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_010e8bf6f58c094ac3a.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_5274492350678889976b9fff638926bd___::_lambda_call__lambda_5274492350678889976b9fff638926bd___(
        __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // eax
  int v5[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    v2 = *(_QWORD *)(a1 + 16);
    v3 = **(_QWORD **)a1;
    *(_QWORD *)v5 = *(_QWORD *)(a1 + 8);
    v6 = v2;
    v4 = Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_010e8bf6f58c094ac3af7f0590ce04f4___(
           v3,
           (__int64)v5);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xF5,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v4,
        v5[0]);
  }
}
