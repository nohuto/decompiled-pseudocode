/*
 * XREFs of PopCheckAndHandleThermalConditions @ 0x14049FAD0
 * Callers:
 *     PopThermalWorker @ 0x140A3C300 (PopThermalWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14035B058 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x140497BA0 (PopQueueWorkItem.c)
 *     PopThermalWriteShutdownToRegistry @ 0x1404C31C0 (PopThermalWriteShutdownToRegistry.c)
 *     PopThermalStandbyEndTracking @ 0x1404C7224 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x1405CF320 (PopThermalStandbyNotify.c)
 *     PopDiagTraceThermalStateChange @ 0x1405D0DC8 (PopDiagTraceThermalStateChange.c)
 *     PopTraceCr3Mitigated @ 0x1405D15FC (PopTraceCr3Mitigated.c)
 *     PopTraceCr3Tripped @ 0x1405D1698 (PopTraceCr3Tripped.c)
 *     PopTraceZoneCr3Mitigated @ 0x1405D1F50 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1405D2078 (PopTraceZoneCr3Tripped.c)
 *     PopUpdateOverThrottledCount @ 0x140748A94 (PopUpdateOverThrottledCount.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x14074C2E8 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x14074C3DC (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalShutdown @ 0x140755F60 (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x140755F84 (PopSqmThermalHibernate.c)
 *     PopIsHibernateSupported @ 0x140A870FC (PopIsHibernateSupported.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
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
    byte_140F0A4D1 = 1;
  if ( v3 )
    byte_140F0A4D3 = 1;
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
      if ( ++dword_140F0A494 == 1 )
      {
        byte_140F0A49C = 1;
        ++dword_140F0A498;
        PopTraceCr3Tripped();
      }
      PopTraceZoneCr3Tripped((unsigned int)dword_140F0A498, a1);
    }
    else
    {
      PopTraceZoneCr3Mitigated((unsigned int)dword_140F0A498, a1);
      --dword_140F0A494;
    }
    if ( dword_140F0A494 )
    {
      v14 = 1;
    }
    else
    {
      v14 = 0;
      PopThermalStandbyEndTracking(0LL);
      PopTraceCr3Mitigated((unsigned int)dword_140F0A498);
      if ( HIBYTE(word_140F0A490) )
      {
        PopThermalStandbyNotify(0LL);
        HIBYTE(word_140F0A490) = 0;
        return PopReleaseRwLock(&PopSystemThermalInfo);
      }
    }
    if ( !v4 && v14 && (_BYTE)word_140F0A490 && !HIBYTE(word_140F0A490) )
    {
      LOBYTE(v13) = 1;
      PopThermalStandbyNotify(v13);
      word_140F0A490 = 256;
    }
    return PopReleaseRwLock(&PopSystemThermalInfo);
  }
  return result;
}
