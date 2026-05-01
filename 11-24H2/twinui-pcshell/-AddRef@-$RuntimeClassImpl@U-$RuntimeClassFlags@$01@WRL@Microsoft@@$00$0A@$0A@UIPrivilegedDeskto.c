/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDesktopOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18022BB50
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWindowManagerBridge@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1802DBBD0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWindowManagerBri.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIPPIAllUpViewService@@UIPPIAllUpViewInvoker@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1802EFB30 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRL_ea_1802EFB30.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIVisibilityOverride@@UIImmersiveSessionIdleNotification@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1802EFB40 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRL_ea_1802EFB40.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18054A4A0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRaw_ea_18054A4A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedDesktopOperations,Microsoft::WRL::FtmBase>::AddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 44), a2);
}
