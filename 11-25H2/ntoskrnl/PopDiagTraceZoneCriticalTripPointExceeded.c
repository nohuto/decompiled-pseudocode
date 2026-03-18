/*
 * XREFs of PopDiagTraceZoneCriticalTripPointExceeded @ 0x14074C2E8
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14049FAD0 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14035B058 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopDiagTraceTripPointExceeded @ 0x140A9B148 (PopDiagTraceTripPointExceeded.c)
 */

void __fastcall PopDiagTraceZoneCriticalTripPointExceeded(__int64 a1, __int64 a2)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v5; // rbx
  __int64 v6; // rdi

  if ( PopDiagHandleRegistered
    && (EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CRITICAL_TRIP_POINT_DIAGNOSTIC)
     || EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CRITICAL_TRIP_POINT_SYSTEM)) )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a2, 0x67446F50u);
    v5 = DeviceAttachmentBaseRefWithTag;
    if ( DeviceAttachmentBaseRefWithTag )
    {
      v6 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
      if ( v6 )
      {
        PopDiagTraceTripPointExceeded(
          *(_WORD *)(v6 + 128) >> 1,
          *(_QWORD *)(v6 + 136),
          *(_DWORD *)(a1 + 28) / 0xAu,
          &POP_ETW_EVENT_CRITICAL_TRIP_POINT_DIAGNOSTIC);
        PopDiagTraceTripPointExceeded(
          *(_WORD *)(v6 + 128) >> 1,
          *(_QWORD *)(v6 + 136),
          *(_DWORD *)(a1 + 28) / 0xAu,
          &POP_ETW_EVENT_CRITICAL_TRIP_POINT_SYSTEM);
      }
      ObfDereferenceObjectWithTag(v5, 0x67446F50u);
    }
  }
}
