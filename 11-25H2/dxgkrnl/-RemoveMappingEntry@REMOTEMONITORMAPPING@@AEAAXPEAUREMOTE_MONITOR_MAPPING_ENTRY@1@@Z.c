/*
 * XREFs of ?RemoveMappingEntry@REMOTEMONITORMAPPING@@AEAAXPEAUREMOTE_MONITOR_MAPPING_ENTRY@1@@Z @ 0x1401EE68C
 * Callers:
 *     ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1401EE4F0 (-Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z @ 0x14022897C (-VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z.c)
 */

void __fastcall REMOTEMONITORMAPPING::RemoveMappingEntry(struct _KTHREAD **this, struct _LUID *a2)
{
  DXG_GUEST_GLOBAL_VMBUS *v4; // rcx
  int updated; // eax
  __int64 v6; // rbx
  struct _LUID v7; // rcx
  struct REMOTEMONITORMAPPING::REMOTE_MONITOR_MAPPING_ENTRY **v8; // rax
  __int64 HighPart; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+28h] [rbp-30h]
  __int64 LowPart; // [rsp+30h] [rbp-28h]

  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 133;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_Lock.IsExclusiveOwner()", 133LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 206);
  if ( v4 )
  {
    updated = DXG_GUEST_GLOBAL_VMBUS::VmBusSendUpdateMonitorMapping(v4, a2[2], a2[3].LowPart, 0, a2[5].LowPart);
    if ( updated < 0 )
    {
      v6 = updated;
      WdLogSingleEntry4(2LL, a2[2].HighPart, a2[2].LowPart, a2[3].LowPart, updated);
      LowPart = a2[3].LowPart;
      v10 = a2[2].LowPart;
      HighPart = a2[2].HighPart;
      WdLogGlobalForLineNumber = 148;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Host failed to update monitor mapping for Adapter LUID 0x%08I64x%08I64x, target id 0x%I64x, status 0x%I64x",
        HighPart,
        v10,
        LowPart,
        v6,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 140;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"VmBus not connected so cannot redirect",
      140LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = *a2;
  if ( *(struct _LUID **)(*(_QWORD *)a2 + 8LL) != a2
    || (v8 = (struct REMOTEMONITORMAPPING::REMOTE_MONITOR_MAPPING_ENTRY **)a2[1],
        *v8 != (struct REMOTEMONITORMAPPING::REMOTE_MONITOR_MAPPING_ENTRY *)a2) )
  {
    __fastfail(3u);
  }
  *v8 = (struct REMOTEMONITORMAPPING::REMOTE_MONITOR_MAPPING_ENTRY *)v7;
  *(_QWORD *)(*(_QWORD *)&v7 + 8LL) = v8;
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a2);
}
