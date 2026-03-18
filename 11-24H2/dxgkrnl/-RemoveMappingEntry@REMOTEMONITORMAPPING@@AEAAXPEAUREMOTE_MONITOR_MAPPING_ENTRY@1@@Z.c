/*
 * XREFs of ?RemoveMappingEntry@REMOTEMONITORMAPPING@@AEAAXPEAUREMOTE_MONITOR_MAPPING_ENTRY@1@@Z @ 0x1401F4030
 * Callers:
 *     ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1401F3E94 (-Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z @ 0x14022F268 (-VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z.c)
 */

void __fastcall REMOTEMONITORMAPPING::RemoveMappingEntry(struct _KTHREAD **this, struct _LUID *a2)
{
  DXG_GUEST_GLOBAL_VMBUS *v3; // rcx
  int updated; // eax
  __int64 v5; // rbx
  struct _LUID v6; // rcx
  struct REMOTEMONITORMAPPING::REMOTE_MONITOR_MAPPING_ENTRY **v7; // rax
  __int64 HighPart; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+28h] [rbp-30h]
  __int64 LowPart; // [rsp+30h] [rbp-28h]

  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 132;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_Lock.IsExclusiveOwner()", 132LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 210);
  if ( v3 )
  {
    updated = DXG_GUEST_GLOBAL_VMBUS::VmBusSendUpdateMonitorMapping(v3, a2[2], a2[3].LowPart, 0, a2[5].LowPart);
    if ( updated < 0 )
    {
      v5 = updated;
      WdLogSingleEntry4(2LL, a2[2].HighPart, a2[2].LowPart, a2[3].LowPart, updated);
      LowPart = a2[3].LowPart;
      v9 = a2[2].LowPart;
      HighPart = a2[2].HighPart;
      WdLogGlobalForLineNumber = 147;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Host failed to update monitor mapping for Adapter LUID 0x%08I64x%08I64x, target id 0x%I64x, status 0x%I64x",
        HighPart,
        v9,
        LowPart,
        v5,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 139;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"VmBus not connected so cannot redirect",
      139LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = *a2;
  if ( *(struct _LUID **)(*(_QWORD *)a2 + 8LL) != a2
    || (v7 = (struct REMOTEMONITORMAPPING::REMOTE_MONITOR_MAPPING_ENTRY **)a2[1],
        *v7 != (struct REMOTEMONITORMAPPING::REMOTE_MONITOR_MAPPING_ENTRY *)a2) )
  {
    __fastfail(3u);
  }
  *v7 = (struct REMOTEMONITORMAPPING::REMOTE_MONITOR_MAPPING_ENTRY *)v6;
  *(_QWORD *)(*(_QWORD *)&v6 + 8LL) = v7;
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a2);
}
