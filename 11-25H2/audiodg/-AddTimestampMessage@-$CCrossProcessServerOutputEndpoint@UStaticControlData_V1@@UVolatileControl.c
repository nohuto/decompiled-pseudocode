/*
 * XREFs of ?AddTimestampMessage@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x140052400
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqxxxxx_EventWriteTransfer @ 0x14000F228 (McTemplateU0pqxxxxx_EventWriteTransfer.c)
 *     McTemplateU0pqqqx_EventWriteTransfer @ 0x14000F2E0 (McTemplateU0pqqqx_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400528A8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CanCoalesceTimestampMessages@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAAIIW4EndpointMessageID@@IPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@@Z @ 0x140052918 (-CanCoalesceTimestampMessages@-$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolati.c)
 *     ?IsValidQueueIndex@@YA_NII@Z @ 0x140053264 (-IsValidQueueIndex@@YA_NII@Z.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::AddTimestampMessage(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        float *a5,
        int a6,
        int a7)
{
  unsigned int v8; // ebx
  int v9; // r11d
  int v10; // r10d
  __int64 v11; // r14
  __int64 v12; // rsi
  unsigned int v13; // r15d
  __int32 v14; // ebp
  unsigned int v15; // eax
  unsigned int v16; // esi
  int CanCoalesceTimestampMessages; // eax
  int v18; // esi
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  double v22; // xmm1_8
  __int64 v23; // rcx
  double v24; // xmm0_8
  __int64 v25; // r8
  __int64 v26; // rdx
  double v27; // xmm0_8
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  __int32 v35; // edx
  __int64 v36; // rcx
  __int64 v38; // [rsp+30h] [rbp-C8h]
  unsigned int v39; // [rsp+50h] [rbp-A8h]
  unsigned int v40; // [rsp+54h] [rbp-A4h]
  char v41; // [rsp+58h] [rbp-A0h]
  _EVENT_TRACE_HEADER EventTrace; // [rsp+60h] [rbp-98h] BYREF
  __int64 v43; // [rsp+90h] [rbp-68h]
  int v44; // [rsp+98h] [rbp-60h]
  __int64 v45; // [rsp+A0h] [rbp-58h]
  __int64 v46; // [rsp+A8h] [rbp-50h]
  char v47; // [rsp+100h] [rbp+8h]
  unsigned int v50; // [rsp+118h] [rbp+20h]

  v50 = a4;
  v8 = 0;
  v9 = a3;
  v10 = 0;
  v47 = 0;
  v11 = *(unsigned int *)(*(_QWORD *)(a1 + 88) + 4LL);
  v12 = **(unsigned int **)(a1 + 88);
  v13 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 132LL);
  if ( (unsigned int)v11 >= v13 || (unsigned int)v12 >= v13 )
    goto LABEL_2;
  v14 = 0;
  if ( (_DWORD)v11 + 1 != v13 )
    v14 = v11 + 1;
  if ( v14 == (_DWORD)v12 )
  {
    if ( g_u32AEWMILogLevel >= 5 )
    {
      memset_0(&EventTrace, 0, 0x40uLL);
      EventTrace.UserTime = 0x20000;
      EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DROP;
      EventTrace.Size = 80;
      LOWORD(EventTrace.Version) = 1280;
      v43 = a1;
      v44 = 0;
      v45 = v11;
      v46 = v12;
      TraceEvent(g_hAEWMITraceHandle, &EventTrace);
    }
    v8 = -2005139385;
    goto LABEL_45;
  }
  if ( a7 != 1 )
  {
    v18 = a7 != 1 ? 4 : 0;
    if ( v13 > 5 )
      goto LABEL_27;
    goto LABEL_26;
  }
  if ( v13 <= 5 )
  {
    v18 = 0;
LABEL_26:
    v18 |= 8u;
    goto LABEL_27;
  }
  if ( (unsigned int)v12 > (unsigned int)v11 )
    v15 = v11 + v13 - v12;
  else
    v15 = v11 - v12;
  if ( v15 < 5 )
  {
    v18 = 2;
  }
  else
  {
    v16 = v11 - 1;
    if ( !(_DWORD)v11 )
      v16 = v13 - 1;
    CanCoalesceTimestampMessages = CCrossProcessServerOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::CanCoalesceTimestampMessages(
                                     a1,
                                     v16,
                                     a2,
                                     a3,
                                     (__int64)a5,
                                     a6);
    a4 = v50;
    v9 = a3;
    v10 = 0;
    if ( CanCoalesceTimestampMessages )
      v16 = v11;
    v47 = CanCoalesceTimestampMessages;
    if ( !CanCoalesceTimestampMessages )
      v14 = v11;
    LOBYTE(v10) = CanCoalesceTimestampMessages == 0;
    LODWORD(v11) = v16;
    v18 = CanCoalesceTimestampMessages != 0;
  }
LABEL_27:
  v19 = *(_QWORD *)a5;
  v20 = *((_QWORD *)a5 + 1);
  v21 = *((_QWORD *)a5 + 3);
  v22 = a5[8];
  if ( *(_QWORD *)a5 < v20 )
  {
    v26 = v20 - v19;
    if ( v26 < 0 )
      v27 = (double)(int)(v26 & 1 | ((unsigned __int64)v26 >> 1))
          + (double)(int)(v26 & 1 | ((unsigned __int64)v26 >> 1));
    else
      v27 = (double)(int)v26;
    v25 = (unsigned int)(int)(v27 * 10000000.0 / v22 + 0.5) + v21;
  }
  else
  {
    v23 = v19 - v20;
    if ( v23 < 0 )
      v24 = (double)(int)(v23 & 1 | ((unsigned __int64)v23 >> 1))
          + (double)(int)(v23 & 1 | ((unsigned __int64)v23 >> 1));
    else
      v24 = (double)(int)v23;
    v25 = v21 - (unsigned int)(int)(v24 * 10000000.0 / v22 + 0.5);
  }
  v28 = *(_QWORD *)(a1 + 136);
  v29 = (unsigned __int64)(unsigned int)v11 << 6;
  v41 = v25;
  if ( v10 )
  {
    *(_DWORD *)(v29 + v28 + 56) += a4;
    *(_QWORD *)(*(_QWORD *)(a1 + 136) + v29 + 32) += *((_QWORD *)a5 + 2);
  }
  else
  {
    *(_DWORD *)(v29 + v28) = a2;
    *(_DWORD *)(*(_QWORD *)(a1 + 136) + v29 + 4) = v9;
    *(_DWORD *)(v29 + *(_QWORD *)(a1 + 136) + 56) = a4;
    *(_DWORD *)(*(_QWORD *)(a1 + 136) + v29 + 8) = a6;
    v30 = *(_QWORD *)(a1 + 136);
    *(_OWORD *)(v30 + v29 + 16) = *(_OWORD *)a5;
    *(_OWORD *)(v30 + v29 + 32) = *((_OWORD *)a5 + 1);
    *(_QWORD *)(v30 + v29 + 48) = *((_QWORD *)a5 + 4);
    *(_QWORD *)(*(_QWORD *)(a1 + 136) + v29 + 40) = v25;
  }
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 176), 0) == 1 )
    *(_DWORD *)(*(_QWORD *)(a1 + 136) + v29 + 52) = 1;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 96) + 152LL) == -1 )
    goto LABEL_52;
  v39 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 12LL);
  v31 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 8LL);
  v40 = v31;
  if ( v39 >= v13 )
  {
LABEL_2:
    AudCPTraceLoggingErrorHelper("IsValidQueueIndex", 0x735u, -2147467259);
LABEL_44:
    v8 = -2005139387;
LABEL_45:
    AudCPTraceLoggingErrorHelper(
      "CCrossProcessServerOutputEndpoint<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>"
      "::AddTimestampMessage",
      0x27Eu,
      v8);
    return v8;
  }
  if ( !IsValidQueueIndex(v31, v13) )
    goto LABEL_44;
  a4 = 0LL;
  v32 = *(_QWORD *)(a1 + 152);
  if ( v39 + 1 != *(_DWORD *)(*(_QWORD *)(a1 + 96) + 132LL) )
    a4 = v39 + 1;
  v33 = *(_QWORD *)(a1 + 136);
  v34 = (unsigned __int64)v39 << 6;
  *(_OWORD *)(v34 + v32) = *(_OWORD *)(((unsigned __int64)(unsigned int)v11 << 6) + v33);
  *(_OWORD *)(v34 + v32 + 16) = *(_OWORD *)(((unsigned __int64)(unsigned int)v11 << 6) + v33 + 16);
  *(_OWORD *)(v34 + v32 + 32) = *(_OWORD *)(((unsigned __int64)(unsigned int)v11 << 6) + v33 + 32);
  LOBYTE(v25) = v41;
  *(_OWORD *)(v34 + v32 + 48) = *(_OWORD *)(((unsigned __int64)(unsigned int)v11 << 6) + v33 + 48);
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 88) + 12LL), a4);
  if ( (_DWORD)a4 == v40 )
  {
    v35 = 0;
    if ( v40 + 1 != *(_DWORD *)(*(_QWORD *)(a1 + 96) + 132LL) )
      v35 = v40 + 1;
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 88) + 8LL), v35);
  }
LABEL_52:
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 88) + 4LL), v14);
  if ( (byte_1400C45C1 & 4) != 0 )
  {
    McTemplateU0pqxxxxx_EventWriteTransfer(
      (unsigned __int64)(unsigned int)v11 << 6,
      *(int *)(((unsigned __int64)(unsigned int)v11 << 6) + *(_QWORD *)(a1 + 136) + 52),
      a1,
      a4,
      *(_DWORD *)(((unsigned __int64)(unsigned int)v11 << 6) + *(_QWORD *)(a1 + 136) + 52),
      *((_QWORD *)a5 + 2),
      v25,
      *(_QWORD *)a5,
      *((_QWORD *)a5 + 1));
    if ( (byte_1400C45C1 & 4) != 0 )
    {
      v36 = *(_QWORD *)(a1 + 136);
      v38 = *(_QWORD *)(((unsigned __int64)(unsigned int)v11 << 6) + v36 + 40);
      McTemplateU0pqqqx_EventWriteTransfer(v36, v38, a1, v18, v11, v47, v38);
    }
  }
  return v8;
}
