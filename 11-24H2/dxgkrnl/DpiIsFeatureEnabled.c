/*
 * XREFs of DpiIsFeatureEnabled @ 0x14024E064
 * Callers:
 *     DpiIsFeatureEnabled2 @ 0x14007C480 (DpiIsFeatureEnabled2.c)
 *     ?DpiFdoInitializePanelBufferControl@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x14007CCA0 (-DpiFdoInitializePanelBufferControl@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsFeatureEnabled@DXGADAPTER@@QEAA?AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z @ 0x140193068 (-IsFeatureEnabled@DXGADAPTER@@QEAA-AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z.c)
 *     NtDxgkIsFeatureEnabled @ 0x1401D1A40 (NtDxgkIsFeatureEnabled.c)
 *     ?VmBusIsFeatureEnabled@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140224480 (-VmBusIsFeatureEnabled@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusIsFeatureEnabled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140224520 (-VmBusIsFeatureEnabled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DpQueryFeatureSupport @ 0x1402350B0 (DpQueryFeatureSupport.c)
 *     DpiGetAdapterInfo @ 0x140235D60 (DpiGetAdapterInfo.c)
 * Callees:
 *     ?DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_FLAGS@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x1402887F8 (-DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_.c)
 */

__int64 __fastcall DpiIsFeatureEnabled(__int64 a1)
{
  __int64 v1; // rax
  struct DXGK_FEATURE_DATABASE *v2; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 64);
    if ( !v1 || *(_DWORD *)(v1 + 16) != 1953656900 || *(_DWORD *)(v1 + 20) != 2 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      result = 3221225485LL;
      WdLogGlobalForLineNumber = 257;
      return result;
    }
    v2 = *(struct DXGK_FEATURE_DATABASE **)(v1 + 5832);
  }
  else
  {
    v2 = qword_140161390;
  }
  return DxgkIsFeatureEnabled(v2);
}
