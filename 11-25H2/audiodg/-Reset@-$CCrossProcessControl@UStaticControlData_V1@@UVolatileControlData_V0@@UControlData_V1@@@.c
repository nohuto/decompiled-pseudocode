/*
 * XREFs of ?Reset@?$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJXZ @ 0x140085A60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400528A8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?DrainAndResetQueue@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAAXXZ @ 0x140083B28 (-DrainAndResetQueue@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@.c)
 *     ?IsValidFlags@VolatileControlData_V0@@QEAA_NI@Z @ 0x140085908 (-IsValidFlags@VolatileControlData_V0@@QEAA_NI@Z.c)
 *     McTemplateU0pqx_EventWriteTransfer @ 0x140085F3C (McTemplateU0pqx_EventWriteTransfer.c)
 */

__int64 __fastcall CCrossProcessControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::Reset(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 8) + 16LL);
  v3 = 0;
  EnterCriticalSection(v2);
  v4 = *(_QWORD *)(a1 + 8);
  v9 = v2;
  if ( !*(_DWORD *)(v4 + 56) )
  {
    v3 = -2005139437;
LABEL_7:
    AudCPTraceLoggingErrorHelper("CCrossProcessControl<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>::Reset");
    goto LABEL_10;
  }
  v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) + 164LL);
  if ( !VolatileControlData_V0::IsValidFlags(*(VolatileControlData_V0 **)(*(_QWORD *)(a1 + 8) + 88LL), v5) )
  {
    v3 = -2005139387;
    goto LABEL_7;
  }
  if ( (v5 & 1) != 0 )
  {
    v3 = -2005139434;
    goto LABEL_7;
  }
  _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) + 24LL), 0LL);
  _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) + 16LL), 0LL);
  _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) + 152LL), 0LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 200LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 208LL) = 0LL;
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8) + 176LL), 1);
  CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::DrainAndResetQueue(*(_QWORD *)(a1 + 8));
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqx_EventWriteTransfer(v7, v6, a1, 8LL);
LABEL_10:
  CSAutoLock<1>::~CSAutoLock<1>(&v9);
  return v3;
}
