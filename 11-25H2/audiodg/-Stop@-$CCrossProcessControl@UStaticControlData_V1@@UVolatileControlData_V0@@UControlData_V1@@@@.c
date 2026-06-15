/*
 * XREFs of ?Stop@?$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJXZ @ 0x140085DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400528A8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x140076C2C (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 *     ?IsValidFlags@VolatileControlData_V0@@QEAA_NI@Z @ 0x140085908 (-IsValidFlags@VolatileControlData_V0@@QEAA_NI@Z.c)
 *     McTemplateU0pqx_EventWriteTransfer @ 0x140085F3C (McTemplateU0pqx_EventWriteTransfer.c)
 */

__int64 __fastcall CCrossProcessControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::Stop(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // ebx
  unsigned int v5; // esi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 8) + 16LL);
  EnterCriticalSection(v2);
  v3 = *(_QWORD *)(a1 + 8);
  v10 = v2;
  v4 = 0;
  if ( !*(_DWORD *)(v3 + 56) )
  {
    v4 = -2005139437;
LABEL_7:
    AudCPTraceLoggingErrorHelper("CCrossProcessControl<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>::Stop");
    goto LABEL_10;
  }
  v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) + 164LL);
  if ( !VolatileControlData_V0::IsValidFlags(*(VolatileControlData_V0 **)(*(_QWORD *)(a1 + 8) + 88LL), v5) )
  {
    v4 = -2005139387;
    goto LABEL_7;
  }
  if ( (v5 & 1) == 0 )
  {
    v4 = -2005139433;
    goto LABEL_7;
  }
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) + 164LL), 0xFFFFFFFC);
  AERTUnlockZoneHeap(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 160LL),
    (unsigned int)_InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8) + 176LL), 1),
    v6);
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqx_EventWriteTransfer(v8, v7, a1, 7LL);
LABEL_10:
  CSAutoLock<1>::~CSAutoLock<1>(&v10);
  return v4;
}
