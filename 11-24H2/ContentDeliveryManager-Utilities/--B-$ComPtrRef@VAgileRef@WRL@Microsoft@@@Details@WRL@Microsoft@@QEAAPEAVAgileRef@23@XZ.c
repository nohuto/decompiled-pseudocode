/*
 * XREFs of ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x18002AB8C
 * Callers:
 *     ??$Initialize@UIAsyncActionCompletedHandler@Foundation@Windows@@@?$GitPtrSupportsAgile@UIAsyncActionCompletedHandler@Foundation@Windows@@@Internal@Windows@@QEAAJPEAUIAsyncActionCompletedHandler@Foundation@2@@Z @ 0x18002566C (--$Initialize@UIAsyncActionCompletedHandler@Foundation@Windows@@@-$GitPtrSupportsAgile@UIAsyncAc.c)
 *     ??$Initialize@UINilDelegate@Internal@Windows@@@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJPEAUINilDelegate@12@@Z @ 0x1800256FC (--$Initialize@UINilDelegate@Internal@Windows@@@-$GitPtrSupportsAgile@UINilDelegate@Internal@Wind.c)
 *     ?PutOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@3@@Z @ 0x1800360A0 (-PutOnComplete@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@Wind.c)
 *     ?PutOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@3@@Z @ 0x1800361C0 (-PutOnComplete@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@Con.c)
 *     _lambda_0f325790d88d3e0e1d8faff7704602cc_::operator() @ 0x18007B3D8 (_lambda_0f325790d88d3e0e1d8faff7704602cc_--operator().c)
 *     ?PutOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@3@@Z @ 0x18007CDC0 (-PutOnComplete@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVTargetedC.c)
 *     ?PutOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@_N@Foundation@3@@Z @ 0x18008E6C0 (-PutOnComplete@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@$00U-$As.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(
        __int64 **a1)
{
  __int64 *v1; // rdx
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = *a1;
  v6 = 0LL;
  v3 = *v1;
  *v1 = 0LL;
  v5 = v3;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  return *a1;
}
