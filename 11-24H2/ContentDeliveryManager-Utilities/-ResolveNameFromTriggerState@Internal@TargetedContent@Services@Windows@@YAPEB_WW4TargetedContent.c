/*
 * XREFs of ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x180081C88
 * Callers:
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_e1ef2631b6ca5c99fa8fa486bcff5e4b___ @ 0x1800792F8 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_e1ef2631b6ca5c99fa8.c)
 *     ?EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentTriggerState@1234@V?$function@$$A6A_NAEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x1800857DC (-EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV-$shared_p.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180086DC4 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x180087730 (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 *     ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800878D8 (-SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(int a1)
{
  _QWORD *i; // rax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = &unk_1800D3A40; ; i += 2 )
  {
    if ( i == (_QWORD *)&unk_1800D3A80 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2A5,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)0x80070490LL,
        v3);
    if ( *(_DWORD *)i == a1 )
      break;
  }
  return i[1];
}
