/*
 * XREFs of PopCheckAndHandleThermalConditions @ 0x140499AC0
 * Callers:
 *     PopThermalWorker @ 0x140A36310 (PopThermalWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 *     PopThermalWriteShutdownToRegistry @ 0x1404BD1AC (PopThermalWriteShutdownToRegistry.c)
 *     PopThermalStandbyEndTracking @ 0x1404C11AC (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x1405D14B0 (PopThermalStandbyNotify.c)
 *     PopDiagTraceThermalStateChange @ 0x1405D2D3C (PopDiagTraceThermalStateChange.c)
 *     PopTraceCr3Mitigated @ 0x1405D3570 (PopTraceCr3Mitigated.c)
 *     PopTraceCr3Tripped @ 0x1405D360C (PopTraceCr3Tripped.c)
 *     PopTraceZoneCr3Mitigated @ 0x1405D3EC4 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1405D3FEC (PopTraceZoneCr3Tripped.c)
 *     PopUpdateOverThrottledCount @ 0x140752E84 (PopUpdateOverThrottledCount.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x14075681C (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x140756910 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalShutdown @ 0x1407653F0 (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x140765414 (PopSqmThermalHibernate.c)
 *     PopIsHibernateSupported @ 0x140A88308 (PopIsHibernateSupported.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopCheckAndHandleThermalConditions(__int64 a1)
{
  __int64 v1; // rbp
  char v3; // si
  bool v4; // bl
  char v5; // dl
  __int64 result; // rax
  char IsHibernateSupported; // bl
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v9; // rbp
  __int64 v10; // r8
  __int64 v11; // rdx
  char v12; // al
  __int64 v13; // rcx
  char v14; // di

  v1 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  if ( *(_BYTE *)(a1 + 210) && !*(_BYTE *)(a1 + 71) )
  {
    v3 = 1;
    PopSqmThermalCriticalShutdown();
    PopDiagTraceZoneCriticalTripPointExceeded(a1 + 112, v1);
    *(_BYTE *)(a1 + 71) = 1;
  }
  if ( *(_BYTE *)(a1 + 209) )
  {
    PopDiagTraceZoneS4TripPointExceeded(a1 + 112, v1);
    PopSqmThermalHibernate(a1);
    PopAcquirePolicyLock();
    IsHibernateSupported = PopIsHibernateSupported(&PopCapabilities);
    if ( !IsHibernateSupported )
      v3 = 1;
    PopReleasePolicyLock();
    v4 = IsHibernateSupported != 0;
    if ( !v3 )
      goto LABEL_20;
  }
  else
  {
    v4 = 0;
    if ( !v3 )
      goto LABEL_4;
  }
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v1, 0x6D546F50u);
  v9 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v10 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v10 = 0LL;
  v11 = a1 + 128;
  if ( *(_BYTE *)(a1 + 228) )
    v11 = 0LL;
  PopThermalWriteShutdownToRegistry((v10 + 128) & -(__int64)(v10 != 0), v11, -v10);
  if ( v9 )
    ObfDereferenceObjectWithTag(v9, 0x6D546F50u);
LABEL_20:
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopThermalStateTransitionContext);
  if ( v4 )
    byte_140F0AF71 = 1;
  if ( v3 )
    byte_140F0AF73 = 1;
  PopReleaseRwLock(&PopThermalStateTransitionContext);
  PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
LABEL_4:
  v5 = *(_BYTE *)(a1 + 224) != 0;
  if ( *(_BYTE *)(a1 + 73) != v5 )
  {
    *(_BYTE *)(a1 + 73) = v5;
    PopUpdateOverThrottledCount(a1);
  }
  result = *(unsigned __int8 *)(a1 + 211);
  if ( *(_BYTE *)(a1 + 72) != (_BYTE)result )
  {
    PopDiagTraceThermalStateChange(
      *(_QWORD *)(a1 + 48),
      *(unsigned __int8 *)(a1 + 211),
      POP_ETW_EVENT_THERMAL_ZONE_THERMAL_STANDBY_UPDATE);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemThermalInfo);
    v12 = *(_BYTE *)(a1 + 211);
    *(_BYTE *)(a1 + 72) = v12;
    if ( v12 )
    {
      if ( ++dword_140F0AF94 == 1 )
      {
        byte_140F0AF9C = 1;
        ++dword_140F0AF98;
        PopTraceCr3Tripped();
      }
      PopTraceZoneCr3Tripped((unsigned int)dword_140F0AF98, a1);
    }
    else
    {
      PopTraceZoneCr3Mitigated((unsigned int)dword_140F0AF98, a1);
      --dword_140F0AF94;
    }
    if ( dword_140F0AF94 )
    {
      v14 = 1;
    }
    else
    {
      v14 = 0;
      PopThermalStandbyEndTracking(0LL);
      PopTraceCr3Mitigated((unsigned int)dword_140F0AF98);
      if ( HIBYTE(word_140F0AF90) )
      {
        PopThermalStandbyNotify(0LL);
        HIBYTE(word_140F0AF90) = 0;
        return PopReleaseRwLock(&PopSystemThermalInfo);
      }
    }
    if ( !v4 && v14 && (_BYTE)word_140F0AF90 && !HIBYTE(word_140F0AF90) )
    {
      LOBYTE(v13) = 1;
      PopThermalStandbyNotify(v13);
      word_140F0AF90 = 256;
    }
    return PopReleaseRwLock(&PopSystemThermalInfo);
  }
  return result;
}
