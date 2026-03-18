/*
 * XREFs of _tlgWriteTransfer_EtwWriteTransfer @ 0x1400363B0
 * Callers:
 *     FreeContext @ 0x14000AF70 (FreeContext.c)
 *     AcpiDiagTraceAmliWatchdogTimeout @ 0x140056A30 (AcpiDiagTraceAmliWatchdogTimeout.c)
 *     AcpiDiagTracePccCommandTimeout @ 0x140056DC0 (AcpiDiagTracePccCommandTimeout.c)
 *     AcpiDiagTracePccEjectSubspace @ 0x140056F40 (AcpiDiagTracePccEjectSubspace.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x140057534 (AcpiDiagTraceTemperatureTelemetry.c)
 *     IrqTraceAffinityPolicy @ 0x1400BEF1C (IrqTraceAffinityPolicy.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall tlgWriteTransfer_EtwWriteTransfer(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        ULONG UserDataCount,
        struct _EVENT_DATA_DESCRIPTOR *a6)
{
  unsigned __int64 v6; // rax
  unsigned __int16 *v7; // rdx
  EVENT_DESCRIPTOR v9; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&v9.Id = *a2 << 24;
  *(_DWORD *)&v9.Level = *(unsigned __int16 *)(a2 + 1);
  v6 = *(_QWORD *)(a2 + 3);
  v7 = (unsigned __int16 *)(a2 + 11);
  v9.Keyword = v6;
  a6->Ptr = *(_QWORD *)(a1 + 8);
  a6->Size = **(unsigned __int16 **)(a1 + 8);
  a6[1].Ptr = (unsigned __int64)v7;
  a6->Reserved = 2;
  a6[1].Size = *v7;
  a6[1].Reserved = 1;
  return EtwWriteTransfer(*(_QWORD *)(a1 + 32), &v9, 0LL, 0LL, UserDataCount, a6);
}
