/*
 * XREFs of ?Attach@?$ComPtr@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@QEAAXPEAVTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@@Z @ 0x1800430C4
 * Callers:
 *     ??$MakeAndInitialize@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x180041E4C (--$MakeAndInitialize@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UIIn.c)
 *     ??$MakeAndInitialize@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x180041FC0 (--$MakeAndInitialize@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Service.c)
 *     ??$MakeAndInitialize@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@V12345@AEAW4TargetedContentKnownTrigger@2345@AEAPEAUHSTRING__@@AEAPEAU7@AEAPEAU7@AEAPEAU7@AEAPEAU7@@Details@WRL@Microsoft@@YAJPEAPEAVTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@AEAW4TargetedContentKnownTrigger@4567@AEAPEAUHSTRING__@@2222@Z @ 0x180076C30 (--$MakeAndInitialize@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@V123.c)
 *     ??$MakeAndInitialize@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@V12345@AEAPEAUHSTRING__@@AEAW4TargetedContentTriggerState@2345@AEAW472345@@Details@WRL@Microsoft@@YAJPEAPEAVTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@AEAPEAUHSTRING__@@AEAW4TargetedContentTriggerState@4567@2@Z @ 0x180076D40 (--$MakeAndInitialize@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedCo_ea_180076D40.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl>::Attach(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *a1 = a2;
  return result;
}
