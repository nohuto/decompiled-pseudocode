/*
 * XREFs of ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180080C5C
 * Callers:
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_010e8bf6f58c094ac3af7f0590ce04f4___ @ 0x18007863C (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_010e8bf6f58c094ac3a.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_25fdd0f24a46fb884595cc4fd71754f0___ @ 0x180078A8C (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_25fdd0f24a46fb88459.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de9e0eff18a9873___ @ 0x180078ECC (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_e1ef2631b6ca5c99fa8fa486bcff5e4b___ @ 0x1800792F8 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_e1ef2631b6ca5c99fa8.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467e92bcd23893db___ @ 0x18007975C (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180080F0C (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800812CC (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResolveTriggerName@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180081F70 (-ResolveTriggerName@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microso.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
HSTRING *__fastcall Windows::Services::TargetedContent::Internal::GetNameForTrigger(HSTRING *a1, __int64 a2)
{
  int v4; // eax
  HSTRING *v5; // rbx
  __int64 (__fastcall *v6)(__int64, HSTRING *); // rbx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF
  HSTRING string; // [rsp+60h] [rbp+18h] BYREF

  *a1 = 0LL;
  v10 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 80LL))(a2, &v10);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v4,
      1);
  v5 = (HSTRING *)Windows::Services::TargetedContent::Internal::ResolveTriggerName(&string, v10);
  WindowsDeleteString(*a1);
  *a1 = 0LL;
  *a1 = *v5;
  *v5 = 0LL;
  WindowsDeleteString(string);
  if ( WindowsIsStringEmpty(*a1) )
  {
    v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 64LL);
    WindowsDeleteString(*a1);
    *a1 = 0LL;
    v7 = v6(a2, a1);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA6,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v7,
        1);
    if ( WindowsIsStringEmpty(*a1) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA7,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)0x80070490LL,
        1);
  }
  return a1;
}
