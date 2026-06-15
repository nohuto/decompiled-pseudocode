/*
 * XREFs of ?GetInputDataPointer@?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140087C90
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14000F4CC (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x14000F578 (McTemplateU0pq_EventWriteTransfer.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x14003018C (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     ?ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z @ 0x140083AE8 (-ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z.c)
 *     ?IsValidFlags@VolatileControlData_V0@@QEAA_NI@Z @ 0x140085908 (-IsValidFlags@VolatileControlData_V0@@QEAA_NI@Z.c)
 *     ?PeekNextTimestampMessage@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@Z @ 0x1400859BC (-PeekNextTimestampMessage@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlDat.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x140085ED8 (McTemplateU0p_EventWriteTransfer.c)
 */

char __fastcall CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetInputDataPointer(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // r15
  int v7; // r12d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  const char *v12; // r8
  unsigned int v13; // edx
  __int64 v14; // rbp
  char v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF

  v17 = 0LL;
  v3 = (_QWORD *)(a1 - 472);
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(
      a1,
      *(unsigned int *)(a2 + 8),
      a1 - 472,
      13,
      *(_DWORD *)(a2 + 8),
      *(_DWORD *)(a2 + 12),
      0);
  v7 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 16) = 2;
  if ( a3 )
  {
    *(_OWORD *)a3 = 0LL;
    *(_OWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 32) = 0LL;
  }
  if ( !VolatileControlData_V0::IsValidFlags(
          *(VolatileControlData_V0 **)(a1 - 384),
          *(unsigned int *)(*(_QWORD *)(a1 - 384) + 164LL)) )
  {
    if ( (byte_1400C45C1 & 4) != 0 )
      McTemplateU0p_EventWriteTransfer(v9, v8, (__int64)v3);
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 - 384) + 164LL), 0xFFFFFFFE);
    goto LABEL_9;
  }
  if ( !v7 )
  {
LABEL_9:
    _InterlockedExchange((volatile __int32 *)(a1 - 296), 1);
    v10 = *(_QWORD *)(a1 - 344);
    *(_QWORD *)a2 = v10;
    *(_DWORD *)(a2 + 12) = 2;
    goto LABEL_10;
  }
  v16 = 0;
  if ( !CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::PeekNextTimestampMessage(
          v3,
          &v17,
          &v16) )
  {
    if ( (byte_1400C45C1 & 1) != 0 )
      McTemplateU0pq_EventWriteTransfer(v11, (__int64)&EVT_GLITCH_CP_CLIENT_INPUT_NO_MESSAGES, (__int64)v3);
    v12 = "CpGlitchEvent::CLIENT_INPUT_NO_MESSAGES";
    v13 = 1;
LABEL_18:
    CCrossProcessEndpointTraceLogger::Glitch(a1 - 256, v13, (const unsigned __int16 *)v12);
    goto LABEL_9;
  }
  v14 = v17;
  if ( *(_DWORD *)(v17 + 56) != v7 )
  {
    if ( (byte_1400C45C1 & 1) != 0 )
      McTemplateU0pq_EventWriteTransfer(v11, (__int64)&EVT_GLITCH_CP_CLIENT_INPUT_SIZE_MISMATCH, (__int64)v3);
    v12 = "CpGlitchEvent::CLIENT_INPUT_SIZE_MISMATCH";
    v13 = 2;
    goto LABEL_18;
  }
  if ( a3 )
  {
    *(_OWORD *)a3 = *(_OWORD *)(v17 + 16);
    *(_OWORD *)(a3 + 16) = *(_OWORD *)(v14 + 32);
    *(_QWORD *)(a3 + 32) = *(_QWORD *)(v14 + 48);
    if ( *(_BYTE *)(a1 - 56) )
    {
      if ( (unsigned int)ConvertHostPerfCounterToPerfCounter((unsigned __int64 *)(a3 + 24)) )
        *(_BYTE *)(a1 - 56) = 0;
    }
  }
  if ( *(_DWORD *)(v14 + 8) == 2 )
  {
    *(_DWORD *)(a1 + 16) = v16 != 0 ? 4 : 0;
    goto LABEL_9;
  }
  *(_DWORD *)(a2 + 12) = 1;
  *(_QWORD *)a2 = *(_QWORD *)(a1 - 392) + *(unsigned int *)(v14 + 4);
  LOBYTE(v10) = -v16;
  *(_DWORD *)(a1 + 16) = v16 != 0 ? 4 : 0;
LABEL_10:
  if ( (byte_1400C45C1 & 4) != 0 )
    LOBYTE(v10) = McTemplateU0pqxxx_EventWriteTransfer(
                    *(unsigned int *)(a2 + 8),
                    v8,
                    (__int64)v3,
                    14,
                    *(_DWORD *)(a2 + 8),
                    0,
                    *(_DWORD *)(a2 + 12));
  return v10;
}
