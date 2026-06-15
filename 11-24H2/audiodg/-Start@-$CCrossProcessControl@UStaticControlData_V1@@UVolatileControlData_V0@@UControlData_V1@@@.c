/*
 * XREFs of ?Start@?$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJXZ @ 0x140085250
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140052878 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x14007461C (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 *     ?IsValidFlags@VolatileControlData_V0@@QEAA_NI@Z @ 0x140084818 (-IsValidFlags@VolatileControlData_V0@@QEAA_NI@Z.c)
 *     McTemplateU0pqx_EventWriteTransfer @ 0x1400855D8 (McTemplateU0pqx_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCrossProcessControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::Start(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rax
  int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 8) + 16LL);
  EnterCriticalSection(v2);
  v3 = *(_QWORD *)(a1 + 8);
  v11 = v2;
  if ( !*(_DWORD *)(v3 + 56) )
  {
    v4 = -2005139437;
LABEL_3:
    AudCPTraceLoggingErrorHelper("CCrossProcessControl<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>::Start");
    goto LABEL_4;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 72LL))(*(_QWORD *)(a1 + 8));
  if ( v4 < 0 )
    goto LABEL_3;
  AERTLockZoneHeap(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 160LL), v6, v7);
  v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) + 164LL);
  if ( !VolatileControlData_V0::IsValidFlags(*(VolatileControlData_V0 **)(*(_QWORD *)(a1 + 8) + 88LL), v8) )
  {
    v4 = -2005139387;
    goto LABEL_3;
  }
  if ( (v8 & 1) != 0 )
  {
    v4 = -2005139434;
    goto LABEL_3;
  }
  v4 = 0;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  _InterlockedOr((volatile signed __int32 *)(v9 + 164), 1u);
  v10 = (unsigned int)_InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8) + 176LL), 1);
  if ( (byte_1400C4541 & 4) != 0 )
    McTemplateU0pqx_EventWriteTransfer(v9, v10, a1, 6LL);
LABEL_4:
  CSAutoLock<1>::~CSAutoLock<1>(&v11);
  return (unsigned int)v4;
}
