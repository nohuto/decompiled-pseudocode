/*
 * XREFs of DpiIsFeatureEnabled @ 0x140247234
 * Callers:
 *     DpiIsFeatureEnabled2 @ 0x14007BFE0 (DpiIsFeatureEnabled2.c)
 *     ?IsFeatureEnabled@DXGADAPTER@@QEAA?AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z @ 0x140190D18 (-IsFeatureEnabled@DXGADAPTER@@QEAA-AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z.c)
 *     NtDxgkIsFeatureEnabled @ 0x1401CC7A0 (NtDxgkIsFeatureEnabled.c)
 *     ?VmBusIsFeatureEnabled@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021E020 (-VmBusIsFeatureEnabled@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusIsFeatureEnabled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021E0C0 (-VmBusIsFeatureEnabled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DpQueryFeatureSupport @ 0x14022E850 (DpQueryFeatureSupport.c)
 *     DpiGetAdapterInfo @ 0x14022F500 (DpiGetAdapterInfo.c)
 * Callees:
 *     ?DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_FLAGS@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x14028134C (-DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_.c)
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
      WdLogGlobalForLineNumber = 256;
      return result;
    }
    v2 = *(struct DXGK_FEATURE_DATABASE **)(v1 + 5832);
  }
  else
  {
    v2 = qword_14015E3D0;
  }
  return DxgkIsFeatureEnabled(v2);
}
