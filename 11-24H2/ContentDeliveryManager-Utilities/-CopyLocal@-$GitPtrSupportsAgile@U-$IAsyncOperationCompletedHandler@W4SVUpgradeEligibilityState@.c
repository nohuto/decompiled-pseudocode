/*
 * XREFs of ?CopyLocal@?$GitPtrSupportsAgile@U?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@@Internal@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002DF80
 * Callers:
 *     ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18002FFE0 (-FireCompletion@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@Co.c)
 *     ?GetOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@3@@Z @ 0x180032B50 (-GetOnComplete@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@Con.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncOperationCompletedHandler<enum ContentManagement::SVUpgradeEligibilityState>>::CopyLocal(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rcx

  v3 = *a1;
  v4 = 0;
  *a3 = 0LL;
  if ( !v3 )
    return 2147942487LL;
  v5 = *a1;
  if ( v5 )
    return (*(unsigned int (__fastcall **)(__int64, GUID *))(*(_QWORD *)v5 + 24LL))(
             v5,
             &GUID_f97ea501_d70f_567c_b9a5_38e37771a320);
  return v4;
}
