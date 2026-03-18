/*
 * XREFs of AcpiDiagTraceControlCallback @ 0x140056B30
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagTraceFanRundown @ 0x14002CFB4 (AcpiDiagTraceFanRundown.c)
 *     AcpiDiagTraceThermalZoneRundown @ 0x140038E40 (AcpiDiagTraceThermalZoneRundown.c)
 *     AcpiDiagTraceDeviceCoolingRundown @ 0x140039394 (AcpiDiagTraceDeviceCoolingRundown.c)
 *     AcpiDiagTracePccSubspaceRundown @ 0x1400571D4 (AcpiDiagTracePccSubspaceRundown.c)
 */

void __fastcall AcpiDiagTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  KIRQL v4; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  KIRQL v9; // di
  __int64 *i; // rbx
  KIRQL v11; // al
  __int64 *v12; // rbx
  KIRQL v13; // di
  unsigned int v14; // ebx

  if ( ControlCode == 2 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
    v8 = AcpiThermalClientList;
    v9 = v4;
    while ( (__int64 *)v8 != &AcpiThermalClientList )
    {
      if ( *(_QWORD *)(v8 + 16) != v8 + 16 )
        AcpiDiagTraceDeviceCoolingRundown(*(_QWORD *)(v8 + 32), *(_BYTE *)(v8 + 43), *(_BYTE *)(v8 + 42));
      v8 = *(_QWORD *)v8;
    }
    for ( i = (__int64 *)AcpiThermalZoneList; i != &AcpiThermalZoneList; i = (__int64 *)*i )
      AcpiDiagTraceThermalZoneRundown((__int64)(i - 26), v5, v6, v7);
    KeReleaseSpinLock(&AcpiThermalConstraintLock, v9);
    v11 = KeAcquireSpinLockRaiseToDpc(&AcpiFanLock);
    v12 = (__int64 *)AcpiFanList;
    v13 = v11;
    while ( v12 != &AcpiFanList )
    {
      AcpiDiagTraceFanRundown((__int64)(v12 - 25));
      v12 = (__int64 *)*v12;
    }
    KeReleaseSpinLock(&AcpiFanLock, v13);
    v14 = 0;
    if ( AcpiPccLegacySubspace )
      ((void (*)(void))AcpiDiagTracePccSubspaceRundown)();
    if ( AcpiPccSubspaces && AcpiPccSubspaceCount )
    {
      do
        AcpiDiagTracePccSubspaceRundown(AcpiPccSubspaces + 824LL * v14++);
      while ( v14 < AcpiPccSubspaceCount );
    }
  }
}
