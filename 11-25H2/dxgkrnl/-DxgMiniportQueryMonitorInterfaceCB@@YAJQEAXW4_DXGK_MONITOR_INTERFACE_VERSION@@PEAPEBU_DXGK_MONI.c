/*
 * XREFs of ?DxgMiniportQueryMonitorInterfaceCB@@YAJQEAXW4_DXGK_MONITOR_INTERFACE_VERSION@@PEAPEBU_DXGK_MONITOR_INTERFACE@@@Z @ 0x14042C630
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DpiGetDxgAdapter @ 0x140016C90 (DpiGetDxgAdapter.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007D6D4 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DxgMiniportQueryMonitorInterfaceCB(
        __int64 a1,
        enum _DXGK_MONITOR_INTERFACE_VERSION a2,
        const struct _DXGK_MONITOR_INTERFACE **a3)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  DXGADAPTER *DxgAdapter; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  const struct _DXGK_MONITOR_INTERFACE *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h]
  char v19; // [rsp+40h] [rbp-10h]

  v17 = -1;
  v18 = 0LL;
  v5 = a2;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 7057;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 7057);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 7057);
  if ( !a3 )
  {
    WdLogSingleEntry3(2LL, 0LL, v5, a1);
    WdLogGlobalForLineNumber = 2505;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v17);
    }
    return 3221225485LL;
  }
  *a3 = 0LL;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  if ( !DxgAdapter )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 2520;
    goto LABEL_19;
  }
  if ( KeGetCurrentIrql()
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DxgAdapter + 27) + 64LL) + 40LL) + 28LL) >= 0x2003u )
  {
    WdLogSingleEntry5(0LL, 275LL, 20LL, DxgAdapter, 0LL, 0LL);
    WdLogGlobalForLineNumber = 2530;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2540;
  }
  if ( !*((_QWORD *)DxgAdapter + 390) )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 2548;
LABEL_19:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v17);
    return 3223191554LL;
  }
  if ( (_DWORD)v5 == 1 )
  {
    v12 = (const struct _DXGK_MONITOR_INTERFACE *)&DXGK_MONITOR_INTERFACE_V1_IMPL::DxgMiniportMonitorInterfaceV1;
  }
  else if ( (_DWORD)v5 == 2 )
  {
    v12 = (const struct _DXGK_MONITOR_INTERFACE *)&DXGK_MONITOR_INTERFACE_V2_IMPL::DxgMiniportMonitorInterfaceV2;
  }
  else if ( (_DWORD)v5 != 3
         || (v12 = (const struct _DXGK_MONITOR_INTERFACE *)((unsigned __int64)&DXGK_MONITOR_INTERFACE_V3_IMPL::DxgMiniportMonitorInterfaceV3 & -(__int64)((unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() != 0))) == 0LL )
  {
    WdLogSingleEntry1(3LL, v5);
    WdLogGlobalForLineNumber = 2587;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v17);
    return 3221225659LL;
  }
  *a3 = v12;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v17);
  return 0LL;
}
