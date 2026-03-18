/*
 * XREFs of DpiDxgkDdiQueryDeviceDescriptor @ 0x1403EC680
 * Callers:
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x14023DB08 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1403C9318 (DpiPdoGetDeviceDescriptor.c)
 *     DpiGetMonitorDescriptor @ 0x1403EC558 (DpiGetMonitorDescriptor.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0qqbr1pqqp_EtwWriteTransfer @ 0x14005252C (McTemplateK0qqbr1pqqp_EtwWriteTransfer.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007D6D4 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiQueryDeviceDescriptor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  __int64 v5; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbp
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 result; // rax

  v5 = a4;
  v11 = 0;
  if ( (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline()
    && *(_QWORD *)(a1 + 6432) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 302;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"DpiDxgkDdiQueryDeviceDescriptor: Old DDI should not be used when Feature_SetMonitorDescriptorOverride is enabled a"
       "nd DxgkDdiQueryMonitorDescriptor exposed by driver.",
      302LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0qqbr1pqqp_EtwWriteTransfer(v9, &EventEnterDdiQueryDeviceDescriptor, v10, 0, 0, 0LL, a3, v5, 0, 0);
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(a2 + 216))(a3, (unsigned int)v5, a5);
  v17 = v12;
  if ( bTracingEnabled )
  {
    v13 = 0LL;
    v14 = 0LL;
    if ( a5 )
    {
      v11 = *a5;
      v13 = a5[1];
      v14 = *((_QWORD *)a5 + 1);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqbr1pqqp_EtwWriteTransfer(
        v14,
        &EventExitDdiQueryDeviceDescriptor,
        v15,
        v11,
        v13,
        v14,
        a3,
        v5,
        v12,
        v14);
  }
  v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
  v18[4] = v5;
  v18[3] = a2;
  v18[5] = *a5;
  v19 = a5[1];
  v18[7] = v17;
  v18[6] = v19;
  result = (unsigned int)v17;
  WdLogGlobalForLineNumber = 323;
  return result;
}
